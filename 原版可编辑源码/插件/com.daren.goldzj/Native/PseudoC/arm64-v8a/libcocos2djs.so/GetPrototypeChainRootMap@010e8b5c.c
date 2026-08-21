
/* v8::internal::Map::GetPrototypeChainRootMap(v8::internal::Isolate*) const */

ulong __thiscall v8::internal::Map::GetPrototypeChainRootMap(Map *this,Isolate *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)this;
  if (*(ushort *)(uVar1 + 7) < 0xa9) {
    if (*(byte *)(uVar1 + 4) != 0) {
      uVar2 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
      return uVar2 | *(uint *)((uVar2 | *(uint *)((uVar2 | *(uint *)((uVar2 | *(uint *)(*(ulong *)(
                                                  param_1 + 0x2bc8) - 1)) + 0x13)) +
                                                  (ulong)*(byte *)(uVar1 + 4) * 4 + 7)) + 0x1b);
    }
    uVar1 = *(ulong *)(param_1 + 0xb0) & 0xffffffff00000000 |
            (ulong)*(uint *)(*(ulong *)(param_1 + 0xb0) - 1);
  }
  return uVar1;
}

