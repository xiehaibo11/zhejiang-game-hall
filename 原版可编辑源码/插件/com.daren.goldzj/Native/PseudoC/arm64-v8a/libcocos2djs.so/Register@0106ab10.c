
/* v8::internal::GlobalBackingStoreRegistry::Register(std::__ndk1::shared_ptr<v8::internal::BackingStore>)
    */

void v8::internal::GlobalBackingStoreRegistry::Register(long *param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong extraout_x1;
  long *plVar5;
  code *pcVar6;
  code *pcVar7;
  __shared_weak_count *this;
  undefined **local_80;
  code *local_78;
  __shared_weak_count *local_70;
  long *local_60;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  plVar5 = (long *)*param_1;
  if ((plVar5 == (long *)0x0) || (*plVar5 == 0)) goto LAB_0106acf4;
  if ((*(byte *)(plVar5 + 5) >> 3 & 1) == 0) {
    if ((*(byte *)(plVar5 + 5) >> 1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!backing_store->is_wasm_memory()");
    }
    goto LAB_0106acf4;
  }
  if (DAT_01d3f5f8 != '\x02') {
    local_80 = &PTR_FUN_01c984d0;
    local_78 = FUN_0106b074;
    local_70 = (__shared_weak_count *)&DAT_01d3f600;
    local_60 = (long *)&local_80;
    base::CallOnceImpl(&DAT_01d3f5f8,&local_80);
    if (&local_80 == (undefined ***)local_60) {
      pcVar6 = *(code **)(*local_60 + 0x20);
    }
    else {
      if (local_60 == (long *)0x0) goto LAB_0106abdc;
      pcVar6 = *(code **)(*local_60 + 0x28);
    }
    (*pcVar6)();
  }
LAB_0106abdc:
  base::Mutex::Lock((Mutex *)&DAT_01d3f600);
  pcVar6 = (code *)*param_1;
  if (((byte)pcVar6[0x28] >> 5 & 1) == 0) {
    this = (__shared_weak_count *)param_1[1];
    if (this != (__shared_weak_count *)0x0) {
      p_Var1 = this + 0x10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = *(long *)p_Var1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (DAT_01d3f5f8 != '\x02') {
      local_80 = &PTR_FUN_01c984d0;
      local_78 = FUN_0106b074;
      local_70 = (__shared_weak_count *)&DAT_01d3f600;
      local_60 = (long *)&local_80;
      base::CallOnceImpl(&DAT_01d3f5f8,&local_80);
      if (&local_80 == (undefined ***)local_60) {
        pcVar7 = *(code **)(*local_60 + 0x20);
      }
      else {
        if (local_60 == (long *)0x0) goto LAB_0106ac7c;
        pcVar7 = *(code **)(*local_60 + 0x28);
      }
      (*pcVar7)();
    }
LAB_0106ac7c:
    local_80 = *(undefined ***)*param_1;
    if (this != (__shared_weak_count *)0x0) {
      p_Var1 = this + 0x10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = *(long *)p_Var1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_78 = pcVar6;
    local_70 = this;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<void_const*,std::__ndk1::weak_ptr<v8::internal::BackingStore>>,std::__ndk1::__unordered_map_hasher<void_const*,std::__ndk1::__hash_value_type<void_const*,std::__ndk1::weak_ptr<v8::internal::BackingStore>>,std::__ndk1::hash<void_const*>,true>,std::__ndk1::__unordered_map_equal<void_const*,std::__ndk1::__hash_value_type<void_const*,std::__ndk1::weak_ptr<v8::internal::BackingStore>>,std::__ndk1::equal_to<void_const*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<void_const*,std::__ndk1::weak_ptr<v8::internal::BackingStore>>>>
    ::
    __emplace_unique_key_args<void_const*,std::__ndk1::pair<void_const*const,std::__ndk1::weak_ptr<v8::internal::BackingStore>>>
              ((__hash_table<std::__ndk1::__hash_value_type<void_const*,std::__ndk1::weak_ptr<v8::internal::BackingStore>>,std::__ndk1::__unordered_map_hasher<void_const*,std::__ndk1::__hash_value_type<void_const*,std::__ndk1::weak_ptr<v8::internal::BackingStore>>,std::__ndk1::hash<void_const*>,true>,std::__ndk1::__unordered_map_equal<void_const*,std::__ndk1::__hash_value_type<void_const*,std::__ndk1::weak_ptr<v8::internal::BackingStore>>,std::__ndk1::equal_to<void_const*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<void_const*,std::__ndk1::weak_ptr<v8::internal::BackingStore>>>>
                *)&DAT_01d3f628,&local_80,(pair *)&local_80);
    if (local_70 != (__shared_weak_count *)0x0) {
      std::__ndk1::__shared_weak_count::__release_weak(local_70);
    }
    if ((extraout_x1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","result.second");
    }
    *(byte *)(*param_1 + 0x28) = *(byte *)(*param_1 + 0x28) | 0x20;
    if (this != (__shared_weak_count *)0x0) {
      std::__ndk1::__shared_weak_count::__release_weak(this);
    }
  }
  base::Mutex::Unlock((Mutex *)&DAT_01d3f600);
LAB_0106acf4:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

