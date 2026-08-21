
void FUN_01042348(long param_1,undefined1 *param_2,byte *param_3)

{
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  ulong uVar4;
  Builtins *this;
  long lVar5;
  long lVar6;
  long local_28;
  
  bVar2 = *param_3;
  uVar3 = *param_2;
  lVar6 = *(long *)(param_1 + 0x20);
  lVar5 = *(long *)(param_1 + 0x10);
  uVar4 = v8::internal::interpreter::Bytecodes::BytecodeHasHandler(uVar3,bVar2);
  if ((uVar4 & 1) != 0) {
    this = *(Builtins **)(param_1 + 0x18);
    iVar1 = **(int **)(param_1 + 8);
    **(int **)(param_1 + 8) = iVar1 + 1;
    lVar5 = v8::internal::Builtins::builtin(this,iVar1);
  }
  if (*(int *)(lVar5 + 0x17) < 0) {
    local_28 = lVar5;
    lVar5 = v8::internal::Code::OffHeapInstructionStart((Code *)&local_28);
  }
  else {
    lVar5 = lVar5 + 0x3f;
  }
  *(long *)(lVar6 + (ulong)CONCAT11(bVar2 >> 1,uVar3) * 8 + 0x10) = lVar5;
  return;
}

