
/* v8::Object::SetPrototype(v8::Local<v8::Context>, v8::Local<v8::Value>) */

undefined8 __thiscall v8::Object::SetPrototype(Object *this,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  ulong uVar5;
  MicrotaskQueue *pMVar6;
  Isolate *pIVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  Isolate *this_00;
  undefined8 uVar11;
  Logger *this_01;
  Isolate *pIVar12;
  long lVar13;
  undefined8 uVar14;
  Isolate *pIVar15;
  RuntimeCallStats *local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  Isolate *local_f0;
  ulong *local_e8;
  char local_e0;
  Isolate local_de;
  undefined **local_d8;
  StackGuard *local_d0;
  int local_b8;
  long local_a8;
  Isolate *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  byte local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  this_00 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
  if ((*(int *)(this_00 + 0x2c20) != *(int *)(this_00 + 0xa8)) &&
     (*(int *)(this_00 + 0x2c20) == *(int *)(this_00 + 0x188))) {
    uVar11 = 0;
    goto LAB_00eb82a8;
  }
  uVar14 = *(undefined8 *)(this_00 + 0x95a0);
  pIVar12 = this_00 + 0x95a8;
  lVar13 = *(long *)pIVar12;
  pIVar15 = this_00 + 0x95b0;
  *(int *)pIVar15 = *(int *)pIVar15 + 1;
  FUN_00ea94b8(&local_f0,this_00,param_2);
  local_100 = 0;
  uStack_118 = 0;
  local_120 = (RuntimeCallStats *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_120 = (RuntimeCallStats *)(*(long *)(this_00 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_120,(ulong)&local_120 | 8,0x3ab);
  }
  this_01 = *(Logger **)(this_00 + 0x9558);
  uVar5 = internal::Logger::is_logging(this_01);
  if ((uVar5 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_01,"v8::Object::SetPrototype");
  }
  uVar1 = *(undefined4 *)(this_00 + 0x2c60);
  *(undefined4 *)(this_00 + 0x2c60) = 5;
  uStack_98 = *(undefined8 *)(this_00 + 0x2bb8);
  local_78 = local_78 & 0xe0 | 6;
  local_90 = *(undefined8 *)(this_00 + 0xa8);
  local_a0 = this_00;
  uStack_88 = local_90;
  local_80 = internal::GetCurrentStackPosition();
  internal::Isolate::RegisterTryCatchHandler(this_00,(TryCatch *)&local_a0);
  cVar4 = internal::JSReceiver::SetPrototype(this,param_3,0,0);
  if (cVar4 == '\0') {
    local_e0 = '\x01';
    *(long *)(local_f0 + 0x2c08) = local_a8;
    if (local_a8 == 0) {
      bVar3 = *(long *)(local_f0 + 0x2bb8) == 0;
    }
    else {
      bVar3 = false;
    }
    internal::Isolate::OptionalRescheduleException(local_f0,bVar3);
    uVar11 = 0;
  }
  else {
    uVar11 = 0x101;
  }
  TryCatch::~TryCatch((TryCatch *)&local_a0);
  *(undefined4 *)(this_00 + 0x2c60) = uVar1;
  if (local_120 == (RuntimeCallStats *)0x0) {
    if (local_e8 != (ulong *)0x0) goto LAB_00eb81a4;
LAB_00eb8228:
    pIVar7 = local_f0 + 0xb7c0;
  }
  else {
    internal::RuntimeCallStats::Leave(local_120,(RuntimeCallTimer *)((ulong)&local_120 | 8));
    if (local_e8 == (ulong *)0x0) goto LAB_00eb8228;
LAB_00eb81a4:
    lVar8 = *(long *)(local_f0 + 0x95c0);
    lVar9 = *(long *)(lVar8 + 0x60) + -1;
    uVar10 = *(undefined8 *)(*(long *)(lVar8 + 0x50) + lVar9 * 8);
    *(long *)(lVar8 + 0x60) = lVar9;
    *(undefined8 *)(local_f0 + 0x2bc8) = uVar10;
    uVar5 = *local_e8 & 0xffffffff00000000;
    pIVar7 = (Isolate *)((uVar5 | *(uint *)((uVar5 | *(uint *)(*local_e8 - 1)) + 0x13)) + 0x423);
  }
  pMVar6 = *(MicrotaskQueue **)pIVar7;
  if (local_e0 == '\0') {
    *(long *)(local_f0 + 0x2c08) = local_a8;
  }
  internal::Isolate::FireCallCompletedCallback(local_f0,pMVar6);
  local_f0[0xb828] = local_de;
  local_d8 = &PTR__InterruptsScope_01c984b0;
  if (local_b8 != 2) {
    internal::StackGuard::PopInterruptsScope(local_d0);
  }
  *(undefined8 *)(this_00 + 0x95a0) = uVar14;
  *(int *)pIVar15 = *(int *)pIVar15 + -1;
  if (*(long *)pIVar12 != lVar13) {
    *(long *)pIVar12 = lVar13;
    internal::HandleScope::DeleteExtensions(this_00);
  }
LAB_00eb82a8:
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

