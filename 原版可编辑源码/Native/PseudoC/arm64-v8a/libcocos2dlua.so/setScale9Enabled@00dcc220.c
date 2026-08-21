
/* cocos2d::ui::Slider::setScale9Enabled(bool) */

void cocos2d::ui::Slider::setScale9Enabled(bool param_1)

{
  Helper *pHVar1;
  bool bVar2;
  undefined1 uVar3;
  long lVar4;
  long *plVar5;
  Rect *pRVar6;
  long *plVar7;
  byte in_w1;
  Size *in_x2;
  Rect aRStack_48 [16];
  long local_38;
  
  plVar5 = (long *)(ulong)param_1;
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  bVar2 = (bool)(in_w1 & 1);
  if ((bool)*(char *)((long)plVar5 + 0x55c) != bVar2) {
    *(bool *)((long)plVar5 + 0x55c) = bVar2;
    Scale9Sprite::setScale9Enabled((Scale9Sprite *)plVar5[0x9e],bVar2);
    Scale9Sprite::setScale9Enabled((Scale9Sprite *)plVar5[0x9f],*(bool *)((long)plVar5 + 0x55c));
    if (*(char *)((long)plVar5 + 0x55c) == '\0') {
      (**(code **)(*plVar5 + 0x600))(plVar5,*(undefined1 *)((long)plVar5 + 0x55d));
    }
    else {
      uVar3 = *(undefined1 *)((long)plVar5 + 0x387);
                    /* try { // try from 00dcc284 to 00ecc30f has its CatchHandler @ 00dccba8 */
      (**(code **)(*plVar5 + 0x600))(plVar5,0);
      *(undefined1 *)((long)plVar5 + 0x55d) = uVar3;
    }
    pHVar1 = (Helper *)(plVar5 + 0xae);
    pRVar6 = (Rect *)(**(code **)(*(long *)plVar5[0x9e] + 0x168))();
    Helper::restrictCapInsetRect(pHVar1,pRVar6,in_x2);
    Rect::operator=((Rect *)pHVar1,aRStack_48);
    if (*(char *)((long)plVar5 + 0x55c) != '\0') {
      plVar7 = (long *)plVar5[0x9e];
      in_x2 = (Size *)(ulong)*(byte *)(plVar7 + 0x83);
      (**(code **)(*plVar7 + 0x560))(plVar7,plVar5 + 0xa1,in_x2,plVar5 + 0xa0);
      Scale9Sprite::setCapInsets((Scale9Sprite *)plVar5[0x9e],pHVar1);
    }
    pHVar1 = (Helper *)(plVar5 + 0xb0);
                    /* try { // try from 00dcc310 to 00ecc333 has its CatchHandler @ 00dcb1b0 */
    pRVar6 = (Rect *)(**(code **)(*(long *)plVar5[0x9f] + 0x168))();
    Helper::restrictCapInsetRect(pHVar1,pRVar6,in_x2);
                    /* try { // try from 00dcc334 to 00ecc33f has its CatchHandler @ 00dccaf8 */
    Rect::operator=((Rect *)pHVar1,aRStack_48);
    if (*(char *)((long)plVar5 + 0x55c) != '\0') {
      plVar7 = (long *)plVar5[0x9f];
      (**(code **)(*plVar7 + 0x560))(plVar7,plVar5 + 0xa4,(char)plVar7[0x83],plVar5 + 0xa3);
      Scale9Sprite::setCapInsets((Scale9Sprite *)plVar5[0x9f],pHVar1);
    }
    *(undefined2 *)((long)plVar5 + 0x5f4) = 0x101;
  }
                    /* try { // try from 00dcc37c to 00ecc37f has its CatchHandler @ 00dcc9c0 */
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

