
/* v8::internal::Map::GeneralizeField(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>, v8::internal::InternalIndex,
   v8::internal::PropertyConstness, v8::internal::Representation,
   v8::internal::Handle<v8::internal::FieldType>) */

void v8::internal::Map::GeneralizeField
               (Isolate *param_1,ulong *param_2,long param_3,int param_4,uint param_5,ulong *param_6
               )

{
  Isolate *pIVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  Isolate *pIVar12;
  Isolate *pIVar13;
  ulong uVar14;
  Isolate *pIVar15;
  ulong uVar16;
  ulong local_78;
  ulong local_70;
  ulong *puStack_68;
  
  pIVar1 = param_1 + 0x95a0;
  uVar14 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x17);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pIVar1;
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar5 + 1;
    *puVar5 = uVar14;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar14);
    uVar14 = *puVar5;
  }
  uVar16 = param_3 * 0xc00000000 + 0x1000000000 >> 0x20;
  uVar11 = uVar16 | 3;
  uVar3 = *(uint *)(uVar16 + uVar14 + 7);
  uVar10 = (ulong)uVar3;
  uVar2 = *(int *)(uVar14 + uVar11) >> 1;
  if (uVar3 == 3) {
    uVar14 = FieldType::None();
  }
  else {
    if ((~uVar3 & 3) == 0) {
      uVar10 = uVar10 & 0xfffffffffffffffd;
    }
    uVar14 = FieldType::cast(uVar14 & 0xffffffff00000000 | uVar10);
  }
  uVar3 = uVar2 >> 2 & 1;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pIVar1;
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar5 + 1;
    *puVar5 = uVar14;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar14);
  }
  uVar2 = uVar2 >> 6 & 7;
  if (((param_4 == 1) || (uVar3 == 0)) && (uVar2 == (param_5 & 0xff))) {
    uVar14 = *param_6;
    iVar4 = FieldType::None();
    if (((param_5 & 0xff) != 3) || ((int)uVar14 != iVar4)) {
      local_70 = *param_6;
      uVar14 = FieldType::NowIs((FieldType *)&local_70,puVar5);
      if ((uVar14 & 1) != 0) {
        return;
      }
    }
  }
  pIVar12 = (Isolate *)*param_2;
  do {
    pIVar15 = pIVar12;
    pIVar13 = param_1 + *(uint *)(pIVar15 + 0x13);
    if ((((ulong)pIVar13 & 1) == 0) ||
       (*(short *)(((ulong)param_1 | 7) + (ulong)*(uint *)(pIVar13 + -1)) != 0xa2)) {
      pIVar12 = *(Isolate **)(param_1 + 0xa0);
      pIVar13 = pIVar12;
      if (((ulong)pIVar12 & 1) != 0) goto LAB_010eac54;
    }
    else {
      pIVar12 = *(Isolate **)(param_1 + 0xa0);
LAB_010eac54:
      iVar4 = (int)pIVar12;
      pIVar12 = pIVar13;
      if ((int)pIVar13 == iVar4) break;
    }
  } while ((int)param_3 < (int)(*(uint *)(pIVar12 + 0xb) >> 10 & 0x3ff));
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)pIVar1;
    if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar6 + 1;
    *puVar6 = (ulong)pIVar15;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),(ulong)pIVar15);
    pIVar15 = (Isolate *)*puVar6;
  }
  uVar14 = (ulong)pIVar15 & 0xffffffff00000000 | (ulong)*(uint *)(pIVar15 + 0x17);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pIVar1;
    if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar7 + 1;
    *puVar7 = uVar14;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar14);
  }
  puVar8 = (ulong *)GeneralizeFieldType(uVar2,puVar5,param_5 & 0xff,param_6,param_1);
  uVar14 = *puVar7;
  uVar2 = *(uint *)(uVar14 + uVar11);
  uVar14 = uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar16 + uVar14 + -1);
  iVar4 = 0;
  if (uVar3 != 0) {
    iVar4 = param_4;
  }
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)pIVar1;
    if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
      puVar9 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar9 + 1;
    *puVar9 = uVar14;
  }
  else {
    puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar14);
  }
  local_70 = *puVar8;
  uVar14 = FieldType::IsClass((FieldType *)&local_70);
  if ((uVar14 & 1) == 0) {
    local_70 = 1;
    puStack_68 = puVar8;
  }
  else {
    local_70 = *puVar8;
    uVar14 = FieldType::AsClass((FieldType *)&local_70);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puStack_68 = *(ulong **)pIVar1;
      if (puStack_68 == *(ulong **)(param_1 + 0x95a8)) {
        puStack_68 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puStack_68 + 1;
      *puStack_68 = uVar14;
    }
    else {
      puStack_68 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar14);
    }
    local_70 = 0;
  }
  local_78 = *puVar6;
  UpdateFieldType((Map *)&local_78,param_1,param_3,puVar9,iVar4,param_5 & 0xff,&local_70);
  local_78 = *puVar6 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar6 + 0x1b);
  DependentCode::DeoptimizeDependentCodeGroup(&local_78,param_1,3);
  if (FLAG_trace_generalization != '\0') {
    local_78 = *param_2;
    PrintGeneralization((Map *)&local_78,param_1,waitpid,"field type generalization",param_3,
                        *(uint *)(*param_2 + 0xb) >> 10 & 0x3ff,
                        *(uint *)(*param_2 + 0xb) >> 10 & 0x3ff,0,uVar2 >> 7 & 7,
                        *(uint *)(*puVar7 + uVar11) >> 7 & 7,uVar3,iVar4,puVar5,0,puVar8,0);
  }
  return;
}

