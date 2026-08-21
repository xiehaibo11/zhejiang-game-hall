
/* v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterTransfer(v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*,
   v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*) */

void __thiscall
v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterTransfer
          (BytecodeRegisterOptimizer *this,RegisterInfo *param_1,RegisterInfo *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined4 uVar3;
  int iVar4;
  RegisterInfo RVar5;
  long *plVar6;
  long lVar7;
  RegisterInfo *pRVar8;
  ulong uVar9;
  
  if (*(int *)(this + 8) == *(int *)param_2) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)param_2 < *(int *)(this + 0x18);
  }
  if (*(int *)(param_2 + 4) == *(int *)(param_1 + 4)) {
    if (!bVar1) {
      return;
    }
    if (param_2[8] != (RegisterInfo)0x0) {
      return;
    }
  }
  else {
    if (param_2[8] != (RegisterInfo)0x0) {
      CreateMaterializedEquivalent(this,param_2);
    }
    if (param_2[10] == (RegisterInfo)0x0) {
      param_2[10] = (RegisterInfo)0x1;
      lVar7 = *(long *)(this + 0x50);
      uVar2 = 0;
      if (*(long *)(this + 0x58) - lVar7 != 0) {
        uVar2 = (*(long *)(this + 0x58) - lVar7) * 0x40 - 1;
      }
      uVar9 = *(long *)(this + 0x80) + *(long *)(this + 0x78);
      if (uVar2 == uVar9) {
        std::__ndk1::
        deque<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*,v8::internal::RecyclingZoneAllocator<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*>>
        ::__add_back_capacity
                  ((deque<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*,v8::internal::RecyclingZoneAllocator<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*>>
                    *)(this + 0x48));
        lVar7 = *(long *)(this + 0x50);
        uVar9 = *(long *)(this + 0x78) + *(long *)(this + 0x80);
      }
      *(RegisterInfo **)(*(long *)(lVar7 + (uVar9 >> 6 & 0x3fffffffffffff8)) + (uVar9 & 0x1ff) * 8)
           = param_2;
      *(long *)(this + 0x80) = *(long *)(this + 0x80) + 1;
    }
    *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(RegisterInfo **)(param_2 + 0x18) = param_1;
    *(RegisterInfo **)(param_1 + 0x10) = param_2;
    *(RegisterInfo **)(*(long *)(param_2 + 0x10) + 0x18) = param_2;
    uVar3 = *(undefined4 *)(param_1 + 4);
    param_2[8] = (RegisterInfo)0x0;
    *(undefined4 *)(param_2 + 4) = uVar3;
    this[0xa8] = (BytecodeRegisterOptimizer)0x1;
    if (!bVar1) goto LAB_017bf648;
  }
  param_2[8] = (RegisterInfo)0x0;
  RVar5 = param_1[8];
  pRVar8 = param_1;
  while (RVar5 == (RegisterInfo)0x0) {
    pRVar8 = *(RegisterInfo **)(pRVar8 + 0x10);
    RVar5 = pRVar8[8];
  }
  iVar4 = *(int *)param_2;
  if (*(int *)pRVar8 == *(int *)(this + 8)) {
    (**(code **)(**(long **)(this + 0xa0) + 0x18))(*(long **)(this + 0xa0),iVar4);
  }
  else {
    plVar6 = *(long **)(this + 0xa0);
    if (iVar4 == *(int *)(this + 8)) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else {
      (**(code **)(*plVar6 + 0x20))(plVar6,*(int *)pRVar8,iVar4);
    }
  }
  if (iVar4 != *(int *)(this + 8)) {
    if (iVar4 <= *(int *)(this + 0x1c)) {
      iVar4 = *(int *)(this + 0x1c);
    }
    *(int *)(this + 0x1c) = iVar4;
  }
  param_2[8] = (RegisterInfo)0x1;
LAB_017bf648:
  if ((*(int *)(this + 8) != *(int *)param_1) &&
     (iVar4 = *(int *)(this + 0x18), *(int *)param_1 < iVar4)) {
    for (pRVar8 = *(RegisterInfo **)(param_1 + 0x10); pRVar8 != param_1;
        pRVar8 = *(RegisterInfo **)(pRVar8 + 0x10)) {
      if (iVar4 <= *(int *)pRVar8) {
        pRVar8[8] = (RegisterInfo)0x0;
      }
    }
  }
  return;
}

