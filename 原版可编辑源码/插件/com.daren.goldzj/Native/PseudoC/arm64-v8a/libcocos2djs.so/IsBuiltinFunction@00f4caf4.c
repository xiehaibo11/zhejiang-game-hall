
/* v8::internal::IsBuiltinFunction(v8::internal::Isolate*, v8::internal::HeapObject,
   v8::internal::Builtins::Name) */

bool v8::internal::IsBuiltinFunction(long param_1,ulong param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  if (*(short *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) == 0x439) {
    iVar1 = *(int *)(param_2 + 0x17);
    iVar3 = Builtins::builtin((Builtins *)(param_1 + 0x9e00),param_3);
    bVar2 = iVar1 == iVar3;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

