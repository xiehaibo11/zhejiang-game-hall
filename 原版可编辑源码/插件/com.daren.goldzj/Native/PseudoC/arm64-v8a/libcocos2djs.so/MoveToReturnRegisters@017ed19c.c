
/* v8::internal::wasm::LiftoffAssembler::MoveToReturnRegisters(v8::internal::Signature<v8::internal::wasm::ValueType>*)
    */

void __thiscall
v8::internal::wasm::LiftoffAssembler::MoveToReturnRegisters
          (LiftoffAssembler *this,Signature *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_380 [592];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 local_40;
  undefined8 uStack_38;
  LiftoffAssembler *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  local_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_54 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  if ((**(char **)(param_1 + 0x10) == '\x02') || (**(char **)(param_1 + 0x10) == '\x01')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x1d;
  }
  local_30 = this;
  FUN_017ec5ac(auStack_380,uVar2,*(long *)(this + 0x1d0) + -0xc,
               *(undefined4 *)(*(long *)(this + 0x1d0) + -4));
  FUN_017ecb7c(auStack_380);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

