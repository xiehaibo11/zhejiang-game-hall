
/* v8::ValueDeserializer::ReadHeader(v8::Local<v8::Context>) */

undefined8 __thiscall v8::ValueDeserializer::ReadHeader(ValueDeserializer *this,long param_2)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  Isolate *pIVar10;
  Logger *this_00;
  Isolate *pIVar11;
  long lVar12;
  undefined8 uVar13;
  Isolate *pIVar14;
  RuntimeCallStats *local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  Isolate *local_a0;
  long local_98;
  char local_90;
  Isolate local_8e;
  undefined **local_88;
  StackGuard *local_80;
  int local_68;
  long local_58;
  
  pIVar10 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
  if ((*(int *)(pIVar10 + 0x2c20) != *(int *)(pIVar10 + 0xa8)) &&
     (*(int *)(pIVar10 + 0x2c20) == *(int *)(pIVar10 + 0x188))) {
    return 0;
  }
  uVar13 = *(undefined8 *)(pIVar10 + 0x95a0);
  pIVar11 = pIVar10 + 0x95a8;
  lVar12 = *(long *)pIVar11;
  pIVar14 = pIVar10 + 0x95b0;
  *(int *)pIVar14 = *(int *)pIVar14 + 1;
  FUN_00eaadd8(&local_a0,pIVar10,param_2);
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = (RuntimeCallStats *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_d0 = (RuntimeCallStats *)(*(long *)(pIVar10 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_d0,(ulong)&local_d0 | 8,0x3ed);
  }
  this_00 = *(Logger **)(pIVar10 + 0x9558);
  uVar4 = internal::Logger::is_logging(this_00);
  if ((uVar4 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::ValueDeserializer::ReadHeader");
  }
  uVar1 = *(undefined4 *)(pIVar10 + 0x2c60);
  *(undefined4 *)(pIVar10 + 0x2c60) = 5;
  if (*(char *)(*(long *)this + 0x48) == '\0') {
    cVar3 = internal::ValueDeserializer::ReadHeader((ValueDeserializer *)(*(long *)this + 8));
    if (cVar3 != '\0') {
      lVar7 = *(long *)this;
      if (*(char *)(lVar7 + 0x48) != '\0') {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!private_->has_aborted");
      }
      if ((0xc < *(uint *)(lVar7 + 0x28)) || (*(char *)(lVar7 + 0x49) != '\0')) {
        uVar6 = 0x101;
        goto LAB_00eafc54;
      }
      uVar6 = 0x16d;
      goto LAB_00eafbc4;
    }
  }
  else {
    uVar6 = 0x16c;
LAB_00eafbc4:
    puVar5 = (undefined8 *)internal::Factory::NewError((Factory *)pIVar10,uVar6,0,0,0);
    internal::Isolate::Throw(pIVar10,*puVar5,0);
  }
  local_90 = '\x01';
  *(long *)(local_a0 + 0x2c08) = local_58;
  if (local_58 == 0) {
    bVar2 = *(long *)(local_a0 + 0x2bb8) == 0;
  }
  else {
    bVar2 = false;
  }
  internal::Isolate::OptionalRescheduleException(local_a0,bVar2);
  uVar6 = 0;
LAB_00eafc54:
  *(undefined4 *)(pIVar10 + 0x2c60) = uVar1;
  if (local_d0 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_d0,(RuntimeCallTimer *)((ulong)&local_d0 | 8));
  }
  if (local_98 != 0) {
    lVar7 = *(long *)(local_a0 + 0x95c0);
    lVar8 = *(long *)(lVar7 + 0x60) + -1;
    uVar9 = *(undefined8 *)(*(long *)(lVar7 + 0x50) + lVar8 * 8);
    *(long *)(lVar7 + 0x60) = lVar8;
    *(undefined8 *)(local_a0 + 0x2bc8) = uVar9;
  }
  if (local_90 == '\0') {
    *(long *)(local_a0 + 0x2c08) = local_58;
  }
  local_a0[0xb828] = local_8e;
  local_88 = &PTR__InterruptsScope_01c984b0;
  if (local_68 != 2) {
    internal::StackGuard::PopInterruptsScope(local_80);
  }
  *(undefined8 *)(pIVar10 + 0x95a0) = uVar13;
  *(int *)pIVar14 = *(int *)pIVar14 + -1;
  if (*(long *)pIVar11 != lVar12) {
    *(long *)pIVar11 = lVar12;
    internal::HandleScope::DeleteExtensions(pIVar10);
  }
  return uVar6;
}

