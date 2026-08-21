
/* fairygui::GComboBox::setSelectedIndex(int) */

void __thiscall fairygui::GComboBox::setSelectedIndex(GComboBox *this,int param_1)

{
  int iVar1;
  int iVar2;
  GController *pGVar3;
  long *plVar4;
  long lVar5;
  
  if (*(int *)(this + 0x2fc) == param_1) {
    return;
  }
  *(int *)(this + 0x2fc) = param_1;
  if ((param_1 < 0) ||
     ((int)((ulong)(*(long *)(this + 0x2b8) - *(long *)(this + 0x2b0)) >> 3) * -0x55555555 <=
      param_1)) {
    plVar4 = *(long **)(this + 0x290);
    if (plVar4 != (long *)0x0) {
                    /* try { // try from 00a6e8f0 to 00b6e8f7 has its CatchHandler @ 00a6e90c */
                    /* try { // try from 00a6e8f8 to 00b6e9bf has its CatchHandler @ 00a6e414 */
      (**(code **)(*plVar4 + 0x18))(plVar4,&cocos2d::STD_STRING_EMPTY);
    }
    GObject::updateGear((GObject *)this,6);
                    /* catch() { ... } // from try @ 00a6e514 with catch @ 00a6e90c
                       catch() { ... } // from try @ 00a6e8f0 with catch @ 00a6e90c */
                    /* catch() { ... } // from try @ 00a6e4f4 with catch @ 00a6e910 */
                    /* catch() { ... } // from try @ 00a6e658 with catch @ 00a6e914
                       catch() { ... } // from try @ 00a6e8d8 with catch @ 00a6e914 */
                    /* catch() { ... } // from try @ 00a6e5d4 with catch @ 00a6e918
                       catch() { ... } // from try @ 00a6e8c0 with catch @ 00a6e918 */
    if (*(long *)(this + 0x2c8) != *(long *)(this + 0x2d0)) {
                    /* catch() { ... } // from try @ 00a6e63c with catch @ 00a6e91c */
                    /* catch() { ... } // from try @ 00a6e5a0 with catch @ 00a6e920 */
                    /* catch() { ... } // from try @ 00a6e590 with catch @ 00a6e924 */
                    /* catch() { ... } // from try @ 00a6e4d8 with catch @ 00a6e928 */
                    /* catch() { ... } // from try @ 00a6e708 with catch @ 00a6e92c
                       catch() { ... } // from try @ 00a6e7ec with catch @ 00a6e92c */
                    /* catch() { ... } // from try @ 00a6e6d4 with catch @ 00a6e930 */
      (**(code **)(*(long *)this + 0x28))(this,&cocos2d::STD_STRING_EMPTY);
    }
  }
  else {
    (**(code **)(*(long *)this + 0x18))(this,*(long *)(this + 0x2b0) + (long)param_1 * 0x18);
    lVar5 = *(long *)(this + 0x2c8);
    if (lVar5 != *(long *)(this + 0x2d0)) {
      iVar1 = *(int *)(this + 0x2fc);
      if ((iVar1 != -1) &&
         (iVar1 < (int)((ulong)(*(long *)(this + 0x2d0) - lVar5) >> 3) * -0x55555555)) {
                    /* try { // try from 00a6e8c0 to 00b6e8c7 has its CatchHandler @ 00a6e918 */
        (**(code **)(*(long *)this + 0x28))(this,lVar5 + (long)iVar1 * 0x18);
                    /* try { // try from 00a6e8d8 to 00b6e8df has its CatchHandler @ 00a6e914 */
        pGVar3 = *(GController **)(this + 0x2a8);
        goto joined_r0x00a6e938;
      }
    }
  }
  pGVar3 = *(GController **)(this + 0x2a8);
joined_r0x00a6e938:
                    /* catch() { ... } // from try @ 00a6e6c4 with catch @ 00a6e950 */
  if (((pGVar3 != (GController *)0x0) && (pGVar3[0x60] == (GController)0x0)) &&
     (iVar1 = *(int *)(this + 0x2fc), iVar2 = GController::getPageCount(pGVar3), iVar1 < iVar2)) {
                    /* catch() { ... } // from try @ 00a6e6b4 with catch @ 00a6e954 */
    pGVar3 = *(GController **)(this + 0x2a8);
                    /* catch() { ... } // from try @ 00a6e618 with catch @ 00a6e958 */
                    /* catch() { ... } // from try @ 00a6e574 with catch @ 00a6e95c */
    *(undefined8 *)(this + 0x2a8) = 0;
    GController::setSelectedIndex(pGVar3,*(int *)(this + 0x2fc),true);
    *(GController **)(this + 0x2a8) = pGVar3;
  }
  return;
}

