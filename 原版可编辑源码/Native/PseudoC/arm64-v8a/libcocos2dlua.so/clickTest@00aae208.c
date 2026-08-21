
/* fairygui::InputProcessor::clickTest(fairygui::TouchInfo*, fairygui::GObject*) */

GObject * __thiscall
fairygui::InputProcessor::clickTest(InputProcessor *this,TouchInfo *param_1,GObject *param_2)

{
  WeakPtr *pWVar1;
  GObject *pGVar2;
  ulong uVar3;
  WeakPtr *this_00;
  WeakPtr *this_01;
  
  if ((((*(WeakPtr **)(param_1 + 0x40) != *(WeakPtr **)(param_1 + 0x48)) &&
       (param_1[0x29] == (TouchInfo)0x0)) &&
      (ABS(*(float *)(param_1 + 8) - *(float *)(param_1 + 0x20)) <= 50.0)) &&
     (ABS(*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x24)) <= 50.0)) {
    pGVar2 = (GObject *)WeakPtr::ptr(*(WeakPtr **)(param_1 + 0x40));
    if ((pGVar2 != (GObject *)0x0) && (uVar3 = GObject::onStage(pGVar2), (uVar3 & 1) != 0)) {
      return pGVar2;
    }
    if (param_2 != (GObject *)0x0) {
      while( true ) {
        this_00 = *(WeakPtr **)(param_1 + 0x40);
        pWVar1 = *(WeakPtr **)(param_1 + 0x48);
        this_01 = this_00;
        if (this_00 != pWVar1) {
          pGVar2 = (GObject *)WeakPtr::ptr(this_00);
          while ((this_01 = this_00, pGVar2 != param_2 &&
                 (this_00 = this_00 + 8, this_01 = pWVar1, pWVar1 != this_00))) {
            pGVar2 = (GObject *)WeakPtr::ptr(this_00);
          }
        }
        if ((*(WeakPtr **)(param_1 + 0x48) != this_01) &&
           (uVar3 = WeakPtr::onStage(this_01), (uVar3 & 1) != 0)) break;
        param_2 = (GObject *)GObject::findParent(param_2);
                    /* try { // try from 00aae2a8 to 00bae33b has its CatchHandler @ 00aae2a8
                       catch() { ... } // from try @ 00aae2a8 with catch @ 00aae2a8
                       catch() { ... } // from try @ 00aae344 with catch @ 00aae2a8 */
        if (param_2 == (GObject *)0x0) {
          return (GObject *)0x0;
        }
      }
      pGVar2 = (GObject *)WeakPtr::ptr(this_01);
      return pGVar2;
    }
  }
  return (GObject *)0x0;
}

