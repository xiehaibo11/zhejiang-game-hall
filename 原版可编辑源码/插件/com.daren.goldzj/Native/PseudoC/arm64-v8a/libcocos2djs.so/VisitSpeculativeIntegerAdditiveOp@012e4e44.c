
/* v8::internal::compiler::RepresentationSelector::VisitSpeculativeIntegerAdditiveOp(v8::internal::compiler::Node*,
   v8::internal::compiler::Truncation, v8::internal::compiler::SimplifiedLowering*) */

void v8::internal::compiler::RepresentationSelector::VisitSpeculativeIntegerAdditiveOp
               (RepresentationSelector *param_1,Node *param_2,ulong param_3)

{
  long lVar1;
  undefined1 uVar2;
  ulong uVar3;
  Operator *pOVar4;
  long lVar5;
  long lVar6;
  Type *pTVar7;
  Type *pTVar8;
  Node *pNVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  Node *pNVar13;
  double dVar14;
  double dVar15;
  undefined2 local_104;
  undefined1 local_102;
  long local_100;
  long local_f8;
  long local_f0;
  Type local_e8 [4];
  undefined8 local_e4;
  undefined1 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  Type local_c8;
  undefined2 local_c7;
  undefined1 local_c5;
  ulong local_c4;
  undefined1 local_bc;
  undefined2 local_bb;
  undefined1 local_b9;
  undefined8 local_b8;
  undefined4 local_b0;
  Type local_a8;
  undefined1 uStack_a7;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  Type local_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pNVar13 = param_2 + 0x20;
  pNVar9 = pNVar13;
  if ((*(uint *)(param_2 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar9 = (Node *)(*(long *)pNVar13 + 0x10);
  }
  lVar6 = *(long *)(*(long *)pNVar9 + 8);
  pNVar9 = pNVar13;
  if ((*(uint *)(param_2 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar9 = (Node *)(*(long *)pNVar13 + 0x10);
  }
  local_f8 = *(long *)(*(long *)(pNVar9 + 8) + 8);
  local_f0 = lVar6;
  if (lVar6 == *(long *)(*(long *)(param_1 + 0x138) + 0x198)) {
LAB_012e4f00:
    if ((local_f8 != lVar6) && (uVar3 = Type::SlowIs((Type *)&local_f8), (uVar3 & 1) == 0))
    goto LAB_012e4fcc;
    if ((param_3 & 0xff) == 0) {
      VisitUnused(param_1,param_2);
      goto LAB_012e52d4;
    }
    lVar6 = *(long *)(param_2 + 8);
    local_88 = SUB81(lVar6,0);
    uStack_87 = (undefined1)((ulong)lVar6 >> 8);
    uStack_86 = (undefined1)((ulong)lVar6 >> 0x10);
    uStack_85 = (undefined1)((ulong)lVar6 >> 0x18);
    uStack_84 = (undefined4)((ulong)lVar6 >> 0x20);
    if ((lVar6 != 1099) && (uVar3 = Type::SlowIs(&local_88,1099), (uVar3 & 1) == 0)) {
      lVar6 = *(long *)(param_2 + 8);
      local_a8 = SUB81(lVar6,0);
      uStack_a7 = (undefined1)((ulong)lVar6 >> 8);
      uStack_a6 = (undefined1)((ulong)lVar6 >> 0x10);
      uStack_a5 = (undefined1)((ulong)lVar6 >> 0x18);
      uStack_a4 = (undefined4)((ulong)lVar6 >> 0x20);
      if ((lVar6 != 0x407) &&
         ((uVar3 = Type::SlowIs(&local_a8,0x407), (uVar3 & 1) == 0 &&
          (uVar3 = Truncation::LessGeneral(param_3 & 0xffffffff,2), (uVar3 & 1) == 0))))
      goto LAB_012e4fcc;
    }
    local_9c = 0;
    local_98 = 0;
    local_88 = (Type)0x4;
    uStack_84 = 2;
    uStack_80 = 0;
    local_7c = 0;
    local_78 = 0;
    local_70 = 0xffffffff;
    local_a8 = (Type)0x4;
    uStack_a4 = 2;
    uStack_a0 = 0;
    local_90 = 0xffffffff;
    VisitBinop(param_1,param_2,&local_88,&local_a8,4,0xffffffff);
    if (*(int *)(param_1 + 0x78) != 2) goto LAB_012e52d4;
    goto LAB_012e52b4;
  }
  uVar3 = Type::SlowIs((Type *)&local_f0,*(long *)(*(long *)(param_1 + 0x138) + 0x198));
  if ((uVar3 & 1) != 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x138) + 0x198);
    goto LAB_012e4f00;
  }
LAB_012e4fcc:
  uVar2 = NumberOperationHintOf(*(Operator **)param_2);
  pNVar9 = pNVar13;
  if ((*(uint *)(param_2 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar9 = (Node *)(*(long *)pNVar13 + 0x10);
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x18) +
                    ((ulong)*(uint *)(*(long *)pNVar9 + 0x14) & 0xffffff) * 0x28 + 0x18);
  if (lVar6 == 0) {
    lVar6 = *(long *)(*(long *)pNVar9 + 8);
  }
  if ((*(uint *)(param_2 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar13 = (Node *)(*(long *)pNVar13 + 0x10);
  }
  local_100 = *(long *)(*(long *)(param_1 + 0x18) +
                        ((ulong)*(uint *)(*(long *)(pNVar13 + 8) + 0x14) & 0xffffff) * 0x28 + 0x18);
  if (local_100 == 0) {
    local_100 = *(long *)(*(long *)(pNVar13 + 8) + 8);
  }
  lVar5 = 0xc4b;
  if (*(short *)(*(long *)param_2 + 0x10) != 0x99) {
    lVar5 = 1099;
  }
  if ((((local_f0 == lVar5) || (uVar3 = Type::SlowIs((Type *)&local_f0), (uVar3 & 1) != 0)) &&
      ((local_f8 == 0xc4b || (uVar3 = Type::SlowIs((Type *)&local_f8,0xc4b), (uVar3 & 1) != 0)))) &&
     ((((local_f0 == 1099 || (uVar3 = Type::SlowIs((Type *)&local_f0,1099), (uVar3 & 1) != 0)) ||
       (local_f8 == 1099)) || (uVar3 = Type::SlowIs((Type *)&local_f8,1099), (uVar3 & 1) != 0)))) {
    local_88 = (Type)0x4;
    uStack_87 = (undefined1)local_104;
    uStack_86 = (undefined1)((ushort)local_104 >> 8);
    uStack_85 = local_102;
    uStack_84 = 2;
    uStack_80 = 0;
    local_7c = 0;
    local_a8 = (Type)0x4;
    uStack_a4 = 2;
    uStack_a0 = 0;
    local_9c = 0;
    local_98 = 0;
    local_78 = 0;
    local_70 = 0xffffffff;
    uStack_a5 = local_102;
    local_90 = 0xffffffff;
    pTVar7 = &local_88;
    pTVar8 = &local_a8;
    uStack_a7 = uStack_87;
    uStack_a6 = uStack_86;
    goto LAB_012e5284;
  }
  uVar3 = param_3 >> 0x20;
  if (*(short *)(*(long *)param_2 + 0x10) == 0x99) {
    uVar3 = Type::Maybe((Type *)&local_100,0x801);
    uVar11 = (uint)(param_3 >> 0x20);
    if ((uVar3 & 1) == 0) {
      uVar11 = 0;
    }
    uVar3 = (ulong)uVar11;
  }
  switch(uVar2) {
  case 0:
  case 1:
    local_e4 = 5;
    local_c4 = uVar3 << 0x20 | 5;
    local_dc = 1;
    break;
  case 2:
    local_e4 = 5;
    local_c4 = uVar3 << 0x20 | 5;
    local_dc = 2;
    break;
  case 3:
    local_dc = 4;
    goto LAB_012e5204;
  case 4:
    local_dc = 5;
LAB_012e5204:
    local_c4 = 2;
    local_e4 = 2;
    break;
  default:
    goto switchD_012e51ac_default;
  }
  local_c7 = CONCAT11(uStack_87,local_88);
  local_bb = CONCAT11(uStack_a7,local_a8);
  local_c5 = uStack_86;
  local_c8 = (Type)0x4;
  local_e8[0] = (Type)0x4;
  pTVar7 = &local_c8;
  pTVar8 = local_e8;
  local_b8 = 0;
  local_d8 = 0;
  local_b0 = 0xffffffff;
  local_b9 = uStack_a6;
  local_d0 = 0xffffffff;
  local_bc = local_dc;
LAB_012e5284:
  VisitBinop(param_1,param_2,pTVar7,pTVar8,4,1099);
  if (*(int *)(param_1 + 0x78) != 2) goto LAB_012e52d4;
  uVar3 = Truncation::LessGeneral(param_3 & 0xffffffff,2);
  lVar5 = local_100;
  if ((uVar3 & 1) == 0) {
    lVar12 = *(long *)param_2;
    uVar10 = *(undefined8 *)**(undefined8 **)param_1;
    lVar6 = Type::Intersect(lVar6,1099,uVar10);
    local_88 = SUB81(lVar6,0);
    uStack_87 = (undefined1)((ulong)lVar6 >> 8);
    uStack_86 = (undefined1)((ulong)lVar6 >> 0x10);
    uStack_85 = (undefined1)((ulong)lVar6 >> 0x18);
    uStack_84 = (undefined4)((ulong)lVar6 >> 0x20);
    lVar5 = Type::Intersect(lVar5,1099,uVar10);
    local_a8 = SUB81(lVar5,0);
    uStack_a7 = (undefined1)((ulong)lVar5 >> 8);
    uStack_a6 = (undefined1)((ulong)lVar5 >> 0x10);
    uStack_a5 = (undefined1)((ulong)lVar5 >> 0x18);
    uStack_a4 = (undefined4)((ulong)lVar5 >> 0x20);
    if ((lVar6 != 1) && (lVar5 != 1)) {
      if (*(short *)(lVar12 + 0x10) == 0x9a) {
        dVar14 = (double)Type::Max(&local_88);
        dVar15 = (double)Type::Min(&local_a8);
        if (dVar14 - dVar15 <= 2147483647.0) {
          dVar15 = (double)Type::Min(&local_88);
          dVar14 = (double)Type::Max(&local_a8);
          dVar15 = dVar15 - dVar14;
LAB_012e5400:
          if (-2147483648.0 <= dVar15) goto LAB_012e52b4;
        }
      }
      else {
        if (*(short *)(lVar12 + 0x10) != 0x99) {
switchD_012e51ac_default:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        dVar14 = (double)Type::Max(&local_88);
        dVar15 = (double)Type::Max(&local_a8);
        if (dVar14 + dVar15 <= 2147483647.0) {
          dVar15 = (double)Type::Min(&local_88);
          dVar14 = (double)Type::Min(&local_a8);
          dVar15 = dVar15 + dVar14;
          goto LAB_012e5400;
        }
      }
      pOVar4 = (Operator *)
               RepresentationChanger::Int32OverflowOperatorFor
                         (*(RepresentationChanger **)(param_1 + 0x80),
                          *(undefined2 *)(*(long *)param_2 + 0x10));
      NodeProperties::ChangeOp(param_2,pOVar4);
      goto LAB_012e52d4;
    }
  }
LAB_012e52b4:
  pOVar4 = (Operator *)
           RepresentationChanger::Int32OperatorFor
                     (*(RepresentationChanger **)(param_1 + 0x80),
                      *(undefined2 *)(*(long *)param_2 + 0x10));
  ChangeToPureOp(param_1,param_2,pOVar4);
LAB_012e52d4:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

