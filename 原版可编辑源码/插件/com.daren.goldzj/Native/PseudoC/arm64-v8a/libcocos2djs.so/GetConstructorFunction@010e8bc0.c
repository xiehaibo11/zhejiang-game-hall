
/* v8::internal::Map::GetConstructorFunction(v8::internal::Handle<v8::internal::Map>,
   v8::internal::Handle<v8::internal::Context>) */

ulong * v8::internal::Map::GetConstructorFunction(long *param_1,ulong *param_2)

{
  byte bVar1;
  ulong *puVar2;
  Isolate *pIVar3;
  ulong uVar4;
  
  if ((*(ushort *)(*param_1 + 7) < 0x44) && (bVar1 = *(byte *)(*param_1 + 4), bVar1 != 0)) {
    pIVar3 = (Isolate *)(*param_2 & 0xffffffff00000000);
    uVar4 = (ulong)pIVar3 | (ulong)*(uint *)(*param_2 + (ulong)bVar1 * 4 + 7);
    if (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar4;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8),uVar4);
    }
  }
  else {
    puVar2 = (ulong *)0x0;
  }
  return puVar2;
}

