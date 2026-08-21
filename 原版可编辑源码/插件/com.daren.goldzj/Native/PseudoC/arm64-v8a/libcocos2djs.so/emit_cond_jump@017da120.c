
/* v8::internal::wasm::LiftoffAssembler::emit_cond_jump(v8::internal::Condition,
   v8::internal::Label*, v8::internal::wasm::ValueType, v8::internal::Register,
   v8::internal::Register) */

void v8::internal::wasm::LiftoffAssembler::emit_cond_jump
               (TurboAssembler *param_1,undefined4 param_2,undefined8 param_3,char param_4,
               uint param_5,undefined8 param_6,uint param_7)

{
  long lVar1;
  undefined *puVar2;
  ulong local_90;
  undefined4 local_88;
  undefined1 local_80 [8];
  undefined1 local_78;
  undefined8 local_60;
  undefined1 local_58;
  ulong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_4 == '\x02') {
    if (param_7 == 0xffffffff) {
      local_90 = 0x400000003f;
      if (param_5 != 0x3f) {
        local_90 = (ulong)param_5 | 0x4000000000;
      }
      local_50 = 0x400000001f;
    }
    else {
      local_90 = 0x400000003f;
      if (param_5 != 0x3f) {
        local_90 = (ulong)param_5 | 0x4000000000;
      }
      local_50 = 0x400000003f;
      if (param_7 != 0x3f) {
        local_50 = (ulong)param_7 | 0x4000000000;
      }
    }
    puVar2 = &DAT_01a63d28;
  }
  else {
    if (param_4 != '\x01') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    if (param_7 == 0xffffffff) {
      local_90 = 0x200000003f;
      if (param_5 != 0x3f) {
        local_90 = (ulong)param_5 | 0x2000000000;
      }
      local_50 = 0x200000001f;
    }
    else {
      local_90 = 0x200000003f;
      if (param_5 != 0x3f) {
        local_90 = (ulong)param_5 | 0x2000000000;
      }
      local_50 = 0x200000003f;
      if (param_7 != 0x3f) {
        local_50 = (ulong)param_7 | 0x2000000000;
      }
    }
    puVar2 = &DAT_01a63d34;
  }
  uStack_40 = 0xffffffff;
  local_48 = 0;
  local_58 = 0x13;
  local_60 = 0;
  local_78 = 0;
  local_80[0] = 0;
  local_88 = 0;
  TurboAssembler::AddSubMacro(param_1,puVar2,&local_90,local_80,1,0x40000000);
  TurboAssembler::B(param_1,param_3,param_2);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

