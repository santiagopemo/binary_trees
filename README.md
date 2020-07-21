# 0x1D. C - Binary trees
## Resources :books:
### Read or watch:

* [Binary tree (note the first line: Not to be confused with B-tree.)]()
* [Data Structure and Algorithms - Tree]()
* [Tree Traversal]()
* [Binary Search Tree]()
* [Data structures: Binary Tree]()
## Learning Objectives :bulb:
* At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
* What is a binary tree
* What is the difference between a binary tree and a Binary Search Tree
* What is the possible gain in terms of time complexity compared to linked lists
* What are the depth, the height, the size of a binary tree
* What are the different traversal methods to go through a binary tree
* What is a complete, a full, a perfect, a balanced binary tree
## Requirements :white_check_mark:
### General
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All your files should end with a new line
* A README.md file, at the root of the folder of the project, is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are allowed to use the standard library
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called binary_trees.h
* Don’t forget to push your header file
* All your header files should be include guarded

## Tasks
### Mandatory :page_with_curl:
- [x] **[0. New node](./0-binary_tree_node.c)** - Description
- [x] **[1. Insert left](./1-binary_tree_insert_left.c)** - If parent already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node
- [x] **[2. Insert right](./2-binary_tree_insert_right.c)** - If parent already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node
- [x] **[3. Delete](./3-binary_tree_delete.c)** - ==13264== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al
- [x] **[4. Is leaf](./4-binary_tree_is_leaf.c)** - Description
- [x] **[5. Is root](./5-binary_tree_is_root.c)** - Description
- [x] **[6. Pre-order traversal](./6-binary_tree_preorder.c)** - And func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function
- [x] **[7. In-order traversal](./7-binary_tree_inorder.c)** - And func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function
- [x] **[8. Post-order traversal](./8-binary_tree_postorder.c)** - And func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function
- [x] **[9. Height](./9-binary_tree_height.c)** - Where tree is a pointer to the root node of the tree to measure the height
- [x] **[10. Depth](./10-binary_tree_depth.c)** - Description
- [x] **[11. Size](./11-binary_tree_size.c)** - Description
- [x] **[12. Leaves](./12-binary_tree_leaves.c)** - Description
- [x] **[13. Nodes](./13-binary_tree_nodes.c)** - Description
- [x] **[14. Balance factor](./14-binary_tree_balance.c)** - Description
- [x] **[15. Is full](./15-binary_tree_is_full.c)** - Description
- [x] **[16. Is perfect](./16-binary_tree_is_perfect.c)** - Description
- [x] **[17. Sibling](./17-binary_tree_sibling.c)** - Description
- [x] **[18. Uncle](./18-binary_tree_uncle.c)** - Description
### Advance :muscle:
- [x] **[19. Lowest common ancestor](./100-binary_trees_ancestor.c)** - Description
- [x] **[20. Level-order traversal](./101-binary_tree_levelorder.c)** - And func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function
- [x] **[21. Is complete](./102-binary_tree_is_complete.c)** - Description
- [x] **[22. Rotate left](./103-binary_tree_rotate_left.c)** - Description
- [x] **[23. Rotate right](./104-binary_tree_rotate_right.c)** - .Description
- [x] **[24. Is BST](./110-binary_tree_is_bst.c)** - Properties of a Binary Search Tree
- [x] **[25. BST - Insert](./111-bst_insert.c)** - If the address stored in tree is NULL, the created node must become the root node
- [x] **[26. BST - Array to BST](./112-array_to_bst.c)** - Description
- [x] **[27. BST - Search](./113-bst_search.c)** - Description
- [x] **[28. BST - Remove](./114-bst_remove.c)** - ==14720== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al
- [x] **[29. Big O #BST](./115-O)** - What are the average time complexities of those operations on a Binary Search Tree (one answer per line)
- [x] **[30. Is AVL](./120-binary_tree_is_avl.c)** - Properties of an AVL Tree
- [x] **[31. AVL - Insert](./121-avl_insert.c)** - If the address stored in tree is NULL, the created node must become the root node
- [x] **[32. AVL - Array to AVL](./122-array_to_avl.c)** - Description
- [x] **[33. AVL - Remove](./123-avl_remove.c)** -Description
- [x] **[34. AVL - From sorted array](./124-sorted_array_to_avl.c)** - Description
- [x] **[35. Big O #AVL Tree](./125-O)** - What are the average time complexities of those operations on an AVL Tree (one answer per line)
- [x] **[36. Is Binary heap](./130-binary_tree_is_heap.c)** - Properties of a Max Binary Heap
- [x] **[37. Heap - Insert](./131-heap_insert.c)** - If the address stored in root is NULL, the created node must become the root node
- [x] **[38. Heap - Array to Binary Heap](./132-array_to_heap.c)** - Description
- [x] **[39. Heap - Extract](./133-heap_extract.c)** - DescriptionSeward et al
- [x] **[40. Heap - Sort](./134-heap_to_sorted_array.c)** - Description
- [x] **[41. Big O #Binary Heap](./135-O)** - What are the average time complexities of those operations on a Binary Heap (one answer per line)
## Author :pencil:
**Santiago Peña Mosquera** - twitter [@Santiag11470161](https://twitter.com/Santiag11470161) - LinkedIn [Santiago Peña Mosquera](https://www.linkedin.com/in/santiago-pe%C3%B1a-mosquera-abaa20196/)
