
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* v8::internal::CpuProfiler::~CpuProfiler() */

void __thiscall v8::internal::CpuProfiler::~CpuProfiler(CpuProfiler *this)

{
  long lVar1;
  long lVar2;
  int iVar3;
  void *pvVar4;
  long *plVar5;
  CpuProfilesCollection *this_00;
  undefined1 auVar6 [16];
  Isolate *local_58;
  void *local_50 [3];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (((DAT_01d3f898 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_01d3f898), iVar3 != 0)) {
    uRam0000000001d3f880 = 0;
    _DAT_01d3f878 = 0;
    uRam0000000001d3f890 = 0;
    _DAT_01d3f888 = 0;
    uRam0000000001d3f860 = 0;
    _DAT_01d3f858 = 0;
    _DAT_01d3f870 = 0;
    uRam0000000001d3f850 = 0;
    _DAT_01d3f848 = 0;
    _DAT_01d3f868 = 0x3f800000;
    base::Mutex::Mutex((Mutex *)&DAT_01d3f870);
    __cxa_guard_release(&DAT_01d3f898);
  }
  local_58 = *(Isolate **)this;
  base::Mutex::Lock((Mutex *)&DAT_01d3f870);
  auVar6 = std::__ndk1::
           __hash_table<std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::__unordered_map_hasher<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::hash<v8::internal::Isolate*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::equal_to<v8::internal::Isolate*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>>>
           ::__equal_range_multi<v8::internal::Isolate*>
                     ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::__unordered_map_hasher<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::hash<v8::internal::Isolate*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::equal_to<v8::internal::Isolate*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>>>
                       *)&DAT_01d3f848,&local_58);
  plVar5 = auVar6._0_8_;
  while( true ) {
    if (plVar5 == (long *)auVar6._8_8_) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    if ((CpuProfiler *)plVar5[3] == this) break;
    plVar5 = (long *)*plVar5;
  }
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::__unordered_map_hasher<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::hash<v8::internal::Isolate*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::equal_to<v8::internal::Isolate*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>>>
  ::remove(local_50,&DAT_01d3f848,plVar5);
  pvVar4 = local_50[0];
  local_50[0] = (void *)0x0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  base::Mutex::Unlock((Mutex *)&DAT_01d3f870);
  plVar5 = *(long **)(this + 0x40);
  if (plVar5 != (long *)0x0) {
    *(undefined8 *)(this + 0x40) = 0;
    Logger::RemoveCodeEventListener(*(Logger **)(*plVar5 + 0x9558),(CodeEventListener *)plVar5[1]);
    lVar1 = *(long *)(*plVar5 + 0xb800) + -1;
    *(long *)(*plVar5 + 0xb800) = lVar1;
    if (lVar1 == 0) {
      *(undefined1 *)(*plVar5 + 0xb7fc) = 0;
    }
    operator_delete(plVar5);
  }
  *(undefined ***)(this + 0x48) = &PTR_CodeEventHandler_01cb63a0;
  CodeMap::~CodeMap((CodeMap *)(this + 0x58));
  plVar5 = *(long **)(this + 0x40);
  *(undefined8 *)(this + 0x40) = 0;
  if (plVar5 != (long *)0x0) {
    Logger::RemoveCodeEventListener(*(Logger **)(*plVar5 + 0x9558),(CodeEventListener *)plVar5[1]);
    lVar1 = *(long *)(*plVar5 + 0xb800) + -1;
    *(long *)(*plVar5 + 0xb800) = lVar1;
    if (lVar1 == 0) {
      *(undefined1 *)(*plVar5 + 0xb7fc) = 0;
    }
    operator_delete(plVar5);
  }
  plVar5 = *(long **)(this + 0x38);
  *(undefined8 *)(this + 0x38) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = *(long **)(this + 0x30);
  *(undefined8 *)(this + 0x30) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  pvVar4 = *(void **)(this + 0x28);
  *(undefined8 *)(this + 0x28) = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  this_00 = *(CpuProfilesCollection **)(this + 0x20);
  *(undefined8 *)(this + 0x20) = 0;
  if (this_00 != (CpuProfilesCollection *)0x0) {
    CpuProfilesCollection::~CpuProfilesCollection(this_00);
    operator_delete(this_00);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

