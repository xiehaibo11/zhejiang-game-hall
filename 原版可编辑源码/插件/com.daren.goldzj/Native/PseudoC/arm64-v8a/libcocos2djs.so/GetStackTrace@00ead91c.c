
/* v8::Message::GetStackTrace() const */

ulong * __thiscall v8::Message::GetStackTrace(Message *this)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  Isolate *pIVar8;
  ulong *puVar9;
  ulong uVar10;
  Isolate *local_60;
  undefined8 uStack_58;
  long local_50;
  ulong *local_48;
  
  uVar7 = (ulong)*(uint *)(this + 4);
  pIVar8 = (Isolate *)(uVar7 << 0x20);
  plVar1 = (long *)(uVar7 << 0x20 | 0x95a0);
  uVar2 = *(undefined4 *)(pIVar8 + 0x2c60);
  *(undefined4 *)(pIVar8 + 0x2c60) = 5;
  local_48 = (ulong *)*plVar1;
  uVar10 = *(ulong *)(pIVar8 + 0xa8);
  if (local_48 == *(ulong **)(uVar7 << 0x20 | 0x95a8)) {
    local_48 = (ulong *)internal::HandleScope::Extend(pIVar8);
  }
  *plVar1 = (long)(local_48 + 1);
  *local_48 = uVar10;
  HandleScope::Initialize((HandleScope *)&local_60,(Isolate *)pIVar8);
  uVar3 = *(uint *)(*(ulong *)this + 0x17);
  uVar7 = *(ulong *)this & 0xffffffff00000000 | (ulong)uVar3;
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar5 = (ulong *)internal::HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar7;
    if ((uVar3 & 1) != 0) goto LAB_00ead9f8;
  }
  else {
    puVar5 = (ulong *)internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar7);
    uVar7 = *puVar5;
    if ((uVar7 & 1) != 0) {
LAB_00ead9f8:
      puVar9 = local_48;
      pIVar4 = local_60;
      if (*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) - 0x76 < 0xf)
      {
        if (((*local_48 & 1) == 0) || ((int)*local_48 != *(int *)(local_60 + 0xa8))) {
          lVar6 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
          if (lVar6 == 0) {
LAB_00eadae0:
            base::OS::PrintError
                      ("\n#\n# Fatal error in %s\n# %s\n#\n\n","EscapableHandleScope::Escape",
                       "Escape value set twice");
                    /* WARNING: Subroutine does not return */
            base::OS::Abort();
          }
          if (*(code **)(lVar6 + 0xb738) == (code *)0x0) goto LAB_00eadae0;
          (**(code **)(lVar6 + 0xb738))("EscapableHandleScope::Escape","Escape value set twice");
          *(undefined1 *)(lVar6 + 0xb6b9) = 1;
        }
        if (puVar5 != (ulong *)0x0) {
          *puVar9 = *puVar5;
          goto LAB_00eada8c;
        }
        *puVar9 = *(ulong *)(pIVar4 + 0xa0);
      }
    }
  }
  puVar9 = (ulong *)0x0;
LAB_00eada8c:
  *(undefined8 *)(local_60 + 0x95a0) = uStack_58;
  *(int *)(local_60 + 0x95b0) = *(int *)(local_60 + 0x95b0) + -1;
  if (*(long *)(local_60 + 0x95a8) != local_50) {
    *(long *)(local_60 + 0x95a8) = local_50;
    internal::HandleScope::DeleteExtensions(local_60);
  }
  *(undefined4 *)(pIVar8 + 0x2c60) = uVar2;
  return puVar9;
}

