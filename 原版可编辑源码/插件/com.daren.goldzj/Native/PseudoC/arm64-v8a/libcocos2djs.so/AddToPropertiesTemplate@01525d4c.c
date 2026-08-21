
/* v8::internal::ClassBoilerplate::AddToPropertiesTemplate(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::NameDictionary>, v8::internal::Handle<v8::internal::Name>,
   int, v8::internal::ClassBoilerplate::ValueKind, v8::internal::Smi) */

void v8::internal::ClassBoilerplate::AddToPropertiesTemplate
               (Factory *param_1,ulong *param_2,ulong *param_3,int param_4,int param_5,ulong param_6
               )

{
  long lVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulong *puVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  uint *puVar14;
  ulong uVar15;
  uint *puVar16;
  ulong uStack_60;
  ulong uStack_58;
  
  uStack_58 = *param_3;
  uVar15 = *param_2;
  if ((*(uint *)(uStack_58 + 3) & 1) == 0) {
    uVar5 = *(uint *)(uStack_58 + 3) >> 3;
  }
  else {
    uVar5 = String::ComputeAndSetHash((String *)&uStack_58);
  }
  uVar4 = (*(int *)(uVar15 + 0xf) >> 1) - 1;
  uVar5 = uVar4 & uVar5;
  uStack_58 = (ulong)uVar5;
  lVar10 = (ulong)(uVar5 * 3) << 0x22;
  lVar1 = uVar15 + 7;
  iVar13 = *(int *)((lVar10 + 0x1400000000 >> 0x20) + lVar1);
  if (iVar13 == *(int *)(param_1 + 0xa0)) {
LAB_01525ec4:
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
      uStack_60 = *puVar6;
      AccessorPair::set((AccessorPair *)&uStack_60,param_5 != 1,param_6);
    }
    piVar7 = (int *)BaseNameDictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>
                    ::AddNoUpdateNextEnumerationIndex
                              (param_1,param_2,param_3,puVar6,
                               ((uint)(param_5 != 0) | param_4 << 8) + 0x6d0,&uStack_58);
    if (*piVar7 == (int)*param_2) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","*dict == *dictionary");
  }
  if (iVar13 != (int)*param_3) {
    iVar13 = 1;
    do {
      uStack_58 = (ulong)((int)uStack_58 + iVar13 & uVar4);
      lVar10 = uStack_58 * 0xc00000000;
      iVar2 = *(int *)((lVar10 + 0x1400000000 >> 0x20) + lVar1);
      if (iVar2 == *(int *)(param_1 + 0xa0)) goto LAB_01525ec4;
      iVar13 = iVar13 + 1;
    } while (iVar2 != (int)*param_3);
  }
  lVar8 = lVar10 + 0x1c00000000 >> 0x20;
  lVar1 = *param_2 + 7;
  uVar4 = *(uint *)(lVar1 + (lVar10 + 0x1800000000 >> 0x20));
  uVar12 = (ulong)uVar4;
  uVar11 = *param_2 & 0xffffffff00000000;
  uVar5 = *(uint *)(lVar1 + lVar8) & 0xfffffe00;
  uVar15 = uVar11 | uVar12;
  if (param_5 == 0) {
    if ((uVar4 & 1) == 0) {
      if (param_4 <= (int)uVar4 >> 1) {
        return;
      }
    }
    else if (*(short *)((uVar11 | 7) + (ulong)*(uint *)(uVar15 - 1)) == 0x52) {
      puVar14 = (uint *)(uVar15 + 3);
      puVar16 = (uint *)(uVar15 + 7);
      iVar13 = (int)*puVar14 >> 1;
      if ((*puVar14 & 1) != 0) {
        iVar13 = -1;
      }
      iVar2 = (int)*puVar16 >> 1;
      if ((*puVar16 & 1) != 0) {
        iVar2 = -1;
      }
      if ((param_4 <= iVar13) || (param_4 <= iVar2)) {
        if (iVar13 < param_4) {
          param_6 = *(ulong *)(param_1 + 0xb0);
          *puVar14 = (uint)param_6;
          if ((param_6 & 1) == 0) {
            return;
          }
          uVar9 = *(ulong *)((param_6 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar9 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar15,puVar14,param_6);
            uVar9 = *(ulong *)(param_6 & 0xfffffffffffc0000 | 8);
          }
          if ((uVar9 & 0x18) == 0) {
            return;
          }
          bVar3 = *(byte *)((uVar11 | uVar12 & 0xfffffffffffc0000) + 8);
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
          uVar9 = *(ulong *)((param_6 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar9 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar15,puVar16,param_6);
            uVar9 = *(ulong *)(param_6 & 0xfffffffffffc0000 | 8);
          }
          if ((uVar9 & 0x18) == 0) {
            return;
          }
          bVar3 = *(byte *)((uVar11 | uVar12 & 0xfffffffffffc0000) + 8);
          puVar14 = puVar16;
        }
        goto joined_r0x015261bc;
      }
    }
    *(uint *)(lVar8 + lVar1) = uVar5 | 0x1a0;
    uVar15 = *param_2;
    lVar1 = uVar15 + ((long)(uStack_58 * 0xc00000000 + 0x1800000000) >> 0x20);
    *(int *)(lVar1 + 7) = (int)param_6;
    if ((param_6 & 1) == 0) {
      return;
    }
    uVar11 = *(ulong *)((param_6 & 0xfffffffffffc0000) + 8);
    puVar14 = (uint *)(lVar1 + 7);
    if (((uint)uVar11 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar15,puVar14,param_6);
      uVar11 = *(ulong *)(param_6 & 0xfffffffffffc0000 | 8);
    }
  }
  else {
    if (((uVar4 & 1) != 0) && (*(short *)((uVar11 | 7) + (ulong)*(uint *)(uVar15 - 1)) == 0x52)) {
      lVar1 = 7;
      if (param_5 == 1) {
        lVar1 = 3;
      }
      iVar13 = (int)*(uint *)(uVar15 + lVar1) >> 1;
      if ((*(uint *)(uVar15 + lVar1) & 1) != 0) {
        iVar13 = -1;
      }
      if (param_4 <= iVar13) {
        return;
      }
      uStack_60 = uVar15;
      AccessorPair::set((AccessorPair *)&uStack_60,param_5 != 1,param_6);
      return;
    }
    puVar6 = (ulong *)Factory::NewAccessorPair(param_1);
    uStack_60 = *puVar6;
    AccessorPair::set((AccessorPair *)&uStack_60,param_5 != 1,param_6);
    *(uint *)(*param_2 + ((long)(uStack_58 * 0xc00000000 + 0x1c00000000) >> 0x20) + 7) =
         uVar5 | 0x1a2;
    uVar15 = *param_2;
    param_6 = *puVar6;
    lVar1 = uVar15 + ((long)(uStack_58 * 0xc00000000 + 0x1800000000) >> 0x20);
    *(int *)(lVar1 + 7) = (int)param_6;
    if ((param_6 & 1) == 0) {
      return;
    }
    uVar11 = *(ulong *)((param_6 & 0xfffffffffffc0000) + 8);
    puVar14 = (uint *)(lVar1 + 7);
    if (((uint)uVar11 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar15,puVar14,param_6);
      uVar11 = *(ulong *)(param_6 & 0xfffffffffffc0000 | 8);
    }
  }
  if ((uVar11 & 0x18) == 0) {
    return;
  }
  bVar3 = *(byte *)((uVar15 & 0xfffffffffffc0000) + 8);
joined_r0x015261bc:
  if ((bVar3 & 0x18) == 0) {
    Heap_GenerationalBarrierSlow(uVar15,puVar14,param_6);
  }
  return;
}

