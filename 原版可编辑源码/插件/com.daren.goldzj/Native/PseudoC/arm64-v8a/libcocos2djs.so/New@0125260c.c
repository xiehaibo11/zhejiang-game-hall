
/* v8::internal::WasmMemoryObject::New(v8::internal::Isolate*, unsigned int, unsigned int,
   v8::internal::SharedFlag) */

undefined8
v8::internal::WasmMemoryObject::New
          (Factory *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  BackingStore *this;
  undefined8 uVar4;
  long lVar5;
  __shared_weak_count *this_00;
  long local_58;
  __shared_weak_count *local_50;
  long local_48;
  __shared_weak_count *local_40;
  BackingStore *local_38;
  
  BackingStore::AllocateWasmMemory((BackingStore *)&local_38,param_1,param_2,param_3);
  if (local_38 == (BackingStore *)0x0) {
    return 0;
  }
  if (param_4 == '\x01') {
    local_48 = (long)local_38;
    local_40 = operator_new(0x20);
    *(undefined8 *)(local_40 + 0x10) = 0;
    *(BackingStore **)(local_40 + 0x18) = local_38;
    *(undefined ***)local_40 = &PTR____shared_weak_count_01c98518;
    *(undefined8 *)(local_40 + 8) = 0;
    local_38 = (BackingStore *)0x0;
    uVar4 = Factory::NewJSSharedArrayBuffer(param_1,&local_48);
    if (local_40 == (__shared_weak_count *)0x0) goto LAB_01252728;
    p_Var1 = local_40 + 8;
    do {
      lVar5 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      this_00 = local_40;
    } while (cVar2 != '\0');
  }
  else {
    local_58 = (long)local_38;
    local_50 = operator_new(0x20);
    *(undefined8 *)(local_50 + 0x10) = 0;
    *(BackingStore **)(local_50 + 0x18) = local_38;
    *(undefined ***)local_50 = &PTR____shared_weak_count_01c98518;
    *(undefined8 *)(local_50 + 8) = 0;
    local_38 = (BackingStore *)0x0;
    uVar4 = Factory::NewJSArrayBuffer(param_1,&local_58,0);
    if (local_50 == (__shared_weak_count *)0x0) goto LAB_01252728;
    p_Var1 = local_50 + 8;
    do {
      lVar5 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      this_00 = local_50;
    } while (cVar2 != '\0');
  }
  if (lVar5 == 0) {
    (**(code **)(*(long *)this_00 + 0x10))(this_00);
    std::__ndk1::__shared_weak_count::__release_weak(this_00);
  }
LAB_01252728:
  uVar4 = New(param_1,uVar4,param_3);
  this = local_38;
  local_38 = (BackingStore *)0x0;
  if (this != (BackingStore *)0x0) {
    BackingStore::~BackingStore(this);
    operator_delete(this);
  }
  return uVar4;
}

