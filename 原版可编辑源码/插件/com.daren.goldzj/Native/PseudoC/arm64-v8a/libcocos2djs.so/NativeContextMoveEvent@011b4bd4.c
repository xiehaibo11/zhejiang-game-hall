
/* v8::internal::ProfilerListener::NativeContextMoveEvent(unsigned long, unsigned long) */

void __thiscall
v8::internal::ProfilerListener::NativeContextMoveEvent
          (ProfilerListener *this,ulong param_1,ulong param_2)

{
  long lVar1;
  undefined4 local_68 [2];
  ulong local_60;
  ulong uStack_58;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_68[0] = 6;
  local_60 = param_1;
  uStack_58 = param_2;
  (**(code **)**(undefined8 **)(this + 0x10))(*(undefined8 **)(this + 0x10),local_68);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

