
/* v8::internal::TurboAssembler::CallCFunction(v8::internal::Register, int, int) */

void __thiscall
v8::internal::TurboAssembler::CallCFunction
          (TurboAssembler *this,Assembler *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 local_d8;
  undefined8 local_d0;
  uint local_c8;
  Assembler *local_c0;
  uint local_b8 [2];
  Assembler *local_b0;
  uint local_a8 [6];
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (*(long *)(this + 0x178) != 0) {
    local_c0 = (Assembler *)0x4000000004;
    local_b8[0] = 0;
    local_d0 = (Assembler *)0x4000000005;
    local_c8 = 0;
    PushHelper(this,2,8,(CPURegister *)&local_c0,(CPURegister *)&local_d0,
               (CPURegister *)&DAT_019f400c,(CPURegister *)&DAT_019f400c);
    local_d8 = 0;
    Assembler::bind((Label *)this);
    Assembler::adr((Assembler *)this,(Register *)&local_d0,(Label *)&local_d8);
    local_90 = ExternalReference::fast_c_call_caller_pc_address(*(Isolate **)(this + 0x178));
    local_b0 = (Assembler *)((ulong)local_b0 & 0xffffffffffffff00);
    local_a8[0] = local_a8[0] & 0xffffff00;
    local_88 = CONCAT71(local_88._1_7_,7);
    local_80 = 0xffffffff;
    local_78 = 2;
    Mov(this,&local_c0,&local_b0,0);
    local_a8[1] = 0xffffffff;
    local_a8[2] = 0;
    local_a8[3] = 2;
    local_a8[4] = 0;
    local_a8[5] = 0;
    local_b0 = local_c0;
    local_a8[0] = local_b8[0];
    local_90 = 0xffffffff00000000;
    local_88 = 0xffffffff;
    if (local_c8 == 0) {
      uVar4 = 0xc0000000;
      if (local_d0._4_4_ != 0x40) {
        uVar4 = 0x80000000;
      }
    }
    else {
      uVar2 = local_d0._4_4_ - 8U >> 3 | local_d0._4_4_ << 0x1d;
      if (uVar2 < 8) {
        uVar4 = *(undefined4 *)(&DAT_019f38a8 + (long)(int)uVar2 * 4);
      }
      else {
        uVar4 = 0x4800000;
      }
    }
    LoadStoreMacro(this,&local_d0,&local_b0,uVar4);
    local_90 = ExternalReference::fast_c_call_caller_fp_address(*(Isolate **)(this + 0x178));
    local_b0 = (Assembler *)((ulong)local_b0 & 0xffffffffffffff00);
    local_a8[0] = local_a8[0] & 0xffffff00;
    local_80 = 0xffffffff;
    local_88 = CONCAT71(local_88._1_7_,7);
    local_78 = 2;
    Mov(this,&local_c0,&local_b0,0);
    local_a8[1] = 0xffffffff;
    local_a8[2] = 0;
    local_a8[3] = 2;
    local_a8[4] = 0;
    local_a8[5] = 0;
    local_b0 = local_c0;
    local_a8[0] = local_b8[0];
    local_90 = -0x100000000;
    local_88 = 0xffffffff;
    LoadStoreMacro(this,&DAT_019f418c,&local_b0,0xc0000000);
    iVar5 = 1;
    if ((int)local_c0 != -1) {
      iVar5 = 2;
    }
    iVar1 = local_d0._4_4_ + 7;
    if (-1 < (long)local_d0) {
      iVar1 = local_d0._4_4_;
    }
    PopHelper(this,iVar5,iVar1 >> 3,(CPURegister *)&local_d0,(CPURegister *)&local_c0,
              (CPURegister *)&DAT_019f400c,(CPURegister *)&DAT_019f400c);
  }
  local_c0 = param_2;
  local_b8[0] = param_3;
  local_b0 = (Assembler *)this;
  ConstantPool::BlockScope::BlockScope((BlockScope *)local_a8,(Assembler *)this,0);
  Assembler::CheckVeneerPool(local_b0,false,true,0);
  Assembler::StartBlockVeneerPool(local_b0);
  Assembler::blr((Assembler *)this,(Register *)&local_c0);
  Assembler::EndBlockVeneerPool(local_b0);
  ConstantPool::BlockScope::~BlockScope((BlockScope *)local_a8);
  if (*(long *)(this + 0x178) != 0) {
    local_d0 = (Assembler *)0x4000000004;
    local_c8 = 0;
    local_c0 = (Assembler *)this;
    ConstantPool::BlockScope::BlockScope((BlockScope *)local_b8,(Assembler *)this,0);
    Assembler::CheckVeneerPool(local_c0,false,true,0);
    Assembler::StartBlockVeneerPool(local_c0);
    local_a8[0] = 0;
    local_b0 = (Assembler *)0x400000003f;
    local_a8[4] = 0xfffffff0;
    local_a8[5] = 0xffffffff;
    local_a8[1] = 0xffffffff;
    local_a8[2] = 0;
    local_a8[3] = 2;
    local_90 = 0xffffffff00000001;
    local_88 = 0xffffffff;
    Assembler::stp((Assembler *)this,(CPURegister *)&DAT_019f4018,(CPURegister *)&local_d0,
                   (MemOperand *)&local_b0);
    Assembler::EndBlockVeneerPool(local_c0);
    ConstantPool::BlockScope::~BlockScope((BlockScope *)local_b8);
    local_90 = ExternalReference::fast_c_call_caller_fp_address(*(Isolate **)(this + 0x178));
    local_b0 = (Assembler *)((ulong)local_b0 & 0xffffffffffffff00);
    local_a8[0] = local_a8[0] & 0xffffff00;
    local_80 = 0xffffffff;
    local_88 = CONCAT71(local_88._1_7_,7);
    local_78 = 2;
    Mov(this,&local_d0,&local_b0,0);
    local_a8[1] = 0xffffffff;
    local_a8[2] = 0;
    local_a8[3] = 2;
    local_a8[4] = 0;
    local_a8[5] = 0;
    local_b0 = local_d0;
    local_a8[0] = local_c8;
    local_90 = -0x100000000;
    local_88 = 0xffffffff;
    LoadStoreMacro(this,&DAT_019f4018,&local_b0,0xc0000000);
    iVar5 = 1;
    if ((int)local_d0 != -1) {
      iVar5 = 2;
    }
    PopHelper(this,iVar5,8,(CPURegister *)&DAT_019f4018,(CPURegister *)&local_d0,
              (CPURegister *)&DAT_019f400c,(CPURegister *)&DAT_019f400c);
  }
  if ((8 < param_4) && (uVar2 = param_4 - 7U & 0xfffffffe, uVar2 != 0)) {
    local_90 = (ulong)uVar2 << 3;
    local_b0 = (Assembler *)((ulong)local_b0 & 0xffffffffffffff00);
    local_a8[0] = local_a8[0] & 0xffffff00;
    local_88 = CONCAT71(local_88._1_7_,0x13);
    local_80 = 0xffffffff;
    local_78 = 2;
    AddSubMacro(this,&DAT_019f3ff4,&DAT_019f3ff4,&local_b0,0,0);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

