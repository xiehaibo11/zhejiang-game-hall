
/* v8::ArrayBuffer::New(v8::Isolate*, std::__ndk1::shared_ptr<v8::BackingStore>) */

undefined8 v8::ArrayBuffer::New(Factory *param_1,long *param_2)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  Logger *this;
  long local_80;
  __shared_weak_count *local_78;
  RuntimeCallStats *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((((long *)*param_2)[1] != 0) && (*(long *)*param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "backing_store->ByteLength() != 0 implies backing_store->Data() != nullptr");
  }
  local_50 = 0;
  uStack_68 = 0;
  local_70 = (RuntimeCallStats *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_70 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_70,(ulong)&local_70 | 8,0x359);
  }
  this = *(Logger **)(param_1 + 0x9558);
  uVar7 = internal::Logger::is_logging(this);
  if ((uVar7 & 1) != 0) {
    internal::Logger::ApiEntryCall(this,"v8::ArrayBuffer::New");
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  lVar10 = *param_2;
  p_Var2 = (__shared_weak_count *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  if (p_Var2 == (__shared_weak_count *)0x0) {
LAB_00ec9884:
    bVar4 = *(byte *)(lVar10 + 0x28);
  }
  else {
    p_Var1 = p_Var2 + 8;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar6) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      lVar9 = *(long *)p_Var1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar6) {
        *(long *)p_Var1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 != 0) goto LAB_00ec9884;
    (**(code **)(*(long *)p_Var2 + 0x10))(p_Var2);
    std::__ndk1::__shared_weak_count::__release_weak(p_Var2);
    bVar4 = *(byte *)(lVar10 + 0x28);
  }
  if ((bVar4 & 1) != 0) {
    lVar9 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
    if (lVar9 != 0) {
      if (*(code **)(lVar9 + 0xb738) != (code *)0x0) {
        (**(code **)(lVar9 + 0xb738))
                  ("v8_ArrayBuffer_New",
                   "Cannot construct ArrayBuffer with a BackingStore of SharedArrayBuffer");
        *(undefined1 *)(lVar9 + 0xb6b9) = 1;
        goto LAB_00ec98cc;
      }
    }
    base::OS::PrintError
              ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8_ArrayBuffer_New",
               "Cannot construct ArrayBuffer with a BackingStore of SharedArrayBuffer");
                    /* WARNING: Subroutine does not return */
    base::OS::Abort();
  }
LAB_00ec98cc:
  local_80 = lVar10;
  local_78 = p_Var2;
  uVar8 = internal::Factory::NewJSArrayBuffer(param_1,&local_80,0);
  p_Var2 = local_78;
  if (local_78 != (__shared_weak_count *)0x0) {
    p_Var1 = local_78 + 8;
    do {
      lVar10 = *(long *)p_Var1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar6) {
        *(long *)p_Var1 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*(long *)local_78 + 0x10))(local_78);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var2);
    }
  }
  *(undefined4 *)(param_1 + 0x2c60) = uVar3;
  if (local_70 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_70,(RuntimeCallTimer *)((ulong)&local_70 | 8));
  }
  return uVar8;
}

