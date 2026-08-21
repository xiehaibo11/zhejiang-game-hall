
/* dragonBones::CCFactory::_buildArmature(dragonBones::BuildArmaturePackage const&) const */

Armature * __thiscall
dragonBones::CCFactory::_buildArmature(CCFactory *this,BuildArmaturePackage *param_1)

{
  Armature *this_00;
  Ref *this_01;
  Ref *pRVar1;
  
  this_00 = BaseObject::borrowObject<dragonBones::Armature>();
  this_01 = (Ref *)CCArmatureDisplay::create();
  cocos2d::Ref::retain(this_01);
  if (this_01 == (Ref *)0x0) {
    pRVar1 = (Ref *)0x0;
  }
  else {
    pRVar1 = this_01 + *(long *)(*(long *)this_01 + -0x18);
  }
  Armature::init(this_00,*(ArmatureData **)(param_1 + 0x38),(IArmatureProxy *)pRVar1,this_01,
                 *(DragonBones **)(this + 0x40));
  return this_00;
}

