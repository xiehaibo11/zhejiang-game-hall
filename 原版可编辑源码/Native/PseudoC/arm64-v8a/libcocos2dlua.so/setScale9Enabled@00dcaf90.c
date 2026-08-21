
/* cocos2d::ui::LoadingBar::setScale9Enabled(bool) */

void cocos2d::ui::LoadingBar::setScale9Enabled(bool param_1)

{
  Helper *this;
  bool bVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  byte in_w1;
  Size *in_x2;
  Size *pSVar6;
  float fVar7;
  Rect aRStack_58 [8];
  float local_50 [2];
  long local_48;
  
  plVar4 = (long *)(ulong)param_1;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  bVar1 = (bool)(in_w1 & 1);
  if ((bool)*(char *)((long)plVar4 + 0x524) == bVar1) goto LAB_00dcb0f8;
  *(bool *)((long)plVar4 + 0x524) = bVar1;
  Scale9Sprite::setScale9Enabled((Scale9Sprite *)plVar4[0xa0],bVar1);
  if (*(char *)((long)plVar4 + 0x524) == '\0') {
    (**(code **)(*plVar4 + 0x600))(plVar4,*(undefined1 *)((long)plVar4 + 0x525));
  }
  else {
    uVar2 = *(undefined1 *)((long)plVar4 + 0x387);
    (**(code **)(*plVar4 + 0x600))(plVar4,0);
    *(undefined1 *)((long)plVar4 + 0x525) = uVar2;
  }
  this = (Helper *)(plVar4 + 0xa5);
  Helper::restrictCapInsetRect(this,(Rect *)((long)plVar4 + 0x50cU),in_x2);
  Rect::operator=((Rect *)this,aRStack_58);
  if (*(char *)((long)plVar4 + 0x524) == '\0') {
    fVar7 = *(float *)((long)plVar4 + 0x4f4) / 100.0;
LAB_00dcb0b4:
    Rect::Rect(aRStack_58,(Rect *)(plVar4[0xa0] + 0x408));
    local_50[0] = fVar7 * *(float *)((long)plVar4 + 0x50c);
    plVar5 = (long *)plVar4[0xa0];
    (**(code **)(*plVar5 + 0x560))(plVar5,aRStack_58,(char)plVar5[0x83],local_50);
  }
  else {
    plVar5 = (long *)plVar4[0xa0];
    (**(code **)(*plVar5 + 0x560))
              (plVar5,(long)plVar4 + 0x514,(char)plVar5[0x83],(Rect *)((long)plVar4 + 0x50cU));
    Scale9Sprite::setCapInsets((Scale9Sprite *)plVar4[0xa0],this);
    fVar7 = *(float *)((long)plVar4 + 0x4f4) / 100.0;
    if (*(char *)((long)plVar4 + 0x524) == '\0') goto LAB_00dcb0b4;
    pSVar6 = (Size *)plVar4[0xa0];
    Size::Size((Size *)aRStack_58,fVar7 * *(float *)(plVar4 + 0x9f),*(float *)((long)plVar4 + 0x84))
    ;
    Scale9Sprite::setPreferredSize(pSVar6);
  }
  *(undefined1 *)(plVar4 + 0xa7) = 1;
LAB_00dcb0f8:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

