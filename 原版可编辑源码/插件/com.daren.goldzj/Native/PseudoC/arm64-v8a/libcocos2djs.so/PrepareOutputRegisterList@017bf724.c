
/* v8::internal::interpreter::BytecodeRegisterOptimizer::PrepareOutputRegisterList(v8::internal::interpreter::RegisterList)
    */

void __thiscall
v8::internal::interpreter::BytecodeRegisterOptimizer::PrepareOutputRegisterList
          (BytecodeRegisterOptimizer *this,ulong param_2)

{
  uint uVar1;
  int iVar2;
  RegisterInfo *pRVar3;
  int iVar4;
  ulong uVar5;
  
  uVar5 = param_2 >> 0x20;
  iVar4 = (int)(param_2 >> 0x20);
  iVar2 = 0;
  if (iVar4 != 0) {
    iVar2 = (int)param_2;
  }
  if (0 < iVar4) {
    do {
      pRVar3 = *(RegisterInfo **)
                (*(long *)(this + 0x20) + (long)(iVar2 + *(int *)(this + 0x40)) * 8);
      if (pRVar3[8] != (RegisterInfo)0x0) {
        CreateMaterializedEquivalent(this,pRVar3);
      }
      iVar4 = *(int *)(this + 0x98);
      iVar2 = iVar2 + 1;
      *(int *)(this + 0x98) = iVar4 + 1;
      *(undefined8 *)(*(long *)(pRVar3 + 0x10) + 0x18) = *(undefined8 *)(pRVar3 + 0x18);
      *(undefined8 *)(*(long *)(pRVar3 + 0x18) + 0x10) = *(undefined8 *)(pRVar3 + 0x10);
      *(RegisterInfo **)(pRVar3 + 0x10) = pRVar3;
      *(RegisterInfo **)(pRVar3 + 0x18) = pRVar3;
      *(int *)(pRVar3 + 4) = iVar4 + 1;
      pRVar3[8] = (RegisterInfo)0x1;
      iVar4 = *(int *)pRVar3;
      if (*(int *)pRVar3 <= *(int *)(this + 0x1c)) {
        iVar4 = *(int *)(this + 0x1c);
      }
      uVar1 = (int)uVar5 - 1;
      uVar5 = (ulong)uVar1;
      *(int *)(this + 0x1c) = iVar4;
    } while (uVar1 != 0);
  }
  return;
}

