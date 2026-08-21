
/* v8::internal::CallOptimization::GetAccessorContext(v8::internal::Map) const */

ulong __thiscall
v8::internal::CallOptimization::GetAccessorContext(CallOptimization *this,ulong param_2)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(ulong **)this == (ulong *)0x0) {
    uVar3 = param_2 & 0xffffffff00000000;
    uVar2 = uVar3 | *(uint *)(param_2 + 0x13);
    if ((*(uint *)(param_2 + 0x13) & 1) != 0) {
      do {
        if (*(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar2 - 1)) != 0xa2) break;
        puVar1 = (uint *)(uVar2 + 0x13);
        uVar2 = uVar3 | *puVar1;
      } while ((*puVar1 & 1) != 0);
    }
  }
  else {
    uVar2 = **(ulong **)this;
  }
  uVar3 = uVar2 & 0xffffffff00000000;
  return uVar3 | *(uint *)((uVar3 | *(uint *)((uVar3 | *(uint *)(uVar2 + 0xf)) - 1)) + 0x13);
}

