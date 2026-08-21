
/* fairygui::GButton::setSelected(bool) */

void __thiscall fairygui::GButton::setSelected(GButton *this,bool param_1)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  GButton GVar3;
  byte bVar4;
  int iVar5;
  long *plVar6;
  GController *this_00;
  byte *pbVar7;
  byte *__s1;
  GButton *pGVar8;
  
                    /* try { // try from 00a6ca5c to 00b6ca97 has its CatchHandler @ 00a6cba0 */
  if (*(int *)(this + 0x280) == 0) {
    return;
  }
  if (this[0x33c] == (GButton)param_1) {
    return;
  }
  this[0x33c] = (GButton)param_1;
  setCurrentState(this);
  if (((byte)this[0x2d8] & 1) == 0) {
    if ((byte)this[0x2d8] >> 1 == 0) goto LAB_00a6cad0;
LAB_00a6ca94:
    plVar6 = *(long **)(this + 0x288);
    if (plVar6 == (long *)0x0) goto LAB_00a6cad0;
                    /* try { // try from 00a6caa4 to 00b6caff has its CatchHandler @ 00a6cba4 */
    pGVar8 = this + 0x2c0;
    if (this[0x33c] != (GButton)0x0) {
      pGVar8 = this + 0x2d8;
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,pGVar8);
    GVar3 = this[0x308];
    if (((byte)GVar3 & 1) == 0) goto LAB_00a6cad8;
LAB_00a6cb14:
    if (*(long *)(this + 0x310) != 0) {
LAB_00a6cae0:
      plVar6 = *(long **)(this + 0x290);
      if (plVar6 != (long *)0x0) {
        pGVar8 = this + 0x2f0;
                    /* try { // try from 00a6cb00 to 00b6cb33 has its CatchHandler @ 00a6ca08 */
        if (this[0x33c] != (GButton)0x0) {
          pGVar8 = this + 0x308;
        }
        (**(code **)(*plVar6 + 0x28))(plVar6,pGVar8);
        this_00 = *(GController **)(this + 0x2a0);
        goto joined_r0x00a6cb20;
      }
    }
  }
  else {
    if (*(long *)(this + 0x2e0) != 0) goto LAB_00a6ca94;
LAB_00a6cad0:
    GVar3 = this[0x308];
    if (((byte)GVar3 & 1) != 0) goto LAB_00a6cb14;
LAB_00a6cad8:
    if ((byte)GVar3 >> 1 != 0) goto LAB_00a6cae0;
  }
  this_00 = *(GController **)(this + 0x2a0);
joined_r0x00a6cb20:
  if (((this_00 != (GController *)0x0) && (*(long *)(this + 0xa0) != 0)) &&
     (*(char *)(*(long *)(this + 0xa0) + 0x1d8) == '\0')) {
    if (this[0x33c] == (GButton)0x0) {
      if (*(int *)(this + 0x280) == 1) {
        pbVar7 = (byte *)GController::getSelectedPageId(this_00);
        GVar3 = this[0x2a8];
        bVar4 = *pbVar7;
                    /* catch() { ... } // from try @ 00a6ca5c with catch @ 00a6cba0
                       catch() { ... } // from try @ 00a6cb34 with catch @ 00a6cba0 */
                    /* catch() { ... } // from try @ 00a6caa4 with catch @ 00a6cba4
                       catch() { ... } // from try @ 00a6cb4c with catch @ 00a6cba4 */
        uVar1 = (ulong)((byte)GVar3 >> 1);
        if (((byte)GVar3 & 1) != 0) {
          uVar1 = *(ulong *)(this + 0x2b0);
        }
        uVar2 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          uVar2 = *(ulong *)(pbVar7 + 8);
        }
        __n = uVar1;
        if (uVar2 <= uVar1) {
          __n = uVar2;
        }
                    /* try { // try from 00a6cbc0 to 00b6cc2b has its CatchHandler @ 00a6cbc0
                       catch() { ... } // from try @ 00a6cbc0 with catch @ 00a6cbc0
                       catch() { ... } // from try @ 00a6cecc with catch @ 00a6cbc0
                       catch() { ... } // from try @ 00a6cf78 with catch @ 00a6cbc0 */
        if (__n != 0) {
          __s1 = *(byte **)(pbVar7 + 0x10);
          pGVar8 = *(GButton **)(this + 0x2b8);
          if ((bVar4 & 1) == 0) {
            __s1 = pbVar7 + 1;
          }
          if (((byte)GVar3 & 1) == 0) {
            pGVar8 = this + 0x2a9;
          }
          iVar5 = memcmp(__s1,pGVar8,__n);
          if (iVar5 != 0) {
            return;
          }
        }
        if (uVar2 == uVar1) {
          GController::setOppositePageId
                    (*(GController **)(this + 0x2a0),(basic_string *)(this + 0x2a8));
          return;
        }
      }
    }
    else {
                    /* try { // try from 00a6cb4c to 00b6cb5f has its CatchHandler @ 00a6cba4 */
      GController::setSelectedPageId(this_00,(basic_string *)(this + 0x2a8),true);
                    /* try { // try from 00a6cb60 to 00b6cbbf has its CatchHandler @ 00a6ca08 */
      if ((*(GController **)(this + 0x2a0))[0x61] != (GController)0x0) {
        GComponent::adjustRadioGroupDepth
                  (*(GComponent **)(this + 0xa0),(GObject *)this,*(GController **)(this + 0x2a0));
        return;
      }
    }
  }
                    /* try { // try from 00a6cb34 to 00b6cb47 has its CatchHandler @ 00a6cba0 */
  return;
}

