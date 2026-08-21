
/* v8::internal::wasm::LiftoffAssembler::emit_i64_divs(v8::internal::wasm::LiftoffRegister,
   v8::internal::wasm::LiftoffRegister, v8::internal::wasm::LiftoffRegister, v8::internal::Label*,
   v8::internal::Label*) */

undefined8 __thiscall
v8::internal::wasm::LiftoffAssembler::emit_i64_divs
          (LiftoffAssembler *this,byte param_2,byte param_3,byte param_4,Label *param_5,
          undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 local_128;
  undefined4 local_120;
  ulong local_118;
  undefined4 local_110;
  ulong local_108;
  undefined4 local_100;
  undefined1 local_f8 [8];
  undefined1 local_f0;
  long local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b0 [8];
  undefined1 local_a8;
  long local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined4 local_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  bVar3 = false;
  local_108 = (ulong)param_2 | 0x4000000000;
  local_118 = (ulong)param_3 | 0x4000000000;
  local_128 = (ulong)param_4 | 0x4000000000;
  local_100 = 0;
  local_110 = 0;
  local_120 = 0;
  if ((param_2 != param_3) && (param_2 != param_4)) {
    Assembler::sdiv((Assembler *)this,(Register *)&local_108,(Register *)&local_118,
                    (Register *)&local_128);
    bVar3 = true;
  }
  TurboAssembler::Cbz((TurboAssembler *)this,(Register *)&local_128,param_5);
  local_f8[0] = 0;
  local_f0 = 0;
  local_d8 = -1;
  local_d0 = 0x13;
  local_c8 = 0xffffffff;
  local_c0 = 2;
  puVar1 = &DAT_01a63d28;
  if (local_128._4_4_ != 0x40) {
    puVar1 = &DAT_01a63d34;
  }
  uVar4 = Assembler::IsImmAddSub(1);
  if ((uVar4 & 1) == 0) {
    puVar5 = local_f8;
    uVar6 = 0x40000000;
  }
  else {
    local_b0[0] = 0;
    local_a8 = 0;
    local_88 = 0x13;
    local_90 = -local_d8;
    local_80 = 0xffffffff;
    local_78 = 2;
    puVar5 = local_b0;
    uVar6 = 0;
  }
  TurboAssembler::AddSubMacro((TurboAssembler *)this,puVar1,&local_128,puVar5,1,uVar6);
  local_b0[0] = 0;
  local_a8 = 0;
  local_80 = 0xffffffff;
  local_90 = 1;
  local_88 = 0x13;
  local_78 = 2;
  TurboAssembler::ConditionalCompareMacro((TurboAssembler *)this,&local_118,local_b0,0,0,0x60000000)
  ;
  TurboAssembler::B((TurboAssembler *)this,param_6,6);
  if (!bVar3) {
    Assembler::sdiv((Assembler *)this,(Register *)&local_108,(Register *)&local_118,
                    (Register *)&local_128);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

