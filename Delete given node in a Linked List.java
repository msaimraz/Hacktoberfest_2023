class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

class LinkedList {
    Node head;

    LinkedList() {
        this.head = null;
    }

    // Function to insert a node at the end
    void insert(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
            return;
        }

        Node temp = head;
        while (temp.next != null)
            temp = temp.next;

        temp.next = newNode;
    }

    // Function to delete a given node
    void deleteNode(Node nodeToDelete) {
        if (nodeToDelete == null)
            return;

        // Copy the data of the next node to the given node
        if (nodeToDelete.next != null) {
            nodeToDelete.data = nodeToDelete.next.data;
            nodeToDelete.next = nodeToDelete.next.next;
        } else {
            // If the given node is the last node, simply remove it
            Node current = head;
            while (current != null && current.next != nodeToDelete)
                current = current.next;

            if (current != null)
                current.next = null;
        }
    }

    // Function to print the linked list
    void printList() {
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data + " -> ");
            temp = temp.next;
        }
        System.out.println("null");
    }
}

public class Main {
    public static void main(String[] args) {
        LinkedList list = new LinkedList();

        // Insert some nodes
        list.insert(1);
        list.insert(2);
        list.insert(3);
        list.insert(4);

        // Print the original list
        System.out.print("Original List: ");
        list.printList();

        // Get a reference to the node to be deleted (e.g., node with data 2)
        Node nodeToDelete = list.head.next;

        // Delete the node
        list.deleteNode(nodeToDelete);

        // Print the list after deletion
        System.out.print("List after deletion: ");
        list.printList();
    }
}
