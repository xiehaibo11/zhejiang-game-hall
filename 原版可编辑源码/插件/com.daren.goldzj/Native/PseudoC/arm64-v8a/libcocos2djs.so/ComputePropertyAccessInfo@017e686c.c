
/* v8::internal::compiler::AccessInfoFactory::ComputePropertyAccessInfo(v8::internal::Handle<v8::internal::Map>,
   v8::internal::Handle<v8::internal::Name>, v8::internal::compiler::AccessMode) const */

void v8::internal::compiler::AccessInfoFactory::ComputePropertyAccessInfo
               (PropertyAccessInfo *param_1,long *param_2,ulong *param_3,ulong *param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong local_70;
  undefined8 uStack_68;
  
  if ((*(ushort *)((*param_4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_4 - 1)) & 0xffe0)
      == 0x20) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","name->IsUniqueName()");
  }
  uVar10 = *param_3;
  if (((param_5 == 3) && (*(ushort *)(uVar10 + 7) < 0xa9)) ||
     ((((int)uVar10 != *(int *)((uVar10 & 0xffffffff00000000) + 0x370) &&
       (0x42 < *(ushort *)(uVar10 + 7))) &&
      (((*(ushort *)(uVar10 + 7) < 0xaa || ((*(uint *)(uVar10 + 0xb) >> 0x15 & 1) != 0)) ||
       ((*(byte *)(uVar10 + 9) & 0x24) != 0)))))) {
LAB_017e6d70:
    lVar9 = param_2[3];
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(long *)(param_1 + 0x20) = lVar9;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(long *)(param_1 + 0x40) = lVar9;
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
  if ((param_5 == 3) || (param_5 == 0)) {
    LookupSpecialFieldAccessor(param_1,param_2,param_3,param_4);
    if (*(int *)param_1 != 0) {
      return;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    }
    if (*(long *)(param_1 + 8) != 0) {
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    }
    uVar10 = *param_3;
  }
  puVar12 = (ulong *)0x0;
  puVar7 = param_3;
  do {
    pIVar3 = *(Isolate **)*param_2;
    uVar10 = uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 0x17);
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar10;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar10);
      uVar10 = *puVar4;
    }
    uVar8 = (ulong)(*(uint *)(*puVar7 + 0xb) >> 10) & 0x3ff;
    local_70 = uVar10;
    if ((uint)uVar8 != 0) {
      if ((uint)uVar8 < 9) {
        uVar5 = 0;
        uVar11 = 0x1000000000;
        do {
          if (*(int *)((uVar10 - 1) + (uVar11 >> 0x20)) == (int)*param_4) goto LAB_017e6a18;
          uVar5 = uVar5 + 1;
          uVar11 = uVar11 + 0xc00000000;
        } while (uVar8 != uVar5);
      }
      else {
        uVar1 = BinarySearch<(v8::internal::SearchMode)1,v8::internal::DescriptorArray>
                          (&local_70,*param_4,uVar8,0);
        uVar5 = (ulong)uVar1;
LAB_017e6a18:
        iVar2 = (int)uVar5;
        if (iVar2 != -1) {
          uVar1 = *(uint *)(*puVar4 + ((long)iVar2 * 0xc00000000 + 0x1000000000 >> 0x20 | 3U));
          if (param_5 - 1U < 2) {
            if ((uVar1 >> 4 & 1) != 0) goto LAB_017e6d70;
            if ((puVar12 != (ulong *)0x0) && ((uVar1 >> 1 & 1) == 0)) goto LAB_017e6d54;
          }
          if ((uVar1 >> 2 & 1) != 0) {
            ComputeAccessorDescriptorAccessInfo(param_1,param_2,param_3,param_4,puVar7,puVar12);
            return;
          }
          if ((uVar1 >> 1 & 1) == 0) {
            ComputeDataFieldAccessInfo(param_1,param_2,param_3,puVar7,puVar12,(long)iVar2,param_5);
            return;
          }
          goto LAB_017e6d70;
        }
      }
    }
    if (((*(short *)(*puVar7 + 7) == 0x41b) &&
        (*(ushort *)((*param_4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_4 - 1)) < 0x40))
       && (uVar10 = IsSpecialIndex(), (uVar10 & 1) != 0)) goto LAB_017e6d70;
    if (param_5 == 2) {
      LookupTransition(param_1,param_2,param_3,param_4,0);
      return;
    }
    uVar10 = *param_4;
    if ((*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0x40) &&
       ((*(byte *)(uVar10 + 7) & 1) != 0)) goto LAB_017e6d70;
    ObjectRef::ObjectRef((ObjectRef *)&local_70,*param_2,puVar7,0);
    uVar10 = ObjectRef::IsMap((ObjectRef *)&local_70);
    if ((uVar10 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
    MapRef::SerializePrototype((MapRef *)&local_70);
    uVar10 = *puVar7;
    if (*(ushort *)
         ((uVar10 & 0xffffffff00000000 | 7) +
         (ulong)*(uint *)((uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 0xf)) - 1)) <
        0xaa) {
      lVar9 = *param_2;
      if (*(char *)(lVar9 + 0x18) != '\x01') {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","storage_.is_populated_");
      }
      uStack_68 = *(undefined8 *)(lVar9 + 0x28);
      local_70 = *(ulong *)(lVar9 + 0x20);
      uVar6 = NativeContextRef::object((NativeContextRef *)&local_70);
      puVar4 = (ulong *)Map::GetConstructorFunction(puVar7,uVar6);
      if (puVar4 == (ulong *)0x0) {
        if (*(int *)(*puVar7 + 0xf) == *(int *)(*(long *)*param_2 + 0xb0)) {
          if (param_5 != 1) {
            PropertyAccessInfo::NotFound(param_1,param_2[3],param_3,puVar12);
            return;
          }
LAB_017e6d54:
          LookupTransition(param_1,param_2,param_3,param_4,puVar12);
          return;
        }
        goto LAB_017e6d70;
      }
      pIVar3 = *(Isolate **)*param_2;
      uVar10 = *puVar4 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar4 + 0x1b);
      if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar12 = *(ulong **)(pIVar3 + 0x95a0);
        if (puVar12 == *(ulong **)(pIVar3 + 0x95a8)) {
          puVar12 = (ulong *)HandleScope::Extend(pIVar3);
        }
        *(ulong **)(pIVar3 + 0x95a0) = puVar12 + 1;
        *puVar12 = uVar10;
      }
      else {
        puVar12 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar10);
        uVar10 = *puVar12;
      }
    }
    pIVar3 = *(Isolate **)*param_2;
    uVar10 = uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 0xf);
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar12 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar12 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar12 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar12 + 1;
      *puVar12 = uVar10;
    }
    else {
      puVar12 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar10);
      uVar10 = *puVar12;
    }
    uVar8 = uVar10 & 0xffffffff00000000;
    if ((*(uint *)((uVar8 | *(uint *)(uVar10 - 1)) + 0xb) >> 0x18 & 1) != 0) {
      JSObject::TryMigrateInstance(*(undefined8 *)*param_2,puVar12);
      uVar10 = *puVar12;
      uVar8 = uVar10 & 0xffffffff00000000;
    }
    uVar8 = uVar8 | *(uint *)(uVar10 - 1);
    pIVar3 = *(Isolate **)*param_2;
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar7 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar7 + 1;
      *puVar7 = uVar8;
    }
    else {
      puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar8);
    }
    uVar10 = *puVar7;
    if ((((int)uVar10 != *(int *)((uVar10 & 0xffffffff00000000) + 0x370)) &&
        (0x42 < *(ushort *)(uVar10 + 7))) &&
       ((*(ushort *)(uVar10 + 7) < 0xaa ||
        (((*(uint *)(uVar10 + 0xb) >> 0x15 & 1) != 0 || ((*(byte *)(uVar10 + 9) & 0x24) != 0))))))
    goto LAB_017e6d70;
    if ((*(uint *)(uVar10 + 0xb) >> 0x19 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","map->is_stable()");
    }
  } while( true );
}

