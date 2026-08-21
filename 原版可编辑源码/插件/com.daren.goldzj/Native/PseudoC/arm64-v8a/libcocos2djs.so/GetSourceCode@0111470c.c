
/* v8::internal::SharedFunctionInfo::GetSourceCode(v8::internal::Handle<v8::internal::SharedFunctionInfo>)
    */

Isolate * v8::internal::SharedFunctionInfo::GetSourceCode(ulong *param_1)

{
  int iVar1;
  int iVar2;
  Isolate *pIVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  Isolate *pIVar7;
  ulong local_48;
  ulong local_28;
  
  pIVar7 = (Isolate *)(*param_1 & 0xffffffff00000000);
  uVar4 = (ulong)pIVar7 | (ulong)*(uint *)(*param_1 + 0xf);
  uVar5 = (ulong)pIVar7 | 7;
  uVar6 = uVar4;
  if (*(short *)(uVar5 + *(uint *)(uVar4 - 1)) == 0x5b) {
    uVar6 = (ulong)*(uint *)(uVar4 + 0xb);
  }
  if ((uint)uVar6 != *(uint *)(pIVar7 + 0xa0)) {
    uVar6 = uVar4;
    if (*(short *)(uVar5 + *(uint *)(uVar4 - 1)) == 0x5b) {
      uVar6 = (ulong)pIVar7 | (ulong)*(uint *)(uVar4 + 0xb);
    }
    if ((*(uint *)(uVar6 + 3) != *(uint *)(pIVar7 + 0xa0)) || ((*(uint *)(uVar6 + 3) & 1) == 0)) {
      if (*(short *)(uVar5 + *(uint *)(uVar4 - 1)) == 0x5b) {
        uVar4 = (ulong)pIVar7 | (ulong)*(uint *)(uVar4 + 0xb);
      }
      uVar6 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 3);
      if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        pIVar3 = *(Isolate **)(pIVar7 + 0x95a0);
        if (pIVar3 == *(Isolate **)(pIVar7 + 0x95a8)) {
          pIVar3 = (Isolate *)HandleScope::Extend(pIVar7);
        }
        *(Isolate **)(pIVar7 + 0x95a0) = pIVar3 + 8;
        *(ulong *)pIVar3 = uVar6;
      }
      else {
        pIVar3 = (Isolate *)
                 CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar6);
      }
      local_28 = *param_1;
      iVar1 = StartPosition((SharedFunctionInfo *)&local_28);
      local_48 = *param_1;
      iVar2 = EndPosition((SharedFunctionInfo *)&local_48);
      if ((iVar1 == 0) && (*(int *)(*(ulong *)pIVar3 + 7) == iVar2)) {
        return pIVar3;
      }
      pIVar7 = (Isolate *)Factory::NewProperSubString((Factory *)pIVar7,pIVar3,iVar1);
      return pIVar7;
    }
  }
  return pIVar7 + 0xa0;
}

