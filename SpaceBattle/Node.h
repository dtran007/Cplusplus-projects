/* -----------------------------------------------------------------------------
 *  *
 *  * File Name:  Node.h
 *  * Author: Danny Tran
 *  * Description:  Node.h file for implementing Node class
 *  * Date: 17 Feb 2017
 *  *
 *  ---------------------------------------------------------------------------- */

#ifndef NODE_H
#define NODE_H

template<typename T>
class Node
{
	public:

		/** @pre None.
		 *   @post Node with value entered is created.
		 *   @return None.
		 */
		Node(T value);

		/** @pre None.
		 *   @post Sets Value to Node
		 *   @return None.
		 */
		void setValue(T value);

		/** @pre None.
		 *   @post None.
		 *   @return value of Node
		 */
		T& getValue();

		/** @pre None.
		 *   @post None.
		 *   @return pointer to Next Node.
		 */
		Node<T>* getNext() const;

		/** @pre None.
		 *   @post Pointer to next Node.
		 *   @return None.
		 */
		void setNext(Node<T>* nextNodePtr);


	private:

		/** @pre None.
		 *   @post Templated Type Value for Node
		 *   @return None.
		 */
		T m_value;

		/** @pre None.
		 *   @post Node pointer to Next Node
		 *   @return None.
		 */
		Node<T>* m_next;

};

#include "Node.hpp"
#endif
