/*
 * main.cpp
 *
 *  Created on: Mar 22, 2021
 *      Author: amranzazai
 */
#include <cstdlib> // For rand and srand
#include <ctime> // For the time function
#include <iostream> //cout cin
#include <unistd.h> //sleep
#include "IntBinaryTree.h"
using namespace std;

int main(){
	const int MIN_VALUE = 1;
	const int MAX_VALUE = 99989;
	const int SIZE = 200000;
	int value;
	IntBinaryTree bst;
	cout << "Created Binary Search Tree" << endl;

    unsigned seed = time(0);// Get the system time.
    srand(seed);// Seed the random number generator.

    for (int i=0;i<SIZE;i++){
    	value = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;// Get a random value.
    	cout << "Inserting: " << value << endl;
    	bst.insertNode(value);
    }
    cout << "Created BST of size: " << SIZE << endl;

    string again = "";
    while (again.compare("n")!=0 && again.compare("N")!=0)
    {
    	cout << "Enter a value to find: ";
    	cin >> value;
    	if(bst.searchNode(value)){
    		cout << "Found " << value;
    	}else{
    		cout << "Not found " << value;
    	}
    	sleep(5);
    	cout << "\nSearch again?";
    	cin >> again;
    }
//bst.displayInOrder();
    return 0;
}

/*
// This program builds a binary tree with 5 nodes.
// The deleteNode function is used to remove two of them.
#include <iostream>
#include "IntBinaryTree.h"

using namespace std;

int main()
{
    IntBinaryTree tree;
    // Insert some values into the tree.
    cout << "Inserting nodes.\n";
    tree.insertNode(3);
    tree.insertNode(3);
    tree.insertNode(5);
    tree.insertNode(8);
    tree.insertNode(3);
    tree.insertNode(12);
    tree.insertNode(9);
    tree.insertNode(3);
    // Display the values.
    cout << "Here are the values in the tree:\n";
    tree.displayInOrder();
    // Delete the value 8.
    cout << "Deleting 8...\n";
    tree.remove(8);
    // Delete the value 12.
    cout << "Deleting 12...\n";
    tree.remove(12);
    // Display the values.
    cout << "Now, here are the nodes:\n";
    tree.displayInOrder();
    cout << "Deleting 3...\n";
    tree.remove(3);
    cout << "Now, here are the nodes:\n";
    tree.displayInOrder();
    cout << "Deleting 3...\n";
    tree.remove(3);
    cout << "Now, here are the nodes:\n";
    tree.displayInOrder();
    return 0;
}
*/
