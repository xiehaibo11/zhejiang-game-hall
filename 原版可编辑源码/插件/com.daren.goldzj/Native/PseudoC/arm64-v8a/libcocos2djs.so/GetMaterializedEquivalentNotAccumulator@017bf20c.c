
/* v8::internal::interpreter::BytecodeRegisterOptimizer::GetMaterializedEquivalentNotAccumulator(v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*)
    */

RegisterInfo * __thiscall
v8::internal::interpreter::BytecodeRegisterOptimizer::GetMaterializedEquivalentNotAccumulator
          (BytecodeRegisterOptimizer *this,RegisterInfo *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  RegisterInfo *pRVar4;
  RegisterInfo *pRVar5;
  
  pRVar4 = param_1;
  if (param_1[8] == (RegisterInfo)0x0) {
    iVar1 = *(int *)(this + 8);
    do {
      pRVar4 = *(RegisterInfo **)(pRVar4 + 0x10);
      pRVar5 = param_1;
      if (pRVar4 == param_1) {
        do {
          pRVar5 = *(RegisterInfo **)(pRVar5 + 0x10);
        } while (pRVar5[8] == (RegisterInfo)0x0);
        iVar2 = *(int *)param_1;
        if (*(int *)pRVar5 == iVar1) {
          (**(code **)(**(long **)(this + 0xa0) + 0x18))(*(long **)(this + 0xa0),iVar2);
        }
        else {
          plVar3 = *(long **)(this + 0xa0);
          if (iVar2 == iVar1) {
            (**(code **)(*plVar3 + 0x10))();
          }
          else {
            (**(code **)(*plVar3 + 0x20))(plVar3,*(int *)pRVar5,iVar2);
          }
        }
        if (iVar2 != *(int *)(this + 8)) {
          if (iVar2 <= *(int *)(this + 0x1c)) {
            iVar2 = *(int *)(this + 0x1c);
          }
          *(int *)(this + 0x1c) = iVar2;
        }
        param_1[8] = (RegisterInfo)0x1;
        return param_1;
      }
    } while ((pRVar4[8] == (RegisterInfo)0x0) || (*(int *)pRVar4 == iVar1));
  }
  return pRVar4;
}

