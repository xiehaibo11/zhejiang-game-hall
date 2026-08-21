
/* fairygui::GPathPoint::GPathPoint(cocos2d::Vec3 const&, cocos2d::Vec3 const&, cocos2d::Vec3
   const&) */

void __thiscall
fairygui::GPathPoint::GPathPoint(GPathPoint *this,Vec3 *param_1,Vec3 *param_2,Vec3 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  cocos2d::Vec3::Vec3((Vec3 *)this);
  cocos2d::Vec3::Vec3((Vec3 *)(this + 0xc));
  cocos2d::Vec3::Vec3((Vec3 *)(this + 0x18));
  uVar2 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)this = uVar2;
  uVar2 = *(undefined8 *)param_2;
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(this + 0xc) = uVar2;
  uVar1 = *(undefined4 *)(param_3 + 8);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)param_3;
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x24) = 2;
  return;
}

