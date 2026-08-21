
/* fairygui::ScrollPane::cancelDragging() */

void __thiscall fairygui::ScrollPane::cancelDragging(ScrollPane *this)

{
                    /* catch() { ... } // from try @ 00a94574 with catch @ 00a947f4 */
                    /* catch() { ... } // from try @ 00a94564 with catch @ 00a947f8 */
                    /* catch() { ... } // from try @ 00a94528 with catch @ 00a947fc
                       catch() { ... } // from try @ 00a945a0 with catch @ 00a947fc
                       catch() { ... } // from try @ 00a94780 with catch @ 00a947fc */
  if (_draggingPane == this) {
    _draggingPane = (ScrollPane *)0x0;
  }
                    /* catch() { ... } // from try @ 00a945c4 with catch @ 00a9480c
                       catch() { ... } // from try @ 00a947a4 with catch @ 00a9480c */
  _gestureFlag = 0;
                    /* catch() { ... } // from try @ 00a94660 with catch @ 00a94810
                       catch() { ... } // from try @ 00a947bc with catch @ 00a94810 */
  this[0xb8] = (ScrollPane)0x0;
  return;
}

