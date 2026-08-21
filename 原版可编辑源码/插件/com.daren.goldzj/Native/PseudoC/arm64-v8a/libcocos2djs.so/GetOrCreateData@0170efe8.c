
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::compiler::JSHeapBroker::GetOrCreateData(v8::internal::Handle<v8::internal::Object>)
    */

void __thiscall
v8::internal::compiler::JSHeapBroker::GetOrCreateData(JSHeapBroker *this,ulong *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  byte bVar4;
  undefined4 uVar5;
  long lVar6;
  ObjectData *pOVar7;
  HeapObjectData *pHVar8;
  JSFunctionData *pJVar9;
  Isolate *pIVar10;
  ulong *puVar11;
  StringData *pSVar12;
  AllocationSiteData *pAVar13;
  FunctionTemplateInfoData *pFVar14;
  MapData *pMVar15;
  SharedFunctionInfoData *pSVar16;
  ulong uVar17;
  Zone *pZVar18;
  undefined8 uVar19;
  uint *puVar20;
  ulong uVar21;
  StringData *pSVar22;
  long *plVar23;
  JSHeapBroker *pJVar24;
  HeapObjectData *this_00;
  int iVar25;
  ulong *local_70;
  ulong local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(int *)(this + 0x70) != 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","SerializingAllowed()");
  }
  pJVar24 = this + 0x10;
  local_70 = param_2;
  lVar6 = RefsMap::LookupOrInsert(*(RefsMap **)(this + 0x30),(ulong *)&local_70,*(Zone **)pJVar24);
  plVar23 = (long *)(lVar6 + 8);
  if (*plVar23 != 0) goto LAB_0170f084;
  uVar17 = *param_2;
  if ((uVar17 & 1) == 0) {
    pZVar18 = *(Zone **)pJVar24;
    pOVar7 = *(ObjectData **)(pZVar18 + 0x10);
    if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pOVar7) < 0x10) {
      pOVar7 = (ObjectData *)Zone::NewExpand(pZVar18,0x10);
    }
    else {
      *(ObjectData **)(pZVar18 + 0x10) = pOVar7 + 0x10;
    }
    ObjectData::ObjectData(pOVar7,this,plVar23,param_2,0);
    lVar6 = *plVar23;
  }
  else {
    uVar21 = uVar17 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar21 + *(uint *)(uVar17 - 1)) == 0x423) {
      pZVar18 = *(Zone **)pJVar24;
      pHVar8 = *(HeapObjectData **)(pZVar18 + 0x10);
      if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pHVar8) < 0xe0) {
        pHVar8 = (HeapObjectData *)Zone::NewExpand(pZVar18,0xe0);
      }
      else {
        *(HeapObjectData **)(pZVar18 + 0x10) = pHVar8 + 0xe0;
      }
      HeapObjectData::HeapObjectData(pHVar8,this,plVar23,param_2);
      *(undefined4 *)(pHVar8 + 0x1f) = 0;
      *(undefined8 *)(pHVar8 + 0x18) = 0;
      uVar19 = *(undefined8 *)(this + 0x10);
      *(undefined8 *)(pHVar8 + 0x28) = 0;
      *(undefined8 *)(pHVar8 + 0x30) = 0;
      pHVar8[0x48] = (HeapObjectData)0x0;
      *(undefined8 *)(pHVar8 + 0x50) = 0;
      *(undefined8 *)(pHVar8 + 0x38) = 0;
      *(undefined8 *)(pHVar8 + 0x40) = uVar19;
      uVar19 = *(undefined8 *)(this + 0x10);
      *(undefined8 *)(pHVar8 + 0x58) = 0;
      *(undefined8 *)(pHVar8 + 0x60) = 0;
      *(undefined8 *)(pHVar8 + 0x68) = 0;
      *(undefined8 *)(pHVar8 + 0x70) = uVar19;
      uVar19 = *(undefined8 *)(this + 0x10);
      *(undefined8 *)(pHVar8 + 0x78) = 0;
      *(undefined8 *)(pHVar8 + 0xa0) = 0;
      *(undefined8 *)(pHVar8 + 0x80) = 0;
      *(undefined8 *)(pHVar8 + 0x88) = uVar19;
      *(undefined8 *)(pHVar8 + 0x90) = 0;
      *(undefined8 *)(pHVar8 + 0x98) = uVar19;
      *(undefined4 *)(pHVar8 + 0xa8) = 0x3f800000;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>>>
      ::rehash((__hash_table<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>>>
                *)(pHVar8 + 0x78),100);
      pHVar8[0xb0] = (HeapObjectData)0x0;
      *(undefined8 *)(pHVar8 + 0xb8) = 0;
      uVar19 = *(undefined8 *)(this + 0x10);
      *(undefined8 *)(pHVar8 + 0xc0) = 0;
      *(undefined8 *)(pHVar8 + 200) = 0;
      *(undefined8 *)(pHVar8 + 0xd0) = 0;
      *(undefined8 *)(pHVar8 + 0xd8) = uVar19;
      lVar6 = *plVar23;
    }
    else {
      puVar20 = (uint *)(uVar17 - 1);
      if (*(short *)(uVar21 + *puVar20) == 0x438) {
        pZVar18 = *(Zone **)pJVar24;
        pHVar8 = *(HeapObjectData **)(pZVar18 + 0x10);
        if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pHVar8) < 0xd0) {
          pHVar8 = (HeapObjectData *)Zone::NewExpand(pZVar18,0xd0);
        }
        else {
          *(HeapObjectData **)(pZVar18 + 0x10) = pHVar8 + 0xd0;
        }
        HeapObjectData::HeapObjectData(pHVar8,this,plVar23,param_2);
        *(undefined4 *)(pHVar8 + 0x1f) = 0;
        *(undefined8 *)(pHVar8 + 0x18) = 0;
        uVar19 = *(undefined8 *)(this + 0x10);
        *(undefined8 *)(pHVar8 + 0x28) = 0;
        *(undefined8 *)(pHVar8 + 0x30) = 0;
        pHVar8[0x48] = (HeapObjectData)0x0;
        *(undefined8 *)(pHVar8 + 0x50) = 0;
        *(undefined8 *)(pHVar8 + 0x38) = 0;
        *(undefined8 *)(pHVar8 + 0x40) = uVar19;
        uVar19 = *(undefined8 *)(this + 0x10);
        *(undefined8 *)(pHVar8 + 0x58) = 0;
        *(undefined8 *)(pHVar8 + 0x60) = 0;
        *(undefined8 *)(pHVar8 + 0x68) = 0;
        *(undefined8 *)(pHVar8 + 0x70) = uVar19;
        uVar19 = *(undefined8 *)(this + 0x10);
        *(undefined8 *)(pHVar8 + 0x78) = 0;
        *(undefined8 *)(pHVar8 + 0xa0) = 0;
        *(undefined8 *)(pHVar8 + 0x80) = 0;
        *(undefined8 *)(pHVar8 + 0x88) = uVar19;
        *(undefined8 *)(pHVar8 + 0x90) = 0;
        *(undefined8 *)(pHVar8 + 0x98) = uVar19;
        *(undefined4 *)(pHVar8 + 0xa8) = 0x3f800000;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>>>
        ::rehash((__hash_table<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>>>
                  *)(pHVar8 + 0x78),100);
        pHVar8[0xb0] = (HeapObjectData)0x0;
        *(undefined8 *)(pHVar8 + 0xc0) = 0;
        *(undefined8 *)(pHVar8 + 200) = 0;
        *(undefined8 *)(pHVar8 + 0xb8) = 0;
        lVar6 = *plVar23;
      }
      else if (*(short *)(uVar21 + *puVar20) == 0x41a) {
        pZVar18 = *(Zone **)pJVar24;
        pHVar8 = *(HeapObjectData **)(pZVar18 + 0x10);
        if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pHVar8) < 0xc0) {
          pHVar8 = (HeapObjectData *)Zone::NewExpand(pZVar18,0xc0);
        }
        else {
          *(HeapObjectData **)(pZVar18 + 0x10) = pHVar8 + 0xc0;
        }
        HeapObjectData::HeapObjectData(pHVar8,this,plVar23,param_2);
        *(undefined4 *)(pHVar8 + 0x1f) = 0;
        *(undefined8 *)(pHVar8 + 0x18) = 0;
        uVar19 = *(undefined8 *)(this + 0x10);
        *(undefined8 *)(pHVar8 + 0x28) = 0;
        *(undefined8 *)(pHVar8 + 0x30) = 0;
        pHVar8[0x48] = (HeapObjectData)0x0;
        *(undefined8 *)(pHVar8 + 0x50) = 0;
        *(undefined8 *)(pHVar8 + 0x38) = 0;
        *(undefined8 *)(pHVar8 + 0x40) = uVar19;
        uVar19 = *(undefined8 *)(this + 0x10);
        *(undefined8 *)(pHVar8 + 0x58) = 0;
        *(undefined8 *)(pHVar8 + 0x60) = 0;
        *(undefined8 *)(pHVar8 + 0x68) = 0;
        *(undefined8 *)(pHVar8 + 0x70) = uVar19;
        uVar19 = *(undefined8 *)(this + 0x10);
        *(undefined8 *)(pHVar8 + 0x78) = 0;
        *(undefined8 *)(pHVar8 + 0xa0) = 0;
        *(undefined8 *)(pHVar8 + 0x80) = 0;
        *(undefined8 *)(pHVar8 + 0x88) = uVar19;
        *(undefined8 *)(pHVar8 + 0x90) = 0;
        *(undefined8 *)(pHVar8 + 0x98) = uVar19;
        *(undefined4 *)(pHVar8 + 0xa8) = 0x3f800000;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>>>
        ::rehash((__hash_table<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>>>
                  *)(pHVar8 + 0x78),100);
        *(undefined8 *)(pHVar8 + 0xb0) = *(undefined8 *)(*param_2 + 0x17);
        *(undefined8 *)(pHVar8 + 0xb8) = *(undefined8 *)(*param_2 + 0xf);
        lVar6 = *plVar23;
      }
      else if (*(short *)(uVar21 + *puVar20) == 0x439) {
        pZVar18 = *(Zone **)pJVar24;
        pJVar9 = *(JSFunctionData **)(pZVar18 + 0x10);
        if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pJVar9) < 0xf0) {
          pJVar9 = (JSFunctionData *)Zone::NewExpand(pZVar18,0xf0);
        }
        else {
          *(JSFunctionData **)(pZVar18 + 0x10) = pJVar9 + 0xf0;
        }
        JSFunctionData::JSFunctionData(pJVar9,this,plVar23,param_2);
        lVar6 = *plVar23;
      }
      else if (*(short *)(uVar21 + *puVar20) == 0xaa) {
        pZVar18 = *(Zone **)pJVar24;
        pHVar8 = *(HeapObjectData **)(pZVar18 + 0x10);
        if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pHVar8) < 0xd8) {
          pHVar8 = (HeapObjectData *)Zone::NewExpand(pZVar18,0xd8);
        }
        else {
          *(HeapObjectData **)(pZVar18 + 0x10) = pHVar8 + 0xd8;
        }
        HeapObjectData::HeapObjectData(pHVar8,this,plVar23,param_2);
        *(undefined4 *)(pHVar8 + 0x1f) = 0;
        *(undefined8 *)(pHVar8 + 0x18) = 0;
        uVar19 = *(undefined8 *)(this + 0x10);
        *(undefined8 *)(pHVar8 + 0x28) = 0;
        *(undefined8 *)(pHVar8 + 0x30) = 0;
        pHVar8[0x48] = (HeapObjectData)0x0;
        *(undefined8 *)(pHVar8 + 0x50) = 0;
        *(undefined8 *)(pHVar8 + 0x38) = 0;
        *(undefined8 *)(pHVar8 + 0x40) = uVar19;
        uVar19 = *(undefined8 *)(this + 0x10);
        *(undefined8 *)(pHVar8 + 0x58) = 0;
        *(undefined8 *)(pHVar8 + 0x60) = 0;
        *(undefined8 *)(pHVar8 + 0x68) = 0;
        *(undefined8 *)(pHVar8 + 0x70) = uVar19;
        uVar19 = *(undefined8 *)(this + 0x10);
        this_00 = pHVar8 + 0x78;
        *(undefined8 *)this_00 = 0;
        *(undefined8 *)(pHVar8 + 0xa0) = 0;
        *(undefined8 *)(pHVar8 + 0x80) = 0;
        *(undefined8 *)(pHVar8 + 0x88) = uVar19;
        *(undefined8 *)(pHVar8 + 0x90) = 0;
        *(undefined8 *)(pHVar8 + 0x98) = uVar19;
        *(undefined4 *)(pHVar8 + 0xa8) = 0x3f800000;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>>>
        ::rehash((__hash_table<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>>>
                  *)this_00,100);
        uVar17 = *param_2;
        local_70 = (ulong *)(uVar17 & 0xffffffff00000000);
        local_58 = 0;
        local_68 = (ulong)local_70 | (ulong)*(uint *)(uVar17 + 0xf);
        local_54 = 0;
        uStack_60 = 0;
        local_50 = 0;
        PrototypeIterator::Advance((PrototypeIterator *)&local_70);
        pHVar8[0xb0] = (HeapObjectData)((int)local_68 != (int)uVar17);
