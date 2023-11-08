# Singly Linked List Class

## ChangeLog
v1.0.3
- Updated function parameter lists.
	 - Swapped returnPtrByPos pos/ptr order.
	 - Swapped updateDataByPos data/pos order.
	 - Swapped updateDataByPtr data/ptr order.
- Updated function names.
	- Removed "Node" from addNodeFront, addNodeBack, addNodeByPos, deleteNodeFront, and deleteNodeBack function names.
	- Removed "NodeBy" from deleteNodeByPos, and deleteNodeByPtr function names.
	- Renamed returnPtrByPos to returnPosPtr.
	- Renamed returnPosByPtr to returnPtrPos.
	- Renamed returnDataByPos to returnPosData.
	- Renamed returnDataByPtr to returnPtrData.
	- Renamed updateDataByPos to updatePosData.
	- Renamed updateDataByPtr to updatePtrData. 
	- Renamed findDataReturnPos to returnDataPos.
	- Renamed findDataReturnPtr to returnDataPtr.
	- Renamed findMinReturnPos to returnMinPos.
	- Renamed findMinReturnPtr to returnMinPtr.
	- Renamed findMaxReturnPos to returnMaxPos.
	- Renamed findMaxReturnPtr to returnMaxPtr.
	- Renamed findMiddleReturnPos to returnMidPos.
	- Renamed findMiddleReturnPtr to returnMidPtr.
	- Renamed findTailReturnPos to returnTailPos.
	- Renamed findTailReturnPtr to returnTailPtr.
	- Removed "To" from movePosToFront, movePosToBack, movePtrToFront, and movePtrToBack function names.

v1.0.2
- Moved init function to private.
- Updated addNodeFront and addNodeBack functions to call init when list is empty.

v1.0.1
- Added returnFrontData, returnBackData, findMidReturnPos, and findMidReturnPtr functions.

v1.0.0
- Initial commit.