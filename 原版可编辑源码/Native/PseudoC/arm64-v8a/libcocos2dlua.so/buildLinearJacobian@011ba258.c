
/* btGeneric6DofConstraint::buildLinearJacobian(btJacobianEntry&, btVector3 const&, btVector3
   const&, btVector3 const&) */

void __thiscall
btGeneric6DofConstraint::buildLinearJacobian
          (btGeneric6DofConstraint *this,btJacobianEntry *param_1,btVector3 *param_2,
          btVector3 *param_3,btVector3 *param_4)

{
  long lVar1;
  long lVar2;
  float local_90;
  float fStack_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float fStack_7c;
  float local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  lVar1 = *(long *)(this + 0x28);
  local_40 = *(undefined4 *)(lVar1 + 8);
  local_3c = *(undefined4 *)(lVar1 + 0x18);
  local_38 = *(undefined4 *)(lVar1 + 0x28);
  uStack_34 = 0;
  local_30 = *(undefined4 *)(lVar1 + 0xc);
  local_2c = *(undefined4 *)(lVar1 + 0x1c);
  local_28 = *(undefined4 *)(lVar1 + 0x2c);
  uStack_24 = 0;
  local_20 = *(undefined4 *)(lVar1 + 0x10);
  local_1c = *(undefined4 *)(lVar1 + 0x20);
  uStack_18 = *(undefined4 *)(lVar1 + 0x30);
  local_14 = 0;
  lVar1 = *(long *)(this + 0x30);
  local_70 = *(undefined4 *)(lVar1 + 8);
  local_6c = *(undefined4 *)(lVar1 + 0x18);
  local_68 = *(undefined4 *)(lVar1 + 0x28);
  uStack_64 = 0;
  local_60 = *(undefined4 *)(lVar1 + 0xc);
  local_5c = *(undefined4 *)(lVar1 + 0x1c);
  local_58 = *(undefined4 *)(lVar1 + 0x2c);
  uStack_54 = 0;
  local_50 = *(undefined4 *)(lVar1 + 0x10);
  local_4c = *(undefined4 *)(lVar1 + 0x20);
  local_48 = *(undefined4 *)(lVar1 + 0x30);
  uStack_44 = 0;
  lVar2 = *(long *)(this + 0x28);
  local_74 = 0;
  local_80 = *(float *)param_3 - *(float *)(lVar2 + 0x38);
  fStack_7c = *(float *)(param_3 + 4) - *(float *)(lVar2 + 0x3c);
  local_78 = *(float *)(param_3 + 8) - *(float *)(lVar2 + 0x40);
  local_84 = 0;
  local_90 = *(float *)param_4 - *(float *)(lVar1 + 0x38);
  fStack_8c = *(float *)(param_4 + 4) - *(float *)(lVar1 + 0x3c);
  local_88 = *(float *)(param_4 + 8) - *(float *)(lVar1 + 0x40);
  btJacobianEntry::btJacobianEntry
            (param_1,(btMatrix3x3 *)&local_40,(btMatrix3x3 *)&local_70,(btVector3 *)&local_80,
             (btVector3 *)&local_90,param_2,(btVector3 *)(lVar2 + 0x1a8),*(float *)(lVar2 + 0x174),
             (btVector3 *)(*(long *)(this + 0x30) + 0x1a8),
             *(float *)(*(long *)(this + 0x30) + 0x174));
  return;
}

