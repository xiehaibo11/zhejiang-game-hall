
/* v8::internal::interpreter::BytecodeGenerator::BuildPushUndefinedIntoRegisterList(v8::internal::interpreter::RegisterList*)
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildPushUndefinedIntoRegisterList
          (BytecodeGenerator *this,RegisterList *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  BytecodeArrayBuilder *pBVar4;
  
  iVar1 = *(int *)(this + 0x118);
  iVar2 = *(int *)(this + 0x11c);
  plVar3 = *(long **)(this + 0x120);
  if (iVar2 <= iVar1 + 1) {
    iVar2 = iVar1 + 1;
  }
  *(int *)(this + 0x118) = iVar1 + 1;
  *(int *)(this + 0x11c) = iVar2;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,iVar1);
  }
  iVar2 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = iVar2 + 1;
  if (iVar2 == -1) {
    if (iVar1 == 0) {
LAB_0151ab74:
      pBVar4 = (BytecodeArrayBuilder *)
               BytecodeArrayBuilder::LoadUndefined((BytecodeArrayBuilder *)(this + 0x18));
      BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar4,iVar1);
      return;
    }
  }
  else if (iVar1 == *(int *)param_1 + iVar2) goto LAB_0151ab74;
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","reg.index() == reg_list->last_register().index()");
}

