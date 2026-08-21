
/* v8::internal::compiler::BytecodeLoopAssignments::AddList(v8::internal::interpreter::Register,
   unsigned int) */

void __thiscall
v8::internal::compiler::BytecodeLoopAssignments::AddList
          (BytecodeLoopAssignments *this,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong *puVar6;
  long lVar7;
  int local_28 [2];
  
  if (param_2 < 0) {
    if (param_3 != 0) {
      iVar5 = 0;
      local_28[0] = param_2;
      do {
        lVar7 = *(long *)(this + 8);
        iVar4 = interpreter::Register::ToParameterIndex((Register *)local_28,*(int *)this);
        iVar1 = iVar4 + iVar5;
        if (*(int *)(lVar7 + 4) == 1) {
          puVar6 = (ulong *)(lVar7 + 8);
        }
        else {
          iVar3 = iVar1 + 0x3f;
          if (-1 < iVar1) {
            iVar3 = iVar1;
          }
          puVar6 = (ulong *)(*(long *)(lVar7 + 8) + (long)(iVar3 >> 6) * 8);
        }
        uVar2 = iVar4 + iVar5;
        iVar5 = iVar5 + 1;
        *puVar6 = *puVar6 | 1L << ((ulong)uVar2 & 0x3f);
      } while (param_3 != iVar5);
    }
  }
  else if (param_3 != 0) {
    iVar5 = 0;
    iVar1 = param_2;
    do {
      lVar7 = *(long *)(this + 8);
      if (*(int *)(lVar7 + 4) == 1) {
        puVar6 = (ulong *)(lVar7 + 8);
        iVar4 = iVar5 + param_2;
      }
      else {
        iVar4 = iVar1 + *(int *)this;
        iVar3 = iVar4 + 0x3f;
        if (-1 < iVar4) {
          iVar3 = iVar4;
        }
        puVar6 = (ulong *)(*(long *)(lVar7 + 8) + (long)(iVar3 >> 6) * 8);
        iVar4 = iVar1;
      }
      iVar5 = iVar5 + 1;
      param_3 = param_3 + -1;
      iVar1 = iVar1 + 1;
      *puVar6 = *puVar6 | 1L << ((ulong)(uint)(iVar4 + *(int *)this) & 0x3f);
    } while (param_3 != 0);
  }
  return;
}

