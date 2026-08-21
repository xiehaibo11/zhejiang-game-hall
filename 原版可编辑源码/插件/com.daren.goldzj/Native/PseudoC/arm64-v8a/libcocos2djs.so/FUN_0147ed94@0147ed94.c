
ulong * FUN_0147ed94(Isolate *param_1,ulong *param_2,uint param_3,int param_4)

{
  Isolate *pIVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  double dVar10;
  
  pIVar1 = param_1 + 0x95a0;
  if ((int)param_3 < 0x401) {
    uVar6 = *param_2 & 0xffffffff00000000;
    uVar3 = *(uint *)((uVar6 | *(uint *)(*param_2 + 0xc3)) + (long)(int)(param_3 * 4 + -4) + 7);
    uVar6 = uVar6 | uVar3;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pIVar1;
      if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
        puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar5 + 1;
      *puVar5 = uVar6;
      if ((uVar3 & 1) == 0) {
        return puVar5;
      }
    }
    else {
      puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
      uVar6 = *puVar5;
      if ((uVar6 & 1) == 0) {
        return puVar5;
      }
    }
    if ((int)uVar6 != *(int *)(param_1 + 0xa0)) {
      return puVar5;
    }
  }
  else if (((int)param_3 < 0x100001) || (param_4 == 1)) {
    uVar7 = *param_2 & 0xffffffff00000000;
    uVar8 = uVar7 | *(uint *)(*param_2 + 0x2a3);
    uVar6 = (*(ulong *)(*(long *)(param_1 + 0x490) + 7) ^ (ulong)param_3 ^ 0xffffffffffffffff) +
            (*(ulong *)(*(long *)(param_1 + 0x490) + 7) ^ (ulong)param_3) * 0x40000;
    uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
    uVar6 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
    uVar4 = (*(int *)(uVar8 + 0xf) >> 1) - 1;
    uVar2 = uVar4 & ((uint)(uVar6 >> 0x16) ^ (uint)uVar6);
    uVar3 = uVar2 & 0x3fffffff;
    uVar2 = *(uint *)(uVar8 + 7 + (long)(int)(uVar2 * 8 + 0xc));
    if (uVar2 != *(uint *)(param_1 + 0xa0)) {
      iVar9 = 1;
      do {
        if (uVar2 != (uint)*(undefined8 *)(param_1 + 0xa8)) {
          if ((uVar2 & 1) == 0) {
            dVar10 = (double)((int)uVar2 >> 1);
          }
          else {
            dVar10 = *(double *)((uVar7 | uVar2) + 3);
          }
          if ((int)dVar10 == param_3) {
            uVar7 = uVar7 | *(uint *)(uVar8 + ((long)(int)(uVar3 * 8 + 0x10) | 7U));
            if (*(CanonicalHandleScope **)(param_1 + 0x95b8) != (CanonicalHandleScope *)0x0) {
              puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
              return puVar5;
            }
            puVar5 = *(ulong **)pIVar1;
            if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
              puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_1);
            }
            *(ulong **)pIVar1 = puVar5 + 1;
            *puVar5 = uVar7;
            return puVar5;
          }
        }
        uVar3 = uVar3 + iVar9 & uVar4;
        uVar2 = *(uint *)(uVar8 + 7 + (long)(int)(uVar3 * 8 + 0xc));
        iVar9 = iVar9 + 1;
      } while (uVar2 != *(uint *)(param_1 + 0xa0));
    }
  }
  return (ulong *)0x0;
}

