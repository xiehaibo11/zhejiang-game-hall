
/* fairygui::GearColor::GearColor(fairygui::GObject*) */

void __thiscall fairygui::GearColor::GearColor(GearColor *this,GObject *param_1)

{
  GearBase::GearBase((GearBase *)this,param_1);
  *(undefined ***)this = &PTR__GearColor_016a9f98;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x40) = 0x3f800000;
  cocos2d::Color3B::Color3B((Color3B *)(this + 0x48));
  cocos2d::Color3B::Color3B((Color3B *)(this + 0x4b));
  return;
}

