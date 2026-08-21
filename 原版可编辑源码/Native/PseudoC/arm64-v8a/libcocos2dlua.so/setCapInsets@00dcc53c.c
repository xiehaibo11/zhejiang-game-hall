
/* cocos2d::ui::Slider::setCapInsets(cocos2d::Rect const&) */

void cocos2d::ui::Slider::setCapInsets(Rect *param_1)

{
  long lVar1;
  Rect *pRVar2;
  long *plVar3;
  Helper *in_x1;
  Size *in_x2;
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pRVar2 = (Rect *)(**(code **)(**(long **)(param_1 + 0x4f0) + 0x168))();
  Helper::restrictCapInsetRect(in_x1,pRVar2,in_x2);
  Rect::operator=((Rect *)(param_1 + 0x570),aRStack_48);
  if (param_1[0x55c] != '\0') {
    plVar3 = *(long **)(param_1 + 0x4f0);
    in_x2 = (Size *)(ulong)*(byte *)(plVar3 + 0x83);
    (**(code **)(*plVar3 + 0x560))(plVar3,param_1 + 0x508,in_x2,param_1 + 0x500);
    Scale9Sprite::setCapInsets(*(Scale9Sprite **)(param_1 + 0x4f0),(Rect *)(param_1 + 0x570));
  }
  pRVar2 = (Rect *)(**(code **)(**(long **)(param_1 + 0x4f8) + 0x168))();
  Helper::restrictCapInsetRect(in_x1,pRVar2,in_x2);
  Rect::operator=((Rect *)(param_1 + 0x580),aRStack_48);
  if (param_1[0x55c] != '\0') {
    plVar3 = *(long **)(param_1 + 0x4f8);
    (**(code **)(*plVar3 + 0x560))(plVar3,param_1 + 0x520,(char)plVar3[0x83],param_1 + 0x518);
    Scale9Sprite::setCapInsets(*(Scale9Sprite **)(param_1 + 0x4f8),(Rect *)(param_1 + 0x580));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

