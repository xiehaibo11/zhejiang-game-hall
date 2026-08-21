
/* cocos2d::ui::EditBox::initWithSizeAndBackgroundSprite(cocos2d::Size const&,
   cocos2d::ui::Scale9Sprite*) */

bool __thiscall
cocos2d::ui::EditBox::initWithSizeAndBackgroundSprite
          (EditBox *this,Size *param_1,Scale9Sprite *param_2)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  
  uVar2 = Widget::init((Widget *)this);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    plVar3 = (long *)__createSystemEditBox(this);
    *(long **)(this + 0x5b8) = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
    (**(code **)(**(long **)(this + 0x5b8) + 0x38))(*(long **)(this + 0x5b8),0);
    loadTextureNormal(this,param_2 + 0x510,*(int *)(param_2 + 0x528) != 0);
    (**(code **)(*(long *)this + 0x160))(this,param_1);
    (**(code **)(*(long *)this + 0x588))(this,1);
  }
  return bVar1;
}

