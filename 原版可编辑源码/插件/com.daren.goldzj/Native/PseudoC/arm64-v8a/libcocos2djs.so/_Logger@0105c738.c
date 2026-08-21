
/* v8::internal::Logger::~Logger() */

void __thiscall v8::internal::Logger::~Logger(Logger *this)

{
  long *plVar1;
  void *pvVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__Logger_01cb22a8;
  std::__ndk1::__tree<int,std::__ndk1::less<int>,std::__ndk1::allocator<int>>::destroy
            ((__tree<int,std::__ndk1::less<int>,std::__ndk1::allocator<int>> *)(this + 0x50),
             *(__tree_node **)(this + 0x58));
  plVar1 = *(long **)(this + 0x48);
  *(undefined8 *)(this + 0x48) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(this + 0x40);
  *(undefined8 *)(this + 0x40) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(this + 0x38);
  *(undefined8 *)(this + 0x38) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(this + 0x30);
  *(undefined8 *)(this + 0x30) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  pvVar3 = *(void **)(this + 0x28);
  *(undefined8 *)(this + 0x28) = 0;
  if (pvVar3 != (void *)0x0) {
    pvVar2 = *(void **)((long)pvVar3 + 0x120);
    *(undefined8 *)((long)pvVar3 + 0x120) = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    base::Mutex::~Mutex((Mutex *)((long)pvVar3 + 0xf8));
    *(undefined ***)((long)pvVar3 + 0x10) = &PTR__OFStream_01ca1000;
    *(undefined ***)((long)pvVar3 + 0x18) = &PTR__basic_streambuf_01c671a8;
    *(undefined ***)((long)pvVar3 + 0x60) = &PTR__OFStream_01ca1028;
    std::__ndk1::locale::~locale((locale *)((long)pvVar3 + 0x20));
    std::__ndk1::ios_base::~ios_base((ios_base *)((long)pvVar3 + 0x60));
    operator_delete(pvVar3);
  }
  plVar1 = *(long **)(this + 0x18);
  *(undefined8 *)(this + 0x18) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(this + 0x10);
  *(undefined8 *)(this + 0x10) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0105c860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}

