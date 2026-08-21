
/* v8::Value::ToUint32(v8::Local<v8::Context>) const */

Value * __thiscall v8::Value::ToUint32(Value *this,long param_2)

{
  undefined4 uVar1;
  bool bVar2;
  ulong *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  Value *pVVar8;
  Isolate *pIVar9;
  Logger *this_00;
  ulong uVar10;
  RuntimeCallStats *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  Isolate *local_b0;
  long local_a8;
  char local_a0;
  Isolate local_9e;
  undefined **local_98;
  StackGuard *local_90;
  int local_78;
  long local_68;
  Isolate *local_60;
  undefined8 uStack_58;
  long local_50;
  Value *local_48;
  
  if (((byte)*this & 1) == 0) {
    return this;
  }
  if (param_2 == 0) {
    pIVar9 = (Isolate *)base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  }
  else {
    pIVar9 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
  }
  uVar10 = *(ulong *)(pIVar9 + 0xa8);
  if ((*(int *)(pIVar9 + 0x2c20) != (int)uVar10) &&
     (*(int *)(pIVar9 + 0x2c20) == *(int *)(pIVar9 + 0x188))) {
    return (Value *)0x0;
  }
  local_48 = *(Value **)(pIVar9 + 0x95a0);
  if (local_48 == *(Value **)(pIVar9 + 0x95a8)) {
    local_48 = (Value *)internal::HandleScope::Extend(pIVar9);
  }
  *(Value **)(pIVar9 + 0x95a0) = local_48 + 8;
  *(ulong *)local_48 = uVar10;
  HandleScope::Initialize((HandleScope *)&local_60,(Isolate *)pIVar9);
  FUN_00eaadd8(&local_b0,pIVar9,param_2);
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = (RuntimeCallStats *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_e0 = (RuntimeCallStats *)(*(long *)(pIVar9 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_e0,(ulong)&local_e0 | 8,0x3b6);
  }
  this_00 = *(Logger **)(pIVar9 + 0x9558);
  uVar10 = internal::Logger::is_logging(this_00);
  if ((uVar10 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::Object::ToUint32");
  }
  uVar1 = *(undefined4 *)(pIVar9 + 0x2c60);
  *(undefined4 *)(pIVar9 + 0x2c60) = 5;
  iVar4 = (int)*(ulong *)this;
  if ((*(ulong *)this & 1) == 0) {
    uVar10 = 0;
    if (1 < iVar4) {
      uVar10 = (ulong)(uint)(iVar4 >> 1) << 1;
    }
    if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar9 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar9 + 0x95a8)) {
        puVar3 = (ulong *)internal::HandleScope::Extend(pIVar9);
      }
      *(ulong **)(pIVar9 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar10;
      pVVar8 = local_48;
    }
    else {
      puVar3 = (ulong *)internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar10);
      pVVar8 = local_48;
    }
  }
  else {
    puVar3 = (ulong *)internal::Object::ConvertToUint32(pIVar9,this);
    pVVar8 = local_48;
  }
  local_48 = pVVar8;
  if (puVar3 == (ulong *)0x0) {
    local_a0 = '\x01';
    *(long *)(local_b0 + 0x2c08) = local_68;
    if (local_68 == 0) {
      bVar2 = *(long *)(local_b0 + 0x2bb8) == 0;
    }
    else {
      bVar2 = false;
    }
    internal::Isolate::OptionalRescheduleException(local_b0,bVar2);
    pVVar8 = (Value *)0x0;
  }
  else {
    if (((*(ulong *)pVVar8 & 1) == 0) || ((int)*(ulong *)pVVar8 != *(int *)(local_60 + 0xa8))) {
      lVar5 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
      if (lVar5 == 0) {
LAB_00eb2704:
        base::OS::PrintError
                  ("\n#\n# Fatal error in %s\n# %s\n#\n\n","EscapableHandleScope::Escape",
                   "Escape value set twice");
                    /* WARNING: Subroutine does not return */
        base::OS::Abort();
      }
      if (*(code **)(lVar5 + 0xb738) == (code *)0x0) goto LAB_00eb2704;
      (**(code **)(lVar5 + 0xb738))("EscapableHandleScope::Escape","Escape value set twice");
      *(undefined1 *)(lVar5 + 0xb6b9) = 1;
    }
    *(ulong *)pVVar8 = *puVar3;
  }
  *(undefined4 *)(pIVar9 + 0x2c60) = uVar1;
  if (local_e0 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_e0,(RuntimeCallTimer *)((ulong)&local_e0 | 8));
  }
  if (local_a8 != 0) {
    lVar5 = *(long *)(local_b0 + 0x95c0);
    lVar6 = *(long *)(lVar5 + 0x60) + -1;
    uVar7 = *(undefined8 *)(*(long *)(lVar5 + 0x50) + lVar6 * 8);
    *(long *)(lVar5 + 0x60) = lVar6;
    *(undefined8 *)(local_b0 + 0x2bc8) = uVar7;
  }
  if (local_a0 == '\0') {
    *(long *)(local_b0 + 0x2c08) = local_68;
  }
  local_b0[0xb828] = local_9e;
  local_98 = &PTR__InterruptsScope_01c984b0;
  if (local_78 != 2) {
    internal::StackGuard::PopInterruptsScope(local_90);
  }
  *(undefined8 *)(local_60 + 0x95a0) = uStack_58;
  *(int *)(local_60 + 0x95b0) = *(int *)(local_60 + 0x95b0) + -1;
  if (*(long *)(local_60 + 0x95a8) != local_50) {
    *(long *)(local_60 + 0x95a8) = local_50;
    internal::HandleScope::DeleteExtensions(local_60);
  }
  return pVVar8;
}

