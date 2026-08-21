
/* v8::internal::FastKeyAccumulator::GetKeysFast(v8::internal::GetKeysConversion) */

long * __thiscall
v8::internal::FastKeyAccumulator::GetKeysFast(FastKeyAccumulator *this,undefined4 param_2)

{
  uint uVar1;
  FastKeyAccumulator FVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  Isolate *pIVar6;
  ulong *puVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  ulong *puVar14;
  long *plVar15;
  
  if (this[0x23] == (FastKeyAccumulator)0x0) {
    bVar3 = *(int *)(this + 0x18) == 0;
  }
  else {
    bVar3 = true;
  }
  puVar14 = *(ulong **)(this + 8);
  uVar11 = *puVar14;
  if (bVar3) {
    uVar10 = uVar11 & 0xffffffff00000000;
    uVar12 = uVar10 | *(uint *)(uVar11 - 1);
    if (0x411 < *(ushort *)(uVar12 + 7)) {
      puVar13 = (uint *)(uVar11 - 1);
      if ((*(uint *)(uVar12 + 0xb) >> 0x15 & 1) == 0) {
        if ((~*(uint *)((uVar10 | *puVar13) + 0xb) & 0x3ff) == 0) {
          lVar4 = *(long *)this;
          if ((*(int *)(uVar11 + 7) == *(int *)(lVar4 + 0x168)) ||
             (*(int *)(uVar11 + 7) == *(int *)(lVar4 + 1000))) {
            uVar10 = uVar10 | *(uint *)(uVar11 - 1);
            if ((*(uint *)(uVar10 + 0xb) & 0xffc00) == 0) {
              *(uint *)(uVar10 + 0xb) = *(uint *)(uVar10 + 0xb) & 0xfffffc00;
              plVar5 = (long *)(*(long *)this + 0x168);
LAB_010e1120:
              if (FLAG_trace_for_in_enumerate != '\0') {
                PrintF("| strings=%d symbols=0 elements=0 || prototypes>=1 ||\n",
                       (ulong)(uint)(*(int *)(*plVar5 + 3) >> 1));
              }
              this[0x22] = (FastKeyAccumulator)
                           (((*(uint *)((*puVar14 & 0xffffffff00000000 |
                                        (ulong)*(uint *)(*puVar14 - 1)) + 0xb) ^ 0xffffffff) & 0x3ff
                            ) != 0);
              return plVar5;
            }
            plVar5 = (long *)FUN_010e13f8(lVar4,puVar14);
            if (this[0x20] == (FastKeyAccumulator)0x0) {
              plVar5 = (long *)Factory::CopyFixedArray(*(Factory **)this,plVar5);
            }
            if (plVar5 != (long *)0x0) goto LAB_010e1120;
            uVar10 = *puVar14 & 0xffffffff00000000;
            puVar13 = (uint *)(*puVar14 - 1);
          }
        }
        FVar2 = this[0x21];
        plVar15 = *(long **)(ElementsAccessor::elements_accessors_ +
                            ((ulong)*(byte *)((uVar10 | 10) + (ulong)*puVar13) & 0xf8));
        plVar5 = (long *)FUN_010e13f8(*(undefined8 *)this,puVar14);
        plVar9 = plVar5;
        if (FVar2 == (FastKeyAccumulator)0x0) {
          pIVar6 = (Isolate *)(*puVar14 & 0xffffffff00000000);
          uVar11 = (ulong)pIVar6 | (ulong)*(uint *)(*puVar14 + 7);
          if (*(CanonicalHandleScope **)((ulong)pIVar6 | 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar7 = *(ulong **)(pIVar6 + 0x95a0);
            if (puVar7 == *(ulong **)(pIVar6 + 0x95a8)) {
              puVar7 = (ulong *)HandleScope::Extend(pIVar6);
            }
            *(ulong **)(pIVar6 + 0x95a0) = puVar7 + 1;
            *puVar7 = uVar11;
          }
          else {
            puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)((ulong)pIVar6 | 0x95b8),uVar11);
          }
          plVar9 = (long *)(**(code **)(*plVar15 + 0x58))(plVar15,puVar14,puVar7,plVar5,param_2,2);
        }
        if (FLAG_trace_for_in_enumerate == '\0') {
          return plVar9;
        }
        if (plVar9 == (long *)0x0) {
LAB_010e1264:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","(location_) != nullptr");
        }
        lVar4 = *plVar5;
      }
      else {
        uVar8 = *(undefined8 *)this;
        FVar2 = this[0x21];
        plVar5 = *(long **)(ElementsAccessor::elements_accessors_ +
                           ((ulong)*(byte *)((uVar10 | 10) + (ulong)*puVar13) & 0xf8));
        if ((*(uint *)((uVar10 | 0xb) + (ulong)*puVar13) >> 0x15 & 1) == 0) {
          plVar15 = (long *)FUN_010e13f8(uVar8,puVar14);
        }
        else {
          uVar12 = uVar10 | *(uint *)(uVar11 + 3);
          if (*(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar11 - 1)) == 0xaa) {
            plVar15 = (long *)FUN_010e2394(uVar8,0,0);
          }
          else {
            if ((*(uint *)(uVar11 + 3) & 1) == 0) {
              uVar12 = *(ulong *)(uVar10 + 0x410);
            }
            plVar15 = (long *)FUN_010e2470(uVar8,0,0,uVar12);
          }
        }
        plVar9 = plVar15;
        if (FVar2 == (FastKeyAccumulator)0x0) {
          pIVar6 = (Isolate *)(*puVar14 & 0xffffffff00000000);
          uVar11 = (ulong)pIVar6 | (ulong)*(uint *)(*puVar14 + 7);
          if (*(CanonicalHandleScope **)((ulong)pIVar6 | 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar7 = *(ulong **)(pIVar6 + 0x95a0);
            if (puVar7 == *(ulong **)(pIVar6 + 0x95a8)) {
              puVar7 = (ulong *)HandleScope::Extend(pIVar6);
            }
            *(ulong **)(pIVar6 + 0x95a0) = puVar7 + 1;
            *puVar7 = uVar11;
          }
          else {
            puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)((ulong)pIVar6 | 0x95b8),uVar11);
          }
          plVar9 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5,puVar14,puVar7,plVar15,param_2,2);
        }
        if (FLAG_trace_for_in_enumerate == '\0') {
          return plVar9;
        }
        if (plVar9 == (long *)0x0) goto LAB_010e1264;
        lVar4 = *plVar15;
      }
      uVar1 = *(int *)(lVar4 + 3) >> 1;
      PrintF("| strings=%d symbols=0 elements=%u || prototypes>=1 ||\n",(ulong)uVar1,
             (ulong)((*(int *)(*plVar9 + 3) >> 1) - uVar1));
      return plVar9;
    }
  }
  return (long *)0x0;
}

