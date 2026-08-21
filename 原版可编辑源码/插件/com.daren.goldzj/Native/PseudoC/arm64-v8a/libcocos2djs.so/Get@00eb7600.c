
/* v8::Object::Get(v8::Local<v8::Context>, unsigned int) */

ulong * __thiscall v8::Object::Get(Object *this,long param_2,uint param_3)

{
  undefined4 uVar1;
  bool bVar2;
  ulong *puVar3;
  Isolate *pIVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  Isolate *this_00;
  Logger *this_01;
  ulong uVar8;
  RuntimeCallStats *local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  Isolate *local_118;
  long local_110;
  char local_108;
  Isolate local_106;
  undefined **local_100;
  StackGuard *local_f8;
  int local_e0;
  long local_d0;
  Isolate *local_c8;
  undefined8 uStack_c0;
  long local_b8;
  ulong *local_b0;
  undefined4 local_a8;
  int local_a4;
  undefined8 local_9c;
  Isolate *local_90;
  ulong *local_88;
  undefined8 local_80;
  Object *pOStack_78;
  undefined8 local_70;
  Object *pOStack_68;
  ulong local_60;
  undefined8 uStack_58;
  
  if (param_2 == 0) {
    this_00 = (Isolate *)base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  }
  else {
    this_00 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
  }
  uVar8 = *(ulong *)(this_00 + 0xa8);
  if ((*(int *)(this_00 + 0x2c20) != (int)uVar8) &&
     (*(int *)(this_00 + 0x2c20) == *(int *)(this_00 + 0x188))) {
    return (ulong *)0x0;
  }
  local_b0 = *(ulong **)(this_00 + 0x95a0);
  if (local_b0 == *(ulong **)(this_00 + 0x95a8)) {
    local_b0 = (ulong *)internal::HandleScope::Extend(this_00);
  }
  *(ulong **)(this_00 + 0x95a0) = local_b0 + 1;
  *local_b0 = uVar8;
  HandleScope::Initialize((HandleScope *)&local_c8,(Isolate *)this_00);
  FUN_00eaadd8(&local_118,this_00,param_2);
  local_120 = 0;
  uStack_138 = 0;
  local_140 = (RuntimeCallStats *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_140 = (RuntimeCallStats *)(*(long *)(this_00 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_140,(ulong)&local_140 | 8,0x397);
  }
  this_01 = *(Logger **)(this_00 + 0x9558);
  uVar8 = internal::Logger::is_logging(this_01);
  if ((uVar8 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_01,"v8::Object::Get");
  }
  uVar1 = *(undefined4 *)(this_00 + 0x2c60);
  *(undefined4 *)(this_00 + 0x2c60) = 5;
  local_60 = (ulong)param_3;
  local_a8 = 3;
  local_88 = (ulong *)0x0;
  local_80 = 0;
  local_70 = 0;
  local_9c = 0xc000000000;
  uStack_58 = 0xffffffffffffffff;
  local_90 = this_00;
  puVar3 = local_88;
  pOStack_78 = this;
  pOStack_68 = this;
  if (((param_3 == 0xffffffff) &&
      (*(short *)((*(ulong *)this & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*(ulong *)this - 1))
       != 0x41b)) &&
     (puVar3 = (ulong *)internal::Factory::SizeToString((Factory *)this_00,0xffffffff,true),
     (*(ushort *)((*puVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar3 - 1)) & 0xffe0) ==
     0x20)) {
    puVar3 = (ulong *)internal::StringTable::LookupString(this_00);
  }
  local_88 = puVar3;
  internal::LookupIterator::Start<true>((LookupIterator *)&local_a8);
  if (local_a4 == 4) {
    pIVar4 = local_90 + 0xa0;
  }
  else {
    pIVar4 = (Isolate *)internal::Object::GetProperty((LookupIterator *)&local_a8,false);
    if (pIVar4 == (Isolate *)0x0) {
      local_108 = '\x01';
      *(long *)(local_118 + 0x2c08) = local_d0;
      if (local_d0 == 0) {
        bVar2 = *(long *)(local_118 + 0x2bb8) == 0;
      }
      else {
        bVar2 = false;
      }
      internal::Isolate::OptionalRescheduleException(local_118,bVar2);
      puVar3 = (ulong *)0x0;
      goto LAB_00eb7828;
    }
  }
  puVar3 = local_b0;
  if (((*local_b0 & 1) == 0) || ((int)*local_b0 != *(int *)(local_c8 + 0xa8))) {
    lVar5 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
    if (lVar5 == 0) {
LAB_00eb7978:
      base::OS::PrintError
                ("\n#\n# Fatal error in %s\n# %s\n#\n\n","EscapableHandleScope::Escape",
                 "Escape value set twice");
                    /* WARNING: Subroutine does not return */
      base::OS::Abort();
    }
    if (*(code **)(lVar5 + 0xb738) == (code *)0x0) goto LAB_00eb7978;
    (**(code **)(lVar5 + 0xb738))("EscapableHandleScope::Escape","Escape value set twice");
    *(undefined1 *)(lVar5 + 0xb6b9) = 1;
  }
  *puVar3 = *(ulong *)pIVar4;
LAB_00eb7828:
  *(undefined4 *)(this_00 + 0x2c60) = uVar1;
  if (local_140 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_140,(RuntimeCallTimer *)((ulong)&local_140 | 8));
  }
  if (local_110 != 0) {
    lVar5 = *(long *)(local_118 + 0x95c0);
    lVar6 = *(long *)(lVar5 + 0x60) + -1;
    uVar7 = *(undefined8 *)(*(long *)(lVar5 + 0x50) + lVar6 * 8);
    *(long *)(lVar5 + 0x60) = lVar6;
    *(undefined8 *)(local_118 + 0x2bc8) = uVar7;
  }
  if (local_108 == '\0') {
    *(long *)(local_118 + 0x2c08) = local_d0;
  }
  local_118[0xb828] = local_106;
  local_100 = &PTR__InterruptsScope_01c984b0;
  if (local_e0 != 2) {
    internal::StackGuard::PopInterruptsScope(local_f8);
  }
  *(undefined8 *)(local_c8 + 0x95a0) = uStack_c0;
  *(int *)(local_c8 + 0x95b0) = *(int *)(local_c8 + 0x95b0) + -1;
  if (*(long *)(local_c8 + 0x95a8) != local_b8) {
    *(long *)(local_c8 + 0x95a8) = local_b8;
    internal::HandleScope::DeleteExtensions(local_c8);
  }
  return puVar3;
}

