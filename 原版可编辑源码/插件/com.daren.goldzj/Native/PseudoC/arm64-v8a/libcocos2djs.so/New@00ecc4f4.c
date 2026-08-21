
/* v8::SharedArrayBuffer::New(v8::Isolate*, void*, unsigned long, v8::ArrayBufferCreationMode) */

long * v8::SharedArrayBuffer::New(Factory *param_1,long param_2,long param_3,int param_4)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  __shared_weak_count *this;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  Logger *this_00;
  undefined8 uStack_90;
  __shared_weak_count *p_Stack_88;
  undefined8 uStack_80;
  __shared_weak_count *p_Stack_78;
  RuntimeCallStats *pRStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if (internal::FLAG_harmony_sharedarraybuffer != '\x01') {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","i::FLAG_harmony_sharedarraybuffer");
  }
  if ((param_2 == 0) && (param_3 != 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","byte_length == 0 || data != nullptr");
  }
  uStack_50 = 0;
  uStack_68 = 0;
  pRStack_70 = (RuntimeCallStats *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    pRStack_70 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(pRStack_70,(ulong)&pRStack_70 | 8,0x3d1);
  }
  this_00 = *(Logger **)(param_1 + 0x9558);
  uVar6 = internal::Logger::is_logging(this_00);
  if ((uVar6 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::SharedArrayBuffer::New");
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  FUN_00ec9578(&uStack_80,param_1,param_2,param_3,1,param_4);
  p_Stack_88 = p_Stack_78;
  uStack_90 = uStack_80;
  uStack_80 = 0;
  p_Stack_78 = (__shared_weak_count *)0x0;
  plVar7 = (long *)internal::Factory::NewJSSharedArrayBuffer(param_1,&uStack_90);
  p_Var2 = p_Stack_88;
  this = p_Stack_78;
  if (p_Stack_88 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Stack_88 + 8;
    do {
      lVar8 = *(long *)p_Var1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar5) {
        *(long *)p_Var1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*(long *)p_Stack_88 + 0x10))(p_Stack_88);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var2);
      this = p_Stack_78;
    }
  }
  if (param_4 == 1) {
    *(uint *)(*plVar7 + 0x1b) = *(uint *)(*plVar7 + 0x1b) | 1;
  }
  p_Stack_78 = this;
  if (this != (__shared_weak_count *)0x0) {
    p_Var2 = this + 8;
    do {
      lVar8 = *(long *)p_Var2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar5) {
        *(long *)p_Var2 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
    }
  }
  *(undefined4 *)(param_1 + 0x2c60) = uVar3;
  if (pRStack_70 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(pRStack_70,(RuntimeCallTimer *)((ulong)&pRStack_70 | 8));
  }
  return plVar7;
}

