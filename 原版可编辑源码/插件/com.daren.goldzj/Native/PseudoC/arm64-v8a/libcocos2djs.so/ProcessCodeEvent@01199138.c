
/* v8::internal::ProfilerEventsProcessor::ProcessCodeEvent() */

void __thiscall
v8::internal::ProfilerEventsProcessor::ProcessCodeEvent(ProfilerEventsProcessor *this)

{
  Mutex *this_00;
  long lVar1;
  undefined8 uVar2;
  void *extraout_x1;
  ulong *puVar3;
  Malloced *this_01;
  undefined8 local_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong local_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = (Mutex *)(this + 0xa8);
  local_80 = local_80 & 0xffffffff00000000;
  base::Mutex::Lock(this_00);
  this_01 = *(Malloced **)(this + 0xf8);
  puVar3 = *(ulong **)(this_01 + 0x40);
  if (puVar3 == (ulong *)0x0) {
    base::Mutex::Unlock(this_00);
    uVar2 = 0;
  }
  else {
    uStack_58 = puVar3[5];
    local_60 = puVar3[4];
    uStack_48 = puVar3[7];
    uStack_50 = puVar3[6];
    uStack_78 = puVar3[1];
    local_80 = *puVar3;
    uStack_68 = puVar3[3];
    uStack_70 = puVar3[2];
    *(ulong **)(this + 0xf8) = puVar3;
    base::Mutex::Unlock(this_00);
    if (this_01 != (Malloced *)0x0) {
      Malloced::operator_delete(this_01,extraout_x1);
    }
    if ((int)local_80 == 6) {
      ProfileGenerator::UpdateNativeContextAddress
                (*(ProfileGenerator **)(this + 0x38),uStack_78,uStack_70);
    }
    else {
      ProfilerCodeObserver::CodeEventHandlerInternal
                (*(ProfilerCodeObserver **)(this + 0x40),(CodeEventsContainer *)&local_80);
    }
    uVar2 = 1;
    *(undefined4 *)(this + 0x16c) = local_80._4_4_;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

