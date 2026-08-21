
/* v8::internal::JSArrayBuffer::Attach(std::__ndk1::shared_ptr<v8::internal::BackingStore>) */

void __thiscall v8::internal::JSArrayBuffer::Attach(JSArrayBuffer *this,long *param_2)

{
  __shared_weak_count *p_Var1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  __shared_weak_count *this_00;
  ulong uVar5;
  long lVar6;
  long local_30;
  __shared_weak_count *local_28;
  
  *(undefined8 *)(*(long *)this + 0x13) = *(undefined8 *)*param_2;
  *(undefined8 *)(*(long *)this + 0xb) = *(undefined8 *)(*param_2 + 8);
  local_30 = *param_2;
  bVar2 = *(byte *)(local_30 + 0x28);
  if ((bVar2 >> 1 & 1) != 0) {
    *(uint *)(*(long *)this + 0x1b) = *(uint *)(*(long *)this + 0x1b) & 0xfffffffd;
    local_30 = *param_2;
    bVar2 = *(byte *)(local_30 + 0x28);
  }
  if ((bVar2 >> 3 & 1) == 0) {
    *(uint *)(*(long *)this + 0x1b) = *(uint *)(*(long *)this + 0x1b) | 1;
    local_30 = *param_2;
  }
  uVar5 = *(ulong *)this;
  local_28 = (__shared_weak_count *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  Heap::RegisterBackingStore((Heap *)(uVar5 & 0xffffffff00000000 | 0x8850),uVar5,&local_30);
  this_00 = local_28;
  if (local_28 != (__shared_weak_count *)0x0) {
    p_Var1 = local_28 + 8;
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
      (**(code **)(*(long *)local_28 + 0x10))(local_28);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
    }
  }
  return;
}

