
/* v8::internal::ProfilerListener::CallbackEvent(v8::internal::Name, unsigned long) */

void __thiscall
v8::internal::ProfilerListener::CallbackEvent
          (ProfilerListener *this,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined4 *local_78;
  undefined4 local_70;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_88[0] = 1;
  local_80 = param_3;
  puVar2 = operator_new(0x40);
  uVar3 = StringsStorage::GetName((StringsStorage *)(this + 0x18),param_2);
  *(undefined8 *)(puVar2 + 0xe) = 0;
  *puVar2 = 0x5bc09;
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  *(undefined8 *)(puVar2 + 0xc) = 0;
  *(undefined8 *)(puVar2 + 10) = 0;
  *(undefined8 *)(puVar2 + 2) = uVar3;
  *(undefined1 **)(puVar2 + 4) = &DAT_0189703a;
  local_70 = 1;
  local_78 = puVar2;
  (**(code **)**(undefined8 **)(this + 0x10))(*(undefined8 **)(this + 0x10),local_88);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

