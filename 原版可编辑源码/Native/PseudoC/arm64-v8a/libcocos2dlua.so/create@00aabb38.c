
/* fairygui::FUIInput::create() */

EditBox * fairygui::FUIInput::create(void)

{
  long lVar1;
  EditBox *this;
  TextFormat *this_00;
  Scale9Sprite *pSVar2;
  ulong uVar3;
  Size aSStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = operator_new(0x5e0,(nothrow_t *)&std::nothrow);
  if (this != (EditBox *)0x0) {
    cocos2d::ui::EditBox::EditBox(this);
    *(undefined ***)this = &PTR__FUIInput_016a94f8;
    *(undefined ***)(this + 0x318) = &PTR__FUIInput_016a9ba8;
    *(undefined ***)(this + 0x4f0) = &PTR__FUIInput_016a9bd0;
    this_00 = operator_new(0x58);
    TextFormat::TextFormat(this_00);
    *(TextFormat **)(this + 0x5d0) = this_00;
    this[0x5d8] = (EditBox)0x0;
    *(undefined4 *)(this + 0x5dc) = 0;
    cocos2d::Size::Size(aSStack_40,100.0,100.0);
    pSVar2 = (Scale9Sprite *)cocos2d::Sprite::createWithTexture(UIPackage::_emptyTexture);
    uVar3 = cocos2d::ui::EditBox::initWithSizeAndBackgroundSprite(this,aSStack_40,pSVar2);
    if ((uVar3 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (EditBox *)0x0;
    }
    else {
      cocos2d::Ref::autorelease((Ref *)this);
      continueInit((FUIInput *)this);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

