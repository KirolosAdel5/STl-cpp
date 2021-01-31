/*All Vector Functions :
                            ####### Iterators ########
    1-begin() – Returns an iterator pointing to the first element in the vector
    2-end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
    3-rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
    4-rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
    5-cbegin() – Returns a constant iterator pointing to the first element in the vector.
    6-cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
    7-crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
    8-crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
                           
                            ####### Capacity ########

    1-size() – Returns the number of elements in the vector.
    2-max_size() – Returns the maximum number of elements that the vector can hold.
    3-capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
    4-resize(n) – Resizes the container so that it contains ‘n’ elements.
    5-empty() – Returns whether the container is empty.
    6-shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
    7-reserve() – Requests that the vector capacity be at least enough to contain n elements.
                           
                            ####### Element access ########

reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
    1-at(g) – Returns a reference to the element at position ‘g’ in the vector
    2-front() – Returns a reference to the first element in the vector
    3-back() – Returns a reference to the last element in the vector
    4-data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
                            
                            ####### Modifiers ########
    1-assign() – It assigns new value to the vector elements by replacing old ones
    2-push_back() – It push the elements into a vector from the back
    3-pop_back() – It is used to pop or remove elements from a vector from the back.
    4-insert() – It inserts new elements before the element at the specified position
    5-erase() – It is used to remove elements from a container from the specified position or range.
    6-swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
    7-clear() – It is used to remove all the elements of the vector container
    8-emplace() – It extends the container by inserting new element at position
    9-emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector
*********************/
#include <iostream> 
#include <vector> 
  
using namespace std; 
  
int main() 
{ 
    vector<int> g1; 
  
    for (int i = 1; i <= 5; i++) 
        g1.push_back(i); 
  
    cout << "Output of begin and end: "; 
    for (auto i = g1.begin(); i != g1.end(); ++i) 
        cout << *i << " "; 
	/*Output of begin and end: 1 2 3 4 5 */
    cout << "\nOutput of cbegin and cend: "; 
    for (auto i = g1.cbegin(); i != g1.cend(); ++i) 
        cout << *i << " "; 
  	/*Output of cbegin and cend: 1 2 3 4 5 */

    cout << "\nOutput of rbegin and rend: "; 
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir) 
        cout << *ir << " "; 
    /*Output of rbegin and rend: 5 4 3 2 1 */

    cout << "\nOutput of crbegin and crend : "; 
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir) 
        cout << *ir << " "; 
      /*Output of crbegin and crend : 5 4 3 2 1 */

    return 0; 
} 
