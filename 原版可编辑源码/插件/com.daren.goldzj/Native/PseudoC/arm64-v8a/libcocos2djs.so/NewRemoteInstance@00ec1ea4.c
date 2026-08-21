
/* v8::FunctionTemplate::NewRemoteInstance() */

ulong * __thiscall v8::FunctionTemplate::NewRemoteInstance(FunctionTemplate *this)

{
  Isolate *pIVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  long lVar6;
  CanonicalHandleScope *pCVar7;
  long *plVar8;
  ulong uVar9;
  Isolate *this_00;
  Logger *this_01;
  ulong uVar10;
  Isolate *pIVar11;
  Isolate *pIVar12;
  long lVar13;
  undefined8 uVar14;
  RuntimeCallStats *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  local_70 = 0;
  uStack_88 = 0;
  local_90 = (RuntimeCallStats *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  this_00 = (Isolate *)((ulong)*(uint *)(this + 4) << 0x20);
  if (internal::TracingFlags::runtime_stats != 0) {
    local_90 = (RuntimeCallStats *)(*(long *)(this_00 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x374);
  }
  this_01 = *(Logger **)(this_00 + 0x9558);
  uVar3 = internal::Logger::is_logging(this_01);
  if ((uVar3 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_01,"v8::FunctionTemplate::NewRemoteInstance");
  }
  pIVar1 = this_00 + 0x95a0;
  uVar14 = *(undefined8 *)pIVar1;
  pIVar11 = this_00 + 0x95a8;
  lVar13 = *(long *)pIVar11;
  pIVar12 = this_00 + 0x95b0;
  *(int *)pIVar12 = *(int *)pIVar12 + 1;
  uVar4 = InstanceTemplate(this);
  puVar5 = (ulong *)FUN_00ea6c84(this_00,uVar4);
  uVar3 = *puVar5;
  if ((*(byte *)(uVar3 + 0x2b) >> 2 & 1) == 0) {
    lVar6 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
    if (lVar6 == 0) {
LAB_00ec21ac:
      base::OS::PrintError
                ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::FunctionTemplate::NewRemoteInstance",
                 "InstanceTemplate needs to have access checks enabled.");
                    /* WARNING: Subroutine does not return */
      base::OS::Abort();
    }
    if (*(code **)(lVar6 + 0xb738) == (code *)0x0) goto LAB_00ec21ac;
    (**(code **)(lVar6 + 0xb738))
              ("v8::FunctionTemplate::NewRemoteInstance",
               "InstanceTemplate needs to have access checks enabled.");
    *(undefined1 *)(lVar6 + 0xb6b9) = 1;
    uVar3 = *puVar5;
  }
  uVar9 = uVar3 & 0xffffffff00000000;
  uVar10 = *(ulong *)(uVar9 + 0xa0);
  if (*(uint *)(uVar3 + 0x23) != (uint)uVar10) {
    uVar10 = uVar9 | *(uint *)((uVar9 | *(uint *)(uVar3 + 0x23)) + 0x1f);
  }
  pCVar7 = *(CanonicalHandleScope **)(this_00 + 0x95b8);
  if (pCVar7 == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(this_00 + 0x95a0);
    if (puVar5 == *(ulong **)pIVar11) {
      puVar5 = (ulong *)internal::HandleScope::Extend(this_00);
    }
    *(ulong **)(this_00 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar10;
    iVar2 = *(int *)(uVar10 + 7);
  }
  else {
    plVar8 = (long *)internal::CanonicalHandleScope::Lookup(pCVar7,uVar10);
    iVar2 = *(int *)(*plVar8 + 7);
  }
  if (iVar2 == 0) {
    lVar6 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
    if (lVar6 != 0) {
      if (*(code **)(lVar6 + 0xb738) != (code *)0x0) {
        (**(code **)(lVar6 + 0xb738))
                  ("v8::FunctionTemplate::NewRemoteInstance",
                   "InstanceTemplate needs to have access check handlers.");
        *(undefined1 *)(lVar6 + 0xb6b9) = 1;
        goto LAB_00ec2058;
      }
    }
    base::OS::PrintError
              ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::FunctionTemplate::NewRemoteInstance",
               "InstanceTemplate needs to have access check handlers.");
                    /* WARNING: Subroutine does not return */
    base::OS::Abort();
  }
LAB_00ec2058:
  InstanceTemplate(this);
  puVar5 = (ulong *)internal::ApiNatives::InstantiateRemoteObject();
  if (puVar5 == (ulong *)0x0) {
    if (((*(ulong *)(this_00 + 0x2bd8) & 1) == 0) ||
       ((int)*(ulong *)(this_00 + 0x2bd8) != *(int *)(this_00 + 0xa8))) {
      internal::Isolate::OptionalRescheduleException(this_00,true);
      puVar5 = (ulong *)0x0;
    }
    else {
      puVar5 = (ulong *)0x0;
    }
  }
  else {
    uVar3 = *puVar5;
    *(undefined8 *)pIVar1 = uVar14;
    *(int *)pIVar12 = *(int *)pIVar12 + -1;
    if (*(long *)pIVar11 != lVar13) {
      *(long *)pIVar11 = lVar13;
      internal::HandleScope::DeleteExtensions(this_00);
    }
    pCVar7 = *(CanonicalHandleScope **)(this_00 + 0x95b8);
    if (pCVar7 == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(this_00 + 0x95a0);
      if (puVar5 == *(ulong **)pIVar11) {
        puVar5 = (ulong *)internal::HandleScope::Extend(this_00);
      }
      *(ulong **)(this_00 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar3;
    }
    else {
      puVar5 = (ulong *)internal::CanonicalHandleScope::Lookup(pCVar7,uVar3);
    }
    uVar14 = *(undefined8 *)pIVar1;
    lVar13 = *(long *)pIVar11;
    *(int *)pIVar12 = *(int *)pIVar12 + 1;
  }
  *(undefined8 *)pIVar1 = uVar14;
  *(int *)pIVar12 = *(int *)pIVar12 + -1;
  if (*(long *)pIVar11 != lVar13) {
    *(long *)pIVar11 = lVar13;
    internal::HandleScope::DeleteExtensions(this_00);
  }
  if (local_90 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
  }
  return puVar5;
}

