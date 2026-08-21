
/* v8::internal::wasm::WasmEngine::~WasmEngine() */

void __thiscall v8::internal::wasm::WasmEngine::~WasmEngine(WasmEngine *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  Malloced *pMVar3;
  void *pvVar4;
  long lVar5;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *extraout_x1_03;
  void *extraout_x1_04;
  void *extraout_x1_05;
  NativeModuleInfo *this_00;
  AsyncCompileJob *this_01;
  
  CancelableTaskManager::CancelAndWait((CancelableTaskManager *)(this + 0x70));
  lVar5 = *(long *)(this + 0x1b8);
  *(undefined8 *)(this + 0x1b8) = 0;
  pvVar4 = (void *)0x0;
  if (lVar5 != 0) {
    FUN_01210550(this + 0x1b8);
    pvVar4 = extraout_x1;
  }
  puVar1 = *(void **)(this + 0x198);
  while (puVar1 != (void *)0x0) {
    this_00 = (NativeModuleInfo *)puVar1[3];
    pvVar4 = (void *)*puVar1;
    puVar1[3] = 0;
    if (this_00 != (NativeModuleInfo *)0x0) {
      NativeModuleInfo::~NativeModuleInfo(this_00);
      operator_delete(this_00);
    }
    operator_delete(puVar1);
    puVar1 = pvVar4;
    pvVar4 = extraout_x1_00;
  }
  pvVar2 = *(void **)(this + 0x188);
  *(undefined8 *)(this + 0x188) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
    pvVar4 = extraout_x1_01;
  }
  puVar1 = *(void **)(this + 0x170);
  while (puVar1 != (void *)0x0) {
    pvVar4 = (void *)*puVar1;
    lVar5 = puVar1[3];
    puVar1[3] = 0;
    if (lVar5 != 0) {
      FUN_0120f170();
    }
    operator_delete(puVar1);
    puVar1 = pvVar4;
    pvVar4 = extraout_x1_02;
  }
  pvVar2 = *(void **)(this + 0x160);
  *(undefined8 *)(this + 0x160) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
    pvVar4 = extraout_x1_03;
  }
  pMVar3 = *(Malloced **)(this + 0x158);
  *(undefined8 *)(this + 0x158) = 0;
  if (pMVar3 != (Malloced *)0x0) {
    Malloced::operator_delete(pMVar3,pvVar4);
  }
  pMVar3 = *(Malloced **)(this + 0x150);
  *(undefined8 *)(this + 0x150) = 0;
  if (pMVar3 != (Malloced *)0x0) {
    base::Mutex::~Mutex((Mutex *)(pMVar3 + 0x70));
    std::__ndk1::
    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>>>
    ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>>>
               *)(pMVar3 + 0x58),*(__tree_node **)(pMVar3 + 0x60));
    std::__ndk1::
    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>>>
    ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>>>
               *)(pMVar3 + 0x40),*(__tree_node **)(pMVar3 + 0x48));
    pvVar4 = extraout_x1_04;
    if (((byte)pMVar3[0x20] & 1) != 0) {
      operator_delete(*(void **)(pMVar3 + 0x30));
      pvVar4 = extraout_x1_05;
    }
    Malloced::operator_delete(pMVar3,pvVar4);
  }
  puVar1 = *(void **)(this + 0x138);
  while (puVar1 != (void *)0x0) {
    this_01 = (AsyncCompileJob *)puVar1[3];
    pvVar4 = (void *)*puVar1;
    puVar1[3] = 0;
    if (this_01 != (AsyncCompileJob *)0x0) {
      AsyncCompileJob::~AsyncCompileJob(this_01);
      operator_delete(this_01);
    }
    operator_delete(puVar1);
    puVar1 = pvVar4;
  }
  pvVar4 = *(void **)(this + 0x128);
  *(undefined8 *)(this + 0x128) = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  base::Mutex::~Mutex((Mutex *)(this + 0x100));
  CancelableTaskManager::~CancelableTaskManager((CancelableTaskManager *)(this + 0x70));
  AccountingAllocator::~AccountingAllocator((AccountingAllocator *)(this + 0x58));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::pair<unsigned_long,v8::internal::wasm::NativeModule*>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::pair<unsigned_long,v8::internal::wasm::NativeModule*>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::pair<unsigned_long,v8::internal::wasm::NativeModule*>>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::pair<unsigned_long,v8::internal::wasm::NativeModule*>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::pair<unsigned_long,v8::internal::wasm::NativeModule*>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::pair<unsigned_long,v8::internal::wasm::NativeModule*>>>>
             *)(this + 0x40),*(__tree_node **)(this + 0x48));
  base::Mutex::~Mutex((Mutex *)(this + 0x18));
  return;
}

