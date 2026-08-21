
/* btGeneric6DofConstraint::setLinearLimits(btTypedConstraint::btConstraintInfo2*, int, btTransform
   const&, btTransform const&, btVector3 const&, btVector3 const&, btVector3 const&, btVector3
   const&) */

int __thiscall
btGeneric6DofConstraint::setLinearLimits
          (btGeneric6DofConstraint *this,btConstraintInfo2 *param_1,int param_2,btTransform *param_3
          ,btTransform *param_4,btVector3 *param_5,btVector3 *param_6,btVector3 *param_7,
          btVector3 *param_8)

{
  btGeneric6DofConstraint *pbVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  btGeneric6DofConstraint *pbVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  long local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  btGeneric6DofConstraint local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  
  lVar8 = 0;
  uVar6 = 0;
  lVar7 = 0x32c;
  local_64 = 0;
  do {
    local_68 = *(int *)(this + lVar8 + 0x370);
    local_74 = this[lVar7];
    if (local_68 == 0) {
      if (local_74 != (btGeneric6DofConstraint)0x0) {
        local_74 = (btGeneric6DofConstraint)0x1;
        goto LAB_011bb248;
      }
    }
    else {
LAB_011bb248:
      local_78 = 0;
      local_6c = *(undefined4 *)(this + lVar8 + 0x360);
      local_70 = *(undefined4 *)(this + lVar8 + 0x350);
      local_a4 = 0;
      _local_a0 = CONCAT44(*(undefined4 *)(this + lVar8 + 0x2d0),
                           *(undefined4 *)(this + lVar8 + 0x2c0));
      local_90 = (ulong)*(uint *)(this + 0x2f4) << 0x20;
      _uStack_98 = CONCAT44(*(undefined4 *)(this + lVar8 + 0x340),
                            *(undefined4 *)(this + lVar8 + 0x330));
      local_b0 = *(undefined4 *)(this + lVar8 + 0x440);
      uStack_ac = *(undefined4 *)(this + lVar8 + 0x450);
      local_a8 = *(undefined4 *)(this + lVar8 + 0x460);
      uVar4 = *(int *)(this + 0x530) >> (uVar6 & 0x1f);
      if ((uVar4 & 1) == 0) {
        pbVar5 = *(btGeneric6DofConstraint **)(param_1 + 0x38);
      }
      else {
        pbVar5 = this + lVar8 + 0x2fc;
      }
      _uStack_88 = CONCAT44(*(undefined4 *)pbVar5,*(undefined4 *)(this + 0x2f0));
      if ((uVar4 >> 1 & 1) == 0) {
        pbVar5 = *(btGeneric6DofConstraint **)(param_1 + 0x38);
      }
      else {
        pbVar5 = this + lVar8 + 0x31c;
      }
      pbVar1 = (btGeneric6DofConstraint *)(param_1 + 4);
      if ((uVar4 & 4) != 0) {
        pbVar1 = this + lVar8 + 0x30c;
      }
      _local_80 = CONCAT44(*(undefined4 *)pbVar5,*(undefined4 *)pbVar1);
      uVar4 = (uint)(byte)this[0x52d];
      if (this[0x52d] != (btGeneric6DofConstraint)0x0) {
        lVar2 = 0;
        if (lVar8 != 8) {
          lVar2 = lVar7 + -0x32b;
        }
        if (*(int *)(this + lVar2 * 0x40 + 0x3b4) == 0) {
          uVar4 = 1;
        }
        else {
          uVar4 = (uint)(*(int *)(this + (long)(((int)lVar7 + -0x32a) % 3) * 0x40 + 0x3b4) == 0);
        }
      }
      iVar3 = get_limit_motor_info2
                        (this,(btRotationalLimitMotor *)&local_a0,param_3,param_4,param_5,param_6,
                         param_7,param_8,param_1,param_2,(btVector3 *)&local_b0,0,uVar4);
      param_2 = iVar3 + param_2;
    }
    lVar8 = lVar8 + 4;
    uVar6 = uVar6 + 3;
    lVar7 = lVar7 + 1;
    if (lVar8 == 0xc) {
      return param_2;
    }
  } while( true );
}

