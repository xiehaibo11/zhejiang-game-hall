
/* v8::internal::compiler::BranchElimination::UpdateConditions(v8::internal::compiler::Node*,
   v8::internal::compiler::BranchElimination::ControlPathConditions) */

long __thiscall
v8::internal::compiler::BranchElimination::UpdateConditions
          (BranchElimination *this,long param_1,long *param_3)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  vector<v8::internal::compiler::BranchElimination::ControlPathConditions,v8::internal::ZoneAllocator<v8::internal::compiler::BranchElimination::ControlPathConditions>>
  *this_00;
  ulong uVar10;
  undefined8 local_28;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  uVar10 = (ulong)uVar2 & 0xffffff;
  if (*(ulong *)(this + 0x40) <= uVar10) {
    std::__ndk1::vector<bool,v8::internal::ZoneAllocator<bool>>::resize
              ((vector<bool,v8::internal::ZoneAllocator<bool>> *)(this + 0x38),uVar10 + 1,false);
  }
  lVar4 = *(long *)(this + 0x38);
  uVar9 = 1L << ((ulong)uVar2 & 0x3f);
  uVar6 = *(ulong *)(lVar4 + (uVar10 >> 6) * 8);
  bVar3 = (uVar6 & uVar9) == 0;
  if (bVar3) {
    *(ulong *)(lVar4 + (uVar10 >> 6) * 8) = uVar6 | uVar9;
  }
  this_00 = (vector<v8::internal::compiler::BranchElimination::ControlPathConditions,v8::internal::ZoneAllocator<v8::internal::compiler::BranchElimination::ControlPathConditions>>
             *)(this + 0x18);
  lVar4 = *(long *)this_00;
  uVar6 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  uVar10 = *(long *)(this + 0x20) - lVar4 >> 3;
  if (uVar10 <= uVar6) {
    local_28 = 0;
    std::__ndk1::
    vector<v8::internal::compiler::BranchElimination::ControlPathConditions,v8::internal::ZoneAllocator<v8::internal::compiler::BranchElimination::ControlPathConditions>>
    ::__append(this_00,(uVar6 - uVar10) + 1,(ControlPathConditions *)&local_28);
    lVar4 = *(long *)this_00;
  }
  plVar5 = *(long **)(lVar4 + uVar6 * 8);
  if (plVar5 == (long *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = plVar5[4];
  }
  if (param_3 == (long *)0x0) {
    if (lVar7 == 0) goto LAB_0166ad20;
  }
  else if (lVar7 == param_3[4]) {
LAB_0166ad20:
    plVar8 = param_3;
    if (plVar5 != param_3) {
      do {
        if (((*plVar5 != *plVar8) || (plVar5[1] != plVar8[1])) ||
           ((char)plVar5[2] != (char)plVar8[2])) goto LAB_0166ad8c;
        plVar5 = (long *)plVar5[3];
        plVar1 = plVar8 + 3;
        plVar8 = (long *)*plVar1;
      } while (plVar5 != (long *)*plVar1);
    }
    if (!bVar3) {
      return 0;
    }
    return param_1;
  }
LAB_0166ad8c:
  *(long **)(lVar4 + uVar6 * 8) = param_3;
  return param_1;
}

