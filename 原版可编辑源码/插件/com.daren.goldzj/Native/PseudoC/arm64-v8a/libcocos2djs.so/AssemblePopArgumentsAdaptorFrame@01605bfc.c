
/* v8::internal::compiler::CodeGenerator::AssemblePopArgumentsAdaptorFrame(v8::internal::Register,
   v8::internal::Register, v8::internal::Register, v8::internal::Register) */

void v8::internal::compiler::CodeGenerator::AssemblePopArgumentsAdaptorFrame
               (long param_1,undefined8 param_2,undefined4 param_3,ulong param_4,int param_5,
               undefined8 param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9,
               undefined4 param_10)

{
  Assembler *this;
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  ulong local_100;
  int local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  int local_e0;
  ulong local_d8;
  undefined4 local_d0;
  ulong local_c8;
  undefined4 local_c0;
  ulong local_b8;
  uint local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  this = (Assembler *)(param_1 + 0xd0);
  local_f0 = 0;
  local_b8 = 0x400000001d;
  local_b0 = 0;
  local_ac = 0xffffffff;
  local_a4 = 2;
  local_a0 = 0xfffffffffffffff8;
  local_98 = 0xffffffff00000000;
  local_90 = 0xffffffff;
  iVar4 = (int)(param_4 >> 0x20);
  if (param_5 == 0) {
    uVar5 = 0xc0400000;
    if (iVar4 != 0x40) {
      uVar5 = 0x80400000;
    }
  }
  else {
    uVar2 = iVar4 - 8U >> 3 | iVar4 << 0x1d;
    if (uVar2 < 8) {
      uVar5 = *(undefined4 *)(&DAT_019f3888 + (long)(int)uVar2 * 4);
    }
    else {
      uVar5 = 0x4c00000;
    }
  }
  local_e8 = param_4;
  local_e0 = param_5;
  TurboAssembler::LoadStoreMacro((TurboAssembler *)this,&local_e8,&local_b8,uVar5);
  local_98 = 0x26;
  local_90 = CONCAT71(local_90._1_7_,0x13);
  puVar1 = &DAT_01a5640c;
  if (local_e8._4_4_ != 0x40) {
    puVar1 = &DAT_01a56424;
  }
  local_b8 = local_b8 & 0xffffffffffffff00;
  local_b0 = local_b0 & 0xffffff00;
  local_88 = 0xffffffff;
  local_80 = 2;
  TurboAssembler::AddSubMacro((TurboAssembler *)this,puVar1,&local_e8,&local_b8,1,0x40000000);
  TurboAssembler::B((TurboAssembler *)this,&local_f0,1);
  local_100 = local_e8;
  local_b8 = 0x400000001d;
  local_b0 = 0;
  local_ac = 0xffffffff;
  local_a4 = 2;
  local_a0 = 0xffffffffffffffe8;
  local_f8 = local_e0;
  local_98 = 0xffffffff00000000;
  local_90 = 0xffffffff;
  iVar4 = (int)(local_e8 >> 0x20);
  if (local_e0 == 0) {
    uVar5 = 0xc0400000;
    if (iVar4 != 0x40) {
      uVar5 = 0x80400000;
    }
  }
  else {
    uVar2 = iVar4 - 8U >> 3 | iVar4 << 0x1d;
    if (uVar2 < 8) {
      uVar5 = *(undefined4 *)(&DAT_019f3888 + (long)(int)uVar2 * 4);
    }
    else {
      uVar5 = 0x4c00000;
    }
  }
  TurboAssembler::LoadStoreMacro((TurboAssembler *)this,&local_100,&local_b8,uVar5);
  local_b8 = local_100;
  local_d8 = 0x200000003f;
  if ((int)local_100 != 0x3f) {
    local_d8 = local_100 & 0xffffffff | 0x2000000000;
  }
  local_c0 = 0;
  local_b0 = local_f8;
  local_d0 = 0;
  local_c8 = local_d8;
  Assembler::sbfm(this,(Register *)&local_c8,(Register *)&local_d8,1,0x1f);
  Assembler::sbfm(this,(Register *)&local_b8,(Register *)&local_b8,0,0x1f);
  TurboAssembler::PrepareForTailCall
            (this,param_2,param_3,local_100,local_f8,param_6,param_7,param_8,param_9,param_10);
  Assembler::bind((Label *)this);
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

