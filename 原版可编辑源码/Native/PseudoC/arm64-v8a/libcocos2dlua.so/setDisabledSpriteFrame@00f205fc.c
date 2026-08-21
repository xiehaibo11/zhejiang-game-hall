
/* cocos2d::MenuItemImage::setDisabledSpriteFrame(cocos2d::SpriteFrame*) */

void __thiscall
cocos2d::MenuItemImage::setDisabledSpriteFrame(MenuItemImage *this,SpriteFrame *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)Sprite::createWithSpriteFrame(param_1);
  if (*(long **)(this + 0x330) != plVar2) {
    if (plVar2 != (long *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f2055c with catch @ 00f20640
                        */
      (**(code **)(*(long *)this + 0x208))(this,plVar2);
      local_40 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f204e4 with catch @ 00f20654
                        */
      (**(code **)(*plVar2 + 0x148))(plVar2,&local_40);
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f20384 with catch @ 00f20668
                        */
    if (*(long *)(this + 0x340) != 0) {
      (**(code **)(*(long *)this + 0x280))(this,*(long *)(this + 0x340),1);
    }
    *(long **)(this + 0x340) = plVar2;
    (**(code **)(*(long *)this + 0x560))(this);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

