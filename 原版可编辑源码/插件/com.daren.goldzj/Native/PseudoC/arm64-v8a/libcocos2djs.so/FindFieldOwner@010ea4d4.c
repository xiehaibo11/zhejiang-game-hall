
/* v8::internal::Map::FindFieldOwner(v8::internal::Isolate*, v8::internal::InternalIndex) const */

ulong __thiscall v8::internal::Map::FindFieldOwner(Map *this,ulong param_1,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)this;
  while( true ) {
    uVar1 = uVar2;
    uVar2 = *(uint *)(uVar2 + 0x13) + param_1;
    if (((((uVar2 & 1) != 0) && (*(short *)((param_1 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0xa2))
        || (uVar2 = *(ulong *)(param_1 + 0xa0), (uVar2 & 1) != 0)) &&
       ((int)uVar2 == *(int *)(param_1 + 0xa0))) break;
    if ((int)(*(uint *)(uVar2 + 0xb) >> 10 & 0x3ff) <= param_3) {
      return uVar1;
    }
  }
  return uVar1;
}

