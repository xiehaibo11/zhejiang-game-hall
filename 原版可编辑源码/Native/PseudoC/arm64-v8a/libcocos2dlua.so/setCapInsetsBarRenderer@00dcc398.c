
/* cocos2d::ui::Slider::setCapInsetsBarRenderer(cocos2d::Rect const&) */

void cocos2d::ui::Slider::setCapInsetsBarRenderer(Rect *param_1)

{
  long lVar1;
  Rect *pRVar2;
  long *plVar3;
  Helper *in_x1;
  Size *in_x2;
  Rect aRStack_48 [16];
  long local_38;
  
                    /* try { // try from 00dcc3a0 to 00ecc3c3 has its CatchHandler @ 00dcc9e0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pRVar2 = (Rect *)(**(code **)(**(long **)(param_1 + 0x4f0) + 0x168))();
                    /* try { // try from 00dcc3dc to 00ecc3df has its CatchHandler @ 00dcc9c4 */
  Helper::restrictCapInsetRect(in_x1,pRVar2,in_x2);
  Rect::operator=((Rect *)(param_1 + 0x570),aRStack_48);
  if (param_1[0x55c] != '\0') {
    plVar3 = *(long **)(param_1 + 0x4f0);
                    /* try { // try from 00dcc400 to 00ecc423 has its CatchHandler @ 00dcc9dc */
    (**(code **)(*plVar3 + 0x560))(plVar3,param_1 + 0x508,(char)plVar3[0x83],param_1 + 0x500);
    Scale9Sprite::setCapInsets(*(Scale9Sprite **)(param_1 + 0x4f0),(Rect *)(param_1 + 0x570));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00dcc43c to 00ecc43f has its CatchHandler @ 00dcc9b8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

