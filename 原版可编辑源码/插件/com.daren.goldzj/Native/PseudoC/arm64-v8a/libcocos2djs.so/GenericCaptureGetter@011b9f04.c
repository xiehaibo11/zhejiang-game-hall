
/* v8::internal::RegExpUtils::GenericCaptureGetter(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::RegExpMatchInfo>, int, bool*) */

Isolate * v8::internal::RegExpUtils::GenericCaptureGetter
                    (Isolate *param_1,ulong *param_2,int param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  Isolate *pIVar3;
  ulong uVar4;
  
  uVar4 = *param_2;
  if (param_3 * 2 < *(int *)(uVar4 + 7) >> 1) {
    iVar1 = *(int *)(uVar4 + 7 + (long)(param_3 * 8 + 0xc)) >> 1;
    if ((iVar1 != -1) &&
       (iVar2 = *(int *)(uVar4 + ((long)(int)((param_3 << 3 | 4U) + 0xc) | 7U)) >> 1, iVar2 != -1))
    {
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = 1;
        uVar4 = *param_2;
      }
      uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xb);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        pIVar3 = *(Isolate **)(param_1 + 0x95a0);
        if (pIVar3 == *(Isolate **)(param_1 + 0x95a8)) {
          pIVar3 = (Isolate *)HandleScope::Extend(param_1);
        }
        *(Isolate **)(param_1 + 0x95a0) = pIVar3 + 8;
        *(ulong *)pIVar3 = uVar4;
      }
      else {
        pIVar3 = (Isolate *)
                 CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
      }
      if ((iVar1 == 0) && (*(int *)(*(ulong *)pIVar3 + 7) == iVar2)) {
        return pIVar3;
      }
      pIVar3 = (Isolate *)Factory::NewProperSubString((Factory *)param_1,pIVar3,iVar1,iVar2);
      return pIVar3;
    }
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  return param_1 + 200;
}

