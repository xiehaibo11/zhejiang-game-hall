
/* fairygui::GRoot::togglePopup(fairygui::GObject*, fairygui::GObject*, fairygui::PopupDirection) */

void __thiscall
fairygui::GRoot::togglePopup(GRoot *this,long param_1,undefined8 param_2,undefined4 param_4)

{
  long lVar1;
  WeakPtr *this_00;
  WeakPtr *pWVar2;
  WeakPtr *pWVar3;
  
                    /* catch() { ... } // from try @ 00a885e0 with catch @ 00a896b0
                       catch() { ... } // from try @ 00a8946c with catch @ 00a896b0 */
                    /* catch() { ... } // from try @ 00a883f0 with catch @ 00a896b4
                       catch() { ... } // from try @ 00a8949c with catch @ 00a896b4 */
  this_00 = *(WeakPtr **)(this + 0x2b8);
                    /* catch() { ... } // from try @ 00a8878c with catch @ 00a896b8
                       catch() { ... } // from try @ 00a89484 with catch @ 00a896b8 */
  pWVar3 = *(WeakPtr **)(this + 0x2c0);
                    /* catch() { ... } // from try @ 00a88d68 with catch @ 00a896bc
                       catch() { ... } // from try @ 00a894b4 with catch @ 00a896bc */
                    /* catch() { ... } // from try @ 00a88b24 with catch @ 00a896c0
                       catch() { ... } // from try @ 00a894e4 with catch @ 00a896c0 */
                    /* catch() { ... } // from try @ 00a88f90 with catch @ 00a896c4
                       catch() { ... } // from try @ 00a894cc with catch @ 00a896c4 */
  pWVar2 = this_00;
  if (this_00 != pWVar3) {
    lVar1 = WeakPtr::ptr(this_00);
                    /* catch() { ... } // from try @ 00a891c4 with catch @ 00a896dc
                       catch() { ... } // from try @ 00a894fc with catch @ 00a896dc */
    while ((pWVar2 = this_00, lVar1 != param_1 &&
           (this_00 = this_00 + 8, pWVar2 = pWVar3, pWVar3 != this_00))) {
      lVar1 = WeakPtr::ptr(this_00);
    }
  }
  if (*(WeakPtr **)(this + 0x2c0) != pWVar2) {
    return;
  }
  showPopup(this,param_1,param_2,param_4);
  return;
}

