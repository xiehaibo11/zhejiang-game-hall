
/* v8::internal::SafepointTable::SafepointTable(v8::internal::Code) */

void __thiscall v8::internal::SafepointTable::SafepointTable(SafepointTable *this,long param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long local_8;
  
  if (*(int *)(param_2 + 0x17) < 0) {
    local_8 = param_2;
    lVar5 = Code::OffHeapInstructionStart((Code *)&local_8);
    param_2 = local_8;
  }
  else {
    lVar5 = param_2 + 0x3f;
  }
  uVar3 = *(uint *)(param_2 + 0x17);
  iVar4 = *(int *)(param_2 + 0x1b);
  this[0x28] = (SafepointTable)0x1;
  *(long *)this = lVar5;
  piVar1 = (int *)(lVar5 + iVar4);
  *(uint *)(this + 8) = uVar3 >> 7 & 0xffffff;
  iVar4 = *piVar1;
  *(int *)(this + 0xc) = iVar4;
  iVar2 = piVar1[1];
  *(int **)(this + 0x18) = piVar1 + 2;
  *(ulong *)(this + 0x20) = (long)(piVar1 + 2) + (ulong)(uint)(iVar4 * 0xc);
  *(int *)(this + 0x10) = iVar2;
  return;
}

