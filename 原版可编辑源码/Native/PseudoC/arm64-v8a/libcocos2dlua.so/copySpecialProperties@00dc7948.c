
/* cocos2d::ui::ImageView::copySpecialProperties(cocos2d::ui::Widget*) */

void __thiscall cocos2d::ui::ImageView::copySpecialProperties(ImageView *this,Widget *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  Size *pSVar5;
  pointer_____offset_0x10___ *ppuVar6;
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != (Widget *)0x0) {
    ppuVar6 = &typeinfo;
    lVar2 = __dynamic_cast(param_1,&Widget::typeinfo,&typeinfo,0);
    if (lVar2 != 0) {
      this[0x4f9] = *(ImageView *)(lVar2 + 0x4f9);
      setScale9Enabled(SUB81(this,0));
      plVar3 = (long *)Scale9Sprite::getSprite();
      if (plVar3 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar3 + 0x5b0))();
        (**(code **)(**(long **)(this + 0x510) + 0x610))(*(long **)(this + 0x510),uVar4);
        pSVar5 = (Size *)(**(code **)(**(long **)(this + 0x510) + 0x168))();
        Size::operator=((Size *)(this + 0x51c),pSVar5);
        Widget::updateChildrenDisplayedRGBA((Widget *)this);
        Widget::updateContentSizeWithTextureSize((Size *)this);
        this[0x524] = (ImageView)0x1;
      }
      Helper::restrictCapInsetRect((Helper *)(lVar2 + 0x4fc),this + 0x51c,(Size *)ppuVar6);
      Rect::operator=((Rect *)(this + 0x4fc),aRStack_48);
      if (this[0x4f8] != (ImageView)0x0) {
        Scale9Sprite::setCapInsets(*(Scale9Sprite **)(this + 0x510),(Rect *)(this + 0x4fc));
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

