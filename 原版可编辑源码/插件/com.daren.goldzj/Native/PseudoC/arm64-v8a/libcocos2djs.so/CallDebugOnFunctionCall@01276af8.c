
/* v8::internal::MacroAssembler::CallDebugOnFunctionCall(v8::internal::Register,
   v8::internal::Register, v8::internal::Register, v8::internal::Register) */

void v8::internal::MacroAssembler::CallDebugOnFunctionCall
               (Assembler *param_1,long param_2,undefined4 param_3,ulong param_4,undefined4 param_5,
               ulong param_6,undefined4 param_7,undefined8 param_8,ulong param_9,undefined4 param_10
               )

{
  Assembler AVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  ulong local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  ulong local_a0;
  undefined4 local_98;
  ulong local_94;
  undefined4 local_8c;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  Assembler *local_70;
  undefined4 local_68 [2];
  ulong local_60;
  undefined4 local_58;
  
  local_98 = 0;
  local_a0 = 0x400000003f;
  local_e0 = param_9;
  local_d8 = param_10;
  local_94 = param_9;
  local_8c = param_10;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0x3ffffffff;
  local_d0 = param_6;
  local_c8 = param_7;
  local_c0 = param_4;
  local_b8 = param_5;
  local_b0 = param_2;
  local_a8 = param_3;
  TurboAssembler::LoadStoreMacro((TurboAssembler *)param_1,&DAT_019f4174,&local_a0,0xc0400000);
  AVar1 = param_1[400];
  param_1[400] = (Assembler)0x1;
  if (AVar1 == (Assembler)0x0) {
    TurboAssembler::EnterFrame((TurboAssembler *)param_1,0x11);
    param_4 = local_c0 & 0xffffffff;
    iVar5 = (int)local_c0;
  }
  else {
    iVar5 = (int)param_4;
  }
  iVar6 = (int)param_4;
  if (iVar5 == -1) {
    local_c0 = 0x400000001f;
    local_b8 = 0;
    iVar6 = 0x1f;
  }
  iVar4 = (int)(local_d0 >> 0x20);
  iVar5 = 0;
  if (iVar4 != 0) {
    iVar5 = (iVar4 + -1) / iVar4;
  }
  local_a0 = local_d0;
  local_98 = local_c8;
  local_70 = (Assembler *)local_d0;
  local_68[0] = local_c8;
  Assembler::ubfm(param_1,(Register *)&local_a0,(Register *)&local_70,(iVar4 + -1) - iVar5 * iVar4,
                  iVar4 + -2);
  uVar2 = local_e0;
  local_98 = local_d8;
  local_68[0] = local_d8;
  iVar4 = (int)(local_e0 >> 0x20);
  iVar5 = 0;
  if (iVar4 != 0) {
    iVar5 = (iVar4 + -1) / iVar4;
  }
  local_a0 = local_e0;
  local_70 = (Assembler *)local_e0;
  Assembler::ubfm(param_1,(Register *)&local_a0,(Register *)&local_70,(iVar4 + -1) - iVar5 * iVar4,
                  iVar4 + -2);
  iVar5 = 1;
  if ((int)uVar2 != -1) {
    iVar5 = 2;
  }
  if (iVar6 != -1) {
    iVar5 = iVar5 + 1;
  }
  if ((int)local_b0 != -1) {
    iVar5 = iVar5 + 1;
  }
  iVar6 = local_d0._4_4_ + 7;
  if (-1 < (long)local_d0) {
    iVar6 = local_d0._4_4_;
  }
  TurboAssembler::PushHelper
            ((TurboAssembler *)param_1,iVar5,iVar6 >> 3,(CPURegister *)&local_d0,
             (CPURegister *)&local_e0,(CPURegister *)&local_c0,(CPURegister *)&local_b0);
  iVar5 = local_b0._4_4_ + 7;
  if (-1 < local_b0) {
    iVar5 = local_b0._4_4_;
  }
  local_70 = param_1;
  ConstantPool::BlockScope::BlockScope((BlockScope *)local_68,param_1,0);
  Assembler::CheckVeneerPool(local_70,false,true,0);
  Assembler::StartBlockVeneerPool(local_70);
  local_88 = (long)((iVar5 >> 3) * -2);
  local_a0 = 0x400000003f;
  local_98 = 0;
  local_94 = 0xffffffff;
  local_8c = 2;
  local_80 = 0xffffffff00000001;
  local_78 = 0xffffffff;
  Assembler::stp(param_1,(CPURegister *)&DAT_019f4174,(CPURegister *)&local_b0,
                 (MemOperand *)&local_a0);
  Assembler::EndBlockVeneerPool(local_70);
  ConstantPool::BlockScope::~BlockScope((BlockScope *)local_68);
  lVar3 = Runtime::FunctionForId(0x48);
  CallRuntime((MacroAssembler *)param_1,lVar3,(long)*(char *)(lVar3 + 0x18),0);
  iVar5 = 1;
  if ((int)local_c0 != -1) {
    iVar5 = 2;
  }
  if ((int)local_e0 != -1) {
    iVar5 = iVar5 + 1;
  }
  if ((int)local_d0 != -1) {
    iVar5 = iVar5 + 1;
  }
  iVar6 = local_b0._4_4_ + 7;
  if (-1 < local_b0) {
    iVar6 = local_b0._4_4_;
  }
  TurboAssembler::PopHelper
            ((TurboAssembler *)param_1,iVar5,iVar6 >> 3,(CPURegister *)&local_b0,
             (CPURegister *)&local_c0,(CPURegister *)&local_e0,(CPURegister *)&local_d0);
  local_a0 = local_e0;
  local_70 = (Assembler *)0x200000003f;
  if ((int)local_e0 != 0x3f) {
    local_70 = (Assembler *)(local_e0 & 0xffffffff | 0x2000000000);
  }
  local_68[0] = 0;
  local_98 = local_d8;
  local_58 = 0;
  local_60 = (ulong)local_70;
  Assembler::sbfm(param_1,(Register *)&local_70,(Register *)&local_60,1,0x1f);
  Assembler::sbfm(param_1,(Register *)&local_a0,(Register *)&local_a0,0,0x1f);
  local_a0 = local_d0;
  local_70 = (Assembler *)0x200000003f;
  if ((int)local_d0 != 0x3f) {
    local_70 = (Assembler *)(local_d0 & 0xffffffff | 0x2000000000);
  }
  local_68[0] = 0;
  local_98 = local_c8;
  local_58 = 0;
  local_60 = (ulong)local_70;
  Assembler::sbfm(param_1,(Register *)&local_70,(Register *)&local_60,1,0x1f);
  Assembler::sbfm(param_1,(Register *)&local_a0,(Register *)&local_a0,0,0x1f);
  if (AVar1 == (Assembler)0x0) {
    TurboAssembler::LeaveFrame(param_1);
  }
  param_1[400] = AVar1;
  return;
}

