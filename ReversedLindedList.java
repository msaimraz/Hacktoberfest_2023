class ListNode {
    int val;
    ListNode next;

    ListNode(int val) {
        this.val = val;
    }
}

public class ReverseLinkedList {
    public ListNode reverseLinkedList(ListNode head) {
        ListNode prev = null;
        ListNode current = head;

        while (current != null) {
            ListNode nextNode = current.next;  // Store the next node temporarily
            current.next = prev;              // Reverse the link
            prev = current;                   // Move prev to the current node
            current = nextNode;               // Move current to the next node
        }

        return prev;  // prev will be the new head of the reversed list
    }

    // Helper function to print the linked list
    public void printLinkedList(ListNode head) {
        ListNode current = head;
        while (current != null) {
            System.out.print(current.val + " -> ");
            current = current.next;
        }
        System.out.println("null");
    }

    public static void main(String[] args) {
        // Create a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
        ListNode head = new ListNode(1);
        ListNode current = head;
        for (int val : new int[]{2, 3, 4, 5}) {
            current.next = new ListNode(val);
            current = current.next;
        }

        ReverseLinkedList reverseLinkedList = new ReverseLinkedList();

        System.out.println("Original Linked List:");
        reverseLinkedList.printLinkedList(head);

        // Reverse the linked list
        ListNode newHead = reverseLinkedList.reverseLinkedList(head);

        System.out.println("Reversed Linked List:");
        reverseLinkedList.printLinkedList(newHead);
    }
}
