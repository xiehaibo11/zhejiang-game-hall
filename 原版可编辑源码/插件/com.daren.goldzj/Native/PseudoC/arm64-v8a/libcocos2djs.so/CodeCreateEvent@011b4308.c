
/* v8::internal::ProfilerListener::CodeCreateEvent(v8::internal::CodeEventListener::LogEventsAndTags,
   v8::internal::wasm::WasmCode const*, v8::internal::Vector<char const>) */

void __thiscall
v8::internal::ProfilerListener::CodeCreateEvent
          (ProfilerListener *this,uint param_2,undefined8 *param_3,char *param_4)

{
  long lVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_88 [2];
  undefined8 local_80;
  uint *local_78;
  undefined4 local_70;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_88[0] = 1;
  local_80 = *param_3;
  puVar2 = operator_new(0x40);
  uVar3 = StringsStorage::GetCopy((StringsStorage *)(this + 0x18),param_4);
  uVar4 = *param_3;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  *(undefined8 *)(puVar2 + 0xc) = uVar4;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  *puVar2 = param_2 | 0x8005bc00;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  *(undefined8 *)(puVar2 + 2) = uVar3;
  *(char **)(puVar2 + 4) = "wasm ";
  local_70 = (undefined4)param_3[1];
  local_78 = puVar2;
  (**(code **)**(undefined8 **)(this + 0x10))(*(undefined8 **)(this + 0x10),local_88);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

