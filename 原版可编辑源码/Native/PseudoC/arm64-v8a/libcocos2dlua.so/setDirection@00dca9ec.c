
/* cocos2d::ui::LoadingBar::setDirection(cocos2d::ui::LoadingBar::Direction) */

void __thiscall cocos2d::ui::LoadingBar::setDirection(LoadingBar *this,int param_2)

{
  undefined4 uVar1;
  LoadingBar LVar2;
  long lVar3;
  long *plVar4;
  Sprite *this_00;
  bool bVar5;
  float fVar6;
  undefined8 local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  if (*(int *)(this + 0x4f0) == param_2) goto LAB_00dcaae4;
  *(int *)(this + 0x4f0) = param_2;
  if (param_2 == 0) {
    local_30 = 0x3f00000000000000;
    (**(code **)(**(long **)(this + 0x500) + 0x148))(*(long **)(this + 0x500),&local_30);
    fVar6 = *(float *)(this + 0x84);
    plVar4 = *(long **)(this + 0x500);
    uVar1 = 0;
LAB_00dcaa98:
    local_30 = CONCAT44(fVar6 * 0.5,uVar1);
    (**(code **)(*plVar4 + 0x98))(plVar4,&local_30);
    LVar2 = this[0x524];
    if (*(int *)(this + 0x4f0) != 0) goto joined_r0x00dcaab8;
    if (LVar2 != (LoadingBar)0x0) goto LAB_00dcaae4;
    this_00 = *(Sprite **)(this + 0x500);
    bVar5 = false;
  }
  else {
    if (param_2 == 1) {
      local_30 = 0x3f0000003f800000;
      (**(code **)(**(long **)(this + 0x500) + 0x148))(*(long **)(this + 0x500),&local_30);
      fVar6 = *(float *)(this + 0x84);
      uVar1 = *(undefined4 *)(this + 0x4f8);
      plVar4 = *(long **)(this + 0x500);
      goto LAB_00dcaa98;
    }
    LVar2 = this[0x524];
joined_r0x00dcaab8:
    if (LVar2 != (LoadingBar)0x0) goto LAB_00dcaae4;
    this_00 = *(Sprite **)(this + 0x500);
    bVar5 = true;
  }
  Sprite::setFlippedX(this_00,bVar5);
LAB_00dcaae4:
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

