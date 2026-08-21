
/* fairygui::GList::handleAlign(float, float) */

void __thiscall fairygui::GList::handleAlign(GList *this,float param_1,float param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_50;
  long local_48;
  
                    /* try { // try from 00a7af20 to 00b7af23 has its CatchHandler @ 00a7af58 */
                    /* try { // try from 00a7af24 to 00b7af6b has its CatchHandler @ 00a7aed4 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = 0;
                    /* catch() { ... } // from try @ 00a7af20 with catch @ 00a7af58 */
  fVar5 = (float)GComponent::getViewHeight((GComponent *)this);
  fVar6 = (float)GComponent::getViewWidth((GComponent *)this);
                    /* try { // try from 00a7af6c to 00b7b5f3 has its CatchHandler @ 00a7af6c
                       catch() { ... } // from try @ 00a7af6c with catch @ 00a7af6c
                       catch() { ... } // from try @ 00a7b674 with catch @ 00a7af6c */
  if (param_2 < fVar5) {
    if (*(int *)(this + 0x2fc) == 2) {
      fVar5 = fVar5 - param_2;
    }
    else {
      if (*(int *)(this + 0x2fc) != 1) goto LAB_00a7afa4;
      fVar5 = (float)(int)((fVar5 - param_2) * 0.5);
    }
    local_50 = CONCAT44(fVar5,(undefined4)local_50);
  }
LAB_00a7afa4:
  if (param_1 < fVar6) {
    if (*(int *)(this + 0x2f8) == 2) {
      fVar6 = fVar6 - param_1;
    }
    else {
      if (*(int *)(this + 0x2f8) != 1) goto LAB_00a7afdc;
      fVar6 = (float)(int)((fVar6 - param_1) * 0.5);
    }
    local_50 = CONCAT44(local_50._4_4_,fVar6);
  }
LAB_00a7afdc:
  uVar2 = cocos2d::Vec2::equals((Vec2 *)&local_50,this + 0x248);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)(this + 0x248) = local_50;
    if (*(ScrollPane **)(this + 0x230) == (ScrollPane *)0x0) {
      plVar4 = *(long **)(this + 0x228);
      fVar6 = *(float *)(this + 0x238);
      fVar7 = *(float *)(this + 0x23c);
      uVar2 = (ulong)local_50 >> 0x20;
      fVar5 = (float)local_50;
      lVar3 = (**(code **)(*(long *)plVar4[0x32] + 0x168))();
      (**(code **)(*plVar4 + 200))
                (fVar6 + fVar5,*(float *)(lVar3 + 4) - (fVar7 + (float)uVar2),plVar4);
    }
    else {
      ScrollPane::adjustMaskContainer(*(ScrollPane **)(this + 0x230));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

