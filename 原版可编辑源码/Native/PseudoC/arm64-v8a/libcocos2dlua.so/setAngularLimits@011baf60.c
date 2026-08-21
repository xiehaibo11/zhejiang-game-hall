
/* btGeneric6DofConstraint::setAngularLimits(btTypedConstraint::btConstraintInfo2*, int, btTransform
   const&, btTransform const&, btVector3 const&, btVector3 const&, btVector3 const&, btVector3
   const&) */

int __thiscall
btGeneric6DofConstraint::setAngularLimits
          (btGeneric6DofConstraint *this,btConstraintInfo2 *param_1,int param_2,btTransform *param_3
          ,btTransform *param_4,btVector3 *param_5,btVector3 *param_6,btVector3 *param_7,
          btVector3 *param_8)

{
  uint uVar1;
  int iVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((*(int *)(this + 0x3b4) != 0) || (this[0x3a8] != (btGeneric6DofConstraint)0x0)) {
    uStack_68 = *(undefined8 *)(this + 0x4d8);
    local_70 = *(undefined8 *)(this + 0x4d0);
    uVar1 = *(int *)(this + 0x530) >> 9;
    if ((uVar1 & 1) == 0) {
      *(undefined4 *)(this + 0x398) = **(undefined4 **)(param_1 + 0x38);
    }
    if ((uVar1 >> 1 & 1) == 0) {
      *(undefined4 *)(this + 0x3a0) = **(undefined4 **)(param_1 + 0x38);
    }
    if ((uVar1 >> 2 & 1) == 0) {
      *(undefined4 *)(this + 0x39c) = *(undefined4 *)(param_1 + 4);
    }
    iVar2 = get_limit_motor_info2
                      (this,(btRotationalLimitMotor *)(this + 0x37c),param_3,param_4,param_5,param_6
                       ,param_7,param_8,param_1,param_2,(btVector3 *)&local_70,1,0);
    param_2 = iVar2 + param_2;
  }
  if ((*(int *)(this + 0x3f4) != 0) || (this[1000] != (btGeneric6DofConstraint)0x0)) {
    uStack_68 = *(undefined8 *)(this + 0x4e8);
    local_70 = *(undefined8 *)(this + 0x4e0);
    uVar1 = *(int *)(this + 0x530) >> 0xc;
    if ((uVar1 & 1) == 0) {
      *(undefined4 *)(this + 0x3d8) = **(undefined4 **)(param_1 + 0x38);
    }
    if ((uVar1 >> 1 & 1) == 0) {
      *(undefined4 *)(this + 0x3e0) = **(undefined4 **)(param_1 + 0x38);
    }
    if ((uVar1 >> 2 & 1) == 0) {
      *(undefined4 *)(this + 0x3dc) = *(undefined4 *)(param_1 + 4);
    }
    iVar2 = get_limit_motor_info2
                      (this,(btRotationalLimitMotor *)(this + 0x3bc),param_3,param_4,param_5,param_6
                       ,param_7,param_8,param_1,param_2,(btVector3 *)&local_70,1,0);
    param_2 = iVar2 + param_2;
  }
  if ((*(int *)(this + 0x434) != 0) || (this[0x428] != (btGeneric6DofConstraint)0x0)) {
    uStack_68 = *(undefined8 *)(this + 0x4f8);
    local_70 = *(undefined8 *)(this + 0x4f0);
    uVar1 = *(int *)(this + 0x530) >> 0xf;
    if ((uVar1 & 1) == 0) {
      *(undefined4 *)(this + 0x418) = **(undefined4 **)(param_1 + 0x38);
    }
    if ((uVar1 >> 1 & 1) == 0) {
      *(undefined4 *)(this + 0x420) = **(undefined4 **)(param_1 + 0x38);
    }
    if ((uVar1 >> 2 & 1) == 0) {
      *(undefined4 *)(this + 0x41c) = *(undefined4 *)(param_1 + 4);
    }
    iVar2 = get_limit_motor_info2
                      (this,(btRotationalLimitMotor *)(this + 0x3fc),param_3,param_4,param_5,param_6
                       ,param_7,param_8,param_1,param_2,(btVector3 *)&local_70,1,0);
    param_2 = iVar2 + param_2;
  }
  return param_2;
}

