
/* v8::internal::compiler::BytecodeLoopAssignments::Union(v8::internal::compiler::BytecodeLoopAssignments
   const&) */

void __thiscall
v8::internal::compiler::BytecodeLoopAssignments::Union
          (BytecodeLoopAssignments *this,BytecodeLoopAssignments *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(param_1 + 8);
  if (*(int *)(lVar1 + 4) == 1) {
    *(ulong *)(lVar1 + 8) = *(ulong *)(lVar1 + 8) | *(ulong *)(lVar2 + 8);
    return;
  }
  if (0 < *(int *)(lVar1 + 4)) {
    lVar3 = 0;
    do {
      lVar4 = lVar3 * 8;
      lVar3 = lVar3 + 1;
      *(ulong *)(*(long *)(lVar1 + 8) + lVar4) =
           *(ulong *)(*(long *)(lVar1 + 8) + lVar4) | *(ulong *)(*(long *)(lVar2 + 8) + lVar4);
    } while (lVar3 < *(int *)(lVar1 + 4));
  }
  return;
}

