
/* v8::SharedArrayBuffer::New(v8::Isolate*, unsigned long) */

undefined8 v8::SharedArrayBuffer::New(Isolate *param_1,ulong param_2)

{
  __shared_weak_count *p_Var1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  __shared_weak_count *this;
  BackingStore *this_00;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  Logger *this_01;
  long local_78;
  __shared_weak_count *local_70;
  BackingStore *local_68;
  RuntimeCallStats *local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if (internal::FLAG_harmony_sharedarraybuffer != '\x01') {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","i::FLAG_harmony_sharedarraybuffer");
  }
  local_40 = 0;
  uStack_58 = 0;
  local_60 = (RuntimeCallStats *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_60 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_60,(ulong)&local_60 | 8,0x3d1);
  }
  this_01 = *(Logger **)(param_1 + 0x9558);
  uVar5 = internal::Logger::is_logging(this_01);
  if ((uVar5 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_01,"v8::SharedArrayBuffer::New");
  }
  uVar2 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  internal::BackingStore::Allocate((BackingStore *)&local_68,param_1,param_2,1,1);
  if (local_68 != (BackingStore *)0x0) {
    local_78 = (long)local_68;
    local_70 = operator_new(0x20);
    *(undefined8 *)(local_70 + 0x10) = 0;
    *(BackingStore **)(local_70 + 0x18) = local_68;
    local_68 = (BackingStore *)0x0;
    *(undefined ***)local_70 = &PTR____shared_weak_count_01c98518;
    *(undefined8 *)(local_70 + 8) = 0;
    uVar6 = internal::Factory::NewJSSharedArrayBuffer((Factory *)param_1,&local_78);
    this = local_70;
    if (local_70 != (__shared_weak_count *)0x0) {
      p_Var1 = local_70 + 8;
      do {
        lVar7 = *(long *)p_Var1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar4) {
          *(long *)p_Var1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*(long *)local_70 + 0x10))(local_70);
        std::__ndk1::__shared_weak_count::__release_weak(this);
      }
    }
    this_00 = local_68;
    local_68 = (BackingStore *)0x0;
    if (this_00 != (BackingStore *)0x0) {
      internal::BackingStore::~BackingStore(this_00);
      operator_delete(this_00);
    }
    *(undefined4 *)(param_1 + 0x2c60) = uVar2;
    if (local_60 != (RuntimeCallStats *)0x0) {
      internal::RuntimeCallStats::Leave(local_60,(RuntimeCallTimer *)((ulong)&local_60 | 8));
    }
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  internal::FatalProcessOutOfMemory((Isolate *)param_1,"v8::SharedArrayBuffer::New");
}

