
/* v8::internal::OrderedHashSetHandler::AdjustRepresentation(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SmallOrderedHashSet>) */

long * v8::internal::OrderedHashSetHandler::AdjustRepresentation(Isolate *param_1,ulong *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  iVar3 = base::bits::RoundUpToPowerOfTwo32(0x200);
  if (iVar3 < 0x1999999) {
    iVar2 = iVar3;
    if (iVar3 < 0) {
      iVar2 = iVar3 + 1;
    }
    uVar1 = iVar2 >> 1;
    uVar7 = (ulong)uVar1;
    plVar6 = (long *)Factory::NewFixedArrayWithMap<v8::internal::FixedArray>
                               (param_1,0x36,uVar1 + iVar3 * 2 + 3,0);
    lVar5 = *plVar6;
    if (1 < iVar3) {
      iVar3 = 0xc;
      do {
        *(undefined4 *)(lVar5 + iVar3 + 7) = 0xfffffffe;
        lVar5 = *plVar6;
        uVar7 = uVar7 - 1;
        iVar3 = iVar3 + 4;
      } while (uVar7 != 0);
    }
    *(uint *)(lVar5 + 0xf) = uVar1 << 1;
    *(undefined4 *)(*plVar6 + 7) = 0;
    *(undefined4 *)(*plVar6 + 0xb) = 0;
    if (plVar6 != (long *)0x0) {
      uVar7 = *param_2;
      lVar5 = (ulong)*(byte *)(uVar7 + 4) + (ulong)*(byte *)(uVar7 + 3);
      if ((int)lVar5 != 0) {
        lVar8 = 4;
        do {
          uVar7 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + lVar8 + 3);
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar4 = *(ulong **)(param_1 + 0x95a0);
            if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
              puVar4 = (ulong *)HandleScope::Extend(param_1);
            }
            *(ulong **)(param_1 + 0x95a0) = puVar4 + 1;
            *puVar4 = uVar7;
            iVar3 = (int)*puVar4;
            if ((*puVar4 & 1) != 0) goto LAB_0112548c;
LAB_01125498:
            plVar6 = (long *)OrderedHashSet::Add(param_1,plVar6);
            if (plVar6 == (long *)0x0) {
              return (long *)0x0;
            }
          }
          else {
            puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
            iVar3 = (int)*puVar4;
            if ((*puVar4 & 1) == 0) goto LAB_01125498;
LAB_0112548c:
            if (iVar3 != *(int *)(param_1 + 0xa8)) goto LAB_01125498;
          }
          if (lVar5 * 4 - lVar8 == 0) {
            return plVar6;
          }
          uVar7 = *param_2;
          lVar8 = lVar8 + 4;
        } while( true );
      }
    }
  }
  else {
    plVar6 = (long *)0x0;
  }
  return plVar6;
}

