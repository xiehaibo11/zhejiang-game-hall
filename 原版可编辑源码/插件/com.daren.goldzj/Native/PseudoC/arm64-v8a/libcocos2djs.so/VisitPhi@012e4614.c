
/* v8::internal::compiler::RepresentationSelector::VisitPhi(v8::internal::compiler::Node*,
   v8::internal::compiler::Truncation, v8::internal::compiler::SimplifiedLowering*) */

void __thiscall
v8::internal::compiler::RepresentationSelector::VisitPhi
          (RepresentationSelector *this,Node *param_1,undefined8 param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  Operator *pOVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined2 local_b0;
  undefined1 local_ae;
  undefined2 local_ac;
  undefined1 local_aa;
  undefined1 local_a8 [4];
  undefined8 local_a4;
  undefined1 local_9c;
  undefined2 local_9b;
  undefined1 local_99;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [4];
  undefined8 local_84;
  undefined1 local_7c;
  undefined2 local_7b;
  undefined1 local_79;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar7 = *(long *)(*(long *)(this + 0x18) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x28 +
                   0x18);
  if (lVar7 == 0) {
    lVar7 = *(long *)(param_1 + 8);
  }
  uVar3 = GetOutputInfoForPhi(this,param_1,lVar7);
  iVar6 = *(int *)(this + 0x78);
  if (iVar6 == 1) {
    *(char *)(*(long *)(this + 0x18) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x28 + 1) =
         (char)uVar3;
  }
  else {
    if (iVar6 != 0) goto LAB_012e46cc;
    *(undefined8 *)
     (*(long *)(this + 0x18) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x28 + 0x10) =
         0xffffffff;
  }
  iVar6 = *(int *)(this + 0x78);
LAB_012e46cc:
  iVar1 = *(int *)(*(Operator **)param_1 + 0x14);
  if ((iVar6 == 2) &&
     (uVar4 = PhiRepresentationOf(*(Operator **)param_1), (uVar3 & 0xff) != (uVar4 & 0xff))) {
    pOVar5 = (Operator *)
             CommonOperatorBuilder::Phi(*(CommonOperatorBuilder **)(*param_4 + 8),uVar3,iVar1);
    NodeProperties::ChangeOp(param_1,pOVar5);
  }
  iVar6 = 0;
LAB_012e4780:
  do {
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      uVar4 = *(uint *)(*(long *)(param_1 + 0x20) + 8);
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x14) >> 0x18 & 0xf;
    }
    if ((int)uVar4 <= iVar6) {
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (iVar6 < iVar1) {
      local_b4 = local_ac;
      local_b2 = local_aa;
      local_b8 = local_b0;
      local_b6 = local_ae;
      uVar8 = param_3;
      uVar9 = (char)uVar3;
    }
    else {
      uVar8 = 0;
      uVar9 = 0;
    }
    if (*(int *)(this + 0x78) == 2) {
      *(undefined1 *)((undefined2 *)((ulong)local_a8 | 1) + 1) = local_b2;
      *(undefined2 *)((ulong)local_a8 | 1) = local_b4;
      local_9c = 0;
      local_99 = local_b6;
      local_9b = local_b8;
      local_98 = 0;
      local_90 = 0xffffffff;
      local_a8[0] = uVar9;
      local_a4 = uVar8;
      ConvertInput(this,param_1,iVar6,local_a8,0);
    }
    else if (*(int *)(this + 0x78) == 0) {
      *(undefined1 *)((undefined2 *)((ulong)local_88 | 1) + 1) = local_b2;
      *(undefined2 *)((ulong)local_88 | 1) = local_b4;
      local_7c = 0;
      local_79 = local_b6;
      local_7b = local_b8;
      local_78 = 0;
      local_70 = 0xffffffff;
      local_88[0] = uVar9;
      local_84 = uVar8;
      EnqueueInput(this,param_1,iVar6,local_88);
      iVar6 = iVar6 + 1;
      goto LAB_012e4780;
    }
    iVar6 = iVar6 + 1;
  } while( true );
}

