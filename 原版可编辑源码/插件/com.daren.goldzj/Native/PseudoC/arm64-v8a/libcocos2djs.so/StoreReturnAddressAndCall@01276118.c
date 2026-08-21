
/* v8::internal::TurboAssembler::StoreReturnAddressAndCall(v8::internal::Register) */

void v8::internal::TurboAssembler::StoreReturnAddressAndCall
               (Assembler *param_1,undefined8 param_2,undefined4 param_3)

{
  CPURegList *this;
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_f8;
  uint local_f0;
  undefined8 local_e8;
  ulong local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  ulong local_c0;
  uint local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulong local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  lVar5 = *(long *)(param_1 + 0x198);
  local_d0 = param_2;
  local_c8 = param_3;
  if (lVar5 == 0) {
LAB_01276398:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!available->IsEmpty()");
  }
  uVar6 = *(undefined8 *)(param_1 + 0x1a8);
  this = (CPURegList *)(param_1 + 0x198);
  uVar3 = CPURegList::PopLowestIndex(this);
  local_e0 = 0x400000003f;
  if (uVar3 != 0x3f) {
    local_e0 = (ulong)uVar3 | 0x4000000000;
  }
  local_d8 = 0;
  local_e8 = 0;
  Assembler::adr(param_1,(Register *)&local_e0,(Label *)&local_e8);
  local_c0 = local_c0 & 0xffffffffffffff00;
  local_b8 = local_b8 & 0xffffff00;
  local_a0 = 0;
  local_98 = CONCAT71(local_98._1_7_,0x13);
  local_90 = 0xffffffff;
  local_88 = 2;
  Poke((TurboAssembler *)param_1,(CPURegister *)&local_e0,(Operand *)&local_c0);
  if (param_1[0xc0] != (Assembler)0x0) {
    if (*(long *)this == 0) goto LAB_01276398;
    uVar3 = CPURegList::PopLowestIndex(this);
    local_c0 = 0x400000001d;
    local_f8 = 0x400000003f;
    if (uVar3 != 0x3f) {
      local_f8 = (ulong)uVar3 | 0x4000000000;
    }
    local_f0 = 0;
    local_b8 = 0;
    local_b4 = 0xffffffff;
    local_ac = 2;
    local_a8 = 0xfffffffffffffff0;
    local_a0 = 0xffffffff00000000;
    local_98 = 0xffffffff;
    LoadStoreMacro((TurboAssembler *)param_1,&local_f8,&local_c0,0xc0400000);
    local_b4 = 0xffffffff;
    local_ac = 2;
    local_a8 = 0xfffffffffffffff8;
    local_c0 = local_f8;
    local_b8 = local_f0;
    local_a0 = 0xffffffff00000000;
    local_98 = 0xffffffff;
    if (local_f0 == 0) {
      uVar4 = 0xc0400000;
      if (local_f8._4_4_ != 0x40) {
        uVar4 = 0x80400000;
      }
    }
    else {
      uVar3 = local_f8._4_4_ - 8U >> 3 | local_f8._4_4_ << 0x1d;
      if (uVar3 < 8) {
        uVar4 = *(undefined4 *)(&DAT_019f3888 + (long)(int)uVar3 * 4);
      }
      else {
        uVar4 = 0x4c00000;
      }
    }
    LoadStoreMacro((TurboAssembler *)param_1,&local_f8,&local_c0,uVar4);
    local_98 = CONCAT71(local_98._1_7_,0x13);
    local_90 = local_e0;
    local_88 = local_d8;
    puVar1 = &DAT_019f4018;
    if (local_f8._4_4_ != 0x40) {
      puVar1 = &DAT_019f4000;
    }
    local_c0 = local_c0 & 0xffffffffffffff00;
    local_b8 = local_b8 & 0xffffff00;
    local_a0 = 0;
    local_7c = 0;
    local_84 = 0xffffffff00000000;
    AddSubMacro((TurboAssembler *)param_1,puVar1,&local_f8,&local_c0,1,0x40000000);
    local_c0 = 0;
    B((TurboAssembler *)param_1,&local_c0,0);
    Abort((TurboAssembler *)param_1,0x20);
    Assembler::bind((Label *)param_1);
  }
  Assembler::blr(param_1,(Register *)&local_d0);
  Assembler::bind((Label *)param_1);
  *(long *)(param_1 + 0x198) = lVar5;
  *(undefined8 *)(param_1 + 0x1a8) = uVar6;
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

