
/* v8::internal::BackingStore::Allocate(v8::internal::Isolate*, unsigned long,
   v8::internal::SharedFlag, v8::internal::InitializedFlag) */

void __thiscall
v8::internal::BackingStore::Allocate
          (undefined8 *param_1_00,BackingStore *this,ulong param_1,char param_4,uint param_5)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *this_00;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  undefined **local_a0;
  long lStack_98;
  ulong local_90;
  long *local_80;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar8 = *(long *)(this + 0xc690);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(allocator) != nullptr");
  }
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    iVar5 = (int)*(undefined8 *)(this + 0x9520);
    if (0 < (int)(param_1 >> 0x14)) {
      Histogram::AddSample(iVar5 + 0x418);
    }
    if (param_4 == '\x01') {
      Histogram::AddSample(iVar5 + 0x468);
    }
    local_90 = (ulong)param_5 & 0xff;
    local_a0 = &PTR_FUN_01cb2518;
    lStack_98 = lVar8;
    local_80 = (long *)&local_a0;
    lVar8 = Heap::AllocateExternalBackingStore
                      ((Heap *)(this + 0x8850),(function *)&local_a0,param_1);
    if (&local_a0 == (undefined ***)local_80) {
      pcVar7 = *(code **)(*local_80 + 0x20);
LAB_0106974c:
      (*pcVar7)(local_80);
    }
    else if (local_80 != (long *)0x0) {
      pcVar7 = *(code **)(*local_80 + 0x28);
      goto LAB_0106974c;
    }
    if (lVar8 == 0) {
      Histogram::AddSample(iVar5 + 0x440);
      plVar6 = (long *)0x0;
      goto LAB_0106980c;
    }
  }
  plVar6 = operator_new(0x30);
  *plVar6 = lVar8;
  plVar6[1] = param_1;
  plVar6[2] = param_1;
  plVar6[3] = 0;
  *(byte *)(plVar6 + 5) = param_4 == '\x01' | 8;
  lVar8 = *(long *)(this + 0xc698);
  this_00 = *(__shared_weak_count **)(this + 0xc6a0);
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
  if (lVar8 == 0) {
    plVar6[3] = *(long *)(this + 0xc690);
    if (this_00 != (__shared_weak_count *)0x0) {
      p_Var1 = this_00 + 8;
      do {
        lVar8 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*(long *)this_00 + 0x10))(this_00);
        std::__ndk1::__shared_weak_count::__release_weak(this_00);
      }
    }
  }
  else {
    plVar6[3] = lVar8;
    plVar6[4] = (long)this_00;
    *(byte *)(plVar6 + 5) = *(byte *)(plVar6 + 5) | 4;
  }
LAB_0106980c:
  *param_1_00 = plVar6;
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

