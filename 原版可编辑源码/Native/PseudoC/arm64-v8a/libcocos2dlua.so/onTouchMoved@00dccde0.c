
/* cocos2d::ui::Slider::onTouchMoved(cocos2d::Touch*, cocos2d::Event*) */

void cocos2d::ui::Slider::onTouchMoved(Touch *param_1,Event *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 in_s1;
  float local_48 [4];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar4 = Touch::getLocation((Touch *)param_2);
  *(undefined4 *)(param_1 + 0x3d0) = uVar4;
  *(undefined4 *)(param_1 + 0x3d4) = in_s1;
  Vec3::Vec3((Vec3 *)local_48);
  Widget::hitTest((Widget *)param_1,param_1 + 0x3d0,*(Camera **)(param_1 + 0x3b8),(Vec3 *)local_48);
  uVar1 = *(uint *)(param_1 + 0x558);
  uVar3 = (uint)((local_48[0] / *(float *)(param_1 + 0x550)) * (float)(int)uVar1);
  if ((int)uVar3 <= (int)uVar1) {
    uVar1 = uVar3;
  }
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  if (*(uint *)(param_1 + 0x554) != uVar1) {
    *(uint *)(param_1 + 0x554) = uVar1;
    updateVisualSlider((Slider *)param_1);
    percentChangedEvent((Slider *)param_1,0);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

