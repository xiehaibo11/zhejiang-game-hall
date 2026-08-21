
/* v8::internal::RegExp::Compile(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSRegExp>, v8::internal::Handle<v8::internal::String>,
   v8::base::Flags<v8::internal::JSRegExp::Flag, int>, unsigned int) */

ulong * v8::internal::RegExp::Compile
                  (Isolate *param_1,ulong *param_2,ulong *param_3,uint param_4,int param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  CompilationCache *pCVar12;
  ulong local_200;
  undefined8 uStack_1f8;
  undefined **local_1e8;
  long local_1e0;
  undefined8 uStack_1d8;
  undefined **local_1b8;
  StackGuard *local_1b0;
  int local_198;
  uint local_188 [2];
  ulong local_180;
  uint local_178 [2];
  long *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined2 local_158;
  undefined8 local_150;
  undefined8 local_148;
  ulong local_140;
  Zone aZStack_130 [64];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  Zone::Zone(aZStack_130,*(AccountingAllocator **)(param_1 + 0x95d0),
             "../../src/regexp/regexp.cc:146");
  if (param_5 == 0) {
    pCVar12 = *(CompilationCache **)(param_1 + 0x9518);
    puVar5 = (ulong *)CompilationCache::LookupRegExp(pCVar12,param_3,param_4);
    if (puVar5 != (ulong *)0x0) {
      uVar8 = *param_2;
      uVar3 = *puVar5;
      *(int *)(uVar8 + 0xb) = (int)uVar3;
      if ((uVar3 & 1) != 0) {
        uVar7 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar7 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar8,uVar8 + 0xb,uVar3);
          uVar7 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0xb,uVar3);
        }
      }
      goto LAB_011bae0c;
    }
  }
  else {
    pCVar12 = (CompilationCache *)0x0;
  }
  InterruptsScope::InterruptsScope((InterruptsScope *)&local_1b8,param_1,0xff,0);
  local_1b8 = &PTR__InterruptsScope_01c98490;
  local_168 = 0;
  uStack_160 = 0;
  local_170 = (long *)0x0;
  local_150 = 0;
  local_148 = 0;
  local_158 = 1;
  local_140 = 0;
  FlatStringReader::FlatStringReader((FlatStringReader *)&local_1e8,param_1,param_3);
  uVar3 = RegExpParser::ParseRegExp(param_1,aZStack_130,&local_1e8,param_4,&local_170);
  if ((uVar3 & 1) == 0) {
    puVar4 = (undefined8 *)Factory::NewSyntaxError((Factory *)param_1,0x110,param_3,local_148,0);
    Isolate::Throw(param_1,*puVar4,0);
    param_2 = (ulong *)0x0;
  }
  else {
    if (((param_4 & 10) == 0) && ((char)local_158 != '\0')) {
      iVar1 = *(int *)(*param_3 + 7);
      if (7 < iVar1) {
        iVar1 = 8;
      }
      puVar5 = param_3;
      if (2 < iVar1) {
        iVar9 = 0;
        iVar11 = 0;
        uStack_88 = 0;
        local_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_a8 = 0;
        local_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_c8 = 0;
        local_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_e8 = 0;
        local_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        do {
          local_200 = *param_3;
          local_180 = CONCAT44(local_180._4_4_,iVar9);
          local_178[0] = (uint)*(ushort *)
                                ((local_200 & 0xffffffff00000000 | (ulong)*(uint *)(local_200 - 1))
                                + 7);
          uVar3 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                            (local_178,&local_200,&local_180);
          if (*(char *)((long)&local_f0 + (uVar3 & 0x7f)) == '\0') {
            iVar11 = iVar11 + 1;
            *(undefined1 *)((long)&local_f0 + (uVar3 & 0x7f)) = 1;
            if (iVar1 < iVar11 * 3) goto LAB_011bac64;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar1);
        goto LAB_011bad28;
      }
LAB_011bac64:
      Factory::SetRegExpAtomData((Factory *)param_1,param_2,1,param_3,param_4,puVar5);
    }
    else {
LAB_011bad28:
      uVar3 = (**(code **)(*local_170 + 0xa0))();
      if ((((param_4 >> 3 & 1) == 0) && ((uVar3 & 1) != 0)) && ((int)local_140 == 0)) {
        lVar6 = (**(code **)(*local_170 + 0x98))();
        uStack_1f8 = *(undefined8 *)(lVar6 + 0x10);
        local_200 = *(ulong *)(lVar6 + 8);
        puVar5 = (ulong *)Factory::NewStringFromTwoByte((Factory *)param_1,&local_200,0);
        if (puVar5 == (ulong *)0x0) {
          param_2 = (ulong *)0x0;
          goto LAB_011badcc;
        }
        if ((*(byte *)(lVar6 + 0x18) >> 1 & 1) == 0) {
          iVar1 = *(int *)(*puVar5 + 7);
          if (7 < iVar1) {
            iVar1 = 8;
          }
          if (iVar1 < 3) goto LAB_011bac64;
          uVar10 = 0;
          iVar9 = 0;
          uStack_88 = 0;
          local_90 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
          uStack_a8 = 0;
          local_b0 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_c8 = 0;
          local_d0 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_e8 = 0;
          local_f0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          do {
            local_180 = *puVar5;
            local_188[0] = (uint)*(ushort *)
                                  ((local_180 & 0xffffffff00000000 | (ulong)*(uint *)(local_180 - 1)
                                   ) + 7);
            local_178[0] = uVar10;
            uVar3 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                              (local_188,&local_180,local_178);
            if (*(char *)((long)&local_f0 + (uVar3 & 0x7f)) == '\0') {
              iVar9 = iVar9 + 1;
              *(undefined1 *)((long)&local_f0 + (uVar3 & 0x7f)) = 1;
              if (iVar1 < iVar9 * 3) goto LAB_011bac64;
            }
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < iVar1);
        }
      }
      Factory::SetRegExpIrregexpData
                ((Factory *)param_1,param_2,2,param_3,param_4,local_140 & 0xffffffff,param_5);
    }
    uVar3 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(param_1 + 0x95a0);
      if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar3;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3);
    }
    if (param_5 == 0) {
      CompilationCache::PutRegExp(pCVar12,param_3,param_4,puVar5);
    }
  }
LAB_011badcc:
  local_1e8 = &PTR__Relocatable_01cacc40;
  *(undefined8 *)(local_1e0 + 0xb790) = uStack_1d8;
  local_1b8 = &PTR__InterruptsScope_01c984b0;
  if (local_198 != 2) {
    StackGuard::PopInterruptsScope(local_1b0);
  }
LAB_011bae0c:
  Zone::~Zone(aZStack_130);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

