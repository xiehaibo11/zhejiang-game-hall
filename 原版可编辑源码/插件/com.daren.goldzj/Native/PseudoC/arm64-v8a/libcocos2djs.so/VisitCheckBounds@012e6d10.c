
/* v8::internal::compiler::RepresentationSelector::VisitCheckBounds(v8::internal::compiler::Node*,
   v8::internal::compiler::SimplifiedLowering*) */

void __thiscall
v8::internal::compiler::RepresentationSelector::VisitCheckBounds
          (RepresentationSelector *this,Node *param_1,SimplifiedLowering *param_2)

{
  long lVar1;
  FeedbackSource *pFVar2;
  ulong uVar3;
  SimplifiedOperatorBuilder *this_00;
  Operator *pOVar4;
  undefined8 uVar5;
  Node *pNVar6;
  Node *pNVar7;
  double dVar8;
  double dVar9;
  long local_128;
  long local_120;
  undefined1 local_118 [4];
  undefined8 local_114;
  undefined1 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_f8 [4];
  undefined8 local_f4;
  undefined1 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [4];
  undefined8 local_d4;
  undefined1 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [4];
  undefined8 local_b4;
  undefined1 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [4];
  undefined8 local_94;
  undefined1 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [4];
  undefined8 local_74;
  undefined1 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pFVar2 = (FeedbackSource *)CheckParametersOf(*(Operator **)param_1);
  pNVar7 = param_1 + 0x20;
  pNVar6 = pNVar7;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar6 = (Node *)(*(long *)pNVar7 + 0x10);
  }
  local_120 = *(long *)(*(long *)(this + 0x18) +
                        ((ulong)*(uint *)(*(long *)pNVar6 + 0x14) & 0xffffff) * 0x28 + 0x18);
  if (local_120 == 0) {
    local_120 = *(long *)(*(long *)pNVar6 + 8);
  }
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
  }
  local_128 = *(long *)(*(long *)(this + 0x18) +
                        ((ulong)*(uint *)(*(long *)(pNVar7 + 8) + 0x14) & 0xffffff) * 0x28 + 0x18);
  if (local_128 == 0) {
    local_128 = *(long *)(*(long *)(pNVar7 + 8) + 8);
  }
  if ((local_128 == 0x403) || (uVar3 = Type::SlowIs((Type *)&local_128,0x403), (uVar3 & 1) != 0)) {
    if ((local_120 == 0xc4f) || (uVar3 = Type::SlowIs((Type *)&local_120,0xc4f), (uVar3 & 1) != 0))
    {
      local_78[0] = 4;
      local_98[0] = 4;
      local_74 = 2;
      local_6c = 0;
      local_68 = 0;
      local_60 = 0xffffffff;
      local_94 = 2;
      local_8c = 0;
      local_88 = 0;
      local_80 = 0xffffffff;
      VisitBinop(this,param_1,local_78,local_98,4,0xffffffff);
      if (*(int *)(this + 0x78) != 2) goto LAB_012e7018;
      if (*(int *)(param_2 + 0x60) == 1) {
        if ((local_120 != 1) && (local_128 != 1)) {
          dVar8 = (double)Type::Min((Type *)&local_120);
          if (0.0 <= dVar8) {
            dVar8 = (double)Type::Max((Type *)&local_120);
            dVar9 = (double)Type::Min((Type *)&local_128);
            if (dVar8 < dVar9) goto LAB_012e6ef8;
          }
          goto LAB_012e6f70;
        }
LAB_012e6ef8:
        uVar5 = 0;
      }
      else {
LAB_012e6f70:
        uVar5 = 1;
      }
      this_00 = *(SimplifiedOperatorBuilder **)(*(long *)this + 0x178);
    }
    else {
      local_b8[0] = 5;
      local_b4 = 5;
      local_ac = 8;
      uStack_a0 = *(undefined8 *)(pFVar2 + 8);
      local_a8 = *(undefined8 *)pFVar2;
      local_d8[0] = 5;
      local_d4 = 0x100000005;
      local_cc = 0;
      local_c8 = 0;
      local_c0 = 0xffffffff;
      VisitBinop(this,param_1,local_b8,local_d8,5,0xffffffff);
      if (*(int *)(this + 0x78) != 2) goto LAB_012e7018;
      this_00 = *(SimplifiedOperatorBuilder **)(*(long *)this + 0x178);
      if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') goto LAB_012e7004;
      uVar5 = 1;
    }
    pOVar4 = (Operator *)SimplifiedOperatorBuilder::CheckedUint32Bounds(this_00,pFVar2,uVar5);
  }
  else {
    local_f8[0] = 5;
    local_f4 = 5;
    local_ec = 3;
    uStack_e0 = *(undefined8 *)(pFVar2 + 8);
    local_e8 = *(undefined8 *)pFVar2;
    local_118[0] = 5;
    local_114 = 0x100000005;
    local_10c = 0;
    local_108 = 0;
    local_100 = 0xffffffff;
    VisitBinop(this,param_1,local_f8,local_118,5,0xffffffff);
    if (*(int *)(this + 0x78) != 2) goto LAB_012e7018;
    this_00 = *(SimplifiedOperatorBuilder **)(*(long *)this + 0x178);
LAB_012e7004:
    pOVar4 = (Operator *)SimplifiedOperatorBuilder::CheckedUint64Bounds(this_00,pFVar2);
  }
  NodeProperties::ChangeOp(param_1,pOVar4);
LAB_012e7018:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

