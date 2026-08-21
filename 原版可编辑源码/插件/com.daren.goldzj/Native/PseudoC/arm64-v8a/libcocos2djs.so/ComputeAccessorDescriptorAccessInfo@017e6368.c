
/* v8::internal::compiler::AccessInfoFactory::ComputeAccessorDescriptorAccessInfo(v8::internal::Handle<v8::internal::Map>,
   v8::internal::Handle<v8::internal::Name>, v8::internal::Handle<v8::internal::Map>,
   v8::internal::MaybeHandle<v8::internal::JSObject>, v8::internal::InternalIndex,
   v8::internal::compiler::AccessMode) const */

void v8::internal::compiler::AccessInfoFactory::ComputeAccessorDescriptorAccessInfo
               (PropertyAccessInfo *param_1,long *param_2,undefined8 param_3,undefined8 *param_4,
               ulong *param_5,undefined8 param_6,long param_7,int param_8)

{
  uint uVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  Isolate *pIVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  char local_78;
  
  pIVar4 = *(Isolate **)*param_2;
  uVar7 = *param_5 & 0xffffffff00000000 | (ulong)*(uint *)(*param_5 + 0x17);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar7;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar7);
  }
  uVar7 = *param_5;
  if (*(short *)(uVar7 + 7) == 0xac) {
    pIVar4 = *(Isolate **)*param_2;
    uVar7 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0x23);
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar7;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar7);
      uVar7 = *puVar2;
    }
    pIVar4 = *(Isolate **)*param_2;
    uVar7 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 3);
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar7;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar7);
      uVar7 = *puVar2;
    }
    local_90 = uVar7 & 0xffffffff00000000 |
               (ulong)*(uint *)((uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0xb)) + 3);
    uVar6 = *param_4;
    lVar5 = *(long *)*param_2;
    uVar1 = Object::GetSimpleHash(uVar6);
    if ((uVar1 & 1) != 0) {
      local_80 = uVar6;
      uVar1 = JSReceiver::GetIdentityHash((JSReceiver *)&local_80);
    }
    uVar7 = ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>::
            Lookup((ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
                    *)&local_90,lVar5 + 0x80,param_4,(int)uVar1 >> 1);
    pIVar4 = *(Isolate **)*param_2;
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar7;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar7);
    }
    if ((*(uint *)(*puVar2 + 3) & 1) == 0) {
      lVar5 = param_2[3];
    }
    else {
      lVar5 = param_2[3];
      if (*(uint *)(*puVar2 + 3) == *(uint *)(*(long *)*param_2 + 0xa8)) {
        *(undefined4 *)param_1 = 0;
        *(undefined8 *)(param_1 + 8) = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(long *)(param_1 + 0x20) = lVar5;
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(long *)(param_1 + 0x40) = lVar5;
        param_1[0x68] = (PropertyAccessInfo)0x0;
        goto LAB_017e67d4;
      }
    }
    PropertyAccessInfo::ModuleExport(param_1,lVar5,param_3);
  }
  else {
    if (param_8 == 3) {
      PropertyAccessInfo::AccessorConstant(param_1,param_2[3],param_3,0,param_6);
      return;
    }
    uVar1 = *(uint *)(*puVar2 + (param_7 * 0xc00000000 + 0x1000000000 >> 0x20) + 7);
    uVar7 = *puVar2 & 0xffffffff00000000 | (ulong)uVar1;
    pIVar4 = *(Isolate **)*param_2;
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar7;
      if ((uVar1 & 1) != 0) goto LAB_017e6684;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar7);
      uVar7 = *puVar2;
      if ((uVar7 & 1) != 0) {
LAB_017e6684:
        if (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x52) {
          pIVar4 = *(Isolate **)*param_2;
          lVar5 = 3;
          if (param_8 != 0) {
            lVar5 = 7;
          }
          uVar1 = *(uint *)(uVar7 + lVar5);
          uVar7 = uVar7 & 0xffffffff00000000 | (ulong)uVar1;
          if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar2 = *(ulong **)(pIVar4 + 0x95a0);
            if (puVar2 == *(ulong **)(pIVar4 + 0x95a8)) {
              puVar2 = (ulong *)HandleScope::Extend(pIVar4);
            }
            *(ulong **)(pIVar4 + 0x95a0) = puVar2 + 1;
            *puVar2 = uVar7;
            if ((uVar1 & 1) != 0) goto LAB_017e6710;
          }
          else {
            puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar7);
            uVar7 = *puVar2;
            if ((uVar7 & 1) != 0) {
LAB_017e6710:
              if (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) ==
                  0x439) goto LAB_017e6794;
            }
          }
          CallOptimization::CallOptimization
                    ((CallOptimization *)&local_80,*(undefined8 *)*param_2,puVar2);
          if (local_78 != '\0') {
            lVar5 = *param_2;
            if (*(char *)(lVar5 + 0x18) != '\x01') {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","storage_.is_populated_");
            }
            uStack_88 = *(undefined8 *)(lVar5 + 0x28);
            local_90 = *(ulong *)(lVar5 + 0x20);
            puVar3 = (undefined8 *)NativeContextRef::object((NativeContextRef *)&local_90);
            uVar7 = CallOptimization::IsCrossContextLazyAccessorPair
                              ((CallOptimization *)&local_80,*puVar3,*param_5);
            if ((uVar7 & 1) == 0) {
              param_6 = CallOptimization::LookupHolderOfExpectedType
                                  ((CallOptimization *)&local_80,param_3,&local_90);
              if ((int)local_90 != 0) {
LAB_017e6794:
                if ((param_8 == 0) &&
                   (lVar5 = FunctionTemplateInfo::TryGetCachedPropertyName
                                      (*(undefined8 *)*param_2,puVar2), lVar5 != 0)) {
                  ComputePropertyAccessInfo(param_1,param_2,param_5,lVar5,0);
                  if (*(int *)param_1 != 0) {
                    return;
                  }
                  if (*(long *)(param_1 + 0x28) != 0) {
                    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
                  }
                  if (*(long *)(param_1 + 8) != 0) {
                    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
                  }
                }
                PropertyAccessInfo::AccessorConstant(param_1,param_2[3],param_3,puVar2,param_6);
                return;
              }
            }
          }
        }
      }
    }
    lVar5 = param_2[3];
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    param_1[0x68] = (PropertyAccessInfo)0x0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(long *)(param_1 + 0x20) = lVar5;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(long *)(param_1 + 0x40) = lVar5;
LAB_017e67d4:
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x70) = 1;
  }
  return;
}

