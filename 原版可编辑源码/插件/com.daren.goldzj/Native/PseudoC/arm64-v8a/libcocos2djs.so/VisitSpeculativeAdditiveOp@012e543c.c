
/* WARNING: Removing unreachable block (ram,0x012e54ec) */
/* v8::internal::compiler::RepresentationSelector::VisitSpeculativeAdditiveOp(v8::internal::compiler::Node*,
   v8::internal::compiler::Truncation, v8::internal::compiler::SimplifiedLowering*) */

void v8::internal::compiler::RepresentationSelector::VisitSpeculativeAdditiveOp
               (RepresentationSelector *param_1,Node *param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  Operator *pOVar3;
  uint uVar4;
  Node *pNVar5;
  long lVar6;
  long lVar7;
  Node *pNVar8;
  undefined2 local_8c;
  undefined1 local_8a;
  Type local_88;
  undefined2 uStack_87;
  undefined1 uStack_85;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  Type local_68;
  undefined2 uStack_67;
  undefined1 uStack_65;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pNVar8 = param_2 + 0x20;
  uVar4 = *(uint *)(param_2 + 0x14);
  lVar7 = *(long *)(*(long *)(param_1 + 0x138) + 0x198);
  pNVar5 = pNVar8;
  if ((~uVar4 & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar8 + 0x10);
  }
  lVar6 = *(long *)(*(long *)pNVar5 + 8);
  local_68 = SUB81(lVar6,0);
  uStack_67 = (undefined2)((ulong)lVar6 >> 8);
  uStack_65 = (undefined1)((ulong)lVar6 >> 0x18);
  uStack_64 = (undefined4)((ulong)lVar6 >> 0x20);
  if (lVar6 == lVar7) {
LAB_012e54bc:
    if ((~uVar4 & 0xf000000) == 0) {
      pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
    }
    lVar6 = *(long *)(*(long *)(pNVar8 + 8) + 8);
    local_88 = SUB81(lVar6,0);
    uStack_87 = (undefined2)((ulong)lVar6 >> 8);
    uStack_85 = (undefined1)((ulong)lVar6 >> 0x18);
    uStack_84 = (undefined4)((ulong)lVar6 >> 0x20);
    if ((lVar6 != lVar7) && (uVar2 = Type::SlowIs(&local_88,lVar7), (uVar2 & 1) == 0))
    goto LAB_012e55cc;
    lVar7 = *(long *)(param_2 + 8);
    local_68 = SUB81(lVar7,0);
    uStack_67 = (undefined2)((ulong)lVar7 >> 8);
    uStack_65 = (undefined1)((ulong)lVar7 >> 0x18);
    uStack_64 = (undefined4)((ulong)lVar7 >> 0x20);
    if ((lVar7 != 1099) && (uVar2 = Type::SlowIs(&local_68,1099), (uVar2 & 1) == 0)) {
      lVar7 = *(long *)(param_2 + 8);
      local_88 = SUB81(lVar7,0);
      uStack_87 = (undefined2)((ulong)lVar7 >> 8);
      uStack_85 = (undefined1)((ulong)lVar7 >> 0x18);
      uStack_84 = (undefined4)((ulong)lVar7 >> 0x20);
      if (((lVar7 != 0x407) && (uVar2 = Type::SlowIs(&local_88,0x407), (uVar2 & 1) == 0)) &&
         (uVar2 = Truncation::LessGeneral(param_3,2), (uVar2 & 1) == 0)) goto LAB_012e55cc;
    }
    local_5c = 0;
    local_58 = 0;
    local_7c = 0;
    local_78 = 0;
    local_68 = (Type)0x4;
    uStack_64 = 2;
    uStack_60 = 0;
    local_50 = 0xffffffff;
    local_88 = (Type)0x4;
    uStack_84 = 2;
    uStack_80 = 0;
    local_70 = 0xffffffff;
    VisitBinop(param_1,param_2,&local_68,&local_88,4,0xffffffff);
    if (*(int *)(param_1 + 0x78) != 2) goto LAB_012e5688;
    pOVar3 = (Operator *)
             RepresentationChanger::Int32OperatorFor
                       (*(RepresentationChanger **)(param_1 + 0x80),
                        *(undefined2 *)(*(long *)param_2 + 0x10));
  }
  else {
    uVar2 = Type::SlowIs(&local_68,lVar7);
    if ((uVar2 & 1) != 0) {
      uVar4 = *(uint *)(param_2 + 0x14);
      goto LAB_012e54bc;
    }
LAB_012e55cc:
    local_68 = (Type)0xc;
    local_88 = (Type)0xc;
    local_5c = 5;
    local_7c = 5;
    uStack_64 = 5;
    uStack_60 = 1;
    uStack_84 = 5;
    uStack_80 = 1;
    local_58 = 0;
    local_78 = 0;
    local_50 = 0xffffffff;
    uStack_67 = local_8c;
    uStack_65 = local_8a;
    uStack_85 = local_8a;
    uStack_87 = local_8c;
    local_70 = 0xffffffff;
    VisitBinop(param_1,param_2,&local_68,&local_88,0xc,0x1c5f);
    if (*(int *)(param_1 + 0x78) != 2) goto LAB_012e5688;
    pOVar3 = (Operator *)
             RepresentationChanger::Float64OperatorFor
                       (*(RepresentationChanger **)(param_1 + 0x80),
                        *(undefined2 *)(*(long *)param_2 + 0x10));
  }
  ChangeToPureOp(param_1,param_2,pOVar3);
LAB_012e5688:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

