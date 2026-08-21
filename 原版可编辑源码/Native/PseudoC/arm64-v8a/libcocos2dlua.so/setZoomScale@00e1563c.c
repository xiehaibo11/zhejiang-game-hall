
/* cocos2d::extension::ScrollView::setZoomScale(float) */

void __thiscall cocos2d::extension::ScrollView::setZoomScale(ScrollView *this,float param_1)

{
  long lVar1;
  float fVar2;
  long *plVar3;
  float *pfVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 in_s1;
  float fVar7;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar5 = (float)(**(code **)(**(long **)(this + 0x340) + 0x88))();
  if (fVar5 != param_1) {
    local_40 = 0;
                    /* try { // try from 00e15684 to 00f1568b has its CatchHandler @ 00e158c0 */
    if (*(float *)(this + 0x370) == 0.0) {
      in_s1 = 0x3f000000;
                    /* try { // try from 00e1569c to 00f156a3 has its CatchHandler @ 00e158a8 */
      local_48 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x390) >> 0x20) * 0.5,
                          (float)*(undefined8 *)(this + 0x390) * 0.5);
      uVar6 = Node::convertToWorldSpace((Node *)this,(Vec2 *)&local_48);
      local_48 = CONCAT44(in_s1,uVar6);
    }
    else {
      local_48 = *(undefined8 *)(this + 0x368);
    }
    uVar6 = Node::convertToNodeSpace(*(Node **)(this + 0x340),(Vec2 *)&local_48);
    local_40 = CONCAT44(in_s1,uVar6);
    fVar7 = *(float *)(this + 0x398);
    fVar5 = *(float *)(this + 0x39c);
    if (param_1 <= *(float *)(this + 0x39c)) {
      fVar5 = param_1;
    }
    fVar2 = fVar7;
    if (fVar7 <= fVar5) {
      fVar2 = fVar5;
    }
    (**(code **)(**(long **)(this + 0x340) + 0x80))(fVar2);
    fVar5 = (float)Node::convertToWorldSpace(*(Node **)(this + 0x340),(Vec2 *)&local_40);
    plVar3 = *(long **)(this + 0x328);
    fVar5 = (float)local_48 - fVar5;
    fVar7 = local_48._4_4_ - fVar7;
    if (plVar3 != (long *)0x0) {
                    /* try { // try from 00e15718 to 00f15727 has its CatchHandler @ 00e15884 */
      (**(code **)(*plVar3 + 0x18))(plVar3,this);
    }
    pfVar4 = (float *)(**(code **)(**(long **)(this + 0x340) + 0xb0))();
    setContentOffset(fVar5 + *pfVar4,fVar7 + pfVar4[1],this,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

