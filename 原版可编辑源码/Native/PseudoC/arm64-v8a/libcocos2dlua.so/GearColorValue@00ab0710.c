
/* fairygui::GearColor::GearColorValue::GearColorValue(cocos2d::Color3B const&, cocos2d::Color3B
   const&) */

void __thiscall
fairygui::GearColor::GearColorValue::GearColorValue
          (GearColorValue *this,Color3B *param_1,Color3B *param_2)

{
  undefined2 uVar1;
  
  cocos2d::Color3B::Color3B((Color3B *)this);
  cocos2d::Color3B::Color3B((Color3B *)(this + 3));
  uVar1 = *(undefined2 *)param_1;
  this[2] = *(GearColorValue *)(param_1 + 2);
  *(undefined2 *)this = uVar1;
  uVar1 = *(undefined2 *)param_2;
  this[5] = *(GearColorValue *)(param_2 + 2);
  *(undefined2 *)(this + 3) = uVar1;
  return;
}

