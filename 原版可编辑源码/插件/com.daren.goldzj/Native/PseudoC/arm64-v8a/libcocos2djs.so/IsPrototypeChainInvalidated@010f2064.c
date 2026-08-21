
/* v8::internal::Map::IsPrototypeChainInvalidated(v8::internal::Map) */

bool v8::internal::Map::IsPrototypeChainInvalidated(ulong param_1)

{
  ulong uVar1;
  
  if (((*(uint *)(param_1 + 0x1f) & 1) != 0) &&
     (uVar1 = param_1 & 0xffffffff00000000 | (ulong)*(uint *)(param_1 + 0x1f),
     *(short *)((param_1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar1 - 1)) == 0x99)) {
    return *(int *)(uVar1 + 3) != 0;
  }
  return true;
}

