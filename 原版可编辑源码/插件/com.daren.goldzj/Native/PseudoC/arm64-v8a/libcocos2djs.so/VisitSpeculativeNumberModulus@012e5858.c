
/* v8::internal::compiler::RepresentationSelector::VisitSpeculativeNumberModulus(v8::internal::compiler::Node*,
   v8::internal::compiler::Truncation, v8::internal::compiler::SimplifiedLowering*) */

void __thiscall
v8::internal::compiler::RepresentationSelector::VisitSpeculativeNumberModulus
          (RepresentationSelector *this,Node *param_1,ulong param_3,SimplifiedLowering *param_4)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  Node *pNVar4;
  Operator *pOVar5;
  Type *pTVar6;
  Type *pTVar7;
  undefined8 uVar8;
  uint uVar9;
  Node *pNVar10;
  long lVar11;
  undefined1 uVar12;
  ulong local_1f0;
  undefined8 local_1e8;
  undefined2 local_1e0;
  undefined1 local_1de;
  undefined2 local_1dc;
  undefined1 local_1da;
  undefined2 local_1d8;
  undefined1 local_1d6;
  undefined2 local_1d4;
  undefined1 local_1d2;
  undefined8 local_1d0;
  undefined2 local_1c0;
  undefined1 local_1be;
  undefined2 local_1bc;
  undefined1 local_1ba;
  undefined2 local_1b8;
  undefined1 local_1b6;
  undefined2 local_1b4;
  undefined1 local_1b2;
  undefined1 local_1b0 [4];
  undefined8 local_1ac;
  undefined1 local_1a4;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined1 local_190 [4];
  ulong local_18c;
  undefined1 local_184;
  undefined8 local_180;
  undefined4 local_178;
  Type local_170;
  undefined2 local_16f;
  undefined1 local_16d;
  undefined8 local_16c;
  undefined1 local_164;
  undefined8 local_160;
  undefined4 local_158;
  Type local_150;
  undefined2 local_14f;
  undefined1 local_14d;
  ulong local_14c;
  undefined1 local_144;
  undefined2 local_143;
  undefined1 local_141;
  undefined8 local_140;
  undefined4 local_138;
  Type local_130;
  undefined2 local_12f;
  undefined1 local_12d;
  undefined8 local_12c;
  undefined1 local_124;
  undefined8 local_120;
  undefined4 local_118;
  Type local_110;
  undefined2 local_10f;
  undefined1 local_10d;
  ulong local_10c;
  undefined1 local_104;
  undefined2 local_103;
  undefined1 local_101;
  undefined8 local_100;
  undefined4 local_f8;
  Type local_f0;
  undefined2 local_ef;
  undefined1 local_ed;
  undefined8 local_ec;
  undefined1 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  Type local_d0;
  undefined2 local_cf;
  undefined1 local_cd;
  ulong local_cc;
  undefined1 local_c4;
  undefined2 local_c3;
  undefined1 local_c1;
  undefined8 local_c0;
  undefined4 local_b8;
  Type local_b0;
  undefined1 uStack_af;
  undefined1 uStack_ae;
  undefined1 uStack_ad;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 local_a4;
  undefined2 local_a3;
  undefined1 local_a1;
  undefined8 local_a0;
  undefined4 local_98;
  Type local_90;
  undefined1 uStack_8f;
  undefined1 uStack_8e;
  undefined1 uStack_8d;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 local_84;
  undefined2 local_83;
  undefined1 local_81;
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  pNVar4 = param_1 + 0x20;
  uVar9 = *(uint *)(param_1 + 0x14);
  pNVar10 = pNVar4;
  if ((~uVar9 & 0xf000000) == 0) {
    pNVar10 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  lVar11 = *(long *)(*(long *)pNVar10 + 8);
  local_90 = SUB81(lVar11,0);
  uStack_8f = (undefined1)((ulong)lVar11 >> 8);
  uStack_8e = (undefined1)((ulong)lVar11 >> 0x10);
  uStack_8d = (undefined1)((ulong)lVar11 >> 0x18);
  uStack_8c = (undefined4)((ulong)lVar11 >> 0x20);
  if (lVar11 == 0x1c07) {
LAB_012e58e4:
    pNVar10 = pNVar4;
    if ((~uVar9 & 0xf000000) == 0) {
      pNVar10 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    lVar11 = *(long *)(*(long *)(pNVar10 + 8) + 8);
    local_b0 = SUB81(lVar11,0);
    uStack_af = (undefined1)((ulong)lVar11 >> 8);
    uStack_ae = (undefined1)((ulong)lVar11 >> 0x10);
    uStack_ad = (undefined1)((ulong)lVar11 >> 0x18);
    uStack_ac = (undefined4)((ulong)lVar11 >> 0x20);
    if ((lVar11 != 0x1c07) && (uVar3 = Type::SlowIs(&local_b0,0x1c07), (uVar3 & 1) == 0))
    goto LAB_012e59c0;
    uVar3 = Truncation::LessGeneral(param_3 & 0xffffffff,2);
    if ((uVar3 & 1) == 0) {
      lVar11 = *(long *)(param_1 + 8);
      local_90 = SUB81(lVar11,0);
      uStack_8f = (undefined1)((ulong)lVar11 >> 8);
      uStack_8e = (undefined1)((ulong)lVar11 >> 0x10);
      uStack_8d = (undefined1)((ulong)lVar11 >> 0x18);
      uStack_8c = (undefined4)((ulong)lVar11 >> 0x20);
      if ((lVar11 != 0x407) && (uVar3 = Type::SlowIs(&local_90,0x407), (uVar3 & 1) == 0))
      goto LAB_012e59c0;
    }
    uVar8 = 0xffffffff;
LAB_012e5998:
    uStack_88 = 0;
    uStack_8c = 2;
    uStack_a8 = 0;
    uStack_ac = 2;
    local_78 = 0xffffffff;
    local_80 = 0;
    local_84 = 0;
    local_90 = (Type)0x4;
    local_98 = 0xffffffff;
    local_a0 = 0;
    local_a4 = 0;
    local_b0 = (Type)0x4;
    VisitBinop(this,param_1,&local_90,&local_b0,4,uVar8);
    if (*(int *)(this + 0x78) != 2) goto LAB_012e5af0;
    pNVar4 = (Node *)SimplifiedLowering::Uint32Mod(param_4,param_1);
    goto LAB_012e5ae0;
  }
  uVar3 = Type::SlowIs(&local_90,0x1c07);
  if ((uVar3 & 1) != 0) {
    uVar9 = *(uint *)(param_1 + 0x14);
    goto LAB_012e58e4;
  }
LAB_012e59c0:
  uVar9 = *(uint *)(param_1 + 0x14);
  pNVar10 = pNVar4;
  if ((~uVar9 & 0xf000000) == 0) {
    pNVar10 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  lVar11 = *(long *)(*(long *)pNVar10 + 8);
  local_90 = SUB81(lVar11,0);
  uStack_8f = (undefined1)((ulong)lVar11 >> 8);
  uStack_8e = (undefined1)((ulong)lVar11 >> 0x10);
  uStack_8d = (undefined1)((ulong)lVar11 >> 0x18);
  uStack_8c = (undefined4)((ulong)lVar11 >> 0x20);
  if (lVar11 == 0x1c4b) {
LAB_012e5a08:
    pNVar10 = pNVar4;
    if ((~uVar9 & 0xf000000) == 0) {
      pNVar10 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    lVar11 = *(long *)(*(long *)(pNVar10 + 8) + 8);
    local_b0 = SUB81(lVar11,0);
    uStack_af = (undefined1)((ulong)lVar11 >> 8);
    uStack_ae = (undefined1)((ulong)lVar11 >> 0x10);
    uStack_ad = (undefined1)((ulong)lVar11 >> 0x18);
    uStack_ac = (undefined4)((ulong)lVar11 >> 0x20);
    if ((lVar11 != 0x1c4b) && (uVar3 = Type::SlowIs(&local_b0,0x1c4b), (uVar3 & 1) == 0))
    goto LAB_012e5b20;
    uVar3 = Truncation::LessGeneral(param_3 & 0xffffffff,2);
    if ((uVar3 & 1) == 0) {
      lVar11 = *(long *)(param_1 + 8);
      local_90 = SUB81(lVar11,0);
      uStack_8f = (undefined1)((ulong)lVar11 >> 8);
      uStack_8e = (undefined1)((ulong)lVar11 >> 0x10);
      uStack_8d = (undefined1)((ulong)lVar11 >> 0x18);
      uStack_8c = (undefined4)((ulong)lVar11 >> 0x20);
      if ((lVar11 != 1099) && (uVar3 = Type::SlowIs(&local_90,1099), (uVar3 & 1) == 0))
      goto LAB_012e5b20;
    }
    pTVar6 = &local_90;
    pTVar7 = &local_b0;
    local_90 = (Type)0x4;
    uStack_8c = 2;
    uStack_88 = 0;
    local_84 = 0;
    local_80 = 0;
    local_78 = 0xffffffff;
    local_b0 = (Type)0x4;
    uStack_ac = 2;
    uStack_a8 = 0;
    local_a4 = 0;
    local_a0 = 0;
    local_98 = 0xffffffff;
    goto LAB_012e5ab4;
  }
  uVar3 = Type::SlowIs(&local_90,0x1c4b);
  if ((uVar3 & 1) != 0) {
    uVar9 = *(uint *)(param_1 + 0x14);
    goto LAB_012e5a08;
  }
LAB_012e5b20:
  bVar2 = NumberOperationHintOf(*(Operator **)param_1);
  uVar9 = *(uint *)(param_1 + 0x14);
  pNVar10 = pNVar4;
  if ((~uVar9 & 0xf000000) == 0) {
    pNVar10 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  lVar11 = *(long *)(*(long *)pNVar10 + 8);
  local_90 = SUB81(lVar11,0);
  uStack_8f = (undefined1)((ulong)lVar11 >> 8);
  uStack_8e = (undefined1)((ulong)lVar11 >> 0x10);
  uStack_8d = (undefined1)((ulong)lVar11 >> 0x18);
  uStack_8c = (undefined4)((ulong)lVar11 >> 0x20);
  if (lVar11 == 0x407) {
LAB_012e5b70:
    pNVar10 = pNVar4;
    if ((~uVar9 & 0xf000000) == 0) {
      pNVar10 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    lVar11 = *(long *)(*(long *)(pNVar10 + 8) + 8);
    local_b0 = SUB81(lVar11,0);
    uStack_af = (undefined1)((ulong)lVar11 >> 8);
    uStack_ae = (undefined1)((ulong)lVar11 >> 0x10);
    uStack_ad = (undefined1)((ulong)lVar11 >> 0x18);
    uStack_ac = (undefined4)((ulong)lVar11 >> 0x20);
    if (lVar11 == 0x407) {
      uVar3 = 1;
    }
    else {
      uVar3 = Type::SlowIs(&local_b0,0x407);
    }
  }
  else {
    uVar3 = Type::SlowIs(&local_90,0x407);
    if ((uVar3 & 1) != 0) {
      uVar9 = *(uint *)(param_1 + 0x14);
      goto LAB_012e5b70;
    }
    uVar3 = 0;
  }
  if (((bVar2 & 0xfd) == 0) && ((uVar3 & 1) != 0)) {
    local_90 = (Type)0x4;
    local_b0 = (Type)0x4;
    uStack_8f = (undefined1)local_1b4;
    uStack_8e = (undefined1)((ushort)local_1b4 >> 8);
    uStack_8d = local_1b2;
    uStack_8c = 2;
    uStack_88 = 0;
    local_81 = local_1b6;
    uStack_ad = local_1b2;
    local_84 = 0;
    local_83 = local_1b8;
    pTVar7 = &local_90;
    pTVar6 = &local_b0;
    local_80 = 0;
    local_78 = 0xffffffff;
    uStack_ac = 2;
    uStack_a8 = 0;
    local_a4 = 0;
    local_a3 = local_1b8;
    local_a1 = local_1b6;
    local_a0 = 0;
    local_98 = 0xffffffff;
    uStack_af = uStack_8f;
    uStack_ae = uStack_8e;
    goto LAB_012e5c3c;
  }
  uVar9 = *(uint *)(param_1 + 0x14);
  pNVar10 = pNVar4;
  if ((~uVar9 & 0xf000000) == 0) {
    pNVar10 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  lVar11 = *(long *)(*(long *)pNVar10 + 8);
  local_90 = SUB81(lVar11,0);
  uStack_8f = (undefined1)((ulong)lVar11 >> 8);
  uStack_8e = (undefined1)((ulong)lVar11 >> 0x10);
  uStack_8d = (undefined1)((ulong)lVar11 >> 0x18);
  uStack_8c = (undefined4)((ulong)lVar11 >> 0x20);
  if (lVar11 == 1099) {
LAB_012e5cb8:
    pNVar10 = pNVar4;
    if ((~uVar9 & 0xf000000) == 0) {
      pNVar10 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    lVar11 = *(long *)(*(long *)(pNVar10 + 8) + 8);
    local_b0 = SUB81(lVar11,0);
    uStack_af = (undefined1)((ulong)lVar11 >> 8);
    uStack_ae = (undefined1)((ulong)lVar11 >> 0x10);
    uStack_ad = (undefined1)((ulong)lVar11 >> 0x18);
    uStack_ac = (undefined4)((ulong)lVar11 >> 0x20);
    if (lVar11 != 1099) {
      uVar3 = Type::SlowIs(&local_b0,1099);
      if ((bVar2 & 0xfd) == 0) goto LAB_012e5cf0;
      goto LAB_012e5dbc;
    }
    uVar3 = 1;
    if ((bVar2 & 0xfd) != 0) goto LAB_012e5dbc;
LAB_012e5cf0:
    if ((uVar3 & 1) == 0) goto LAB_012e5dbc;
    local_90 = (Type)0x4;
    local_b0 = (Type)0x4;
    uStack_8f = (undefined1)local_1bc;
    uStack_8e = (undefined1)((ushort)local_1bc >> 8);
    uStack_8d = local_1ba;
    uStack_8c = 2;
    uStack_88 = 0;
    local_81 = local_1be;
    uStack_ad = local_1ba;
    local_84 = 0;
    local_83 = local_1c0;
    pTVar6 = &local_90;
    pTVar7 = &local_b0;
    local_80 = 0;
    local_78 = 0xffffffff;
    uStack_ac = 2;
    uStack_a8 = 0;
    local_a4 = 0;
    local_a3 = local_1c0;
    local_a1 = local_1be;
    local_a0 = 0;
    local_98 = 0xffffffff;
    uStack_af = uStack_8f;
    uStack_ae = uStack_8e;
    goto LAB_012e5d68;
  }
  uVar3 = Type::SlowIs(&local_90,1099);
  if ((uVar3 & 1) != 0) {
    uVar9 = *(uint *)(param_1 + 0x14);
    goto LAB_012e5cb8;
  }
LAB_012e5dbc:
  local_1f0 = param_3 & 0xffffffff00000000;
  if ((bVar2 & 0xfd) != 0) {
    uVar9 = *(uint *)(param_1 + 0x14);
    pNVar10 = pNVar4;
    if ((~uVar9 & 0xf000000) == 0) {
      pNVar10 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    lVar11 = *(long *)(*(long *)(this + 0x18) +
                       ((ulong)*(uint *)(*(long *)pNVar10 + 0x14) & 0xffffff) * 0x28 + 0x18);
    if (lVar11 == 0) {
      lVar11 = *(long *)(*(long *)pNVar10 + 8);
    }
    local_90 = SUB81(lVar11,0);
    uStack_8f = (undefined1)((ulong)lVar11 >> 8);
    uStack_8e = (undefined1)((ulong)lVar11 >> 0x10);
    uStack_8d = (undefined1)((ulong)lVar11 >> 0x18);
    uStack_8c = (undefined4)((ulong)lVar11 >> 0x20);
    if (lVar11 == 0x407) {
LAB_012e5e28:
      pNVar10 = pNVar4;
      if ((~uVar9 & 0xf000000) == 0) {
        pNVar10 = (Node *)(*(long *)pNVar4 + 0x10);
      }
      lVar11 = *(long *)(*(long *)(this + 0x18) +
                         ((ulong)*(uint *)(*(long *)(pNVar10 + 8) + 0x14) & 0xffffff) * 0x28 + 0x18)
      ;
      if (lVar11 == 0) {
        lVar11 = *(long *)(*(long *)(pNVar10 + 8) + 8);
      }
      local_b0 = SUB81(lVar11,0);
      uStack_af = (undefined1)((ulong)lVar11 >> 8);
      uStack_ae = (undefined1)((ulong)lVar11 >> 0x10);
      uStack_ad = (undefined1)((ulong)lVar11 >> 0x18);
      uStack_ac = (undefined4)((ulong)lVar11 >> 0x20);
      if (((lVar11 == 0x407) || (uVar3 = Type::SlowIs(&local_b0,0x407), (uVar3 & 1) != 0)) &&
         ((uVar3 = Truncation::LessGeneral(param_3 & 0xffffffff,2), (uVar3 & 1) != 0 ||
          ((local_1d0 = *(long *)(param_1 + 8), local_1d0 == 0x407 ||
           (uVar3 = Type::SlowIs((Type *)&local_1d0,0x407), (uVar3 & 1) != 0)))))) {
        uStack_ad = local_1d2;
        local_81 = local_1d6;
        local_83 = local_1d8;
        uStack_8f = (undefined1)local_1d4;
        uStack_8e = (undefined1)((ushort)local_1d4 >> 8);
        local_a3 = local_1d8;
        local_a1 = local_1d6;
        uVar8 = 0x1c5f;
        uStack_af = uStack_8f;
        uStack_ae = uStack_8e;
        uStack_8d = uStack_ad;
        goto LAB_012e5998;
      }
    }
    else {
      uVar3 = Type::SlowIs(&local_90,0x407);
      if ((uVar3 & 1) != 0) {
        uVar9 = *(uint *)(param_1 + 0x14);
        goto LAB_012e5e28;
      }
    }
    uVar9 = *(uint *)(param_1 + 0x14);
    pNVar10 = pNVar4;
    if ((~uVar9 & 0xf000000) == 0) {
      pNVar10 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    lVar11 = *(long *)(*(long *)(this + 0x18) +
                       ((ulong)*(uint *)(*(long *)pNVar10 + 0x14) & 0xffffff) * 0x28 + 0x18);
    if (lVar11 == 0) {
      lVar11 = *(long *)(*(long *)pNVar10 + 8);
    }
    local_90 = SUB81(lVar11,0);
    uStack_8f = (undefined1)((ulong)lVar11 >> 8);
    uStack_8e = (undefined1)((ulong)lVar11 >> 0x10);
    uStack_8d = (undefined1)((ulong)lVar11 >> 0x18);
    uStack_8c = (undefined4)((ulong)lVar11 >> 0x20);
    if (lVar11 != 1099) {
      uVar3 = Type::SlowIs(&local_90,1099);
      if ((uVar3 & 1) != 0) {
        uVar9 = *(uint *)(param_1 + 0x14);
        goto LAB_012e5fdc;
      }
LAB_012e60e0:
      local_18c = local_1f0 | 5;
      local_180 = 0;
      local_1a0 = 0;
      local_190[0] = 0xc;
      local_184 = 5;
      local_178 = 0xffffffff;
      local_1b0[0] = 0xc;
      local_1ac = 5;
      local_1a4 = 5;
      local_198 = 0xffffffff;
      VisitBinop(this,param_1,local_190,local_1b0,0xc,0x1c5f);
      if (*(int *)(this + 0x78) == 2) {
        pOVar5 = (Operator *)
                 RepresentationChanger::Float64OperatorFor
                           (*(RepresentationChanger **)(this + 0x80),
                            *(undefined2 *)(*(long *)param_1 + 0x10));
        ChangeToPureOp(this,param_1,pOVar5);
      }
      goto LAB_012e5af0;
    }
LAB_012e5fdc:
    if ((~uVar9 & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    lVar11 = *(long *)(*(long *)(this + 0x18) +
                       ((ulong)*(uint *)(*(long *)(pNVar4 + 8) + 0x14) & 0xffffff) * 0x28 + 0x18);
    if (lVar11 == 0) {
      lVar11 = *(long *)(*(long *)(pNVar4 + 8) + 8);
    }
    local_b0 = SUB81(lVar11,0);
    uStack_af = (undefined1)((ulong)lVar11 >> 8);
    uStack_ae = (undefined1)((ulong)lVar11 >> 0x10);
    uStack_ad = (undefined1)((ulong)lVar11 >> 0x18);
    uStack_ac = (undefined4)((ulong)lVar11 >> 0x20);
    if (((lVar11 != 1099) && (uVar3 = Type::SlowIs(&local_b0,1099), (uVar3 & 1) == 0)) ||
       ((uVar3 = Truncation::LessGeneral(param_3 & 0xffffffff,2), (uVar3 & 1) == 0 &&
        ((local_1d0 = *(long *)(param_1 + 8), local_1d0 != 1099 &&
         (uVar3 = Type::SlowIs((Type *)&local_1d0,1099), (uVar3 & 1) == 0)))))) goto LAB_012e60e0;
    uStack_ad = local_1da;
    local_90 = (Type)0x4;
    local_b0 = (Type)0x4;
    local_81 = local_1de;
    local_83 = local_1e0;
    uStack_8f = (undefined1)local_1dc;
    uStack_8e = (undefined1)((ushort)local_1dc >> 8);
    uStack_8c = 2;
    uStack_88 = 0;
    local_a3 = local_1e0;
    local_a1 = local_1de;
    local_84 = 0;
    local_80 = 0;
    local_78 = 0xffffffff;
    uStack_ac = 2;
    uStack_a8 = 0;
    local_a4 = 0;
    local_a0 = 0;
    local_98 = 0xffffffff;
    pTVar6 = &local_90;
    pTVar7 = &local_b0;
    uVar8 = 0x1c5f;
    uStack_af = uStack_8f;
    uStack_ae = uStack_8e;
    uStack_8d = uStack_ad;
    goto LAB_012e5abc;
  }
  switch(bVar2) {
  case 0:
  case 1:
    local_1e8 = 5;
    local_1f0 = local_1f0 | 5;
    uVar12 = 1;
    break;
  case 2:
    local_1e8 = 5;
    local_1f0 = local_1f0 | 5;
    uVar12 = 2;
    break;
  case 3:
    uVar12 = 4;
    goto LAB_012e61a4;
  case 4:
    uVar12 = 5;
LAB_012e61a4:
    local_1f0 = 2;
    local_1e8 = 2;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  uVar3 = Truncation::LessGeneral(param_3 & 0xffffffff,2);
  if ((uVar3 & 1) != 0) {
    local_cd = uStack_8e;
    local_cf = CONCAT11(uStack_8f,local_90);
    local_d0 = (Type)0x4;
    local_f0 = (Type)0x4;
    local_c3 = CONCAT11(uStack_af,local_b0);
    local_cc = local_1f0;
    local_c1 = uStack_ae;
    local_ef = (undefined2)local_1d0;
    local_ed = local_1d0._2_1_;
    local_ec = local_1e8;
    local_c0 = 0;
    local_b8 = 0xffffffff;
    local_e0 = 0;
    local_d8 = 0xffffffff;
    pTVar6 = &local_d0;
    pTVar7 = &local_f0;
    local_e4 = uVar12;
    local_c4 = uVar12;
LAB_012e5ab4:
    uVar8 = 0xffffffff;
LAB_012e5abc:
    VisitBinop(this,param_1,pTVar6,pTVar7,4,uVar8);
    if (*(int *)(this + 0x78) == 2) {
      pNVar4 = (Node *)SimplifiedLowering::Int32Mod(param_4,param_1);
LAB_012e5ae0:
      DeferReplacement(this,param_1,pNVar4);
    }
    goto LAB_012e5af0;
  }
  uVar9 = *(uint *)(param_1 + 0x14);
  pNVar10 = pNVar4;
  if ((~uVar9 & 0xf000000) == 0) {
    pNVar10 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  lVar11 = *(long *)(*(long *)pNVar10 + 8);
  local_90 = SUB81(lVar11,0);
  uStack_8f = (undefined1)((ulong)lVar11 >> 8);
  uStack_8e = (undefined1)((ulong)lVar11 >> 0x10);
  uStack_8d = (undefined1)((ulong)lVar11 >> 0x18);
  uStack_8c = (undefined4)((ulong)lVar11 >> 0x20);
  if (lVar11 == 0x1c07) {
LAB_012e6290:
    if ((~uVar9 & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    lVar11 = *(long *)(*(long *)(pNVar4 + 8) + 8);
    local_b0 = SUB81(lVar11,0);
    uStack_af = (undefined1)((ulong)lVar11 >> 8);
    uStack_ae = (undefined1)((ulong)lVar11 >> 0x10);
    uStack_ad = (undefined1)((ulong)lVar11 >> 0x18);
    uStack_ac = (undefined4)((ulong)lVar11 >> 0x20);
    if ((lVar11 != 0x1c07) && (uVar3 = Type::SlowIs(&local_b0,0x1c07), (uVar3 & 1) == 0))
    goto LAB_012e6358;
    local_12c = local_1e8;
    local_10c = local_1f0;
    local_10f = CONCAT11(uStack_8f,local_90);
    local_10d = uStack_8e;
    local_110 = (Type)0x4;
    local_130 = (Type)0x4;
    local_103 = CONCAT11(uStack_af,local_b0);
    local_101 = uStack_ae;
    local_12d = local_1d0._2_1_;
    local_12f = (undefined2)local_1d0;
    local_100 = 0;
    local_f8 = 0xffffffff;
    local_120 = 0;
    local_118 = 0xffffffff;
    pTVar7 = &local_110;
    pTVar6 = &local_130;
    local_124 = uVar12;
    local_104 = uVar12;
LAB_012e5c3c:
    VisitBinop(this,param_1,pTVar7,pTVar6,4,0x407);
    if (*(int *)(this + 0x78) != 2) goto LAB_012e5af0;
    pOVar5 = (Operator *)
             RepresentationChanger::Uint32OverflowOperatorFor
                       (*(RepresentationChanger **)(this + 0x80),
                        *(undefined2 *)(*(long *)param_1 + 0x10));
  }
  else {
    uVar3 = Type::SlowIs(&local_90,0x1c07);
    if ((uVar3 & 1) != 0) {
      uVar9 = *(uint *)(param_1 + 0x14);
      goto LAB_012e6290;
    }
LAB_012e6358:
    local_16c = local_1e8;
    local_14c = local_1f0;
    local_14f = CONCAT11(uStack_8f,local_90);
    local_14d = uStack_8e;
    local_150 = (Type)0x4;
    local_170 = (Type)0x4;
    local_143 = CONCAT11(uStack_af,local_b0);
    local_141 = uStack_ae;
    local_16d = local_1d0._2_1_;
    local_16f = (undefined2)local_1d0;
    local_160 = 0;
    local_140 = 0;
    local_138 = 0xffffffff;
    local_158 = 0xffffffff;
    pTVar6 = &local_150;
    pTVar7 = &local_170;
    local_164 = uVar12;
    local_144 = uVar12;
LAB_012e5d68:
    VisitBinop(this,param_1,pTVar6,pTVar7,4,1099);
    if (*(int *)(this + 0x78) != 2) goto LAB_012e5af0;
    pOVar5 = (Operator *)
             RepresentationChanger::Int32OverflowOperatorFor
                       (*(RepresentationChanger **)(this + 0x80),
                        *(undefined2 *)(*(long *)param_1 + 0x10));
  }
  NodeProperties::ChangeOp(param_1,pOVar5);
LAB_012e5af0:
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

