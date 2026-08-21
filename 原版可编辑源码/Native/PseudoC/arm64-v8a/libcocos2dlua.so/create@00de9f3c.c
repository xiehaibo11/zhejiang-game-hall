
/* cocos2d::ui::EditBox::create(cocos2d::Size const&, cocos2d::ui::Scale9Sprite*,
   cocos2d::ui::Scale9Sprite*, cocos2d::ui::Scale9Sprite*) */

EditBox * cocos2d::ui::EditBox::create
                    (Size *param_1,Scale9Sprite *param_2,Scale9Sprite *param_3,Scale9Sprite *param_4
                    )

{
  EditBox *this;
  ulong uVar1;
  
  this = operator_new(0x5d0,(nothrow_t *)&std::nothrow);
  if (this != (EditBox *)0x0) {
    EditBox(this);
    uVar1 = initWithSizeAndBackgroundSprite(this,param_1,param_2,param_3,param_4);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (EditBox *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

