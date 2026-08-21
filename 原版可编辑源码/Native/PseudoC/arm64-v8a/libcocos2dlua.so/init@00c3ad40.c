
/* cocostudio::ArmatureAnimation::init(cocostudio::Armature*) */

undefined8 __thiscall cocostudio::ArmatureAnimation::init(ArmatureAnimation *this,Armature *param_1)

{
  *(Armature **)(this + 0x70) = param_1;
  *(undefined8 *)(this + 0xa0) = *(undefined8 *)(this + 0x98);
  return 1;
}

