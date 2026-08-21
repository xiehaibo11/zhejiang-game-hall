
/* v8::internal::ClassBoilerplate::AddToElementsTemplate(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::NumberDictionary>, unsigned int, int,
   v8::internal::ClassBoilerplate::ValueKind, v8::internal::Smi) */

void v8::internal::ClassBoilerplate::AddToElementsTemplate
               (Factory *param_1,ulong *param_2,uint param_3,int param_4,int param_5,ulong param_6)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  ulong *puVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  double dVar17;
  ulong uStack_58;
  ulong uStack_38;
  
  uVar13 = *param_2;
  uVar12 = (*(ulong *)(*(long *)(param_1 + 0x490) + 7) ^ (ulong)param_3 ^ 0xffffffffffffffff) +
           (*(ulong *)(*(long *)(param_1 + 0x490) + 7) ^ (ulong)param_3) * 0x40000;
  uVar5 = (*(int *)(uVar13 + 0xf) >> 1) - 1;
  uVar12 = (uVar12 ^ uVar12 >> 0x1f) * 0x15;
  uVar12 = (uVar12 ^ uVar12 >> 0xb) * 0x41;
  uStack_58 = (ulong)(uVar5 & ((uint)(uVar12 >> 0x16) ^ (uint)uVar12) & 0x3fffffff);
  uVar3 = *(uint *)(((long)(uStack_58 * 0xc00000000 + 0x1000000000) >> 0x20) + uVar13 + 7);
  if (uVar3 != *(uint *)(param_1 + 0xa0)) {
    iVar14 = 1;
    do {
      if (uVar3 != (uint)*(undefined8 *)(param_1 + 0xa8)) {
        if ((uVar3 & 1) == 0) {
          dVar17 = (double)((int)uVar3 >> 1);
        }
        else {
          dVar17 = *(double *)((uVar13 & 0xffffffff00000000 | (ulong)uVar3) + 3);
        }
        if ((int)dVar17 == param_3) {
          lVar8 = (ulong)(uint)((int)uStack_58 * 3) << 0x22;
          lVar9 = lVar8 + 0x1800000000 >> 0x20;
          lVar1 = *param_2 + 7;
          uVar5 = *(uint *)(lVar1 + (lVar8 + 0x1400000000 >> 0x20));
          uVar11 = (ulong)uVar5;
          uVar13 = *param_2 & 0xffffffff00000000;
          uVar3 = *(uint *)(lVar1 + lVar9) & 0xfffffe00;
          uVar12 = uVar13 | uVar11;
          if (param_5 == 0) {
            if ((uVar5 & 1) == 0) {
              if (param_4 <= (int)uVar5 >> 1) {
                return;
              }
            }
            else if (*(short *)((uVar13 | 7) + (ulong)*(uint *)(uVar12 - 1)) == 0x52) {
              puVar15 = (uint *)(uVar12 + 3);
              puVar16 = (uint *)(uVar12 + 7);
              iVar14 = (int)*puVar15 >> 1;
              if ((*puVar15 & 1) != 0) {
                iVar14 = -1;
              }
              iVar2 = (int)*puVar16 >> 1;
              if ((*puVar16 & 1) != 0) {
                iVar2 = -1;
              }
              if ((param_4 <= iVar14) || (param_4 <= iVar2)) {
                if (iVar14 < param_4) {
                  param_6 = *(ulong *)(param_1 + 0xb0);
                  *puVar15 = (uint)param_6;
                  if ((param_6 & 1) == 0) {
                    return;
                  }
                  uVar10 = *(ulong *)((param_6 & 0xfffffffffffc0000) + 8);
                  if (((uint)uVar10 >> 0x12 & 1) != 0) {
                    Heap_MarkingBarrierSlow(uVar12,puVar15,param_6);
                    uVar10 = *(ulong *)(param_6 & 0xfffffffffffc0000 | 8);
                  }
                  if ((uVar10 & 0x18) == 0) {
                    return;
                  }
                  bVar4 = *(byte *)((uVar13 | uVar11 & 0xfffffffffffc0000) + 8);
                }
                else {
                  if (param_4 <= iVar2) {
                    return;
                  }
                  param_6 = *(ulong *)(param_1 + 0xb0);
                  *puVar16 = (uint)param_6;
                  if ((param_6 & 1) == 0) {
                    return;
                  }
                  uVar10 = *(ulong *)((param_6 & 0xfffffffffffc0000) + 8);
                  if (((uint)uVar10 >> 0x12 & 1) != 0) {
                    Heap_MarkingBarrierSlow(uVar12,puVar16,param_6);
                    uVar10 = *(ulong *)(param_6 & 0xfffffffffffc0000 | 8);
                  }
                  if ((uVar10 & 0x18) == 0) {
                    return;
                  }
                  bVar4 = *(byte *)((uVar13 | uVar11 & 0xfffffffffffc0000) + 8);
                  puVar15 = puVar16;
                }
                goto joined_r0x015266a4;
              }
            }
            *(uint *)(lVar9 + lVar1) = uVar3 | 0x1a0;
            uVar12 = *param_2;
            lVar1 = uVar12 + ((long)(uStack_58 * 0xc00000000 + 0x1400000000) >> 0x20);
            *(int *)(lVar1 + 7) = (int)param_6;
            if ((param_6 & 1) == 0) {
              return;
            }
            uVar13 = *(ulong *)((param_6 & 0xfffffffffffc0000) + 8);
            puVar15 = (uint *)(lVar1 + 7);
            if (((uint)uVar13 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar12,puVar15,param_6);
              uVar13 = *(ulong *)(param_6 & 0xfffffffffffc0000 | 8);
            }
          }
          else {
            if (((uVar5 & 1) != 0) &&
               (*(short *)((uVar13 | 7) + (ulong)*(uint *)(uVar12 - 1)) == 0x52)) {
              lVar1 = 7;
              if (param_5 == 1) {
                lVar1 = 3;
              }
              iVar14 = (int)*(uint *)(uVar12 + lVar1) >> 1;
              if ((*(uint *)(uVar12 + lVar1) & 1) != 0) {
                iVar14 = -1;
              }
              if (param_4 <= iVar14) {
                return;
              }
              uStack_38 = uVar12;
              AccessorPair::set((AccessorPair *)&uStack_38,param_5 != 1,param_6);
              return;
            }
            puVar6 = (ulong *)Factory::NewAccessorPair(param_1);
            uStack_38 = *puVar6;
            AccessorPair::set((AccessorPair *)&uStack_38,param_5 != 1,param_6);
            *(uint *)(*param_2 + ((long)(uStack_58 * 0xc00000000 + 0x1800000000) >> 0x20) + 7) =
                 uVar3 | 0x1a2;
            uVar12 = *param_2;
            param_6 = *puVar6;
            lVar1 = uVar12 + ((long)(uStack_58 * 0xc00000000 + 0x1400000000) >> 0x20);
            *(int *)(lVar1 + 7) = (int)param_6;
            if ((param_6 & 1) == 0) {
              return;
            }
            uVar13 = *(ulong *)((param_6 & 0xfffffffffffc0000) + 8);
            puVar15 = (uint *)(lVar1 + 7);
            if (((uint)uVar13 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar12,puVar15,param_6);
              uVar13 = *(ulong *)(param_6 & 0xfffffffffffc0000 | 8);
            }
          }
          if ((uVar13 & 0x18) == 0) {
            return;
          }
          bVar4 = *(byte *)((uVar12 & 0xfffffffffffc0000) + 8);
joined_r0x015266a4:
          if ((bVar4 & 0x18) != 0) {
            return;
          }
          Heap_GenerationalBarrierSlow(uVar12,puVar15,param_6);
          return;
        }
      }
      uStack_58 = (ulong)((int)uStack_58 + iVar14 & uVar5);
      uVar3 = *(uint *)(((long)(uStack_58 * 0xc00000000 + 0x1000000000) >> 0x20) + uVar13 + 7);
      iVar14 = iVar14 + 1;
    } while (uVar3 != *(uint *)(param_1 + 0xa0));
  }
  uStack_58 = 0xffffffffffffffff;
  if (param_5 == 0) {
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(param_1 + 0x95a0);
      if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend((Isolate *)param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar6 + 1;
      *puVar6 = param_6;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),param_6);
    }
  }
  else {
    puVar6 = (ulong *)Factory::NewAccessorPair(param_1);
    uStack_38 = *puVar6;
    AccessorPair::set((AccessorPair *)&uStack_38,param_5 != 1,param_6);
  }
  piVar7 = (int *)Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::
                  Add(param_1,param_2,param_3,puVar6,param_5 != 0 | 0xd0,&uStack_58);
  if (*piVar7 == (int)*param_2) {
    uStack_38 = *param_2;
    NumberDictionary::UpdateMaxNumberKey((NumberDictionary *)&uStack_38,param_3,0);
    *(undefined4 *)(*param_2 + 0x13) = 2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","*dict == *dictionary");
}

