
/* v8::internal::MacroAssembler::PushMultipleTimes(v8::internal::CPURegister,
   v8::internal::Register) */

void v8::internal::MacroAssembler::PushMultipleTimes
               (Label *param_1,long param_2,undefined4 param_3,ulong param_4,undefined4 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  ulong local_108;
  undefined4 local_100;
  ulong local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  Assembler *local_d8;
  BlockScope aBStack_d0 [8];
  ulong local_c8;
  uint local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  lVar5 = *(long *)(param_1 + 0x198);
  local_f8 = param_4;
  local_f0 = param_5;
  local_e8 = param_2;
  local_e0 = param_3;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!available->IsEmpty()");
  }
  uVar6 = *(undefined8 *)(param_1 + 0x1a8);
  uVar4 = CPURegList::PopLowestIndex((CPURegList *)(param_1 + 0x198));
  local_108 = param_4 & 0xffffffff00000000 | uVar4 & 0xffffffff;
  local_100 = 0;
  local_c8 = local_c8 & 0xffffffffffffff00;
  local_c0 = local_c0 & 0xffffff00;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_a8 = 4;
  local_a0._0_1_ = 0x13;
  local_98 = 0xffffffff;
  local_90 = 2;
  TurboAssembler::AddSubMacro((TurboAssembler *)param_1,&local_108,&local_f8,&local_c8,1,0x40000000)
  ;
  TurboAssembler::B((TurboAssembler *)param_1,&local_118,4);
  Assembler::bind(param_1);
  local_c8 = local_c8 & 0xffffffffffffff00;
  local_c0 = local_c0 & 0xffffff00;
  local_a8 = 4;
  local_a0 = CONCAT71(local_a0._1_7_,0x13);
  local_98 = 0xffffffff;
  local_90 = 2;
  TurboAssembler::AddSubMacro
            ((TurboAssembler *)param_1,&local_108,&local_108,&local_c8,1,0x40000000);
  iVar7 = (int)((ulong)param_2 >> 0x20);
  iVar1 = iVar7 + 7;
  if (-1 < param_2) {
    iVar1 = iVar7;
  }
  TurboAssembler::PushHelper
            ((TurboAssembler *)param_1,4,iVar1 >> 3,(CPURegister *)&local_e8,
             (CPURegister *)&local_e8,(CPURegister *)&local_e8,(CPURegister *)&local_e8);
  TurboAssembler::B((TurboAssembler *)param_1,&uStack_110,5);
  Assembler::bind(param_1);
  TurboAssembler::Tbz((TurboAssembler *)param_1,(Register *)&local_f8,1,(Label *)&uStack_120);
  iVar1 = local_e8._4_4_ + 7;
  if (-1 < local_e8) {
    iVar1 = local_e8._4_4_;
  }
  local_d8 = (Assembler *)param_1;
  ConstantPool::BlockScope::BlockScope(aBStack_d0,(Assembler *)param_1,0);
  Assembler::CheckVeneerPool(local_d8,false,true,0);
  Assembler::StartBlockVeneerPool(local_d8);
  local_b0 = (long)((iVar1 >> 3) * -2);
  local_c0 = 0;
  local_bc = 0xffffffff;
  local_b4 = 2;
  local_c8 = 0x400000003f;
  local_a8 = 0xffffffff00000001;
  local_a0 = 0xffffffff;
  Assembler::stp((Assembler *)param_1,(CPURegister *)&local_e8,(CPURegister *)&local_e8,
                 (MemOperand *)&local_c8);
  Assembler::EndBlockVeneerPool(local_d8);
  ConstantPool::BlockScope::~BlockScope(aBStack_d0);
  Assembler::bind(param_1);
  TurboAssembler::Tbz((TurboAssembler *)param_1,(Register *)&local_f8,0,(Label *)&local_128);
  lVar3 = local_e8;
  iVar7 = local_e8._4_4_;
  local_d8 = (Assembler *)param_1;
  ConstantPool::BlockScope::BlockScope(aBStack_d0,(Assembler *)param_1,0);
  Assembler::CheckVeneerPool(local_d8,false,true,0);
  Assembler::StartBlockVeneerPool(local_d8);
  iVar1 = iVar7 + 7;
  if (-1 < lVar3) {
    iVar1 = iVar7;
  }
  local_b0 = (long)-(iVar1 >> 3);
  local_c8 = 0x400000003f;
  local_c0 = 0;
  local_bc = 0xffffffff;
  local_b4 = 2;
  local_a8 = 0xffffffff00000001;
  local_a0 = 0xffffffff;
  Assembler::str((CPURegister *)param_1,(MemOperand *)&local_e8);
  Assembler::EndBlockVeneerPool(local_d8);
  ConstantPool::BlockScope::~BlockScope(aBStack_d0);
  Assembler::bind(param_1);
  *(long *)(param_1 + 0x198) = lVar5;
  *(undefined8 *)(param_1 + 0x1a8) = uVar6;
  if (*(long *)(lVar2 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

