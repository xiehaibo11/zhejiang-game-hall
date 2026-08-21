
/* fairygui::GComboBox::refresh() */

void __thiscall fairygui::GComboBox::refresh(GComboBox *this)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = *(long *)(this + 0x2b0);
  if (lVar3 == *(long *)(this + 0x2b8)) {
    plVar2 = *(long **)(this + 0x290);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,&cocos2d::STD_STRING_EMPTY);
    }
                    /* try { // try from 00a6ea40 to 00b6ea8b has its CatchHandler @ 00a6ea40
                       catch() { ... } // from try @ 00a6ea40 with catch @ 00a6ea40
                       catch() { ... } // from try @ 00a6ea90 with catch @ 00a6ea40 */
    GObject::updateGear((GObject *)this,6);
    *(undefined4 *)(this + 0x2fc) = 0xffffffff;
    goto LAB_00a6ea88;
  }
  iVar4 = *(int *)(this + 0x2fc);
  iVar1 = (int)((ulong)(*(long *)(this + 0x2b8) - lVar3) >> 3) * -0x55555555;
  if (iVar4 < iVar1) {
    if (iVar4 == -1) {
      iVar4 = 0;
      goto LAB_00a6ea5c;
    }
  }
  else {
    iVar4 = iVar1 + -1;
LAB_00a6ea5c:
    *(int *)(this + 0x2fc) = iVar4;
  }
  plVar2 = *(long **)(this + 0x290);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3 + (long)iVar4 * 0x18);
  }
  GObject::updateGear((GObject *)this,6);
LAB_00a6ea88:
  lVar3 = *(long *)(this + 0x2c8);
                    /* try { // try from 00a6ea8c to 00b6ea8f has its CatchHandler @ 00a6eac4 */
                    /* try { // try from 00a6ea90 to 00b6ead7 has its CatchHandler @ 00a6ea40 */
  if (lVar3 != *(long *)(this + 0x2d0)) {
    iVar4 = *(int *)(this + 0x2fc);
    if ((iVar4 == -1) ||
       ((int)((ulong)(*(long *)(this + 0x2d0) - lVar3) >> 3) * -0x55555555 <= iVar4)) {
      (**(code **)(*(long *)this + 0x28))(this,&cocos2d::STD_STRING_EMPTY);
    }
    else {
                    /* catch() { ... } // from try @ 00a6ea8c with catch @ 00a6eac4 */
      (**(code **)(*(long *)this + 0x28))(this,lVar3 + (long)iVar4 * 0x18);
                    /* try { // try from 00a6ead8 to 00b6ef4f has its CatchHandler @ 00a6ead8
                       catch() { ... } // from try @ 00a6ead8 with catch @ 00a6ead8
                       catch() { ... } // from try @ 00a6efd0 with catch @ 00a6ead8 */
    }
  }
  this[0x2f8] = (GComboBox)0x1;
  return;
}

