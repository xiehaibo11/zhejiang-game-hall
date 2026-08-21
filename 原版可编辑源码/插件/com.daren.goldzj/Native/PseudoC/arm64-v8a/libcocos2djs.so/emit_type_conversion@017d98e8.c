
/* v8::internal::wasm::LiftoffAssembler::emit_type_conversion(v8::internal::wasm::WasmOpcode,
   v8::internal::wasm::LiftoffRegister, v8::internal::wasm::LiftoffRegister, v8::internal::Label*)
    */

undefined8 __thiscall
v8::internal::wasm::LiftoffAssembler::emit_type_conversion
          (LiftoffAssembler *this,undefined4 param_2,byte param_3,byte param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  LiftoffAssembler *pLVar3;
  ulong uVar4;
  ulong local_e0;
  ulong local_d8;
  ulong uStack_d0;
  undefined4 local_c8;
  LiftoffAssembler *local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0 [16];
  LiftoffAssembler *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  ulong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  switch(param_2) {
  case 0xa7:
    if (param_4 == param_3) break;
  case 0xad:
    local_b0._0_8_ = (ulong)param_3 | 0x2000000000;
    local_70 = (ulong)param_4 | 0x2000000000;
    local_b0._8_8_ = local_b0._8_8_ & 0xffffffff00000000;
    local_a0 = (LiftoffAssembler *)((ulong)local_a0 & 0xffffffffffffff00);
    local_98 = (LiftoffAssembler *)((ulong)local_98 & 0xffffffffffffff00);
    local_80 = 0;
    local_78 = 0x13;
    uStack_60 = 0xffffffff;
    local_68 = 0;
    TurboAssembler::Mov((TurboAssembler *)this,local_b0,&local_a0,0);
    break;
  case 0xa8:
    uVar4 = (ulong)param_3 | 0x2000000000;
    pLVar3 = (LiftoffAssembler *)((ulong)(param_4 - 0x1d) | 0x2000000000);
    local_b0._8_8_ = (ulong)(uint)local_b0._12_4_ << 0x20;
    local_98 = (LiftoffAssembler *)0x100000001;
    local_b0._0_8_ = uVar4;
    local_a0 = pLVar3;
    Assembler::fcvtzs((Assembler *)this,(Register *)local_b0,(VRegister *)&local_a0,0);
    local_a0 = this + 0x198;
    local_98 = this + 0x1a8;
    uStack_b8 = 0x100000001;
    local_90 = *(undefined8 *)(this + 0x198);
    local_88 = *(undefined8 *)(this + 0x1a8);
    local_c0 = pLVar3;
    local_b0 = UseScratchRegisterScope::AcquireSameSizeAs
                         ((UseScratchRegisterScope *)&local_a0,(VRegister *)&local_c0);
    uVar2 = 0xc1e0000000000000;
    goto LAB_017d9bd4;
  case 0xa9:
    uVar4 = 0x2000000000;
    goto LAB_017d9da8;
  case 0xaa:
    local_a0 = this + 0x198;
    pLVar3 = this + 0x1a8;
    local_90 = *(undefined8 *)(this + 0x198);
    local_88 = *(undefined8 *)(this + 0x1a8);
    local_98 = pLVar3;
    uVar4 = UseScratchRegisterScope::AcquireNextAvailable(pLVar3);
    local_b0._0_8_ = uVar4 & 0xffffffff | 0x4000000000;
    local_b0._8_8_ = 0x100000001;
    uVar4 = UseScratchRegisterScope::AcquireNextAvailable(pLVar3);
    local_c0 = (LiftoffAssembler *)(uVar4 & 0xffffffff | 0x4000000000);
    uVar4 = (ulong)(param_4 - 0x1d) | 0x4000000000;
    local_c8 = 0;
    uStack_b8 = 0x100000001;
    local_d8 = 0x100000001;
    local_e0 = uVar4;
    uStack_d0 = (ulong)param_3 | 0x2000000000;
    Assembler::fcvtzs((Assembler *)this,(Register *)&uStack_d0,(VRegister *)&local_e0,0);
    local_d8 = 0x100000001;
    local_e0 = uVar4;
    Assembler::frintz((Assembler *)this,local_b0,(VRegister *)&local_e0);
    local_d8 = local_d8 & 0xffffffff00000000;
    local_e0 = (ulong)param_3 | 0x2000000000;
    Assembler::scvtf((Assembler *)this,(VRegister *)&local_c0,(Register *)&local_e0,0);
    goto LAB_017d9d3c;
  case 0xab:
    local_a0 = this + 0x198;
    pLVar3 = this + 0x1a8;
    local_90 = *(undefined8 *)(this + 0x198);
    local_88 = *(undefined8 *)(this + 0x1a8);
    local_98 = pLVar3;
    uVar4 = UseScratchRegisterScope::AcquireNextAvailable(pLVar3);
    local_b0._0_8_ = uVar4 & 0xffffffff | 0x4000000000;
    local_b0._8_8_ = 0x100000001;
    uVar4 = UseScratchRegisterScope::AcquireNextAvailable(pLVar3);
    local_c0 = (LiftoffAssembler *)(uVar4 & 0xffffffff | 0x4000000000);
    uVar4 = (ulong)(param_4 - 0x1d) | 0x4000000000;
    local_c8 = 0;
    uStack_b8 = 0x100000001;
    local_d8 = 0x100000001;
    local_e0 = uVar4;
    uStack_d0 = (ulong)param_3 | 0x2000000000;
    Assembler::fcvtzu((Assembler *)this,(Register *)&uStack_d0,(VRegister *)&local_e0,0);
    local_d8 = 0x100000001;
    local_e0 = uVar4;
    Assembler::frintz((Assembler *)this,local_b0,(VRegister *)&local_e0);
    local_d8 = local_d8 & 0xffffffff00000000;
    local_e0 = (ulong)param_3 | 0x2000000000;
    Assembler::ucvtf((Assembler *)this,(VRegister *)&local_c0,(Register *)&local_e0,0);
LAB_017d9d3c:
    Assembler::fcmp((Assembler *)this,(VRegister *)&local_c0,local_b0);
    TurboAssembler::B((TurboAssembler *)this,param_5,1);
    UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_a0);
    break;
  case 0xac:
    local_a0 = (LiftoffAssembler *)((ulong)param_3 | 0x4000000000);
    local_b0._0_8_ = (ulong)param_4 | 0x2000000000;
    local_98 = (LiftoffAssembler *)((ulong)local_98._4_4_ << 0x20);
    local_b0._8_8_ = (ulong)(uint)local_b0._12_4_ << 0x20;
    Assembler::sbfm((Assembler *)this,(Register *)&local_a0,(Register *)local_b0,0,0x1f);
    break;
  case 0xae:
    pLVar3 = (LiftoffAssembler *)((ulong)(param_4 - 0x1d) | 0x2000000000);
    goto LAB_017d9b80;
  case 0xaf:
    uVar4 = 0x4000000000;
LAB_017d9da8:
    uVar4 = uVar4 | param_3;
    pLVar3 = (LiftoffAssembler *)((ulong)(param_4 - 0x1d) | 0x2000000000);
LAB_017d9de8:
    local_b0._8_8_ = local_b0._8_8_ & 0xffffffff00000000;
    local_98 = (LiftoffAssembler *)0x100000001;
    local_b0._0_8_ = uVar4;
    local_a0 = pLVar3;
    Assembler::fcvtzu((Assembler *)this,(Register *)local_b0,(VRegister *)&local_a0,0);
    local_a0 = this + 0x198;
    local_98 = this + 0x1a8;
    uStack_b8 = 0x100000001;
    local_90 = *(undefined8 *)(this + 0x198);
    local_88 = *(undefined8 *)(this + 0x1a8);
    local_c0 = pLVar3;
    local_b0 = UseScratchRegisterScope::AcquireSameSizeAs
                         ((UseScratchRegisterScope *)&local_a0,(VRegister *)&local_c0);
    TurboAssembler::Fmov(0xbff0000000000000,this,local_b0._0_8_,local_b0._8_8_);
    Assembler::fcmp((Assembler *)this,(VRegister *)&local_c0,local_b0);
    UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_a0);
    local_b0._8_8_ = local_b0._8_8_ & 0xffffffff00000000;
    local_a0 = (LiftoffAssembler *)((ulong)local_a0 & 0xffffffffffffff00);
    local_98 = (LiftoffAssembler *)((ulong)local_98 & 0xffffffffffffff00);
    local_80 = 1;
    local_78 = 0x13;
    local_70 = 0xffffffff;
    local_68 = CONCAT44(local_68._4_4_,2);
    local_b0._0_8_ = uVar4;
    TurboAssembler::ConditionalCompareMacro
              ((TurboAssembler *)this,local_b0,&local_a0,0x40000000,0xc,0x20000000);
    TurboAssembler::B((TurboAssembler *)this,param_5,0);
    break;
  case 0xb0:
    pLVar3 = (LiftoffAssembler *)((ulong)(param_4 - 0x1d) | 0x4000000000);
