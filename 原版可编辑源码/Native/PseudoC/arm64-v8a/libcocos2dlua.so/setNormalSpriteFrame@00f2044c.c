
/* cocos2d::MenuItemImage::setNormalSpriteFrame(cocos2d::SpriteFrame*) */

void __thiscall
cocos2d::MenuItemImage::setNormalSpriteFrame(MenuItemImage *this,SpriteFrame *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)Sprite::createWithSpriteFrame(param_1);
  plVar4 = *(long **)(this + 0x330);
  if (plVar4 != plVar2) {
    if (plVar2 != (long *)0x0) {
      (**(code **)(*(long *)this + 0x208))(this,plVar2);
      local_40 = 0;
      (**(code **)(*plVar2 + 0x148))(plVar2,&local_40);
      plVar4 = *(long **)(this + 0x330);
    }
    if (plVar4 != (long *)0x0) {
      (**(code **)(*(long *)this + 0x280))(this,plVar4,1);
    }
    *(long **)(this + 0x330) = plVar2;
    if (plVar2 != (long *)0x0) {
                    /* try { // try from 00f204e4 to 010204eb has its CatchHandler @ 00f20654 */
      uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2);
      (**(code **)(*(long *)this + 0x160))(this,uVar3);
    }
    (**(code **)(*(long *)this + 0x560))(this);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

