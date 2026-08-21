
/* v8::internal::Factory::NumberToStringCacheGet(v8::internal::Object, int) */

Factory * __thiscall
v8::internal::Factory::NumberToStringCacheGet(Factory *this,ulong param_2,int param_3)

{
  uint uVar1;
  Factory *pFVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)(this + 0xf38);
  uVar1 = *(uint *)(uVar3 + ((long)(param_3 << 3) | 7U));
  uVar4 = uVar3 & 0xffffffff00000000;
  if (uVar1 == (uint)param_2) {
LAB_00f7cb98:
    uVar4 = uVar4 | *(uint *)(uVar3 + (long)(int)(param_3 << 3 | 4) + 7);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      pFVar2 = *(Factory **)(this + 0x95a0);
      if (pFVar2 == *(Factory **)(this + 0x95a8)) {
        pFVar2 = (Factory *)HandleScope::Extend((Isolate *)this);
      }
      *(Factory **)(this + 0x95a0) = pFVar2 + 8;
      *(ulong *)pFVar2 = uVar4;
    }
    else {
      pFVar2 = (Factory *)
               CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar4);
    }
  }
  else {
    if ((uVar1 & 1) != 0) {
      if (((((param_2 & 1) != 0) &&
           (*(short *)((uVar4 | 7) + (ulong)*(uint *)((uVar4 | uVar1) - 1)) == 0x42)) &&
          (*(short *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) == 0x42))
         && (*(double *)((uVar4 | uVar1) + 3) == *(double *)(param_2 + 3))) goto LAB_00f7cb98;
    }
    pFVar2 = this + 0xa0;
  }
  return pFVar2;
}

