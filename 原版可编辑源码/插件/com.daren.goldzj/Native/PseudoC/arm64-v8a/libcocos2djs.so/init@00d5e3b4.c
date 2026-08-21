
/* dragonBones::IKConstraint::init(dragonBones::ConstraintData*, dragonBones::Armature*) */

void __thiscall
dragonBones::IKConstraint::init(IKConstraint *this,ConstraintData *param_1,Armature *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 0x10) != 0) {
    return;
  }
  *(ConstraintData **)(this + 0x10) = param_1;
  *(Armature **)(this + 0x28) = param_2;
  uVar1 = Armature::getBone(param_2,(basic_string *)(*(long *)(param_1 + 0x30) + 0x18));
  *(undefined8 *)(this + 0x18) = uVar1;
  lVar2 = Armature::getBone(*(Armature **)(this + 0x28),
                            (basic_string *)(*(long *)(*(long *)(this + 0x10) + 0x38) + 0x18));
  lVar3 = *(long *)(this + 0x10);
  *(long *)(this + 0x20) = lVar2;
  if (*(long *)(lVar3 + 0x40) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = Armature::getBone(*(Armature **)(this + 0x28),
                              (basic_string *)(*(long *)(lVar3 + 0x40) + 0x18));
    lVar3 = *(long *)(this + 0x10);
    lVar2 = *(long *)(this + 0x20);
  }
  *(undefined8 *)(this + 0x30) = uVar1;
  this[0x38] = *(IKConstraint *)(lVar3 + 0x49);
  this[0x40] = *(IKConstraint *)(lVar3 + 0x48);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(lVar3 + 0x4c);
  *(undefined1 *)(lVar2 + 0x92) = 1;
  return;
}

