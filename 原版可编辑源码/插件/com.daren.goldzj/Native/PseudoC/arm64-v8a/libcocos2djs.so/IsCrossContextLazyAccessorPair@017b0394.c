
/* v8::internal::CallOptimization::IsCrossContextLazyAccessorPair(v8::internal::Context,
   v8::internal::Map) const */

bool __thiscall
v8::internal::CallOptimization::IsCrossContextLazyAccessorPair
          (CallOptimization *this,int param_2,ulong param_3)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(long *)this != 0) {
    return false;
  }
  uVar3 = param_3 & 0xffffffff00000000;
  uVar2 = uVar3 | *(uint *)(param_3 + 0x13);
  if ((*(uint *)(param_3 + 0x13) & 1) != 0) {
    do {
      if (*(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar2 - 1)) != 0xa2) break;
      puVar1 = (uint *)(uVar2 + 0x13);
      uVar2 = uVar3 | *puVar1;
    } while ((*puVar1 & 1) != 0);
  }
  return *(int *)((uVar2 & 0xffffffff00000000 |
                  (ulong)*(uint *)((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0xf)) - 1)
                  ) + 0x13) != param_2;
}

