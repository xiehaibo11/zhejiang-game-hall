
/* dragonBones::CCFactory::_buildSlot(dragonBones::BuildArmaturePackage const&,
   dragonBones::SlotData const*, dragonBones::Armature*) const */

CCSlot * __thiscall
dragonBones::CCFactory::_buildSlot
          (CCFactory *this,BuildArmaturePackage *param_1,SlotData *param_2,Armature *param_3)

{
  CCSlot *this_00;
  long *plVar1;
  
                    /* try { // try from 00d9ec10 to 00e9ec3f has its CatchHandler @ 00d9f35c */
  this_00 = BaseObject::borrowObject<dragonBones::CCSlot>();
  plVar1 = (long *)DBCCSprite::create();
  (**(code **)(*plVar1 + 0x4a8))(plVar1,1);
  (**(code **)(*plVar1 + 0x4d8))(plVar1,1);
                    /* try { // try from 00d9ec50 to 00e9ec5b has its CatchHandler @ 00d9f2fc */
  (**(code **)(*plVar1 + 0x148))(plVar1,&cocos2d::Vec2::ZERO);
                    /* try { // try from 00d9ec70 to 00e9ed4f has its CatchHandler @ 00d9f35c */
  (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined4 *)(param_2 + 0x18));
  Slot::init((Slot *)this_00,param_2,param_3,plVar1,plVar1);
  return this_00;
}

