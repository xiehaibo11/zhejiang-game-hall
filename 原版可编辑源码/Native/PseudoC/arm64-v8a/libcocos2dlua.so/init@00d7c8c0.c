
/* dragonBones::Armature::init(dragonBones::ArmatureData*, dragonBones::IArmatureProxy*, void*,
   dragonBones::DragonBones*) */

void __thiscall
dragonBones::Armature::init
          (Armature *this,ArmatureData *param_1,IArmatureProxy *param_2,void *param_3,
          DragonBones *param_4)

{
  Animation *pAVar1;
  
  if (*(long *)(this + 0x20) != 0) {
    return;
  }
  *(ArmatureData **)(this + 0x20) = param_1;
  pAVar1 = BaseObject::borrowObject<dragonBones::Animation>();
  *(Animation **)(this + 0xa8) = pAVar1;
  *(IArmatureProxy **)(this + 0xb0) = param_2;
  *(void **)(this + 0xb8) = param_3;
  *(DragonBones **)(this + 0x28) = param_4;
  (**(code **)(*(long *)param_2 + 0x30))(param_2,this);
  Animation::init(*(Animation **)(this + 0xa8),this);
  Animation::setAnimations(*(Animation **)(this + 0xa8),(map *)(*(long *)(this + 0x20) + 0x120));
  return;
}

