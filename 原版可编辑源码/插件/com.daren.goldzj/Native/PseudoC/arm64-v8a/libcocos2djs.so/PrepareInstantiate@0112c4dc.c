
/* v8::internal::SourceTextModule::PrepareInstantiate(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SourceTextModule>, v8::Local<v8::Context>,
   v8::MaybeLocal<v8::Module> (*)(v8::Local<v8::Context>, v8::Local<v8::String>,
   v8::Local<v8::Module>)) */

undefined8
v8::internal::SourceTextModule::PrepareInstantiate
          (Isolate *param_1,ulong *param_2,undefined8 param_3,code *param_4)

{
  Isolate *pIVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong local_68;
  
  local_68 = *param_2;
  pIVar1 = param_1 + 0x95a0;
  uVar7 = info((SourceTextModule *)&local_68);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)pIVar1;
    if (puVar8 == *(ulong **)(param_1 + 0x95a8)) {
      puVar8 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar8 + 1;
    *puVar8 = uVar7;
  }
  else {
    puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
  }
  uVar7 = *puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 7);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)pIVar1;
    if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
      puVar9 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar9 + 1;
    *puVar9 = uVar7;
  }
  else {
    puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
  }
  uVar7 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x23);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar10 = *(ulong **)pIVar1;
    if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
      puVar10 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar10 + 1;
    *puVar10 = uVar7;
  }
  else {
    puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
  }
  uVar7 = *puVar9;
  uVar3 = *(uint *)(uVar7 + 3);
  if (1 < (int)uVar3) {
    iVar5 = 0;
    uVar14 = 1;
    while( true ) {
      uVar7 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + (long)iVar5 + 7);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar11 = *(ulong **)pIVar1;
        if (puVar11 == *(ulong **)(param_1 + 0x95a8)) {
          puVar11 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar11 + 1;
        *puVar11 = uVar7;
      }
      else {
        puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
      }
      puVar11 = (ulong *)(*param_4)(param_3,puVar11,param_2);
      if (puVar11 == (ulong *)0x0) {
        Isolate::PromoteScheduledException(param_1);
        return 0;
      }
      uVar15 = *puVar10;
      uVar7 = *puVar11;
      puVar2 = (undefined4 *)(uVar15 + (long)iVar5 + 7);
      *puVar2 = (int)uVar7;
      if ((uVar7 & 1) != 0) {
        uVar12 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar12 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar15,puVar2,uVar7);
          uVar12 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar15,puVar2,uVar7);
        }
      }
      if (uVar3 >> 1 <= uVar14) break;
      uVar7 = *puVar9;
      iVar5 = iVar5 + 4;
      uVar14 = uVar14 + 1;
    }
  }
  uVar7 = *puVar10;
  uVar3 = *(uint *)(uVar7 + 3);
  if (1 < (int)uVar3) {
    iVar5 = 0;
    uVar14 = 1;
    while( true ) {
      uVar7 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + (long)iVar5 + 7);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar9 = *(ulong **)pIVar1;
        if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
          puVar9 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar9 + 1;
        *puVar9 = uVar7;
      }
      else {
        puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
      }
      uVar7 = Module::PrepareInstantiate(param_1,puVar9,param_3,param_4);
      if ((uVar7 & 1) == 0) {
        return 0;
      }
      if (uVar3 >> 1 <= uVar14) break;
      uVar7 = *puVar10;
      iVar5 = iVar5 + 4;
      uVar14 = uVar14 + 1;
    }
  }
  local_68 = *puVar8;
  iVar5 = SourceTextModuleInfo::RegularExportCount((SourceTextModuleInfo *)&local_68);
  if (0 < iVar5) {
    iVar13 = 0;
    do {
      local_68 = *puVar8;
      uVar6 = SourceTextModuleInfo::RegularExportCellIndex((SourceTextModuleInfo *)&local_68,iVar13)
      ;
      local_68 = *puVar8;
      uVar7 = SourceTextModuleInfo::RegularExportExportNames
                        ((SourceTextModuleInfo *)&local_68,iVar13);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar9 = *(ulong **)pIVar1;
        if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
          puVar9 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar9 + 1;
        *puVar9 = uVar7;
      }
      else {
        puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
      }
      CreateExport(param_1,param_2,uVar6,puVar9);
      iVar13 = iVar13 + 1;
    } while (iVar5 != iVar13);
  }
  uVar7 = *puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)pIVar1;
    if (puVar8 == *(ulong **)(param_1 + 0x95a8)) {
      puVar8 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar8 + 1;
    *puVar8 = uVar7;
  }
  else {
    puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
    uVar7 = *puVar8;
  }
  uVar3 = *(uint *)(uVar7 + 3);
  if ((int)uVar3 < 2) {
    return 1;
  }
  iVar5 = 0;
  uVar14 = 1;
  do {
    uVar7 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + (long)iVar5 + 7);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar9 = *(ulong **)pIVar1;
      if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
        puVar9 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar9 + 1;
      *puVar9 = uVar7;
    }
    else {
      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
      uVar7 = *puVar9;
    }
    uVar4 = *(uint *)(uVar7 + 3);
    uVar7 = uVar7 & 0xffffffff00000000 | (ulong)uVar4;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar10 = *(ulong **)pIVar1;
      if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
        puVar10 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar10 + 1;
      *puVar10 = uVar7;
      if ((uVar4 & 1) != 0) goto LAB_0112c98c;
LAB_0112c998:
      CreateIndirectExport(param_1,param_2,puVar10,puVar9);
    }
    else {
      puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
      uVar7 = *puVar10;
      if ((uVar7 & 1) == 0) goto LAB_0112c998;
LAB_0112c98c:
      if ((int)uVar7 != *(int *)(param_1 + 0xa0)) goto LAB_0112c998;
    }
    if (uVar3 >> 1 <= uVar14) {
      return 1;
    }
    uVar7 = *puVar8;
    iVar5 = iVar5 + 4;
    uVar14 = uVar14 + 1;
  } while( true );
}

