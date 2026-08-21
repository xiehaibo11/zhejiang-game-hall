
/* v8::internal::SourceTextModule::ResolveExport(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SourceTextModule>, v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::String>, v8::internal::MessageLocation, bool,
   v8::internal::Module::ResolveSet*) */

ulong * v8::internal::SourceTextModule::ResolveExport
                  (Isolate *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,uint param_6,
                  __hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>,std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::Module>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>,v8::internal::ModuleHandleHash,true>,std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::Module>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>,v8::internal::ModuleHandleEqual,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>>>
                  *param_7)

{
  Isolate *pIVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  __hash_table<v8::internal::Handle<v8::internal::String>,v8::internal::StringHandleHash,v8::internal::StringHandleEqual,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::String>>>
  *this;
  ulong uVar9;
  ulong uVar10;
  Zone *this_00;
  undefined1 auVar11 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  pIVar1 = param_1 + 0x95a0;
  local_88 = (ulong *)(*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 3));
  local_68 = param_4;
  uVar2 = ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>::
          Lookup((ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
                  *)&local_88,param_4);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pIVar1;
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar3 + 1;
    *puVar3 = uVar2;
    uVar2 = *puVar3;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar2);
    uVar2 = *puVar3;
  }
  if (((uVar2 & 1) == 0) ||
     (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) != 0x99)) {
    uStack_80 = 0;
    local_88 = param_2;
    auVar11 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>,std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::Module>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>,v8::internal::ModuleHandleHash,true>,std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::Module>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>,v8::internal::ModuleHandleEqual,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>>>
              ::
              __emplace_unique_key_args<v8::internal::Handle<v8::internal::Module>,std::__ndk1::pair<v8::internal::Handle<v8::internal::Module>const,v8::internal::UnorderedStringSet*>>
                        (param_7,(Handle *)&local_88,(pair *)&local_88);
    lVar4 = auVar11._0_8_;
    if ((auVar11._8_8_ & 0xff) == 0) {
      lVar6 = std::__ndk1::
              __hash_table<v8::internal::Handle<v8::internal::String>,v8::internal::StringHandleHash,v8::internal::StringHandleEqual,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::String>>>
              ::find<v8::internal::Handle<v8::internal::String>>
                        (*(__hash_table<v8::internal::Handle<v8::internal::String>,v8::internal::StringHandleHash,v8::internal::StringHandleEqual,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::String>>>
                           **)(lVar4 + 0x18),(Handle *)&local_68);
      if (lVar6 != 0) {
        if ((param_6 & 1) != 0) {
          puVar7 = (undefined8 *)Factory::NewSyntaxError((Factory *)param_1,0x2a,local_68,param_3,0)
          ;
          Isolate::Throw(param_1,*puVar7,param_5);
          return (ulong *)0x0;
        }
        return (ulong *)0x0;
      }
      this = *(__hash_table<v8::internal::Handle<v8::internal::String>,v8::internal::StringHandleHash,v8::internal::StringHandleEqual,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::String>>>
               **)(lVar4 + 0x18);
    }
    else {
      this_00 = *(Zone **)(param_7 + 0x38);
      this = *(__hash_table<v8::internal::Handle<v8::internal::String>,v8::internal::StringHandleHash,v8::internal::StringHandleEqual,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::String>>>
               **)(this_00 + 0x10);
      if ((ulong)(*(long *)(this_00 + 0x18) - (long)this) < 0x38) {
        this = (__hash_table<v8::internal::Handle<v8::internal::String>,v8::internal::StringHandleHash,v8::internal::StringHandleEqual,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::String>>>
                *)Zone::NewExpand(this_00,0x38);
      }
      else {
        *(__hash_table<v8::internal::Handle<v8::internal::String>,v8::internal::StringHandleHash,v8::internal::StringHandleEqual,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::String>>>
          **)(this_00 + 0x10) = this + 0x38;
      }
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(Zone **)(this + 0x10) = this_00;
      *(undefined8 *)(this + 0x18) = 0;
      *(Zone **)(this + 0x20) = this_00;
      *(undefined8 *)(this + 0x28) = 0;
      *(undefined4 *)(this + 0x30) = 0x3f800000;
      std::__ndk1::
      __hash_table<v8::internal::Handle<v8::internal::String>,v8::internal::StringHandleHash,v8::internal::StringHandleEqual,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::String>>>
      ::__rehash(this,2);
      *(__hash_table<v8::internal::Handle<v8::internal::String>,v8::internal::StringHandleHash,v8::internal::StringHandleEqual,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::String>>>
        **)(lVar4 + 0x18) = this;
    }
    std::__ndk1::
    __hash_table<v8::internal::Handle<v8::internal::String>,v8::internal::StringHandleHash,v8::internal::StringHandleEqual,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::String>>>
    ::
    __emplace_unique_key_args<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::String>const&>
              (this,(Handle *)&local_68,(Handle *)&local_68);
    uVar2 = *puVar3;
    if (((uVar2 & 1) == 0) ||
       (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) != 0x6a)) {
      uStack_c8 = param_5[1];
      local_d0 = *param_5;
      uStack_b8 = param_5[3];
      uStack_c0 = param_5[2];
      puVar3 = (ulong *)ResolveExportUsingStarExports
                                  (param_1,param_2,param_3,local_68,&local_d0,param_6 & 1,param_7);
    }
    else {
      uVar2 = uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0xb);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)pIVar1;
        if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
          puVar5 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar5 + 1;
        *puVar5 = uVar2;
      }
      else {
        puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar2);
      }
      uVar2 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x27);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)pIVar1;
        if (puVar8 == *(ulong **)(param_1 + 0x95a8)) {
          puVar8 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar8 + 1;
        *puVar8 = uVar2;
      }
      else {
        puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar2);
      }
      MessageLocation::MessageLocation
                ((MessageLocation *)&local_88,puVar8,*(int *)(*puVar3 + 0x17) >> 1,
                 *(int *)(*puVar3 + 0x1b) >> 1);
      uStack_a8 = uStack_80;
      local_b0 = local_88;
      uStack_98 = uStack_70;
      uStack_a0 = local_78;
      puVar3 = (ulong *)ResolveImport(param_1,param_2,puVar5,*(int *)(*puVar3 + 0xf) >> 1,&local_b0,
                                      1,param_7);
      if (puVar3 != (ulong *)0x0) {
        uVar2 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 3);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar5 = *(ulong **)pIVar1;
          if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
            puVar5 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar1 = puVar5 + 1;
          *puVar5 = uVar2;
        }
        else {
          puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar2);
        }
        puVar5 = (ulong *)ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
                          ::Put(puVar5,local_68,puVar3);
        uVar10 = *param_2;
        uVar2 = *puVar5;
        *(int *)(uVar10 + 3) = (int)uVar2;
        if ((uVar2 & 1) != 0) {
          uVar9 = *(ulong *)((uVar2 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar9 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar10,uVar10 + 3,uVar2);
            uVar9 = *(ulong *)(uVar2 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar10,uVar10 + 3,uVar2);
          }
        }
      }
    }
  }
  return puVar3;
}

