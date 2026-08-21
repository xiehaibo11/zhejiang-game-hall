
/* v8::internal::TurboAssembler::PopHelper(int, int, v8::internal::CPURegister const&,
   v8::internal::CPURegister const&, v8::internal::CPURegister const&, v8::internal::CPURegister
   const&) */

void __thiscall
v8::internal::TurboAssembler::PopHelper
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
    local_98 = (long)param_2;
    local_b0 = 0x400000003f;
    local_a8 = 0;
    local_a4 = 0xffffffff;
    local_9c = 2;
    local_90 = 0xffffffff00000002;
    uStack_88 = 0xffffffff;
    Assembler::ldr((CPURegister *)this,(MemOperand *)param_3);
    goto LAB_01270f10;
  case 2:
    iVar1 = param_2 << 1;
    break;
  case 3:
    local_98 = (long)(param_2 * 2);
    local_90 = 0xffffffff00000000;
    uStack_88 = 0xffffffff;
    local_a8 = 0;
    local_b0 = 0x400000003f;
    local_a4 = 0xffffffff;
    local_9c = 2;
    Assembler::ldr((CPURegister *)this,(MemOperand *)param_5);
    iVar1 = param_2 * 3;
    break;
  case 4:
    local_98 = (long)(param_2 << 1);
    local_90 = 0xffffffff00000000;
    uStack_88 = 0xffffffff;
    local_a8 = 0;
    local_b0 = 0x400000003f;
    local_a4 = 0xffffffff;
    local_9c = 2;
    Assembler::ldp((Assembler *)this,param_5,param_6,(MemOperand *)&local_b0);
    iVar1 = param_2 << 2;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  local_98 = (long)iVar1;
  uStack_88 = 0xffffffff;
  local_90 = 0xffffffff00000002;
  local_9c = 2;
  local_a4 = 0xffffffff;
  local_a8 = 0;
  local_b0 = 0x400000003f;
  Assembler::ldp((Assembler *)this,param_3,param_4,(MemOperand *)&local_b0);
LAB_01270f10:
  Assembler::EndBlockVeneerPool(local_80);
  ConstantPool::BlockScope::~BlockScope(aBStack_78);
  return;
}

