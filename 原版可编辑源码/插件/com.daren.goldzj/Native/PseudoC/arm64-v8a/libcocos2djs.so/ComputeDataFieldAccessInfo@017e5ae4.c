
/* v8::internal::compiler::AccessInfoFactory::ComputeDataFieldAccessInfo(v8::internal::Handle<v8::internal::Map>,
   v8::internal::Handle<v8::internal::Map>, v8::internal::MaybeHandle<v8::internal::JSObject>,
   v8::internal::InternalIndex, v8::internal::compiler::AccessMode) const */

void v8::internal::compiler::AccessInfoFactory::ComputeDataFieldAccessInfo
               (PropertyAccessInfo *param_1,undefined8 *param_2,undefined8 param_3,ulong *param_4,
               undefined8 param_5,long param_6,int param_7)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  Isolate *pIVar8;
  ulong *puVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong *puVar18;
  int local_d0;
  ulong local_c8;
  ulong local_b0;
  ulong local_a0 [2];
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  Zone *local_78;
  ObjectRef aOStack_70 [16];
  
  pIVar8 = *(Isolate **)*param_2;
  uVar15 = *param_4 & 0xffffffff00000000 | (ulong)*(uint *)(*param_4 + 0x17);
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar9 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar9 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar9 + 1;
    *puVar9 = uVar15;
  }
  else {
    puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar15);
    uVar15 = *puVar9;
  }
  uVar16 = param_6 * 0xc00000000 + 0x1000000000 >> 0x20;
  uVar12 = uVar16 | 3;
  uVar2 = *(uint *)(uVar15 + uVar12);
  uVar4 = (uint)((int)uVar2 >> 1) >> 6 & 7;
  if (uVar4 == 0) {
    uVar11 = param_2[3];
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = uVar11;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = uVar11;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    param_1[0x68] = (PropertyAccessInfo)0x0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x70) = 1;
    return;
  }
  uVar14 = *param_4;
  uVar5 = *(uint *)(uVar15 + uVar12) >> 0x14 & 0x3ff;
  iVar3 = (uint)*(byte *)(uVar14 + 3) - (uint)*(byte *)(uVar14 + 4);
  if ((int)uVar5 < iVar3) {
    local_c8 = (ulong)*(byte *)(uVar14 + 4) << 0x1c;
    local_d0 = (uVar5 + *(byte *)(uVar14 + 4)) * 4;
  }
  else {
    local_d0 = (uVar5 - iVar3) * 4 + 8;
    local_c8 = 0x20000000;
  }
  local_90 = (undefined8 *)CONCAT71(local_90._1_7_,(char)uVar4);
  if (4 < uVar4) {
    uVar11 = Representation::Mnemonic((Representation *)&local_90);
    PrintF("%s\n",uVar11);
    goto LAB_017e6338;
  }
  ObjectRef::ObjectRef(aOStack_70,*param_2,param_4,0);
  uVar15 = ObjectRef::IsMap(aOStack_70);
  if ((uVar15 & 1) == 0) {
LAB_017e630c:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsMap()");
  }
  local_78 = (Zone *)param_2[3];
  local_90 = (undefined8 *)0x0;
  local_88 = (undefined8 *)0x0;
  local_80 = (undefined8 *)0x0;
  MapRef::SerializeOwnDescriptor((MapRef *)aOStack_70,param_6);
  puVar18 = (ulong *)0x0;
  local_b0 = 0xc7f7fff;
  switch(uVar4) {
  case 1:
    uVar7 = BitsetType::SignedSmall();
    local_b0 = (ulong)(uVar7 | 1);
    uVar11 = CompilationDependencies::FieldRepresentationDependencyOffTheRecord
                       ((CompilationDependencies *)param_2[1],aOStack_70,param_6);
    if (local_88 < local_80) goto LAB_017e5d7c;
    lVar17 = (long)local_88 - (long)local_90 >> 3;
    uVar15 = lVar17 + 1;
    if (uVar15 >> 0x1c != 0) goto LAB_017e6358;
    uVar12 = (long)local_80 - (long)local_90 >> 2;
    if (uVar15 <= uVar12) {
      uVar15 = uVar12;
    }
    if (0x7fffffe < (ulong)((long)local_80 - (long)local_90 >> 3)) {
      uVar15 = 0xfffffff;
    }
    if (uVar15 == 0) {
      lVar10 = 0;
    }
    else {
      uVar12 = uVar15 * 8;
      lVar10 = *(long *)(local_78 + 0x10);
      if (uVar12 < (ulong)(*(long *)(local_78 + 0x18) - lVar10) ||
          uVar12 - (*(long *)(local_78 + 0x18) - lVar10) == 0) {
        *(ulong *)(local_78 + 0x10) = lVar10 + uVar12;
      }
      else {
        lVar10 = Zone::NewExpand(local_78,uVar12);
      }
    }
    puVar1 = (undefined8 *)(lVar10 + lVar17 * 8);
    *puVar1 = uVar11;
    local_80 = (undefined8 *)(lVar10 + uVar15 * 8);
    puVar13 = puVar1;
    while (local_88 != local_90) {
      local_88 = local_88 + -1;
      puVar13 = puVar13 + -1;
      *puVar13 = *local_88;
    }
LAB_017e5fa0:
    local_88 = puVar1 + 1;
    puVar18 = (ulong *)0x0;
    local_90 = puVar13;
    break;
  case 2:
    local_b0 = *(ulong *)(param_2[2] + 0xc0);
    uVar11 = CompilationDependencies::FieldRepresentationDependencyOffTheRecord
                       ((CompilationDependencies *)param_2[1],aOStack_70,param_6);
    if (local_80 <= local_88) {
      lVar17 = (long)local_88 - (long)local_90 >> 3;
      uVar15 = lVar17 + 1;
      if (uVar15 >> 0x1c != 0) goto LAB_017e6358;
      uVar12 = (long)local_80 - (long)local_90 >> 2;
      if (uVar15 <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7fffffe < (ulong)((long)local_80 - (long)local_90 >> 3)) {
        uVar15 = 0xfffffff;
      }
      if (uVar15 == 0) {
        lVar10 = 0;
      }
      else {
        uVar12 = uVar15 * 8;
        lVar10 = *(long *)(local_78 + 0x10);
        if (uVar12 < (ulong)(*(long *)(local_78 + 0x18) - lVar10) ||
            uVar12 - (*(long *)(local_78 + 0x18) - lVar10) == 0) {
          *(ulong *)(local_78 + 0x10) = lVar10 + uVar12;
        }
        else {
          lVar10 = Zone::NewExpand(local_78,uVar12);
        }
      }
      puVar1 = (undefined8 *)(lVar10 + lVar17 * 8);
      *puVar1 = uVar11;
      local_80 = (undefined8 *)(lVar10 + uVar15 * 8);
      puVar13 = puVar1;
      while (local_88 != local_90) {
        local_88 = local_88 + -1;
        puVar13 = puVar13 + -1;
        *puVar13 = *local_88;
      }
      goto LAB_017e5fa0;
    }
LAB_017e5d7c:
    *local_88 = uVar11;
    puVar18 = (ulong *)0x0;
    local_88 = local_88 + 1;
    break;
  case 3:
    uVar15 = Map::UnwrapFieldType
                       (*puVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar16 + *puVar9 + 7));
    pIVar8 = *(Isolate **)*param_2;
    if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar9 = *(ulong **)(pIVar8 + 0x95a0);
      if (puVar9 == *(ulong **)(pIVar8 + 0x95a8)) {
        puVar9 = (ulong *)HandleScope::Extend(pIVar8);
      }
      *(ulong **)(pIVar8 + 0x95a0) = puVar9 + 1;
      *puVar9 = uVar15;
    }
    else {
      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar15);
      uVar15 = *puVar9;
    }
    iVar6 = FieldType::None();
    if ((param_7 == 1) && ((int)uVar15 == iVar6)) {
      uVar11 = param_2[3];
      *(undefined4 *)param_1 = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = uVar11;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = uVar11;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      param_1[0x68] = (PropertyAccessInfo)0x0;
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x70) = 1;
      return;
    }
    uVar11 = CompilationDependencies::FieldRepresentationDependencyOffTheRecord
                       ((CompilationDependencies *)param_2[1],aOStack_70,param_6);
    if (local_88 < local_80) {
      *local_88 = uVar11;
      puVar1 = local_88;
      puVar13 = local_90;
    }
    else {
      lVar17 = (long)local_88 - (long)local_90 >> 3;
      uVar15 = lVar17 + 1;
      if (uVar15 >> 0x1c != 0) goto LAB_017e6358;
      uVar12 = (long)local_80 - (long)local_90 >> 2;
      if (uVar15 <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7fffffe < (ulong)((long)local_80 - (long)local_90 >> 3)) {
        uVar15 = 0xfffffff;
      }
      if (uVar15 == 0) {
        lVar10 = 0;
      }
      else {
        uVar12 = uVar15 * 8;
        lVar10 = *(long *)(local_78 + 0x10);
        if (uVar12 < (ulong)(*(long *)(local_78 + 0x18) - lVar10) ||
            uVar12 - (*(long *)(local_78 + 0x18) - lVar10) == 0) {
          *(ulong *)(local_78 + 0x10) = lVar10 + uVar12;
        }
        else {
          lVar10 = Zone::NewExpand(local_78,uVar12);
        }
      }
      puVar1 = (undefined8 *)(lVar10 + lVar17 * 8);
      *puVar1 = uVar11;
      local_80 = (undefined8 *)(lVar10 + uVar15 * 8);
      puVar13 = puVar1;
      while (local_88 != local_90) {
        local_88 = local_88 + -1;
        puVar13 = puVar13 + -1;
        *puVar13 = *local_88;
      }
    }
    local_90 = puVar13;
    local_88 = puVar1 + 1;
    local_a0[0] = *puVar9;
    uVar15 = FieldType::IsClass((FieldType *)local_a0);
    if ((uVar15 & 1) == 0) {
      puVar18 = (ulong *)0x0;
    }
    else {
      local_a0[0] = *puVar9;
      uVar15 = FieldType::AsClass((FieldType *)local_a0);
      pIVar8 = *(Isolate **)*param_2;
      if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar18 = *(ulong **)(pIVar8 + 0x95a0);
        if (puVar18 == *(ulong **)(pIVar8 + 0x95a8)) {
          puVar18 = (ulong *)HandleScope::Extend(pIVar8);
        }
        *(ulong **)(pIVar8 + 0x95a0) = puVar18 + 1;
        *puVar18 = uVar15;
      }
      else {
        puVar18 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar15);
      }
      ObjectRef::ObjectRef((ObjectRef *)local_a0,*param_2,puVar18,0);
      uVar15 = ObjectRef::IsMap((ObjectRef *)local_a0);
      if ((uVar15 & 1) == 0) goto LAB_017e630c;
      uVar7 = BitsetType::Lub<v8::internal::compiler::MapRef>((MapRef *)local_a0);
      uVar7 = BitsetType::ExpandInternals(uVar7);
      local_b0 = (ulong)(uVar7 | 1);
    }
    break;
  case 4:
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","details_representation.IsTagged()");
  }
  uVar11 = CompilationDependencies::FieldTypeDependencyOffTheRecord
                     ((CompilationDependencies *)param_2[1],aOStack_70,param_6);
  if (local_88 < local_80) {
    *local_88 = uVar11;
    puVar1 = local_88;
    puVar13 = local_90;
  }
  else {
    lVar17 = (long)local_88 - (long)local_90 >> 3;
    uVar15 = lVar17 + 1;
    if (uVar15 >> 0x1c != 0) {
LAB_017e6358:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar12 = (long)local_80 - (long)local_90 >> 2;
    if (uVar15 <= uVar12) {
      uVar15 = uVar12;
    }
    if (0x7fffffe < (ulong)((long)local_80 - (long)local_90 >> 3)) {
      uVar15 = 0xfffffff;
    }
    if (uVar15 == 0) {
      lVar10 = 0;
    }
    else {
      uVar12 = uVar15 * 8;
      lVar10 = *(long *)(local_78 + 0x10);
      if (uVar12 < (ulong)(*(long *)(local_78 + 0x18) - lVar10) ||
          uVar12 - (*(long *)(local_78 + 0x18) - lVar10) == 0) {
        *(ulong *)(local_78 + 0x10) = lVar10 + uVar12;
      }
      else {
        lVar10 = Zone::NewExpand(local_78,uVar12);
      }
    }
    puVar1 = (undefined8 *)(lVar10 + lVar17 * 8);
    *puVar1 = uVar11;
    local_80 = (undefined8 *)(lVar10 + uVar15 * 8);
    puVar13 = puVar1;
    while (local_88 != local_90) {
      local_88 = local_88 + -1;
      puVar13 = puVar13 + -1;
      *puVar13 = *local_88;
    }
  }
  local_90 = puVar13;
  local_88 = puVar1 + 1;
  uVar15 = *(ulong *)(&DAT_01a641c8 + (ulong)uVar4 * 8);
  if (((uVar2 ^ 0xffffffff) & 0x50) == 0) {
    iVar6 = 1;
  }
  else {
    MapRef::SerializeOwnDescriptor((MapRef *)aOStack_70,param_6);
    iVar6 = CompilationDependencies::DependOnFieldConstness
                      ((CompilationDependencies *)param_2[1],aOStack_70,param_6);
  }
  local_a0[0] = *param_4;
  uVar15 = (ulong)((int)uVar5 < iVar3) << 0xd | (long)iVar3 << 0x10 | (long)local_d0 | local_c8 |
           uVar15;
  uVar12 = Map::FindFieldOwner((Map *)local_a0,*(undefined8 *)*param_2,param_6);
  pIVar8 = *(Isolate **)*param_2;
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar9 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar9 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar9 + 1;
    *puVar9 = uVar12;
  }
  else {
    puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar12);
  }
  if (iVar6 == 1) {
    PropertyAccessInfo::DataConstant
              (param_1,param_2[3],param_3,&local_90,uVar15,uVar4,local_b0,puVar9,puVar18,param_5,0);
  }
  else {
    if (iVar6 != 0) {
LAB_017e6338:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    PropertyAccessInfo::DataField
              (param_1,param_2[3],param_3,&local_90,uVar15,uVar4,local_b0,puVar9,puVar18,param_5,0);
  }
  return;
}

