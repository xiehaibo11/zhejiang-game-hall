
/* v8::internal::Module::ResetGraph(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Module>) */

void v8::internal::Module::ResetGraph(Isolate *param_1,ulong *param_2)

{
  Isolate *pIVar1;
  uint uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  
  uVar5 = *param_2;
  if ((*(uint *)(uVar5 + 0xb) & 0xfffffffe) == 2) {
    pIVar1 = param_1 + 0x95a0;
    if (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x44) {
      uVar5 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0x23);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar3 = *(ulong **)pIVar1;
        if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
          puVar3 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar3 + 1;
        *puVar3 = uVar5;
      }
      else {
        puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
      }
    }
    else {
      puVar3 = (ulong *)0x0;
    }
    Reset(param_1,param_2);
    if ((*(short *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1)) == 0x44)
       && (uVar5 = *puVar3, 1 < *(int *)(uVar5 + 3))) {
      iVar6 = 0;
      lVar7 = 0;
      do {
        uVar2 = *(uint *)(uVar5 + (long)iVar6 + 7);
        uVar5 = uVar5 & 0xffffffff00000000 | (ulong)uVar2;
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar4 = *(ulong **)pIVar1;
          if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
            puVar4 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar1 = puVar4 + 1;
          *puVar4 = uVar5;
          if ((uVar2 & 1) != 0) goto LAB_010f32e4;
        }
        else {
          puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
          uVar5 = *puVar4;
          if ((uVar5 & 1) != 0) {
LAB_010f32e4:
            if ((*(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) &
                0xfffe) == 0x44) {
              ResetGraph(param_1,puVar4);
            }
          }
        }
        uVar5 = *puVar3;
        lVar7 = lVar7 + 1;
        iVar6 = iVar6 + 4;
      } while (lVar7 < *(int *)(uVar5 + 3) >> 1);
    }
  }
  return;
}