LAB_017d9b80:
    uVar4 = (ulong)param_3 | 0x4000000000;
    local_b0._8_8_ = local_b0._8_8_ & 0xffffffff00000000;
    local_98 = (LiftoffAssembler *)0x100000001;
    local_b0._0_8_ = uVar4;
    local_a0 = pLVar3;
    Assembler::fcvtzs((Assembler *)this,(Register *)local_b0,(VRegister *)&local_a0,0);
    local_a0 = this + 0x198;
    local_98 = this + 0x1a8;
    uStack_b8 = 0x100000001;
    local_90 = *(undefined8 *)(this + 0x198);
    local_88 = *(undefined8 *)(this + 0x1a8);
    local_c0 = pLVar3;
    local_b0 = UseScratchRegisterScope::AcquireSameSizeAs
                         ((UseScratchRegisterScope *)&local_a0,(VRegister *)&local_c0);
    uVar2 = 0xc3e0000000000000;
LAB_017d9bd4:
    TurboAssembler::Fmov(uVar2,this,local_b0._0_8_,local_b0._8_8_);
    Assembler::fcmp((Assembler *)this,(VRegister *)&local_c0,local_b0);
    UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_a0);
    local_b0._8_8_ = local_b0._8_8_ & 0xffffffff00000000;
    local_a0 = (LiftoffAssembler *)((ulong)local_a0 & 0xffffffffffffff00);
    local_98 = (LiftoffAssembler *)((ulong)local_98 & 0xffffffffffffff00);
    local_80 = 1;
    local_78 = 0x13;
    local_70 = 0xffffffff;
    local_68 = CONCAT44(local_68._4_4_,2);
    local_b0._0_8_ = uVar4;
    TurboAssembler::ConditionalCompareMacro
              ((TurboAssembler *)this,local_b0,&local_a0,0x10000000,10,0x20000000);
    TurboAssembler::B((TurboAssembler *)this,param_5,6);
    break;
  case 0xb1:
    uVar4 = (ulong)param_3 | 0x4000000000;
    pLVar3 = (LiftoffAssembler *)((ulong)(param_4 - 0x1d) | 0x4000000000);
    goto LAB_017d9de8;
  case 0xb2:
    local_b0._0_8_ = 0x2000000000;
    goto LAB_017d9ed4;
  case 0xb3:
    local_b0._0_8_ = 0x2000000000;
    goto LAB_017d9ab4;
  case 0xb4:
    local_b0._0_8_ = 0x4000000000;
