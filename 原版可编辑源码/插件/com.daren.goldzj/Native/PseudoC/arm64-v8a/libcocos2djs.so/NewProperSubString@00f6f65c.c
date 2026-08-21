
/* v8::internal::Factory::NewProperSubString(v8::internal::Handle<v8::internal::String>, int, int)
    */

Factory * __thiscall
v8::internal::Factory::NewProperSubString(Factory *this,undefined8 *param_2,int param_3,int param_4)

{
  Factory *pFVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ushort uVar6;
  ushort uVar7;
  ulong *puVar8;
  Factory *pFVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  ulong uVar15;
  uint local_88;
  undefined4 local_84;
  undefined **local_80;
  uint local_78;
  undefined4 uStack_74;
  undefined4 *local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if (FLAG_verify_heap != '\0') {
    local_80 = (undefined **)*param_2;
    String::StringVerify((String *)&local_80,(Isolate *)this);
  }
  puVar8 = (ulong *)String::Flatten(this,param_2,0);
  iVar4 = param_4 - param_3;
  if (iVar4 < 1) {
    pFVar9 = this + 200;
  }
  else if (iVar4 == 2) {
    local_80 = (undefined **)*puVar8;
    local_88 = (uint)*(ushort *)
                      (((ulong)local_80 & 0xffffffff00000000 | (ulong)*(uint *)((long)local_80 - 1))
                      + 7);
    local_84 = param_3;
    uVar6 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                      (&local_88,&local_80,&local_84);
    local_80 = (undefined **)*puVar8;
    local_84 = param_3 + 1;
    local_88 = (uint)*(ushort *)
                      (((ulong)local_80 & 0xffffffff00000000 | (ulong)*(uint *)((long)local_80 - 1))
                      + 7);
    uVar7 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                      (&local_88,&local_80,&local_84);
    local_70 = &local_84;
    if ((uVar7 | uVar6) < 0x100) {
      local_84._0_2_ = CONCAT11((char)uVar7,(char)uVar6);
      local_78 = StringHasher::HashSequentialString<unsigned_char>
                           ((uchar *)&local_84,2,*(ulong *)(*(long *)(this + 0x490) + 7));
      uStack_74 = 2;
      uStack_68 = 2;
      local_80 = &PTR__StringTableKey_01ca7080;
      local_60 = 0;
      pFVar9 = (Factory *)
               StringTable::LookupKey<v8::internal::SequentialStringKey<unsigned_char>>
                         ((Isolate *)this,(SequentialStringKey *)&local_80);
    }
    else {
      local_84 = CONCAT22(uVar7,uVar6);
      local_78 = StringHasher::HashSequentialString<unsigned_short>
                           ((ushort *)&local_84,2,*(ulong *)(*(long *)(this + 0x490) + 7));
      uStack_74 = 2;
      uStack_68 = 2;
      local_80 = &PTR__StringTableKey_01ca70b0;
      local_60 = 0;
      pFVar9 = (Factory *)
               StringTable::LookupKey<v8::internal::SequentialStringKey<unsigned_short>>
                         ((Isolate *)this,(SequentialStringKey *)&local_80);
    }
  }
  else if (iVar4 == 1) {
    local_80 = (undefined **)*puVar8;
    local_88 = (uint)*(ushort *)
                      (((ulong)local_80 & 0xffffffff00000000 | (ulong)*(uint *)((long)local_80 + -1)
                       ) + 7);
    local_84 = param_3;
    uVar6 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                      (&local_88,&local_80,&local_84);
    pFVar9 = (Factory *)LookupSingleCharacterStringFromCode(this,uVar6);
  }
  else {
    uVar15 = *puVar8;
    uVar11 = uVar15 & 0xffffffff00000000;
    uVar13 = uVar11 | 7;
    uVar6 = *(ushort *)(uVar13 + *(uint *)(uVar15 - 1));
    if (iVar4 < 0xd) {
      if ((uVar6 >> 3 & 1) == 0) {
        pFVar9 = (Factory *)NewRawTwoByteString();
        if (pFVar9 == (Factory *)0x0) {
LAB_00f6fb64:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","(location_) != nullptr");
        }
        String::WriteToFlat<unsigned_short>(*puVar8,*(long *)pFVar9 + 0xb,param_3,param_4);
      }
      else {
        pFVar9 = (Factory *)NewRawOneByteString(this,iVar4,0);
        if (pFVar9 == (Factory *)0x0) goto LAB_00f6fb64;
        String::WriteToFlat<unsigned_char>(*puVar8,*(long *)pFVar9 + 0xb,param_3,param_4);
      }
    }
    else {
      pFVar1 = this + 0x95a0;
      puVar14 = (uint *)(uVar15 - 1);
      if ((uVar6 < 0x40) && ((*(ushort *)(uVar13 + *puVar14) & 7) == 3)) {
        uVar15 = uVar11 | *(uint *)(uVar15 + 0xb);
        if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar10 = *(ulong **)pFVar1;
          if (puVar10 == *(ulong **)(this + 0x95a8)) {
            puVar10 = (ulong *)HandleScope::Extend((Isolate *)this);
          }
          *(ulong **)pFVar1 = puVar10 + 1;
          *puVar10 = uVar15;
        }
        else {
          puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(this + 0x95b8),uVar15);
          uVar15 = *puVar10;
        }
        puVar14 = (uint *)(uVar15 - 1);
        uVar11 = uVar15 & 0xffffffff00000000;
        param_3 = param_3 + (*(int *)(*puVar8 + 0xf) >> 1);
        uVar13 = uVar11 | 7;
        puVar8 = puVar10;
      }
      if ((*(ushort *)(uVar13 + *puVar14) < 0x40) && ((*(ushort *)(uVar13 + *puVar14) & 7) == 5)) {
        uVar15 = uVar11 | *(uint *)(uVar15 + 0xb);
        if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar8 = *(ulong **)pFVar1;
          if (puVar8 == *(ulong **)(this + 0x95a8)) {
            puVar8 = (ulong *)HandleScope::Extend((Isolate *)this);
          }
          *(ulong **)pFVar1 = puVar8 + 1;
          *puVar8 = uVar15;
        }
        else {
          puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(this + 0x95b8),uVar15);
          uVar15 = *puVar8;
        }
      }
      lVar2 = 0x300;
      if ((*(ushort *)((uVar15 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar15 - 1)) & 8) != 0)
      {
        lVar2 = 0x308;
      }
      lVar12 = *(long *)(this + 0x8938);
      lVar3 = *(long *)(lVar12 + 0x68);
      uVar11 = (ulong)*(byte *)(*(long *)(this + lVar2) + 3) * 4;
      if ((((ulong)(*(long *)(lVar12 + 0x70) - lVar3) < uVar11) || (FLAG_inline_new == '\0')) ||
         (FLAG_gc_interval != 0)) {
        uVar13 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),uVar11,0,1,0);
      }
      else {
        uVar13 = lVar3 + 1;
        *(ulong *)(lVar12 + 0x68) = lVar3 + uVar11;
        Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar3,uVar11,1,1);
      }
      *(undefined4 *)(uVar13 - 1) = *(undefined4 *)(this + lVar2);
      if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
        pFVar9 = *(Factory **)pFVar1;
        if (pFVar9 == *(Factory **)(this + 0x95a8)) {
          pFVar9 = (Factory *)HandleScope::Extend((Isolate *)this);
        }
        *(Factory **)pFVar1 = pFVar9 + 8;
        *(ulong *)pFVar9 = uVar13;
      }
      else {
        pFVar9 = (Factory *)
                 CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar13);
        uVar13 = *(ulong *)pFVar9;
      }
      *(undefined4 *)(uVar13 + 3) = 7;
      *(int *)(*(long *)pFVar9 + 7) = iVar4;
      uVar13 = *(ulong *)pFVar9;
      uVar11 = *puVar8;
      *(int *)(uVar13 + 0xb) = (int)uVar11;
      if ((uVar11 & 1) != 0) {
        uVar15 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar15 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar13,uVar13 + 0xb,uVar11);
          uVar15 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar13,uVar13 + 0xb,uVar11);
        }
      }
      *(int *)(*(long *)pFVar9 + 0xf) = param_3 << 1;
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pFVar9;
}

