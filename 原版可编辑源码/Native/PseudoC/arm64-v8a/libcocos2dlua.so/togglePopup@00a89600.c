
/* fairygui::GRoot::togglePopup(fairygui::GObject*) */

void __thiscall fairygui::GRoot::togglePopup(GRoot *this,GObject *param_1)

{
  GObject *pGVar1;
  WeakPtr *this_00;
  WeakPtr *pWVar2;
  WeakPtr *pWVar3;
  
                    /* catch() { ... } // from try @ 00a88f4c with catch @ 00a89608
                       catch() { ... } // from try @ 00a895c8 with catch @ 00a89608 */
                    /* catch() { ... } // from try @ 00a885ac with catch @ 00a8960c
                       catch() { ... } // from try @ 00a895bc with catch @ 00a8960c */
                    /* catch() { ... } // from try @ 00a88930 with catch @ 00a89610
                       catch() { ... } // from try @ 00a895b0 with catch @ 00a89610 */
  this_00 = *(WeakPtr **)(this + 0x2b8);
                    /* catch() { ... } // from try @ 00a88ad4 with catch @ 00a89614
                       catch() { ... } // from try @ 00a89598 with catch @ 00a89614 */
  pWVar3 = *(WeakPtr **)(this + 0x2c0);
                    /* catch() { ... } // from try @ 00a88758 with catch @ 00a89618
                       catch() { ... } // from try @ 00a8958c with catch @ 00a89618 */
                    /* catch() { ... } // from try @ 00a883b0 with catch @ 00a8961c
                       catch() { ... } // from try @ 00a89580 with catch @ 00a8961c */
                    /* catch() { ... } // from try @ 00a88a48 with catch @ 00a89620 */
  pWVar2 = this_00;
                    /* catch() { ... } // from try @ 00a88324 with catch @ 00a89624 */
  if (this_00 != pWVar3) {
                    /* catch() { ... } // from try @ 00a893b0 with catch @ 00a89628
                       catch() { ... } // from try @ 00a895ec with catch @ 00a89628 */
                    /* catch() { ... } // from try @ 00a88ce4 with catch @ 00a8962c
                       catch() { ... } // from try @ 00a895e0 with catch @ 00a8962c */
    pGVar1 = (GObject *)WeakPtr::ptr(this_00);
                    /* catch() { ... } // from try @ 00a89130 with catch @ 00a89630
                       catch() { ... } // from try @ 00a895d4 with catch @ 00a89630 */
                    /* catch() { ... } // from try @ 00a891bc with catch @ 00a89634 */
                    /* catch() { ... } // from try @ 00a891b4 with catch @ 00a89638 */
                    /* catch() { ... } // from try @ 00a891ac with catch @ 00a8963c */
                    /* catch() { ... } // from try @ 00a88f88 with catch @ 00a89640 */
    while ((pWVar2 = this_00, pGVar1 != param_1 &&
           (this_00 = this_00 + 8, pWVar2 = pWVar3, pWVar3 != this_00))) {
      pGVar1 = (GObject *)WeakPtr::ptr(this_00);
                    /* catch() { ... } // from try @ 00a88f80 with catch @ 00a89650 */
                    /* catch() { ... } // from try @ 00a88ee4 with catch @ 00a89654 */
    }
  }
                    /* catch() { ... } // from try @ 00a88b0c with catch @ 00a89664 */
                    /* catch() { ... } // from try @ 00a88a58 with catch @ 00a89668 */
                    /* catch() { ... } // from try @ 00a888c0 with catch @ 00a8966c */
  if (*(WeakPtr **)(this + 0x2c0) != pWVar2) {
                    /* catch() { ... } // from try @ 00a886ec with catch @ 00a89670 */
                    /* catch() { ... } // from try @ 00a88540 with catch @ 00a89674 */
                    /* catch() { ... } // from try @ 00a883e8 with catch @ 00a89678 */
                    /* catch() { ... } // from try @ 00a88334 with catch @ 00a8967c */
    return;
  }
                    /* catch() { ... } // from try @ 00a8825c with catch @ 00a89680
                       catch() { ... } // from try @ 00a89430 with catch @ 00a89680 */
                    /* catch() { ... } // from try @ 00a8895c with catch @ 00a89684
                       catch() { ... } // from try @ 00a89448 with catch @ 00a89684 */
  showPopup(this,param_1,0,0);
  return;
}

