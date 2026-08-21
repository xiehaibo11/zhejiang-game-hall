
/* v8::internal::OrderedHashMapHandler::AdjustRepresentation(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SmallOrderedHashMap>) */

long * v8::internal::OrderedHashMapHandler::AdjustRepresentation(Isolate *param_1,ulong *param_2)

{
  Isolate *pIVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong *puVar5;
  ulong *puVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  
  iVar4 = base::bits::RoundUpToPowerOfTwo32(0x200);
  if (iVar4 < 0x1249249) {
    iVar3 = iVar4;
    if (iVar4 < 0) {
      iVar3 = iVar4 + 1;
    }
    uVar2 = iVar3 >> 1;
    uVar9 = (ulong)uVar2;
    plVar8 = (long *)Factory::NewFixedArrayWithMap<v8::internal::FixedArray>
                               (param_1,0x35,uVar2 + iVar4 * 3 + 3,0);
    lVar7 = *plVar8;
    if (1 < iVar4) {
      iVar4 = 0xc;
      do {
        *(undefined4 *)(lVar7 + iVar4 + 7) = 0xfffffffe;
        lVar7 = *plVar8;
        uVar9 = uVar9 - 1;
        iVar4 = iVar4 + 4;
      } while (uVar9 != 0);
    }
    *(uint *)(lVar7 + 0xf) = uVar2 << 1;
    *(undefined4 *)(*plVar8 + 7) = 0;
    *(undefined4 *)(*plVar8 + 0xb) = 0;
    if (plVar8 != (long *)0x0) {
      uVar9 = *param_2;
      lVar7 = (ulong)*(byte *)(uVar9 + 4) + (ulong)*(byte *)(uVar9 + 3);
      if ((int)lVar7 != 0) {
        lVar10 = 0;
        pIVar1 = param_1 + 0x95a0;
        do {
          uVar9 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + lVar10 + 7);
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar5 = *(ulong **)pIVar1;
            if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
              puVar5 = (ulong *)HandleScope::Extend(param_1);
            }
            *(ulong **)pIVar1 = puVar5 + 1;
            *puVar5 = uVar9;
            iVar4 = (int)*puVar5;
            if ((*puVar5 & 1) != 0) goto LAB_011252b0;
LAB_011252bc:
            uVar9 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(lVar10 + *param_2 + 0xb);
            if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar6 = *(ulong **)pIVar1;
              if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
                puVar6 = (ulong *)HandleScope::Extend(param_1);
              }
              *(ulong **)pIVar1 = puVar6 + 1;
              *puVar6 = uVar9;
            }
            else {
              puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
            }
            plVar8 = (long *)OrderedHashMap::Add(param_1,plVar8,puVar5,puVar6);
            if (plVar8 == (long *)0x0) {
              return (long *)0x0;
            }
          }
          else {
            puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
            iVar4 = (int)*puVar5;
            if ((*puVar5 & 1) == 0) goto LAB_011252bc;
LAB_011252b0:
            if (iVar4 != *(int *)(param_1 + 0xa8)) goto LAB_011252bc;
          }
          if (lVar7 * 8 + -8 == lVar10) {
            return plVar8;
          }
          uVar9 = *param_2;
          lVar10 = lVar10 + 8;
        } while( true );
      }
    }
  }
  else {
    plVar8 = (long *)0x0;
  }
  return plVar8;
}

