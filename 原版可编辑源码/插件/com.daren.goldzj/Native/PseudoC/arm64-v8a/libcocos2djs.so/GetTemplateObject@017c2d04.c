
/* v8::internal::TemplateObjectDescription::GetTemplateObject(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::NativeContext>,
   v8::internal::Handle<v8::internal::TemplateObjectDescription>,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>, int) */

ulong * v8::internal::TemplateObjectDescription::GetTemplateObject
                  (Isolate *param_1,ulong *param_2,ulong *param_3,ulong *param_4,int param_5)

{
  uint *puVar1;
  undefined4 *puVar2;
  Isolate *pIVar3;
  char cVar4;
  undefined4 uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined8 uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulong local_48;
  
  puVar1 = (uint *)(*param_2 + 0x333);
  pIVar3 = param_1 + 0x95a0;
  if (*puVar1 == *(uint *)(param_1 + 0xa0)) {
    puVar6 = (ulong *)HashTable<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
                      ::New(param_1,0,0,0);
  }
  else {
    uVar7 = *param_2 & 0xffffffff00000000 | (ulong)*puVar1;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)pIVar3;
      if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar3 = puVar6 + 1;
      *puVar6 = uVar7;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
    }
  }
  local_88 = *param_4;
  uVar5 = SharedFunctionInfo::Hash((SharedFunctionInfo *)&local_88);
  local_88 = *puVar6;
  uVar7 = ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
          ::Lookup((ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
                    *)&local_88,param_4,uVar5);
  uVar11 = uVar7 & 0xffffffff00000000;
  if ((uVar7 & 1) == 0) goto LAB_017c2dfc;
  do {
    if ((int)uVar7 == *(int *)(uVar11 + 0xa8)) {
      uVar7 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 3);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)pIVar3;
        if (puVar8 == *(ulong **)(param_1 + 0x95a8)) {
          puVar8 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar3 = puVar8 + 1;
        *puVar8 = uVar7;
      }
      else {
        puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
        uVar7 = *puVar8;
      }
      uVar9 = Factory::NewJSArrayWithElements(param_1,puVar8,2,*(int *)(uVar7 + 3) >> 1,1);
      uVar7 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 7);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)pIVar3;
        if (puVar8 == *(ulong **)(param_1 + 0x95a8)) {
          puVar8 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar3 = puVar8 + 1;
        *puVar8 = uVar7;
      }
      else {
        puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
        uVar7 = *puVar8;
      }
      puVar8 = (ulong *)Factory::NewJSArrayWithElements(param_1,puVar8,2,*(int *)(uVar7 + 3) >> 1,1)
      ;
      cVar4 = JSReceiver::SetIntegrityLevel(uVar9,5,0);
      if (cVar4 == '\0') {
        v8::V8::FromJustIsNothing();
      }
      local_70 = 0;
      uStack_68 = 0;
      uStack_78 = 0;
      local_88 = CONCAT71(local_88._1_7_,0x2a);
      local_80 = uVar9;
      cVar4 = JSArray::DefineOwnProperty(param_1,puVar8,param_1 + 0x930,&local_88,1);
      if (cVar4 == '\0') {
        v8::V8::FromJustIsNothing();
      }
      cVar4 = JSReceiver::SetIntegrityLevel(puVar8,5,0);
      if (cVar4 == '\0') {
        v8::V8::FromJustIsNothing();
      }
      local_48 = *puVar6;
      uVar7 = ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
              ::Lookup((ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
                        *)&local_48,param_4,uVar5);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar10 = *(ulong **)pIVar3;
        if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
          puVar10 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar3 = puVar10 + 1;
        *puVar10 = uVar7;
      }
      else {
        puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
      }
      uVar9 = CachedTemplateObject::New(param_1,param_5,puVar8,puVar10);
      puVar6 = (ulong *)ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
                        ::Put(param_1,puVar6,param_4,uVar9,uVar5);
      uVar11 = *param_2;
      uVar7 = *puVar6;
      puVar2 = (undefined4 *)(uVar11 + 0x333);
      *puVar2 = (int)uVar7;
      if ((uVar7 & 1) != 0) {
        uVar12 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar12 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar11,puVar2,uVar7);
          uVar12 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar11,puVar2,uVar7);
        }
      }
      return puVar8;
    }
LAB_017c2dfc:
    do {
      if (param_5 == *(int *)(uVar7 + 3) >> 1) {
        uVar11 = uVar11 | *(uint *)(uVar7 + 7);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) != (CanonicalHandleScope *)0x0) {
          puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11);
          return puVar6;
        }
        puVar6 = *(ulong **)pIVar3;
        if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
          puVar6 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar3 = puVar6 + 1;
        *puVar6 = uVar11;
        return puVar6;
      }
      puVar1 = (uint *)(uVar7 + 0xb);
      uVar7 = uVar11 | *puVar1;
    } while ((*puVar1 & 1) == 0);
  } while( true );
}

