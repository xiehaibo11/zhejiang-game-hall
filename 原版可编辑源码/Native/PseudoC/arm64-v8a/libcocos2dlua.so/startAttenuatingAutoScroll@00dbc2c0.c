
/* cocos2d::ui::ScrollView::startAttenuatingAutoScroll(cocos2d::Vec2 const&, cocos2d::Vec2 const&)
    */

void __thiscall
cocos2d::ui::ScrollView::startAttenuatingAutoScroll(ScrollView *this,Vec2 *param_1,Vec2 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  fVar4 = (float)Vec2::length((Vec2 *)param_2);
  local_50 = 0;
  if (*(int *)(this + 0x7c0) != 1) {
    local_50 = *(undefined4 *)param_1;
  }
  uStack_4c = 0;
  if (*(int *)(this + 0x7c0) != 2) {
    uStack_4c = *(undefined4 *)(param_1 + 4);
  }
  this[0x81d] = (ScrollView)0x1;
  this[0x81e] = (ScrollView)0x1;
  fVar7 = 5.0;
  *(ulong *)(this + 0x828) = CONCAT44(uStack_4c,local_50);
  puVar2 = (undefined8 *)(**(code **)(**(long **)(this + 0x7b8) + 0xb0))();
  uVar3 = *puVar2;
  *(float *)(this + 0x830) = SQRT(SQRT(fVar4 / 5.0));
  *(undefined4 *)(this + 0x834) = 0;
  this[0x839] = (ScrollView)0x0;
  *(undefined8 *)(this + 0x820) = uVar3;
  *(undefined8 *)(this + 0x83c) = 0;
  fVar5 = (float)(**(code **)(*(long *)this + 0x7b8))(this);
  fVar4 = fVar7;
  if ((0.0001 < ABS(fVar5)) || (fVar4 = 0.0001, 0.0001 < ABS(fVar7))) {
    this[0x838] = (ScrollView)0x1;
    fVar6 = (float)(**(code **)(*(long *)this + 0x7b8))(this,&local_50);
    if ((0.0 < fVar5 * fVar6) || (0.0 < fVar7 * fVar4)) {
      this[0x839] = (ScrollView)0x1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

