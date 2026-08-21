
/* v8::internal::Deserializer::Deserializer<v8::internal::SnapshotData
   const>(v8::internal::SnapshotData const*, bool) */

void __thiscall
v8::internal::Deserializer::Deserializer<v8::internal::SnapshotData_const>
          (Deserializer *this,SnapshotData *param_1,bool param_2)

{
  __shared_weak_count *p_Var1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  __shared_weak_count *this_00;
  void *__s;
  size_t __n;
  long lVar7;
  undefined1 auVar8 [12];
  void *local_68;
  __shared_weak_count *local_60;
  void *local_58;
  
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__Deserializer_01cc9490;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  auVar8 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
  *(undefined1 (*) [12])(this + 0x70) = auVar8;
  *(undefined4 *)(this + 0x7c) = 0;
  uVar3 = **(undefined4 **)(param_1 + 8);
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x208) = 0;
  this[0x20c] = (Deserializer)0x0;
  *(undefined4 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  this[0x250] = (Deserializer)param_2;
  this[0x251] = (Deserializer)0x0;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  *(undefined4 *)(this + 0x80) = uVar3;
  *(undefined8 *)(this + 600) = 0;
  lVar7 = *(long *)(param_1 + 8);
  uVar4 = *(uint *)(lVar7 + 4);
  local_60 = (void *)0x0;
  local_58 = (void *)0x0;
  local_68 = (void *)0x0;
  if (uVar4 == 0) {
    __n = 0;
    __s = (void *)0x0;
  }
  else {
    __n = (ulong)uVar4 * 4;
    __s = operator_new(__n);
    local_68 = __s;
    local_58 = (void *)((long)__s + __n);
    memset(__s,0,__n);
    local_60 = (void *)((long)__s + __n);
  }
  memcpy(__s,(void *)(lVar7 + 0xc),__n);
  DeserializerAllocator::DecodeReservation
            ((DeserializerAllocator *)(this + 0x148),(vector *)&local_68);
  if (local_68 != (void *)0x0) {
    local_60 = local_68;
    operator_delete(local_68);
  }
  local_68 = (void *)0x0;
  local_60 = (__shared_weak_count *)0x0;
  puVar2 = *(undefined8 **)(this + 0x138);
  if (puVar2 < *(undefined8 **)(this + 0x140)) {
    *puVar2 = 0;
    puVar2[1] = 0;
    *(long *)(this + 0x138) = *(long *)(this + 0x138) + 0x10;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::shared_ptr<v8::internal::BackingStore>,std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::BackingStore>>>
    ::__push_back_slow_path<std::__ndk1::shared_ptr<v8::internal::BackingStore>>
              ((vector<std::__ndk1::shared_ptr<v8::internal::BackingStore>,std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::BackingStore>>>
                *)(this + 0x130),(shared_ptr *)&local_68);
    this_00 = local_60;
    if (local_60 != (__shared_weak_count *)0x0) {
      p_Var1 = local_60 + 8;
      do {
        lVar7 = *(long *)p_Var1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar6) {
          *(long *)p_Var1 = lVar7 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*(long *)local_60 + 0x10))(local_60);
        std::__ndk1::__shared_weak_count::__release_weak(this_00);
      }
    }
  }
  return;
}