LAB_0170f3e4:
        uVar19 = *(undefined8 *)(this + 0x10);
        *(undefined8 *)(this_00 + 0x40) = 0;
        *(undefined8 *)(this_00 + 0x48) = 0;
        *(undefined8 *)(this_00 + 0x50) = 0;
        *(undefined8 *)(this_00 + 0x58) = uVar19;
        lVar6 = *plVar23;
      }
      else if (*(short *)(uVar21 + *puVar20) == 0xab) {
LAB_0170f40c:
        pZVar18 = *(Zone **)pJVar24;
        pHVar8 = *(HeapObjectData **)(pZVar18 + 0x10);
        if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pHVar8) < 0xb0) {
          pHVar8 = (HeapObjectData *)Zone::NewExpand(pZVar18,0xb0);
        }
        else {
          *(HeapObjectData **)(pZVar18 + 0x10) = pHVar8 + 0xb0;
        }
        HeapObjectData::HeapObjectData(pHVar8,this,plVar23,param_2);
        *(undefined4 *)(pHVar8 + 0x1f) = 0;
        *(undefined8 *)(pHVar8 + 0x18) = 0;
        uVar19 = *(undefined8 *)(this + 0x10);
        *(undefined8 *)(pHVar8 + 0x28) = 0;
        *(undefined8 *)(pHVar8 + 0x30) = 0;
        pHVar8[0x48] = (HeapObjectData)0x0;
        *(undefined8 *)(pHVar8 + 0x50) = 0;
        *(undefined8 *)(pHVar8 + 0x38) = 0;
        *(undefined8 *)(pHVar8 + 0x40) = uVar19;
        uVar19 = *(undefined8 *)(this + 0x10);
        *(undefined8 *)(pHVar8 + 0x58) = 0;
        *(undefined8 *)(pHVar8 + 0x60) = 0;
        *(undefined8 *)(pHVar8 + 0x68) = 0;
        *(undefined8 *)(pHVar8 + 0x70) = uVar19;
        uVar19 = *(undefined8 *)(this + 0x10);
        *(undefined8 *)(pHVar8 + 0x78) = 0;
        *(undefined8 *)(pHVar8 + 0xa0) = 0;
        *(undefined8 *)(pHVar8 + 0x80) = 0;
        *(undefined8 *)(pHVar8 + 0x88) = uVar19;
        *(undefined8 *)(pHVar8 + 0x90) = 0;
        *(undefined8 *)(pHVar8 + 0x98) = uVar19;
        *(undefined4 *)(pHVar8 + 0xa8) = 0x3f800000;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>>>
        ::rehash((__hash_table<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>>>
                  *)(pHVar8 + 0x78),100);
        lVar6 = *plVar23;
      }
      else if (*(short *)(uVar21 + *puVar20) == 0x42e) {
        pZVar18 = *(Zone **)pJVar24;
        pHVar8 = *(HeapObjectData **)(pZVar18 + 0x10);
        if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pHVar8) < 0xe0) {
          pHVar8 = (HeapObjectData *)Zone::NewExpand(pZVar18,0xe0);
        }
        else {
          *(HeapObjectData **)(pZVar18 + 0x10) = pHVar8 + 0xe0;
        }
        HeapObjectData::HeapObjectData(pHVar8,this,plVar23,param_2);
        *(undefined4 *)(pHVar8 + 0x1f) = 0;
        *(undefined8 *)(pHVar8 + 0x18) = 0;
        uVar19 = *(undefined8 *)(this + 0x10);
        *(undefined8 *)(pHVar8 + 0x28) = 0;
        *(undefined8 *)(pHVar8 + 0x30) = 0;
        pHVar8[0x48] = (HeapObjectData)0x0;
        *(undefined8 *)(pHVar8 + 0x50) = 0;
        *(undefined8 *)(pHVar8 + 0x38) = 0;
        *(undefined8 *)(pHVar8 + 0x40) = uVar19;
        uVar19 = *(undefined8 *)(this + 0x10);
        *(undefined8 *)(pHVar8 + 0x58) = 0;
        *(undefined8 *)(pHVar8 + 0x60) = 0;
        *(undefined8 *)(pHVar8 + 0x68) = 0;
        *(undefined8 *)(pHVar8 + 0x70) = uVar19;
        uVar19 = *(undefined8 *)(this + 0x10);
        *(undefined8 *)(pHVar8 + 0x78) = 0;
        *(undefined8 *)(pHVar8 + 0xa0) = 0;
        *(undefined8 *)(pHVar8 + 0x80) = 0;
        *(undefined8 *)(pHVar8 + 0x88) = uVar19;
        *(undefined8 *)(pHVar8 + 0x90) = 0;
        *(undefined8 *)(pHVar8 + 0x98) = uVar19;
        *(undefined4 *)(pHVar8 + 0xa8) = 0x3f800000;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>>>
        ::rehash((__hash_table<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>>>
                  *)(pHVar8 + 0x78),100);
        pHVar8[0xb0] = (HeapObjectData)0x0;
        *(undefined8 *)(pHVar8 + 0xc0) = 0;
        *(undefined8 *)(pHVar8 + 0xb8) = 0;
        *(undefined8 *)(pHVar8 + 0xd0) = 0;
        *(undefined8 *)(pHVar8 + 200) = 0;
        *(undefined8 *)(pHVar8 + 0xd8) = 0;
        lVar6 = *plVar23;
      }
      else if (*(short *)(uVar21 + *puVar20) == 0x41b) {
        pZVar18 = *(Zone **)pJVar24;
        pHVar8 = *(HeapObjectData **)(pZVar18 + 0x10);
        if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pHVar8) < 0xd8) {
          pHVar8 = (HeapObjectData *)Zone::NewExpand(pZVar18,0xd8);
        }
        else {
          *(HeapObjectData **)(pZVar18 + 0x10) = pHVar8 + 0xd8;
        }
        HeapObjectData::HeapObjectData(pHVar8,this,plVar23,param_2);
        *(undefined4 *)(pHVar8 + 0x1f) = 0;
        *(undefined8 *)(pHVar8 + 0x18) = 0;
        uVar19 = *(undefined8 *)(this + 0x10);
        *(undefined8 *)(pHVar8 + 0x28) = 0;
        *(undefined8 *)(pHVar8 + 0x30) = 0;
        pHVar8[0x48] = (HeapObjectData)0x0;
        *(undefined8 *)(pHVar8 + 0x50) = 0;
        *(undefined8 *)(pHVar8 + 0x38) = 0;
        *(undefined8 *)(pHVar8 + 0x40) = uVar19;
        uVar19 = *(undefined8 *)(this + 0x10);
        *(undefined8 *)(pHVar8 + 0x58) = 0;
        *(undefined8 *)(pHVar8 + 0x60) = 0;
        *(undefined8 *)(pHVar8 + 0x68) = 0;
        *(undefined8 *)(pHVar8 + 0x70) = uVar19;
        uVar19 = *(undefined8 *)(this + 0x10);
        *(undefined8 *)(pHVar8 + 0x78) = 0;
        *(undefined8 *)(pHVar8 + 0xa0) = 0;
        *(undefined8 *)(pHVar8 + 0x80) = 0;
        *(undefined8 *)(pHVar8 + 0x88) = uVar19;
        *(undefined8 *)(pHVar8 + 0x90) = 0;
        *(undefined8 *)(pHVar8 + 0x98) = uVar19;
        *(undefined4 *)(pHVar8 + 0xa8) = 0x3f800000;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>>>
        ::rehash((__hash_table<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>>>
                  *)(pHVar8 + 0x78),100);
        pHVar8[0xb0] = (HeapObjectData)(*(int *)(*param_2 + 0x2f) == *(int *)(*param_2 + 7));
        *(undefined8 *)(pHVar8 + 0xb8) = *(undefined8 *)(*param_2 + 0x1f);
        lVar6 = *(long *)(*param_2 + 0x27);
        uVar1 = *(uint *)(*param_2 + 0x2f);
        pHVar8[200] = (HeapObjectData)0x0;
        *(undefined8 *)(pHVar8 + 0xd0) = 0;
        *(ulong *)(pHVar8 + 0xc0) = lVar6 + (ulong)uVar1;
        lVar6 = *plVar23;
      }
      else if (*(short *)(uVar21 + *puVar20) == 0x8f) {
        pZVar18 = *(Zone **)pJVar24;
        pHVar8 = *(HeapObjectData **)(pZVar18 + 0x10);
        if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pHVar8) < 0x1d8) {
          pHVar8 = (HeapObjectData *)Zone::NewExpand(pZVar18,0x1d8);
        }
        else {
          *(HeapObjectData **)(pZVar18 + 0x10) = pHVar8 + 0x1d8;
        }
        HeapObjectData::HeapObjectData(pHVar8,this,plVar23,param_2);
        uVar19 = *(undefined8 *)(this + 0x10);
        *(undefined8 *)(pHVar8 + 0x20) = 0;
        *(undefined8 *)(pHVar8 + 0x30) = 0;
        *(undefined8 *)(pHVar8 + 0x38) = 0;
        *(HeapObjectData **)(pHVar8 + 0x18) = pHVar8 + 0x20;
        pHVar8[0x40] = (HeapObjectData)0x0;
        *(undefined8 *)(pHVar8 + 0x28) = uVar19;
        *(undefined8 *)(pHVar8 + 0x50) = 0;
        *(undefined8 *)(pHVar8 + 0x48) = 0;
        *(undefined8 *)(pHVar8 + 0x60) = 0;
        *(undefined8 *)(pHVar8 + 0x58) = 0;
        *(undefined8 *)(pHVar8 + 0x70) = 0;
        *(undefined8 *)(pHVar8 + 0x68) = 0;
        *(undefined8 *)(pHVar8 + 0x80) = 0;
        *(undefined8 *)(pHVar8 + 0x78) = 0;
        *(undefined8 *)(pHVar8 + 0x90) = 0;
        *(undefined8 *)(pHVar8 + 0x88) = 0;
        *(undefined8 *)(pHVar8 + 0xa0) = 0;
        *(undefined8 *)(pHVar8 + 0x98) = 0;
        *(undefined8 *)(pHVar8 + 0xb0) = 0;
        *(undefined8 *)(pHVar8 + 0xa8) = 0;
        *(undefined8 *)(pHVar8 + 0xc0) = 0;
        *(undefined8 *)(pHVar8 + 0xb8) = 0;
        *(undefined8 *)(pHVar8 + 0xd0) = 0;
        *(undefined8 *)(pHVar8 + 200) = 0;
        *(undefined8 *)(pHVar8 + 0xe0) = 0;
        *(undefined8 *)(pHVar8 + 0xd8) = 0;
        *(undefined8 *)(pHVar8 + 0xf0) = 0;
        *(undefined8 *)(pHVar8 + 0xe8) = 0;
        *(undefined8 *)(pHVar8 + 0x100) = 0;
        *(undefined8 *)(pHVar8 + 0xf8) = 0;
        *(undefined8 *)(pHVar8 + 0x110) = 0;
        *(undefined8 *)(pHVar8 + 0x108) = 0;
        *(undefined8 *)(pHVar8 + 0x120) = 0;
        *(undefined8 *)(pHVar8 + 0x118) = 0;
        *(undefined8 *)(pHVar8 + 0x130) = 0;
        *(undefined8 *)(pHVar8 + 0x128) = 0;
        *(undefined8 *)(pHVar8 + 0x140) = 0;
        *(undefined8 *)(pHVar8 + 0x138) = 0;
        *(undefined8 *)(pHVar8 + 0x150) = 0;
        *(undefined8 *)(pHVar8 + 0x148) = 0;
        *(undefined8 *)(pHVar8 + 0x160) = 0;
        *(undefined8 *)(pHVar8 + 0x158) = 0;
        *(undefined8 *)(pHVar8 + 0x170) = 0;
        *(undefined8 *)(pHVar8 + 0x168) = 0;
        *(undefined8 *)(pHVar8 + 0x180) = 0;
        *(undefined8 *)(pHVar8 + 0x178) = 0;
        *(undefined8 *)(pHVar8 + 400) = 0;
        *(undefined8 *)(pHVar8 + 0x188) = 0;
        *(undefined8 *)(pHVar8 + 0x1a0) = 0;
        *(undefined8 *)(pHVar8 + 0x198) = 0;
        *(undefined8 *)(pHVar8 + 0x1a8) = 0;
        uVar19 = *(undefined8 *)(this + 0x10);
        *(undefined8 *)(pHVar8 + 0x1b0) = 0;
        *(undefined8 *)(pHVar8 + 0x1b8) = 0;
        *(undefined8 *)(pHVar8 + 0x1d0) = 0;
        *(undefined8 *)(pHVar8 + 0x1c0) = 0;
        *(undefined8 *)(pHVar8 + 0x1c8) = uVar19;
        lVar6 = *plVar23;
      }
      else if (*(ushort *)(uVar21 + *puVar20) - 0x88 < 10) {
        pZVar18 = *(Zone **)pJVar24;
        pHVar8 = *(HeapObjectData **)(pZVar18 + 0x10);
        if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pHVar8) < 0x40) {
          pHVar8 = (HeapObjectData *)Zone::NewExpand(pZVar18,0x40);
        }
        else {
          *(HeapObjectData **)(pZVar18 + 0x10) = pHVar8 + 0x40;
        }
        HeapObjectData::HeapObjectData(pHVar8,this,plVar23,param_2);
        uVar19 = *(undefined8 *)(this + 0x10);
        *(undefined8 *)(pHVar8 + 0x20) = 0;
        *(undefined8 *)(pHVar8 + 0x30) = 0;
        *(undefined8 *)(pHVar8 + 0x38) = 0;
        *(HeapObjectData **)(pHVar8 + 0x18) = pHVar8 + 0x20;
        *(undefined8 *)(pHVar8 + 0x28) = uVar19;
        lVar6 = *plVar23;
      }
      else if (*(short *)(uVar21 + *puVar20) == 0x83) {
        pZVar18 = *(Zone **)pJVar24;
        pHVar8 = *(HeapObjectData **)(pZVar18 + 0x10);
        if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pHVar8) < 0x30) {
          pHVar8 = (HeapObjectData *)Zone::NewExpand(pZVar18,0x30);
        }
        else {
          *(HeapObjectData **)(pZVar18 + 0x10) = pHVar8 + 0x30;
        }
        HeapObjectData::HeapObjectData(pHVar8,this,plVar23,param_2);
        local_70 = (ulong *)*param_2;
        uVar5 = ScopeInfo::ContextLength((ScopeInfo *)&local_70);
        *(undefined4 *)(pHVar8 + 0x18) = uVar5;
        local_70 = (ulong *)*param_2;
        bVar4 = ScopeInfo::HasOuterScopeInfo((ScopeInfo *)&local_70);
        pHVar8[0x1c] = (HeapObjectData)(bVar4 & 1);
        if (*(int *)(*param_2 + 3) < 2) {
          iVar25 = 0;
        }
        else {
          iVar25 = *(int *)(*param_2 + 7) >> 1;
        }
        *(int *)(pHVar8 + 0x20) = iVar25;
        *(undefined8 *)(pHVar8 + 0x28) = 0;
        lVar6 = *plVar23;
      }
      else {
        if (*(short *)(uVar21 + *puVar20) == 0x84) goto LAB_0170f7f0;
        if (*(short *)(uVar21 + *puVar20) == 0x86) {
          pZVar18 = *(Zone **)pJVar24;
          pHVar8 = *(HeapObjectData **)(pZVar18 + 0x10);
          if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pHVar8) < 0xb0) {
            pHVar8 = (HeapObjectData *)Zone::NewExpand(pZVar18,0xb0);
          }
          else {
            *(HeapObjectData **)(pZVar18 + 0x10) = pHVar8 + 0xb0;
          }
          HeapObjectData::HeapObjectData(pHVar8,this,plVar23,param_2);
          *(int *)(pHVar8 + 0x18) = *(int *)(*param_2 + 3) >> 1;
          iVar2 = *(int *)(*param_2 + 0x13);
          iVar25 = iVar2 + 7;
          if (-1 < iVar2) {
            iVar25 = iVar2;
          }
          *(int *)(pHVar8 + 0x1c) = iVar25 >> 3;
          *(int *)(pHVar8 + 0x20) = *(int *)(*param_2 + 0x17) >> 3;
          iVar2 = *(int *)(*param_2 + 0x1b);
          pHVar8[0x28] = (HeapObjectData)0x0;
          iVar25 = 0x7fffffff;
          if (iVar2 != 0) {
            iVar25 = -5 - iVar2;
          }
          *(int *)(pHVar8 + 0x24) = iVar25;
          uVar19 = *(undefined8 *)(this + 0x10);
          *(undefined8 *)(pHVar8 + 0x30) = 0;
          *(undefined8 *)(pHVar8 + 0x38) = 0;
          *(undefined8 *)(pHVar8 + 0x40) = 0;
          *(undefined8 *)(pHVar8 + 0x48) = uVar19;
          uVar19 = *(undefined8 *)(this + 0x10);
          *(undefined8 *)(pHVar8 + 0x50) = 0;
          *(undefined8 *)(pHVar8 + 0x58) = 0;
          *(undefined8 *)(pHVar8 + 0x60) = 0;
          *(undefined8 *)(pHVar8 + 0x68) = uVar19;
          uVar19 = *(undefined8 *)(this + 0x10);
          *(undefined8 *)(pHVar8 + 0x70) = 0;
          *(undefined8 *)(pHVar8 + 0x78) = 0;
          *(undefined8 *)(pHVar8 + 0x80) = 0;
          *(undefined8 *)(pHVar8 + 0x88) = uVar19;
          uVar19 = *(undefined8 *)(this + 0x10);
          *(undefined8 *)(pHVar8 + 0x90) = 0;
          *(undefined8 *)(pHVar8 + 0x98) = 0;
          *(undefined8 *)(pHVar8 + 0xa0) = 0;
          *(undefined8 *)(pHVar8 + 0xa8) = uVar19;
          lVar6 = *plVar23;
        }
        else if ((*(ushort *)(uVar21 + *puVar20) - 0x76 < 0xf) ||
                (*(short *)(uVar21 + *puVar20) == 0x87)) {
          pZVar18 = *(Zone **)pJVar24;
          pHVar8 = *(HeapObjectData **)(pZVar18 + 0x10);
          if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pHVar8) < 0x40) {
            pHVar8 = (HeapObjectData *)Zone::NewExpand(pZVar18,0x40);
          }
          else {
            *(HeapObjectData **)(pZVar18 + 0x10) = pHVar8 + 0x40;
          }
          HeapObjectData::HeapObjectData(pHVar8,this,plVar23,param_2);
          iVar25 = *(int *)(*param_2 + 3);
          pHVar8[0x1c] = (HeapObjectData)0x0;
          *(int *)(pHVar8 + 0x18) = iVar25 >> 1;
          uVar19 = *(undefined8 *)(this + 0x10);
          *(undefined8 *)(pHVar8 + 0x20) = 0;
          *(undefined8 *)(pHVar8 + 0x28) = 0;
          *(undefined8 *)(pHVar8 + 0x30) = 0;
          *(undefined8 *)(pHVar8 + 0x38) = uVar19;
          lVar6 = *plVar23;
        }
        else {
          if (*(ushort *)(uVar21 + *puVar20) < 0x20) {
            pZVar18 = *(Zone **)pJVar24;
            pSVar12 = *(StringData **)(pZVar18 + 0x10);
            if (0x5f < (ulong)(*(long *)(pZVar18 + 0x18) - (long)pSVar12)) {
              pSVar22 = pSVar12 + 0x60;
              goto LAB_0170fa40;
            }
            uVar17 = 0x60;
LAB_0170fdd0:
            pSVar12 = (StringData *)Zone::NewExpand(pZVar18,uVar17);
          }
          else {
            if (0x3f < *(ushort *)(uVar21 + *puVar20)) {
              if (*(short *)(uVar21 + *puVar20) == 0x40) {
LAB_0170f7f0:
                pZVar18 = *(Zone **)pJVar24;
                pHVar8 = *(HeapObjectData **)(pZVar18 + 0x10);
                uVar17 = *(long *)(pZVar18 + 0x18) - (long)pHVar8;
joined_r0x017101dc:
                if (uVar17 < 0x18) {
                  pHVar8 = (HeapObjectData *)Zone::NewExpand(pZVar18,0x18);
                }
                else {
                  *(HeapObjectData **)(pZVar18 + 0x10) = pHVar8 + 0x18;
                }
                HeapObjectData::HeapObjectData(pHVar8,this,plVar23,param_2);
                lVar6 = *plVar23;
              }
              else {
                if (0xa9 < *(ushort *)(uVar21 + *puVar20)) goto LAB_0170f40c;
                if (*(short *)(uVar21 + *puVar20) == 0x51) goto LAB_0170f7f0;
                if (*(short *)(uVar21 + *puVar20) == 0x55) {
                  pZVar18 = *(Zone **)pJVar24;
                  pAVar13 = *(AllocationSiteData **)(pZVar18 + 0x10);
                  if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pAVar13) < 0x40) {
                    pAVar13 = (AllocationSiteData *)Zone::NewExpand(pZVar18,0x40);
                  }
                  else {
                    *(AllocationSiteData **)(pZVar18 + 0x10) = pAVar13 + 0x40;
                  }
                  AllocationSiteData::AllocationSiteData(pAVar13,this,plVar23,param_2);
                  lVar6 = *plVar23;
                  goto joined_r0x0170fcb8;
                }
                if (*(short *)(uVar21 + *puVar20) == 0x56) {
                  pZVar18 = *(Zone **)pJVar24;
                  pHVar8 = *(HeapObjectData **)(pZVar18 + 0x10);
                  if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pHVar8) < 0x20) {
                    pHVar8 = (HeapObjectData *)Zone::NewExpand(pZVar18,0x20);
                  }
                  else {
                    *(HeapObjectData **)(pZVar18 + 0x10) = pHVar8 + 0x20;
                  }
                  HeapObjectData::HeapObjectData(pHVar8,this,plVar23,param_2);
                  uVar17 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 7);
