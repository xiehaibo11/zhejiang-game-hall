
/* v8::internal::WasmInterpreterEntryFrame::position() const */

void __thiscall v8::internal::WasmInterpreterEntryFrame::position(WasmInterpreterEntryFrame *this)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 uStack_18;
  
  local_20 = (undefined8 *)0x0;
  uStack_18 = 0;
  local_28 = (undefined8 *)0x0;
  (**(code **)(*(long *)this + 0x88))(this,&local_28);
  uStack_58 = local_28[1];
  local_60 = *local_28;
  uStack_48 = local_28[3];
  uStack_50 = local_28[2];
  local_30 = local_28[6];
  uStack_38 = local_28[5];
  local_40 = local_28[4];
  puVar2 = local_20;
  if (local_28 == (undefined8 *)0x0) {
LAB_00f48bbc:
    FrameSummary::WasmFrameSummary::SourcePosition((WasmFrameSummary *)&local_60);
    if ((uint)uStack_58 < 3) {
      return;
    }
  }
  else {
    do {
      if (local_28 == puVar2) {
        local_20 = local_28;
        operator_delete(local_28);
        goto LAB_00f48bbc;
      }
      puVar1 = (uint *)(puVar2 + -6);
      puVar2 = puVar2 + -7;
    } while (*puVar1 < 3);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

