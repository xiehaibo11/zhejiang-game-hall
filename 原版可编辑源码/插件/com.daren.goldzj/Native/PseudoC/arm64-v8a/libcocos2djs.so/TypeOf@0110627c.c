
/* v8::internal::Object::TypeOf(v8::internal::Isolate*, v8::internal::Handle<v8::internal::Object>)
    */

Isolate * v8::internal::Object::TypeOf(Isolate *param_1,ulong *param_2)

{
  Isolate *pIVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = *param_2;
  if ((uVar2 & 1) != 0) {
    uVar4 = uVar2 & 0xffffffff00000000;
    uVar3 = uVar4 | 7;
    if (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x42) {
      if (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x43) {
        uVar4 = uVar4 | *(uint *)(uVar2 + 0x13);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) != (CanonicalHandleScope *)0x0) {
          pIVar1 = (Isolate *)
                   CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
          return pIVar1;
        }
        pIVar1 = *(Isolate **)(param_1 + 0x95a0);
        if (pIVar1 == *(Isolate **)(param_1 + 0x95a8)) {
          pIVar1 = (Isolate *)HandleScope::Extend(param_1);
        }
        *(Isolate **)(param_1 + 0x95a0) = pIVar1 + 8;
        *(ulong *)pIVar1 = uVar4;
        return pIVar1;
      }
      if ((*(byte *)((uVar4 | 9) + (ulong)*(uint *)(uVar2 - 1)) >> 4 & 1) != 0) {
        return param_1 + 0xaa8;
      }
      if (*(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) < 0x40) {
        return param_1 + 0xa00;
      }
      if (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x40) {
        return param_1 + 0xa20;
      }
      if (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x41) {
        return param_1 + 0x520;
      }
      if ((*(byte *)((uVar4 | 9) + (ulong)*(uint *)(uVar2 - 1)) >> 1 & 1) == 0) {
        return param_1 + 0x8a8;
      }
      return param_1 + 0x6e0;
    }
  }
  return param_1 + 0x890;
}