LAB_017d9ed4:
    local_b0._0_8_ = local_b0._0_8_ | (ulong)param_4;
    local_a0 = (LiftoffAssembler *)((ulong)(param_3 - 0x1d) | 0x2000000000);
LAB_017d9efc:
    local_98 = (LiftoffAssembler *)0x100000001;
    local_b0._8_8_ = (ulong)(uint)local_b0._12_4_ << 0x20;
    Assembler::scvtf((Assembler *)this,(VRegister *)&local_a0,(Register *)local_b0,0);
    break;
  case 0xb5:
    local_b0._0_8_ = 0x4000000000;
LAB_017d9ab4:
    local_b0._0_8_ = local_b0._0_8_ | (ulong)param_4;
    local_a0 = (LiftoffAssembler *)((ulong)(param_3 - 0x1d) | 0x2000000000);
LAB_017d9f8c:
    local_98 = (LiftoffAssembler *)0x100000001;
    local_b0._8_8_ = (ulong)(uint)local_b0._12_4_ << 0x20;
    Assembler::ucvtf((Assembler *)this,(VRegister *)&local_a0,(Register *)local_b0,0);
    break;
  case 0xb6:
    local_a0 = (LiftoffAssembler *)((ulong)(param_3 - 0x1d) | 0x2000000000);
    local_b0._0_8_ = (ulong)(param_4 - 0x1d) | 0x4000000000;
    goto LAB_017d9f38;
  case 0xb7:
    local_b0._0_8_ = 0x2000000000;
    goto LAB_017d9ef0;
  case 0xb8:
    local_b0._0_8_ = 0x2000000000;
    goto LAB_017d9f80;
  case 0xb9:
    local_b0._0_8_ = 0x4000000000;
