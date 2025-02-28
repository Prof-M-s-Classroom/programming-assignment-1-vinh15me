### First Method: addWaypointAtBeginning(T& data)
* What this method does is that it adds a waypoint which is data to the front of the linked list. It gets set as the head and points to what used to be the head. If there is nothing in the list, it gets set as the head and tail.
* This method has a time complexity of O(1) because it consistently takes the same amount no matter what you input.


### Second Method: addWaypointAtEnd(T& data)
* What this method does is that it adds a waypoint to the end of the linked list and that node gets set as the tail. If there is nothing in the list it get set as the head and tail.
* This method has a time complexity of O(1) because it consistently takes the same amount no matter what you input.

### Third Method: addWaypointAtIndex(int index, T& data)
*