LAB_0170fb78:
                  iVar25 = *(int *)(uVar17 + 3);
                  goto LAB_0170fb7c;
                }
                if (*(short *)(uVar21 + *puVar20) == 0x41) {
                  pZVar18 = *(Zone **)pJVar24;
                  pHVar8 = *(HeapObjectData **)(pZVar18 + 0x10);
                  if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pHVar8) < 0x20) {
                    pHVar8 = (HeapObjectData *)Zone::NewExpand(pZVar18,0x20);
                  }
                  else {
                    *(HeapObjectData **)(pZVar18 + 0x10) = pHVar8 + 0x20;
                  }
                  HeapObjectData::HeapObjectData(pHVar8,this,plVar23,param_2);
                  local_70 = (ulong *)*param_2;
                  lVar6 = BigInt::AsUint64((BigInt *)&local_70,(bool *)0x0);
LAB_0170fbf4:
                  *(long *)(pHVar8 + 0x18) = lVar6;
                  lVar6 = *plVar23;
                }
                else if (*(short *)(uVar21 + *puVar20) == 0x59) {
                  pZVar18 = *(Zone **)pJVar24;
                  pHVar8 = *(HeapObjectData **)(pZVar18 + 0x10);
                  if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pHVar8) < 0x28) {
                    pHVar8 = (HeapObjectData *)Zone::NewExpand(pZVar18,0x28);
                  }
                  else {
                    *(HeapObjectData **)(pZVar18 + 0x10) = pHVar8 + 0x28;
                  }
                  HeapObjectData::HeapObjectData(pHVar8,this,plVar23,param_2);
                  uVar1 = *(uint *)(*param_2 + 3);
                  if (uVar1 == 0) {
                    uVar19 = 0;
                  }
                  else {
                    uVar19 = *(undefined8 *)((*param_2 & 0xffffffff00000000 | (ulong)uVar1) + 3);
                  }
                  *(undefined8 *)(pHVar8 + 0x18) = uVar19;
                  *(undefined8 *)(pHVar8 + 0x20) = 0;
                  lVar6 = *plVar23;
                }
                else if (*(short *)(uVar21 + *puVar20) == 0x99) {
                  pZVar18 = *(Zone **)pJVar24;
                  pHVar8 = *(HeapObjectData **)(pZVar18 + 0x10);
                  if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pHVar8) < 0x20) {
                    pHVar8 = (HeapObjectData *)Zone::NewExpand(pZVar18,0x20);
                  }
                  else {
                    *(HeapObjectData **)(pZVar18 + 0x10) = pHVar8 + 0x20;
                  }
                  HeapObjectData::HeapObjectData(pHVar8,this,plVar23,param_2);
                  *(undefined8 *)(pHVar8 + 0x18) = 0;
                  lVar6 = *plVar23;
                }
                else {
                  if (*(short *)(uVar21 + *puVar20) == 0x9a) goto LAB_0170f7f0;
                  if (*(short *)(uVar21 + *puVar20) == 0x9c) {
                    pZVar18 = *(Zone **)pJVar24;
                    pHVar8 = *(HeapObjectData **)(pZVar18 + 0x10);
                    if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pHVar8) < 0x38) {
                      pHVar8 = (HeapObjectData *)Zone::NewExpand(pZVar18,0x38);
                    }
                    else {
                      *(HeapObjectData **)(pZVar18 + 0x10) = pHVar8 + 0x38;
                    }
                    HeapObjectData::HeapObjectData(pHVar8,this,plVar23,param_2);
                    uVar19 = *(undefined8 *)(this + 0x10);
                    *(undefined8 *)(pHVar8 + 0x20) = 0;
                    *(HeapObjectData **)(pHVar8 + 0x18) = pHVar8 + 0x20;
                    *(undefined8 *)(pHVar8 + 0x28) = uVar19;
                    *(undefined8 *)(pHVar8 + 0x30) = 0;
                    lVar6 = *plVar23;
                    goto joined_r0x0170fcb8;
                  }
                  if (*(short *)(uVar21 + *puVar20) == 0x5d) {
                    pZVar18 = *(Zone **)pJVar24;
                    pHVar8 = *(HeapObjectData **)(pZVar18 + 0x10);
                    if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pHVar8) < 0x20) {
                      pHVar8 = (HeapObjectData *)Zone::NewExpand(pZVar18,0x20);
                    }
                    else {
                      *(HeapObjectData **)(pZVar18 + 0x10) = pHVar8 + 0x20;
                    }
                    HeapObjectData::HeapObjectData(pHVar8,this,plVar23,param_2);
                    pIVar10 = *(Isolate **)this;
                    uVar17 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 3);
                    if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar11 = *(ulong **)(pIVar10 + 0x95a0);
                      if (puVar11 == *(ulong **)(pIVar10 + 0x95a8)) {
                        puVar11 = (ulong *)HandleScope::Extend(pIVar10);
                      }
                      *(ulong **)(pIVar10 + 0x95a0) = puVar11 + 1;
                      *puVar11 = uVar17;
                    }
                    else {
                      puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                                   (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),
                                                    uVar17);
                    }
                    lVar6 = GetOrCreateData(this,puVar11);
                    if (*(int *)(lVar6 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
                      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
                    }
                    goto LAB_0170fbf4;
                  }
                  if (*(short *)(uVar21 + *puVar20) == 0x9f) {
                    pZVar18 = *(Zone **)pJVar24;
                    pHVar8 = *(HeapObjectData **)(pZVar18 + 0x10);
                    if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pHVar8) < 0x48) {
                      pHVar8 = (HeapObjectData *)Zone::NewExpand(pZVar18,0x48);
                    }
                    else {
                      *(HeapObjectData **)(pZVar18 + 0x10) = pHVar8 + 0x48;
                    }
                    HeapObjectData::HeapObjectData(pHVar8,this,plVar23,param_2);
                    iVar25 = *(int *)(*param_2 + 0x13);
                    pHVar8[0x20] = (HeapObjectData)0x0;
                    *(double *)(pHVar8 + 0x18) = (double)(long)iVar25;
                    uVar19 = *(undefined8 *)(this + 0x10);
                    *(undefined8 *)(pHVar8 + 0x28) = 0;
                    *(undefined8 *)(pHVar8 + 0x30) = 0;
                    *(undefined8 *)(pHVar8 + 0x38) = 0;
                    *(undefined8 *)(pHVar8 + 0x40) = uVar19;
                    lVar6 = *plVar23;
                    goto joined_r0x0170fcb8;
                  }
                  if (*(ushort *)(uVar21 + *puVar20) - 0x76 < 0x12) {
                    pZVar18 = *(Zone **)pJVar24;
                    pHVar8 = *(HeapObjectData **)(pZVar18 + 0x10);
                    if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pHVar8) < 0x20) {
                      pHVar8 = (HeapObjectData *)Zone::NewExpand(pZVar18,0x20);
                    }
                    else {
                      *(HeapObjectData **)(pZVar18 + 0x10) = pHVar8 + 0x20;
                    }
                    HeapObjectData::HeapObjectData(pHVar8,this,plVar23,param_2);
                    uVar17 = *param_2;
                    goto LAB_0170fb78;
                  }
                  if (*(short *)(uVar21 + *puVar20) == 0x4e) {
                    pZVar18 = *(Zone **)pJVar24;
                    pFVar14 = *(FunctionTemplateInfoData **)(pZVar18 + 0x10);
                    if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pFVar14) < 0x48) {
                      pFVar14 = (FunctionTemplateInfoData *)Zone::NewExpand(pZVar18,0x48);
                    }
                    else {
                      *(FunctionTemplateInfoData **)(pZVar18 + 0x10) = pFVar14 + 0x48;
                    }
                    FunctionTemplateInfoData::FunctionTemplateInfoData(pFVar14,this,plVar23,param_2)
                    ;
                    lVar6 = *plVar23;
                  }
                  else if (*(short *)(uVar21 + *puVar20) == 0x42) {
                    pZVar18 = *(Zone **)pJVar24;
                    pHVar8 = *(HeapObjectData **)(pZVar18 + 0x10);
                    if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pHVar8) < 0x20) {
                      pHVar8 = (HeapObjectData *)Zone::NewExpand(pZVar18,0x20);
                    }
                    else {
                      *(HeapObjectData **)(pZVar18 + 0x10) = pHVar8 + 0x20;
                    }
                    HeapObjectData::HeapObjectData(pHVar8,this,plVar23,param_2);
                    *(undefined8 *)(pHVar8 + 0x18) = *(undefined8 *)(*param_2 + 3);
                    lVar6 = *plVar23;
                  }
                  else {
                    if (0xa8 < *(ushort *)(uVar21 + *puVar20)) goto LAB_0170f7f0;
                    if (*(short *)(uVar21 + *puVar20) == 0xa2) {
                      pZVar18 = *(Zone **)pJVar24;
                      pMVar15 = *(MapData **)(pZVar18 + 0x10);
                      if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pMVar15) < 0xc0) {
                        pMVar15 = (MapData *)Zone::NewExpand(pZVar18,0xc0);
                      }
                      else {
                        *(MapData **)(pZVar18 + 0x10) = pMVar15 + 0xc0;
                      }
                      MapData::MapData(pMVar15,this,plVar23,param_2);
                      lVar6 = *plVar23;
                      goto joined_r0x0170fcb8;
                    }
                    if (*(ushort *)(uVar21 + *puVar20) < 0x41) goto LAB_0170f7f0;
                    if (*(short *)(uVar21 + *puVar20) == 0x82) {
                      pZVar18 = *(Zone **)pJVar24;
                      pHVar8 = *(HeapObjectData **)(pZVar18 + 0x10);
                      if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pHVar8) < 0x20) {
                        pHVar8 = (HeapObjectData *)Zone::NewExpand(pZVar18,0x20);
                      }
                      else {
                        *(HeapObjectData **)(pZVar18 + 0x10) = pHVar8 + 0x20;
                      }
                      HeapObjectData::HeapObjectData(pHVar8,this,plVar23,param_2);
                      iVar25 = *(int *)(*param_2 + 3) >> 1;
                      iVar2 = iVar25 + -1;
                      if (-1 < iVar2) {
                        iVar25 = iVar2;
                      }
                    }
                    else {
                      if (*(short *)(uVar21 + *puVar20) != 0xa5) {
                        if (*(short *)(uVar21 + *puVar20) == 0xa6) {
                          pZVar18 = *(Zone **)pJVar24;
                          pSVar16 = *(SharedFunctionInfoData **)(pZVar18 + 0x10);
                          if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pSVar16) < 0x78) {
                            pSVar16 = (SharedFunctionInfoData *)Zone::NewExpand(pZVar18,0x78);
                          }
                          else {
                            *(SharedFunctionInfoData **)(pZVar18 + 0x10) = pSVar16 + 0x78;
                          }
                          SharedFunctionInfoData::SharedFunctionInfoData
                                    (pSVar16,this,plVar23,param_2);
                          lVar6 = *plVar23;
                          goto joined_r0x0170fcb8;
                        }
                        if (*(short *)(uVar21 + *puVar20) == 0x44) {
                          pZVar18 = *(Zone **)pJVar24;
                          this_00 = *(HeapObjectData **)(pZVar18 + 0x10);
                          if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)this_00) < 0x60) {
                            this_00 = (HeapObjectData *)Zone::NewExpand(pZVar18,0x60);
                          }
                          else {
                            *(HeapObjectData **)(pZVar18 + 0x10) = this_00 + 0x60;
                          }
                          HeapObjectData::HeapObjectData(this_00,this,plVar23,param_2);
                          this_00[0x18] = (HeapObjectData)0x0;
                          uVar19 = *(undefined8 *)(this + 0x10);
                          *(undefined8 *)(this_00 + 0x20) = 0;
                          *(undefined8 *)(this_00 + 0x28) = 0;
                          *(undefined8 *)(this_00 + 0x30) = 0;
                          *(undefined8 *)(this_00 + 0x38) = uVar19;
                          goto LAB_0170f3e4;
                        }
                        pZVar18 = *(Zone **)pJVar24;
                        pHVar8 = *(HeapObjectData **)(pZVar18 + 0x10);
                        uVar17 = *(long *)(pZVar18 + 0x18) - (long)pHVar8;
                        goto joined_r0x017101dc;
                      }
                      pZVar18 = *(Zone **)pJVar24;
                      pHVar8 = *(HeapObjectData **)(pZVar18 + 0x10);
                      if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pHVar8) < 0x28) {
                        pHVar8 = (HeapObjectData *)Zone::NewExpand(pZVar18,0x28);
                      }
                      else {
                        *(HeapObjectData **)(pZVar18 + 0x10) = pHVar8 + 0x28;
                      }
                      HeapObjectData::HeapObjectData(pHVar8,this,plVar23,param_2);
                      iVar25 = *(int *)(*param_2 + 7);
                      *(undefined8 *)(pHVar8 + 0x20) = 0;
                    }
LAB_0170fb7c:
                    *(int *)(pHVar8 + 0x18) = iVar25 >> 1;
                    lVar6 = *plVar23;
                  }
                }
              }
              goto joined_r0x0170fcb8;
            }
            pZVar18 = *(Zone **)pJVar24;
            pSVar12 = *(StringData **)(pZVar18 + 0x10);
            if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pSVar12) < 0x58) {
              uVar17 = 0x58;
              goto LAB_0170fdd0;
            }
            pSVar22 = pSVar12 + 0x58;
LAB_0170fa40:
            *(StringData **)(pZVar18 + 0x10) = pSVar22;
          }
          StringData::StringData(pSVar12,this,plVar23,param_2);
          lVar6 = *plVar23;
        }
      }
    }
  }
joined_r0x0170fcb8:
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(*data_storage) != nullptr");
  }
LAB_0170f084:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

