
/* cocos2d::MenuItemImage::setSelectedSpriteFrame(cocos2d::SpriteFrame*) */

void __thiscall
cocos2d::MenuItemImage::setSelectedSpriteFrame(MenuItemImage *this,SpriteFrame *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00f2055c to 01020563 has its CatchHandler @ 00f20640 */
  plVar2 = (long *)Sprite::createWithSpriteFrame(param_1);
                    /* try { // try from 00f20564 to 0102066b has its CatchHandler @ 00f20334 */
  if (*(long **)(this + 0x330) != plVar2) {
    if (plVar2 != (long *)0x0) {
      (**(code **)(*(long *)this + 0x208))(this,plVar2);
      local_40 = 0;
      (**(code **)(*plVar2 + 0x148))(plVar2,&local_40);
    }
    if (*(long *)(this + 0x338) != 0) {
      (**(code **)(*(long *)this + 0x280))(this,*(long *)(this + 0x338),1);
    }
    *(long **)(this + 0x338) = plVar2;
    (**(code **)(*(long *)this + 0x560))(this);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

