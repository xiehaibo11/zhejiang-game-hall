
/* cocos2d::ui::LoadingBar::setCapInsets(cocos2d::Rect const&) */

void cocos2d::ui::LoadingBar::setCapInsets(Rect *param_1)

{
  long lVar1;
  long *plVar2;
  Helper *in_x1;
  Size *in_x2;
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Helper::restrictCapInsetRect(in_x1,param_1 + 0x50c,in_x2);
  Rect::operator=((Rect *)(param_1 + 0x528),aRStack_48);
  if (param_1[0x524] != '\0') {
    plVar2 = *(long **)(param_1 + 0x500);
    (**(code **)(*plVar2 + 0x560))(plVar2,param_1 + 0x514,(char)plVar2[0x83],param_1 + 0x50c);
    Scale9Sprite::setCapInsets(*(Scale9Sprite **)(param_1 + 0x500),(Rect *)(param_1 + 0x528));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00dcb1b0 to 00ecb213 has its CatchHandler @ 00dcb1b0
                       catch() { ... } // from try @ 00dcb1b0 with catch @ 00dcb1b0
                       catch() { ... } // from try @ 00dcb84c with catch @ 00dcb1b0
                       catch() { ... } // from try @ 00dcba3c with catch @ 00dcb1b0
                       catch() { ... } // from try @ 00dcbc88 with catch @ 00dcb1b0
                       catch() { ... } // from try @ 00dcbed0 with catch @ 00dcb1b0
                       catch() { ... } // from try @ 00dcc118 with catch @ 00dcb1b0
                       catch() { ... } // from try @ 00dcc310 with catch @ 00dcb1b0
                       catch() { ... } // from try @ 00dcc990 with catch @ 00dcb1b0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

