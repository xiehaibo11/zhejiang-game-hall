
/* cocos2d::Terrain::setLightDir(cocos2d::Vec3 const&) */

void __thiscall cocos2d::Terrain::setLightDir(Terrain *this,Vec3 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x490) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x488) = uVar1;
  return;
}

