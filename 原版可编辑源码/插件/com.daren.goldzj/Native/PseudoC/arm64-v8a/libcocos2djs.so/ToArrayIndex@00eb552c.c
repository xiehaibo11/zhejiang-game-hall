
/* v8::Value::ToArrayIndex(v8::Local<v8::Context>) const */

Value * __thiscall v8::Value::ToArrayIndex(Value *this,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  Isolate *pIVar3;
  bool bVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  Isolate *this_00;
  Value *pVVar9;
  Logger *this_01;
  ulong uVar10;
  long local_f0;
  uint local_e4;
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
  
  if ((*(ulong *)this & 1) == 0) {
    if (-1 < (int)*(ulong *)this) {
      return this;
    }
    return (Value *)0x0;
  }
  if (param_2 == 0) {
    this_00 = (Isolate *)base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  }
  else {
    this_00 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
  }
  uVar10 = *(ulong *)(this_00 + 0xa8);
  if ((*(int *)(this_00 + 0x2c20) != (int)uVar10) &&
     (*(int *)(this_00 + 0x2c20) == *(int *)(this_00 + 0x188))) {
    return (Value *)0x0;
  }
  local_48 = *(Value **)(this_00 + 0x95a0);
  if (local_48 == *(Value **)(this_00 + 0x95a8)) {
    local_48 = (Value *)internal::HandleScope::Extend(this_00);
  }
  *(Value **)(this_00 + 0x95a0) = local_48 + 8;
  *(ulong *)local_48 = uVar10;
  HandleScope::Initialize((HandleScope *)&local_60,(Isolate *)this_00);
  FUN_00eaadd8(&local_b0,this_00,param_2);
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = (RuntimeCallStats *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_e0 = (RuntimeCallStats *)(*(long *)(this_00 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_e0,(ulong)&local_e0 | 8,0x3ae);
  }
  this_01 = *(Logger **)(this_00 + 0x9558);
  uVar10 = internal::Logger::is_logging(this_01);
  if ((uVar10 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_01,"v8::Object::ToArrayIndex");
  }
  uVar1 = *(undefined4 *)(this_00 + 0x2c60);
  *(undefined4 *)(this_00 + 0x2c60) = 5;
  uVar10 = *(ulong *)this;
  if (((uVar10 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)))) {
    this = (Value *)internal::Object::ConvertToString(this_00,this);
  }
  if (this == (Value *)0x0) {
    local_a0 = '\x01';
    *(long *)(local_b0 + 0x2c08) = local_68;
    if (local_68 == 0) {
      bVar4 = *(long *)(local_b0 + 0x2bb8) == 0;
    }
    else {
      bVar4 = false;
    }
    internal::Isolate::OptionalRescheduleException(local_b0,bVar4);
  }
  else {
    local_f0 = *(long *)this;
    uVar2 = *(uint *)(local_f0 + 3);
    if ((uVar2 & 0xc0000003) == 0) {
      local_e4 = uVar2 >> 3 & 0xffffff;
LAB_00eb56e0:
      uVar10 = (ulong)local_e4;
      if (*(CanonicalHandleScope **)(this_00 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)(this_00 + 0x95a0);
        if (puVar5 == *(ulong **)(this_00 + 0x95a8)) {
          puVar5 = (ulong *)internal::HandleScope::Extend(this_00);
        }
        *(ulong **)(this_00 + 0x95a0) = puVar5 + 1;
        *puVar5 = uVar10 << 1;
      }
      else {
        puVar5 = (ulong *)internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(this_00 + 0x95b8),uVar10 << 1);
      }
    }
    else {
      if (((uVar2 & 3) == 2) ||
         (uVar10 = internal::String::SlowAsArrayIndex((String *)&local_f0,&local_e4),
         (uVar10 & 1) == 0)) goto LAB_00eb57ac;
      if (local_e4 >> 0x1e == 0) goto LAB_00eb56e0;
      puVar5 = (ulong *)internal::Factory::NewNumber<(v8::internal::AllocationType)0>
                                  ((Factory *)this_00,(double)local_e4);
    }
    pVVar9 = local_48;
    pIVar3 = local_60;
    if (((*(ulong *)local_48 & 1) == 0) || ((int)*(ulong *)local_48 != *(int *)(local_60 + 0xa8))) {
      lVar6 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
      if (lVar6 == 0) {
LAB_00eb58c4:
        base::OS::PrintError
                  ("\n#\n# Fatal error in %s\n# %s\n#\n\n","EscapableHandleScope::Escape",
                   "Escape value set twice");
                    /* WARNING: Subroutine does not return */
        base::OS::Abort();
      }
      if (*(code **)(lVar6 + 0xb738) == (code *)0x0) goto LAB_00eb58c4;
      (**(code **)(lVar6 + 0xb738))("EscapableHandleScope::Escape","Escape value set twice");
      *(undefined1 *)(lVar6 + 0xb6b9) = 1;
    }
    if (puVar5 != (ulong *)0x0) {
      *(ulong *)pVVar9 = *puVar5;
      goto LAB_00eb57b0;
    }
    *(ulong *)pVVar9 = *(ulong *)(pIVar3 + 0xa0);
  }
LAB_00eb57ac:
  pVVar9 = (Value *)0x0;
LAB_00eb57b0:
  *(undefined4 *)(this_00 + 0x2c60) = uVar1;
  if (local_e0 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_e0,(RuntimeCallTimer *)((ulong)&local_e0 | 8));
  }
  if (local_a8 != 0) {
    lVar6 = *(long *)(local_b0 + 0x95c0);
    lVar7 = *(long *)(lVar6 + 0x60) + -1;
    uVar8 = *(undefined8 *)(*(long *)(lVar6 + 0x50) + lVar7 * 8);
    *(long *)(lVar6 + 0x60) = lVar7;
    *(undefined8 *)(local_b0 + 0x2bc8) = uVar8;
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
  return pVVar9;
}

