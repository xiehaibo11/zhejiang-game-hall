
/* cocos2d::MenuItemSprite::setDisabledImage(cocos2d::Node*) */

void __thiscall cocos2d::MenuItemSprite::setDisabledImage(MenuItemSprite *this,Node *param_1)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00f1ed90 to 0101edaf has its CatchHandler @ 00f1ee98 */
  if (*(Node **)(this + 0x330) != param_1) {
    if (param_1 != (Node *)0x0) {
      (**(code **)(*(long *)this + 0x208))(this,param_1);
      local_40 = 0;
      (**(code **)(*(long *)param_1 + 0x148))(param_1,&local_40);
    }
    if (*(long *)(this + 0x340) != 0) {
      (**(code **)(*(long *)this + 0x280))(this,*(long *)(this + 0x340),1);
    }
    *(Node **)(this + 0x340) = param_1;
                    /* try { // try from 00f1edf4 to 0101edfb has its CatchHandler @ 00f1ee9c */
    (**(code **)(*(long *)this + 0x560))(this);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00f1ee1c to 0101ee27 has its CatchHandler @ 00f1eea0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

