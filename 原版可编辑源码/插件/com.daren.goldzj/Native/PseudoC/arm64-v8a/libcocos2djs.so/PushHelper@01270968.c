
/* v8::internal::TurboAssembler::PushHelper(int, int, v8::internal::CPURegister const&,
   v8::internal::CPURegister const&, v8::internal::CPURegister const&, v8::internal::CPURegister
   const&) */

void __thiscall
v8::internal::TurboAssembler::PushHelper
          (TurboAssembler *this,int param_1,int param_2,CPURegister *param_3,CPURegister *param_4,
          CPURegister *param_5,CPURegister *param_6)

{
  int iVar1;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  Assembler *local_80;
  BlockScope aBStack_78 [8];
  
  local_80 = (Assembler *)this;
  ConstantPool::BlockScope::BlockScope(aBStack_78,(Assembler *)this,0);
  Assembler::CheckVeneerPool(local_80,false,true,0);
  Assembler::StartBlockVeneerPool(local_80);
  switch(param_1) {
  case 1:
    iVar1 = -param_2;
    local_90 = 0xffffffff00000001;
    break;
  case 2:
    iVar1 = param_2 * -2;
    local_90 = 0xffffffff00000001;
    goto LAB_01270ba0;
  case 3:
    local_98 = (long)(param_2 * -3);
    local_90 = 0xffffffff00000001;
    uStack_88 = 0xffffffff;
    local_a8 = 0;
    local_b0 = 0x400000003f;
    local_a4 = 0xffffffff;
    local_9c = 2;
    Assembler::stp((Assembler *)this,param_5,param_4,(MemOperand *)&local_b0);
    iVar1 = param_2 << 1;
    local_90 = 0xffffffff00000000;
    break;
  case 4:
    local_98 = (long)(param_2 * -4);
    local_90 = 0xffffffff00000001;
    uStack_88 = 0xffffffff;
    local_a8 = 0;
    local_b0 = 0x400000003f;
    local_a4 = 0xffffffff;
    local_9c = 2;
    Assembler::stp((Assembler *)this,param_6,param_5,(MemOperand *)&local_b0);
    iVar1 = param_2 << 1;
    local_90 = 0xffffffff00000000;
LAB_01270ba0:
    local_98 = (long)iVar1;
    uStack_88 = 0xffffffff;
    local_9c = 2;
    local_a4 = 0xffffffff;
    local_a8 = 0;
    local_b0 = 0x400000003f;
    Assembler::stp((Assembler *)this,param_4,param_3,(MemOperand *)&local_b0);
    goto LAB_01270bb4;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  local_98 = (long)iVar1;
  uStack_88 = 0xffffffff;
  local_9c = 2;
  local_a4 = 0xffffffff;
  local_a8 = 0;
  local_b0 = 0x400000003f;
  Assembler::str((CPURegister *)this,(MemOperand *)param_3);
LAB_01270bb4:
  Assembler::EndBlockVeneerPool(local_80);
  ConstantPool::BlockScope::~BlockScope(aBStack_78);
  return;
}

