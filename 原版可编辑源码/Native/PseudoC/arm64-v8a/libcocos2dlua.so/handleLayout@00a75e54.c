
/* fairygui::GGroup::handleLayout() */

void __thiscall fairygui::GGroup::handleLayout(GGroup *this)

{
  int iVar1;
  GObject *pGVar2;
  ulong uVar3;
  int iVar4;
  float fVar5;
  
                    /* try { // try from 00a75e58 to 00b75ea3 has its CatchHandler @ 00a75e58
                       catch() { ... } // from try @ 00a75e58 with catch @ 00a75e58
                       catch() { ... } // from try @ 00a75ea8 with catch @ 00a75e58 */
  *(uint *)(this + 0x1d8) = *(uint *)(this + 0x1d8) | 1;
  if (*(int *)(this + 0x1dc) == 2) {
    fVar5 = *(float *)(this + 0xc4);
    iVar1 = GComponent::numChildren(*(GComponent **)(this + 0xa0));
    if (0 < iVar1) {
      iVar4 = 0;
      do {
        pGVar2 = (GObject *)GComponent::getChildAt(*(GComponent **)(this + 0xa0),iVar4);
        if ((*(GGroup **)(pGVar2 + 0x128) == this) &&
           ((this[0x1e8] == (GGroup)0x0 ||
            (uVar3 = GObject::internalVisible3(pGVar2), (uVar3 & 1) != 0)))) {
          GObject::setYMin(pGVar2,fVar5);
          if (*(float *)(pGVar2 + 0xcc) != 0.0) {
            fVar5 = fVar5 + *(float *)(pGVar2 + 0xcc) + (float)*(int *)(this + 0x1e0);
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
    }
  }
  else if (*(int *)(this + 0x1dc) == 1) {
    fVar5 = *(float *)(this + 0xc0);
    iVar1 = GComponent::numChildren(*(GComponent **)(this + 0xa0));
    if (0 < iVar1) {
                    /* try { // try from 00a75ea4 to 00b75ea7 has its CatchHandler @ 00a75edc */
      iVar4 = 0;
                    /* try { // try from 00a75ea8 to 00b75eef has its CatchHandler @ 00a75e58 */
      do {
        pGVar2 = (GObject *)GComponent::getChildAt(*(GComponent **)(this + 0xa0),iVar4);
                    /* catch() { ... } // from try @ 00a75ea4 with catch @ 00a75edc */
        if ((*(GGroup **)(pGVar2 + 0x128) == this) &&
           ((this[0x1e8] == (GGroup)0x0 ||
            (uVar3 = GObject::internalVisible3(pGVar2), (uVar3 & 1) != 0)))) {
                    /* try { // try from 00a75ef0 to 00b762ef has its CatchHandler @ 00a75ef0
                       catch() { ... } // from try @ 00a75ef0 with catch @ 00a75ef0
                       catch() { ... } // from try @ 00a76370 with catch @ 00a75ef0 */
          GObject::setXMin(pGVar2,fVar5);
          if (*(float *)(pGVar2 + 200) != 0.0) {
            fVar5 = fVar5 + *(float *)(pGVar2 + 200) + (float)*(int *)(this + 0x1e4);
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
    }
  }
  *(uint *)(this + 0x1d8) = *(uint *)(this + 0x1d8) & 2;
  return;
}