LAB_017d9ef0:
    local_b0._0_8_ = local_b0._0_8_ | (ulong)param_4;
    local_a0 = (LiftoffAssembler *)((ulong)(param_3 - 0x1d) | 0x4000000000);
    goto LAB_017d9efc;
  case 0xba:
    local_b0._0_8_ = 0x4000000000;
LAB_017d9f80:
    local_b0._0_8_ = local_b0._0_8_ | (ulong)param_4;
    local_a0 = (LiftoffAssembler *)((ulong)(param_3 - 0x1d) | 0x4000000000);
    goto LAB_017d9f8c;
  case 0xbb:
    local_a0 = (LiftoffAssembler *)((ulong)(param_3 - 0x1d) | 0x4000000000);
    local_b0._0_8_ = (ulong)(param_4 - 0x1d) | 0x2000000000;
LAB_017d9f38:
    local_98 = (LiftoffAssembler *)0x100000001;
    local_b0._8_8_ = 0x100000001;
    Assembler::fcvt((Assembler *)this,(VRegister *)&local_a0,local_b0);
    break;
  case 0xbc:
    local_a0 = (LiftoffAssembler *)((ulong)param_3 | 0x2000000000);
    local_b0._0_8_ = (ulong)(param_4 - 0x1d) | 0x2000000000;
    goto LAB_017d9fcc;
  case 0xbd:
    local_a0 = (LiftoffAssembler *)((ulong)param_3 | 0x4000000000);
    local_b0._0_8_ = (ulong)(param_4 - 0x1d) | 0x4000000000;
LAB_017d9fcc:
    local_98 = (LiftoffAssembler *)((ulong)local_98 & 0xffffffff00000000);
    local_b0._8_8_ = 0x100000001;
    Assembler::fmov((Assembler *)this,(Register *)&local_a0,local_b0);
    break;
  case 0xbe:
    local_a0 = (LiftoffAssembler *)((ulong)param_4 | 0x2000000000);
    local_b0._0_8_ = (ulong)(param_3 - 0x1d) | 0x2000000000;
    goto LAB_017da000;
  case 0xbf:
    local_a0 = (LiftoffAssembler *)((ulong)param_4 | 0x4000000000);
    local_b0._0_8_ = (ulong)(param_3 - 0x1d) | 0x4000000000;
LAB_017da000:
    local_b0._8_8_ = 0x100000001;
    local_98 = (LiftoffAssembler *)((ulong)local_98._4_4_ << 0x20);
    Assembler::fmov((Assembler *)this,local_b0,(Register *)&local_a0);
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}

