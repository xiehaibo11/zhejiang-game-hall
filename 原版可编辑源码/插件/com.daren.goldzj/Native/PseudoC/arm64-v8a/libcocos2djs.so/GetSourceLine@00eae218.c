
/* v8::Message::GetSourceLine(v8::Local<v8::Context>) const */

ulong * v8::Message::GetSourceLine(undefined8 *param_1)

{
  long *plVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  undefined4 uVar4;
  ulong *puVar5;
  Isolate *pIVar6;
  long lVar7;
  ulong uVar8;
  Isolate *pIVar9;
  ulong uVar10;
  undefined8 local_68;
  Isolate *local_60;
  undefined8 local_58;
  long lStack_50;
  ulong *local_48;
  
  uVar8 = (ulong)*(uint *)((long)param_1 + 4);
  pIVar9 = (Isolate *)(uVar8 << 0x20);
  plVar1 = (long *)(uVar8 << 0x20 | 0x95a0);
  uVar4 = *(undefined4 *)(pIVar9 + 0x2c60);
  *(undefined4 *)(pIVar9 + 0x2c60) = 5;
  local_48 = (ulong *)*plVar1;
  uVar10 = *(ulong *)(pIVar9 + 0xa8);
  if (local_48 == *(ulong **)(uVar8 << 0x20 | 0x95a8)) {
    local_48 = (ulong *)internal::HandleScope::Extend(pIVar9);
  }
  *plVar1 = (long)(local_48 + 1);
  *local_48 = uVar10;
  HandleScope::Initialize((HandleScope *)&local_60,(Isolate *)pIVar9);
  internal::JSMessageObject::EnsureSourcePositionsAvailable(pIVar9,param_1);
  local_68 = *param_1;
  pIVar6 = (Isolate *)internal::JSMessageObject::GetSourceLine((JSMessageObject *)&local_68);
  puVar5 = local_48;
  if (((*local_48 & 1) != 0) && ((int)*local_48 == *(int *)(local_60 + 0xa8))) {
LAB_00eae30c:
    pIVar2 = local_60 + 0xa0;
    if (pIVar6 != (Isolate *)0x0) {
      pIVar2 = pIVar6;
    }
    puVar3 = (ulong *)0x0;
    if (pIVar6 != (Isolate *)0x0) {
      puVar3 = puVar5;
    }
    *puVar5 = *(ulong *)pIVar2;
    *(undefined8 *)(local_60 + 0x95a0) = local_58;
    *(int *)(local_60 + 0x95b0) = *(int *)(local_60 + 0x95b0) + -1;
    if (*(long *)(local_60 + 0x95a8) != lStack_50) {
      *(long *)(local_60 + 0x95a8) = lStack_50;
      internal::HandleScope::DeleteExtensions(local_60);
    }
    *(undefined4 *)(pIVar9 + 0x2c60) = uVar4;
    return puVar3;
  }
  lVar7 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  if (lVar7 != 0) {
    if (*(code **)(lVar7 + 0xb738) != (code *)0x0) {
      (**(code **)(lVar7 + 0xb738))("EscapableHandleScope::Escape","Escape value set twice");
      *(undefined1 *)(lVar7 + 0xb6b9) = 1;
      goto LAB_00eae30c;
    }
  }
  base::OS::PrintError
            ("\n#\n# Fatal error in %s\n# %s\n#\n\n","EscapableHandleScope::Escape",
             "Escape value set twice");
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}

