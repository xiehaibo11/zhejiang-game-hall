
/* cocostudio::Bone::setArmature(cocostudio::Armature*) */

void __thiscall cocostudio::Bone::setArmature(Bone *this,Armature *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *(Armature **)(this + 0x300) = param_1;
  if (param_1 == (Armature *)0x0) {
    uVar1 = 0;
  }
  else {
    lVar2 = *(long *)(this + 0x328);
    uVar1 = (**(code **)(*(long *)param_1 + 0x588))(param_1);
    *(undefined8 *)(lVar2 + 0xa0) = uVar1;
    lVar2 = (**(code **)(**(long **)(this + 0x300) + 0x5a8))();
    *(undefined4 *)(this + 0x398) = *(undefined4 *)(lVar2 + 0x68);
    uVar1 = (**(code **)(**(long **)(this + 0x300) + 0x5b8))();
  }
  *(undefined8 *)(this + 0x390) = uVar1;
  return;
}

