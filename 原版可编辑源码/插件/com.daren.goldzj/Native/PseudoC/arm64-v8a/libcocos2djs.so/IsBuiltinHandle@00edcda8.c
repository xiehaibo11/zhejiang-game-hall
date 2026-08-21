
/* v8::internal::Builtins::IsBuiltinHandle(v8::internal::Handle<v8::internal::HeapObject>, int*)
   const */

undefined8 __thiscall
v8::internal::Builtins::IsBuiltinHandle(Builtins *this,ulong param_2,int *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)this;
  uVar1 = Heap::builtin_address((Heap *)(lVar4 + 0x8850),0);
  uVar2 = Heap::builtin_address((Heap *)(lVar4 + 0x8850),0x5bc);
  uVar3 = 0;
  if ((uVar1 <= param_2) && (param_2 < uVar2)) {
    uVar3 = 1;
    *param_3 = (int)param_2 - (int)uVar1 >> 3;
  }
  return uVar3;
}

