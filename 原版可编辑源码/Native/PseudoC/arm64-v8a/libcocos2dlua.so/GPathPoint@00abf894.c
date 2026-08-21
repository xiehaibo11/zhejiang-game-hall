
/* fairygui::GPathPoint::GPathPoint(cocos2d::Vec3 const&, fairygui::GPathPoint::CurveType) */

void __thiscall
fairygui::GPathPoint::GPathPoint(GPathPoint *this,undefined8 *param_1,undefined4 param_3)

{
  undefined8 uVar1;
  
  cocos2d::Vec3::Vec3((Vec3 *)this);
  cocos2d::Vec3::Vec3((Vec3 *)(this + 0xc));
  cocos2d::Vec3::Vec3((Vec3 *)(this + 0x18));
  uVar1 = *param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 1);
  *(undefined8 *)this = uVar1;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = param_3;
  return;
}

