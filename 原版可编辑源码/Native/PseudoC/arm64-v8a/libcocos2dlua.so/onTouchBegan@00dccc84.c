
/* cocos2d::ui::Slider::onTouchBegan(cocos2d::Touch*, cocos2d::Event*) */

uint cocos2d::ui::Slider::onTouchBegan(Touch *param_1,Event *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  float local_48 [4];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = Widget::onTouchBegan(param_1,param_2);
  if (param_1[0x3b4] != (Touch)0x0) {
    Vec3::Vec3((Vec3 *)local_48);
    Widget::hitTest((Widget *)param_1,param_1 + 0x3c8,*(Camera **)(param_1 + 0x3b8),(Vec3 *)local_48
                   );
    uVar1 = *(uint *)(param_1 + 0x558);
    uVar4 = (uint)((local_48[0] / *(float *)(param_1 + 0x550)) * (float)(int)uVar1);
    if ((int)uVar4 <= (int)uVar1) {
      uVar1 = uVar4;
    }
    uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    if (*(uint *)(param_1 + 0x554) != uVar1) {
      *(uint *)(param_1 + 0x554) = uVar1;
      updateVisualSlider((Slider *)param_1);
      percentChangedEvent((Slider *)param_1,0);
    }
    percentChangedEvent((Slider *)param_1,1);
  }
                    /* catch() { ... } // from try @ 00dcb8e0 with catch @ 00dccd3c */
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00dcb900 with catch @ 00dccd40 */
                    /* catch() { ... } // from try @ 00dcb588 with catch @ 00dccd44 */
                    /* catch() { ... } // from try @ 00dcb5a8 with catch @ 00dccd48 */
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

