
/* v8::internal::interpreter::BytecodeRegisterOptimizer::CreateMaterializedEquivalent(v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*)
    */

void __thiscall
v8::internal::interpreter::BytecodeRegisterOptimizer::CreateMaterializedEquivalent
          (BytecodeRegisterOptimizer *this,RegisterInfo *param_1)

{
  int iVar1;
  RegisterInfo RVar2;
  RegisterInfo *pRVar3;
  long *plVar4;
  RegisterInfo *pRVar5;
  RegisterInfo *pRVar6;
  
  pRVar5 = *(RegisterInfo **)(param_1 + 0x10);
  if (pRVar5 != param_1) {
    RVar2 = pRVar5[8];
    pRVar3 = (RegisterInfo *)0x0;
    while (RVar2 == (RegisterInfo)0x0) {
      pRVar6 = pRVar3;
      if (((pRVar5[9] != (RegisterInfo)0x0) && (pRVar6 = pRVar5, pRVar3 != (RegisterInfo *)0x0)) &&
         (*(int *)pRVar3 <= *(int *)pRVar5)) {
        pRVar6 = pRVar3;
      }
      pRVar5 = *(RegisterInfo **)(pRVar5 + 0x10);
      if (pRVar5 == param_1) {
        if (pRVar6 == (RegisterInfo *)0x0) {
          return;
        }
        iVar1 = *(int *)pRVar6;
        if (*(int *)param_1 == *(int *)(this + 8)) {
          (**(code **)(**(long **)(this + 0xa0) + 0x18))(*(long **)(this + 0xa0),iVar1);
        }
        else {
          plVar4 = *(long **)(this + 0xa0);
          if (iVar1 == *(int *)(this + 8)) {
            (**(code **)(*plVar4 + 0x10))();
          }
          else {
            (**(code **)(*plVar4 + 0x20))(plVar4,*(int *)param_1,iVar1);
          }
        }
        if (iVar1 != *(int *)(this + 8)) {
          if (iVar1 <= *(int *)(this + 0x1c)) {
            iVar1 = *(int *)(this + 0x1c);
          }
          *(int *)(this + 0x1c) = iVar1;
        }
        pRVar6[8] = (RegisterInfo)0x1;
        return;
      }
      pRVar3 = pRVar6;
      RVar2 = pRVar5[8];
    }
  }
  return;
}

