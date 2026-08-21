
/* v8::ArrayBuffer::GetBackingStore() */

void v8::ArrayBuffer::GetBackingStore(void)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  char cVar3;
  bool bVar4;
  BackingStore *this;
  long *in_x0;
  __shared_weak_count *p_Var5;
  long *in_x8;
  long lVar6;
  long local_50;
  __shared_weak_count *local_48;
  long local_40;
  __shared_weak_count *local_38;
  BackingStore *local_18;
  
  local_18 = (BackingStore *)*in_x0;
  internal::JSArrayBuffer::GetBackingStore((JSArrayBuffer *)&local_18);
  if (local_40 == 0) {
    internal::BackingStore::EmptyBackingStore((BackingStore *)&local_18,0);
    local_40 = (long)local_18;
    if (local_18 == (BackingStore *)0x0) {
      p_Var5 = (__shared_weak_count *)0x0;
    }
    else {
      p_Var5 = operator_new(0x20);
      *(undefined8 *)(p_Var5 + 0x10) = 0;
      *(long *)(p_Var5 + 0x18) = local_40;
      *(undefined ***)p_Var5 = &PTR____shared_weak_count_01c98518;
      *(undefined8 *)(p_Var5 + 8) = 0;
    }
    p_Var2 = local_38;
    local_18 = (BackingStore *)0x0;
    if (local_38 != (__shared_weak_count *)0x0) {
      p_Var1 = local_38 + 8;
      do {
        lVar6 = *(long *)p_Var1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar4) {
          *(long *)p_Var1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        lVar6 = *(long *)local_38;
        local_38 = p_Var5;
        (**(code **)(lVar6 + 0x10))(p_Var2);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var2);
        p_Var5 = local_38;
      }
    }
    local_38 = p_Var5;
    this = local_18;
    local_18 = (BackingStore *)0x0;
    if (this != (BackingStore *)0x0) {
      internal::BackingStore::~BackingStore(this);
      operator_delete(this);
    }
  }
  local_50 = local_40;
  local_48 = local_38;
  if (local_38 != (__shared_weak_count *)0x0) {
    p_Var5 = local_38 + 8;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var5,0x10);
      if (bVar4) {
        *(long *)p_Var5 = *(long *)p_Var5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  internal::GlobalBackingStoreRegistry::Register(&local_50);
  p_Var2 = local_48;
  p_Var5 = local_38;
  if (local_48 != (__shared_weak_count *)0x0) {
    p_Var1 = local_48 + 8;
    do {
      lVar6 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*(long *)local_48 + 0x10))(local_48);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var2);
      p_Var5 = local_38;
    }
  }
  if (p_Var5 == (__shared_weak_count *)0x0) {
    *in_x8 = local_40;
    in_x8[1] = 0;
  }
  else {
    p_Var2 = p_Var5 + 8;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar4) {
        *(long *)p_Var2 = *(long *)p_Var2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *in_x8 = local_40;
    in_x8[1] = (long)p_Var5;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar4) {
        *(long *)p_Var2 = *(long *)p_Var2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar6 = *(long *)p_Var2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar4) {
        *(long *)p_Var2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      local_38 = p_Var5;
      (**(code **)(*(long *)p_Var5 + 0x10))(p_Var5);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var5);
      p_Var5 = local_38;
    }
  }
  if (p_Var5 != (__shared_weak_count *)0x0) {
    p_Var2 = p_Var5 + 8;
    do {
      lVar6 = *(long *)p_Var2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar4) {
        *(long *)p_Var2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      local_38 = p_Var5;
      (**(code **)(*(long *)p_Var5 + 0x10))(p_Var5);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var5);
    }
  }
  return;
}

