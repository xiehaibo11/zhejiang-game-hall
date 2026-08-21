
/* v8::internal::BackingStore::WrapAllocation(v8::internal::Isolate*, void*, unsigned long,
   v8::internal::SharedFlag, bool) */

void __thiscall
v8::internal::BackingStore::WrapAllocation
          (undefined8 *param_1_00,BackingStore *this,undefined8 param_1,undefined8 param_2,
          char param_5,uint param_6)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  byte bVar5;
  long lVar6;
  __shared_weak_count *this_00;
  
  puVar4 = operator_new(0x30);
  bVar5 = 8;
  if ((param_6 & 1) == 0) {
    bVar5 = 0;
  }
  *puVar4 = param_1;
  puVar4[1] = param_2;
  puVar4[2] = param_2;
  puVar4[3] = 0;
  *(byte *)(puVar4 + 5) = bVar5 | param_5 == '\x01';
  this_00 = *(__shared_weak_count **)(this + 0xc6a0);
  lVar6 = *(long *)(this + 0xc698);
  if (this_00 != (__shared_weak_count *)0x0) {
    p_Var1 = this_00 + 8;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (lVar6 == 0) {
    puVar4[3] = *(undefined8 *)(this + 0xc690);
    if (this_00 != (__shared_weak_count *)0x0) {
      p_Var1 = this_00 + 8;
      do {
        lVar6 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*(long *)this_00 + 0x10))(this_00);
        std::__ndk1::__shared_weak_count::__release_weak(this_00);
      }
    }
  }
  else {
    puVar4[3] = lVar6;
    puVar4[4] = this_00;
    *(byte *)(puVar4 + 5) = *(byte *)(puVar4 + 5) | 4;
  }
  *param_1_00 = puVar4;
  return;
}

