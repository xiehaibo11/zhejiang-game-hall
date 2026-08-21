
/* cocos2d::ui::EditBox::initWithSizeAndBackgroundSprite(cocos2d::Size const&,
   cocos2d::ui::Scale9Sprite*, cocos2d::ui::Scale9Sprite*, cocos2d::ui::Scale9Sprite*) */

undefined4 __thiscall
cocos2d::ui::EditBox::initWithSizeAndBackgroundSprite
          (EditBox *this,Size *param_1,Scale9Sprite *param_2,Scale9Sprite *param_3,
          Scale9Sprite *param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined4 uVar3;
  
  uVar1 = Widget::init((Widget *)this);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    plVar2 = (long *)__createSystemEditBox(this);
    *(long **)(this + 0x5b8) = plVar2;
    (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
    (**(code **)(**(long **)(this + 0x5b8) + 0x38))(*(long **)(this + 0x5b8),0);
    loadTextureNormal(this,param_2 + 0x510,*(int *)(param_2 + 0x528) != 0);
    if (param_3 != (Scale9Sprite *)0x0) {
      loadTexturePressed(this,param_3 + 0x510,*(int *)(param_3 + 0x528) != 0);
    }
    if (param_4 != (Scale9Sprite *)0x0) {
      loadTexturePressed(this,param_4 + 0x510,*(int *)(param_4 + 0x528) != 0);
    }
    (**(code **)(*(long *)this + 0x160))(this,param_1);
    uVar3 = 1;
    (**(code **)(*(long *)this + 0x588))(this,1);
  }
  return uVar3;
}

