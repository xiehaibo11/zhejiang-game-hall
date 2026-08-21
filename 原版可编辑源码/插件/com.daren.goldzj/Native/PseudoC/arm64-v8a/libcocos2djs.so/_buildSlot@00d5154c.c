
/* dragonBones::CCFactory::_buildSlot(dragonBones::BuildArmaturePackage const&,
   dragonBones::SlotData const*, dragonBones::Armature*) const */

CCSlot * __thiscall
dragonBones::CCFactory::_buildSlot
          (CCFactory *this,BuildArmaturePackage *param_1,SlotData *param_2,Armature *param_3)

{
  CCSlot *this_00;
  
  this_00 = BaseObject::borrowObject<dragonBones::CCSlot>();
  Slot::init((Slot *)this_00,param_2,param_3,this_00,this_00);
  return this_00;
}

