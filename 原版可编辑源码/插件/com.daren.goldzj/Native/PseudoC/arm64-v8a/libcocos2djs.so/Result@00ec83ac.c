
/* v8::Promise::Result() */

ulong * __thiscall v8::Promise::Result(Promise *this)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  Isolate *pIVar5;
  Logger *this_00;
  undefined8 local_68;
  RuntimeCallStats *local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  local_40 = 0;
  uStack_58 = 0;
  local_60 = (RuntimeCallStats *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  pIVar5 = (Isolate *)((ulong)*(uint *)(this + 4) << 0x20);
  if (internal::TracingFlags::runtime_stats != 0) {
    local_60 = (RuntimeCallStats *)(*(long *)(pIVar5 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_60,(ulong)&local_60 | 8,0x3bf);
  }
  this_00 = *(Logger **)(pIVar5 + 0x9558);
  uVar2 = internal::Logger::is_logging(this_00);
  if ((uVar2 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::Promise::Result");
  }
  local_68 = *(undefined8 *)this;
  iVar1 = internal::JSPromise::status((JSPromise *)&local_68);
  if (iVar1 != 0) {
LAB_00ec8460:
    uVar2 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar4 = (ulong *)internal::HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar2;
    }
    else {
      puVar4 = (ulong *)internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar2);
    }
    if (local_60 != (RuntimeCallStats *)0x0) {
      internal::RuntimeCallStats::Leave(local_60,(RuntimeCallTimer *)((ulong)&local_60 | 8));
    }
    return puVar4;
  }
  lVar3 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  if (lVar3 != 0) {
    if (*(code **)(lVar3 + 0xb738) != (code *)0x0) {
      (**(code **)(lVar3 + 0xb738))("v8_Promise_Result","Promise is still pending");
      *(undefined1 *)(lVar3 + 0xb6b9) = 1;
      goto LAB_00ec8460;
    }
  }
  base::OS::PrintError
            ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8_Promise_Result","Promise is still pending")
  ;
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}

