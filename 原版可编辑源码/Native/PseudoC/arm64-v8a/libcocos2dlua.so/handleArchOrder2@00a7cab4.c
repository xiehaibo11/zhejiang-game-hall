
/* fairygui::GList::handleArchOrder2() */

void __thiscall fairygui::GList::handleArchOrder2(GList *this)

{
  int iVar1;
  long lVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (*(int *)(this + 0x250) == 2) {
    fVar8 = *(float *)(*(long *)(this + 0x230) + 0x5c);
    fVar6 = (float)GComponent::getViewWidth((GComponent *)this);
                    /* try { // try from 00a7caf0 to 00b7cb0f has its CatchHandler @ 00a7cba8 */
    iVar1 = GComponent::numChildren((GComponent *)this);
    if (iVar1 < 1) {
      iVar4 = 0;
    }
    else {
      iVar5 = 0;
      iVar4 = 0;
      fVar3 = 3.4028235e+38;
      do {
        lVar2 = GComponent::getChildAt((GComponent *)this,iVar5);
                    /* try { // try from 00a7cb48 to 00b7cb5b has its CatchHandler @ 00a7cba4 */
                    /* try { // try from 00a7cb5c to 00b7cbc3 has its CatchHandler @ 00a7ca68 */
        if (((this[0x2e1] == (GList)0x0) || (*(char *)(lVar2 + 0xf4) != '\0')) &&
           (fVar7 = ABS(((fVar8 + fVar6 * 0.5) - *(float *)(lVar2 + 0xc0)) +
                        *(float *)(lVar2 + 200) * -0.5), fVar7 < fVar3)) {
          iVar4 = iVar5;
          fVar3 = fVar7;
        }
        iVar5 = iVar5 + 1;
      } while (iVar1 != iVar5);
    }
                    /* catch() { ... } // from try @ 00a7cb48 with catch @ 00a7cba4 */
                    /* catch() { ... } // from try @ 00a7caf0 with catch @ 00a7cba8 */
    GComponent::setApexIndex((GComponent *)this,iVar4);
    return;
  }
  return;
}

