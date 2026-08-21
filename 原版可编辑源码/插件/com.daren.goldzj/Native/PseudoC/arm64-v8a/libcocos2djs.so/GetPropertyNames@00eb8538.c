
/* v8::Object::GetPropertyNames(v8::Local<v8::Context>, v8::KeyCollectionMode, v8::PropertyFilter,
   v8::IndexFilter, v8::KeyConversionMode) */

ulong * __thiscall
v8::Object::GetPropertyNames
          (Object *this,long param_2,undefined4 param_3,undefined4 param_4,int param_5,
          undefined4 param_6)

{
  undefined4 uVar1;
  long lVar2;
  Isolate *pIVar3;
  bool bVar4;
  char cVar5;
  long *plVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  Isolate *pIVar11;
  ulong *puVar12;
  Logger *this_00;
  ulong uVar13;
  RuntimeCallStats *local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  Isolate *local_110;
  long local_108;
  char local_100;
  Isolate local_fe;
  undefined **local_f8;
  StackGuard *local_f0;
  int local_d8;
  long local_c8;
  Isolate *local_c0;
  undefined8 uStack_b8;
  long local_b0;
  ulong *local_a8;
  Isolate *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 local_78;
  undefined1 local_77;
  undefined2 local_76;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  if (param_2 == 0) {
    pIVar11 = (Isolate *)base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  }
  else {
    pIVar11 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
  }
  uVar13 = *(ulong *)(pIVar11 + 0xa8);
  if ((*(int *)(pIVar11 + 0x2c20) != (int)uVar13) &&
     (*(int *)(pIVar11 + 0x2c20) == *(int *)(pIVar11 + 0x188))) {
    puVar12 = (ulong *)0x0;
    goto LAB_00eb8828;
  }
  local_a8 = *(ulong **)(pIVar11 + 0x95a0);
  if (local_a8 == *(ulong **)(pIVar11 + 0x95a8)) {
    local_a8 = (ulong *)internal::HandleScope::Extend(pIVar11);
  }
  *(ulong **)(pIVar11 + 0x95a0) = local_a8 + 1;
  *local_a8 = uVar13;
  HandleScope::Initialize((HandleScope *)&local_c0,(Isolate *)pIVar11);
  FUN_00eaadd8(&local_110,pIVar11,param_2);
  local_120 = 0;
  uStack_138 = 0;
  local_140 = (RuntimeCallStats *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_140 = (RuntimeCallStats *)(*(long *)(pIVar11 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_140,(ulong)&local_140 | 8,0x39b);
  }
  this_00 = *(Logger **)(pIVar11 + 0x9558);
  uVar13 = internal::Logger::is_logging(this_00);
  if ((uVar13 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::Object::GetPropertyNames");
  }
  uVar1 = *(undefined4 *)(pIVar11 + 0x2c60);
  *(undefined4 *)(pIVar11 + 0x2c60) = 5;
  local_77 = param_5 == 1;
  local_76 = 0x101;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_78 = 0;
  local_a0 = pIVar11;
  local_80 = param_3;
  uStack_7c = param_4;
  cVar5 = internal::KeyAccumulator::CollectKeys((KeyAccumulator *)&local_a0,this,this);
  if (cVar5 == '\0') {
    local_100 = '\x01';
    *(long *)(local_110 + 0x2c08) = local_c8;
    if (local_c8 == 0) {
      bVar4 = *(long *)(local_110 + 0x2bb8) == 0;
    }
    else {
      bVar4 = false;
    }
    internal::Isolate::OptionalRescheduleException(local_110,bVar4);
LAB_00eb8768:
    puVar12 = (ulong *)0x0;
  }
  else {
    plVar6 = (long *)internal::KeyAccumulator::GetKeys((KeyAccumulator *)&local_a0,param_6);
    puVar7 = (ulong *)internal::Factory::NewJSArrayWithElements
                                (pIVar11,plVar6,3,*(int *)(*plVar6 + 3) >> 1,0);
    puVar12 = local_a8;
    pIVar3 = local_c0;
    if (((*local_a8 & 1) == 0) || ((int)*local_a8 != *(int *)(local_c0 + 0xa8))) {
      lVar8 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
      if (lVar8 == 0) {
LAB_00eb889c:
        base::OS::PrintError
                  ("\n#\n# Fatal error in %s\n# %s\n#\n\n","EscapableHandleScope::Escape",
                   "Escape value set twice");
                    /* WARNING: Subroutine does not return */
        base::OS::Abort();
      }
      if (*(code **)(lVar8 + 0xb738) == (code *)0x0) goto LAB_00eb889c;
      (**(code **)(lVar8 + 0xb738))("EscapableHandleScope::Escape","Escape value set twice");
      *(undefined1 *)(lVar8 + 0xb6b9) = 1;
    }
    if (puVar7 == (ulong *)0x0) {
      *puVar12 = *(ulong *)(pIVar3 + 0xa0);
      goto LAB_00eb8768;
    }
    *puVar12 = *puVar7;
  }
  *(undefined4 *)(pIVar11 + 0x2c60) = uVar1;
  if (local_140 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_140,(RuntimeCallTimer *)((ulong)&local_140 | 8));
  }
  if (local_108 != 0) {
    lVar8 = *(long *)(local_110 + 0x95c0);
    lVar9 = *(long *)(lVar8 + 0x60) + -1;
    uVar10 = *(undefined8 *)(*(long *)(lVar8 + 0x50) + lVar9 * 8);
    *(long *)(lVar8 + 0x60) = lVar9;
    *(undefined8 *)(local_110 + 0x2bc8) = uVar10;
  }
  if (local_100 == '\0') {
    *(long *)(local_110 + 0x2c08) = local_c8;
  }
  local_110[0xb828] = local_fe;
  local_f8 = &PTR__InterruptsScope_01c984b0;
  if (local_d8 != 2) {
    internal::StackGuard::PopInterruptsScope(local_f0);
  }
  *(undefined8 *)(local_c0 + 0x95a0) = uStack_b8;
  *(int *)(local_c0 + 0x95b0) = *(int *)(local_c0 + 0x95b0) + -1;
  if (*(long *)(local_c0 + 0x95a8) != local_b0) {
    *(long *)(local_c0 + 0x95a8) = local_b0;
    internal::HandleScope::DeleteExtensions(local_c0);
  }
LAB_00eb8828:
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar12;
}

