
/* cocos2d::TextFieldTTF::setTextColorInternally(cocos2d::Color4B const&) */

void __thiscall cocos2d::TextFieldTTF::setTextColorInternally(TextFieldTTF *this,Color4B *param_1)

{
  long lVar1;
  Color3B aCStack_30 [8];
  long local_28;
  
                    /* try { // try from 00f55b0c to 01055b1b has its CatchHandler @ 00f55b98 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x308) == 1) {
                    /* try { // try from 00f55b38 to 01055b3f has its CatchHandler @ 00f55bf0 */
    Color3B::Color3B(aCStack_30,param_1);
                    /* try { // try from 00f55b40 to 01055c2f has its CatchHandler @ 00f55008 */
    Node::setColor((Node *)this,aCStack_30);
  }
  else {
    Label::setTextColor((Label *)this,param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

