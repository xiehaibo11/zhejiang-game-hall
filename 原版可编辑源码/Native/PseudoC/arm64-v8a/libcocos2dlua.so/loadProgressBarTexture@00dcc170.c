
/* cocos2d::ui::Slider::loadProgressBarTexture(cocos2d::SpriteFrame*) */

void cocos2d::ui::Slider::loadProgressBarTexture(SpriteFrame *param_1)

{
  long lVar1;
  Size *pSVar2;
  undefined8 local_30;
  long local_28;
  
                    /* try { // try from 00dcc170 to 00ecc17b has its CatchHandler @ 00dcca24 */
                    /* try { // try from 00dcc17c to 00ecc187 has its CatchHandler @ 00dcca14 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00dcc19c to 00ecc1b7 has its CatchHandler @ 00dccc08 */
  (**(code **)(**(long **)(param_1 + 0x4f8) + 0x598))();
  Widget::updateChildrenDisplayedRGBA((Widget *)param_1);
  local_30 = 0x3f00000000000000;
                    /* try { // try from 00dcc1bc to 00ecc1cb has its CatchHandler @ 00dccc04 */
  (**(code **)(**(long **)(param_1 + 0x4f8) + 0x148))(*(long **)(param_1 + 0x4f8),&local_30);
  pSVar2 = (Size *)(**(code **)(**(long **)(param_1 + 0x4f8) + 0x168))();
  Size::operator=((Size *)(param_1 + 0x518),pSVar2);
  Rect::operator=((Rect *)(param_1 + 0x520),(Rect *)(*(long *)(param_1 + 0x4f8) + 0x408));
  param_1[0x5f5] = (SpriteFrame)0x1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

