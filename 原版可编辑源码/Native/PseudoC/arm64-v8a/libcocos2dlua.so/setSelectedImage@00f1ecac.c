
/* cocos2d::MenuItemSprite::setSelectedImage(cocos2d::Node*) */

void __thiscall cocos2d::MenuItemSprite::setSelectedImage(MenuItemSprite *this,Node *param_1)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(Node **)(this + 0x330) != param_1) {
    if (param_1 != (Node *)0x0) {
      (**(code **)(*(long *)this + 0x208))(this,param_1);
      local_40 = 0;
      (**(code **)(*(long *)param_1 + 0x148))(param_1,&local_40);
    }
    if (*(long *)(this + 0x338) != 0) {
                    /* try { // try from 00f1ed28 to 0101ed2f has its CatchHandler @ 00f1eea4 */
      (**(code **)(*(long *)this + 0x280))(this,*(long *)(this + 0x338),1);
    }
    *(Node **)(this + 0x338) = param_1;
    (**(code **)(*(long *)this + 0x560))(this);
  }
                    /* try { // try from 00f1ed44 to 0101ed4f has its CatchHandler @ 00f1ee90 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00f1ed58 to 0101ed77 has its CatchHandler @ 00f1ee94 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

