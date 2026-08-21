
/* v8::internal::wasm::LiftoffAssembler::MoveStackValue(unsigned int, unsigned int,
   v8::internal::wasm::ValueType) */

void __thiscall
v8::internal::wasm::LiftoffAssembler::MoveStackValue
          (LiftoffAssembler *this,int param_1,int param_2,undefined1 param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  int local_68;
  LiftoffAssembler *local_60;
  LiftoffAssembler *pLStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_60 = this + 0x198;
  pLStack_58 = this + 0x1a8;
  local_50 = *(undefined8 *)(this + 0x198);
  local_48 = *(undefined8 *)(this + 0x1a8);
  switch(param_4) {
  case 1:
    uVar1 = UseScratchRegisterScope::AcquireNextAvailable(local_60);
    uVar2 = (ulong)uVar1 | 0x2000000000;
    local_70 = 0x200000003f;
    break;
  case 2:
    uVar1 = UseScratchRegisterScope::AcquireNextAvailable(local_60);
    local_70 = 0x400000003f;
    uVar2 = (ulong)uVar1 | 0x4000000000;
    break;
  case 3:
    uVar2 = UseScratchRegisterScope::AcquireNextAvailable(pLStack_58);
    uVar5 = 0x2000000000;
    goto LAB_017ed6c0;
  case 4:
    uVar2 = UseScratchRegisterScope::AcquireNextAvailable(pLStack_58);
    uVar5 = 0x4000000000;
LAB_017ed6c0:
    local_68 = 1;
    local_70 = uVar5 | uVar2 & 0xffffffff;
    goto LAB_017ed6e8;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  local_68 = 0;
  if (uVar1 != 0x3f) {
    local_70 = uVar2;
  }
LAB_017ed6e8:
  local_88 = (long)(-0x10 - param_2);
  local_a0 = 0x400000001d;
  local_98 = 0;
  local_80 = 0xffffffff00000000;
  uStack_78 = 0xffffffff;
  local_94 = 0xffffffff;
  local_8c = 2;
  iVar4 = (int)(local_70 >> 0x20);
  if (local_68 == 0) {
    uVar3 = 0xc0400000;
    if (iVar4 != 0x40) {
      uVar3 = 0x80400000;
    }
  }
  else {
    uVar1 = iVar4 - 8U >> 3;
    if (uVar1 < 8) {
      uVar3 = *(undefined4 *)(&DAT_019f3888 + (long)(int)uVar1 * 4);
    }
    else {
      uVar3 = 0x4c00000;
    }
  }
  TurboAssembler::LoadStoreMacro((TurboAssembler *)this,&local_70,&local_a0,uVar3);
  local_88 = (long)(-0x10 - param_1);
  local_a0 = 0x400000001d;
  local_98 = 0;
  local_94 = 0xffffffff;
  local_8c = 2;
  local_80 = 0xffffffff00000000;
  uStack_78 = 0xffffffff;
  if (local_68 == 0) {
    uVar3 = 0xc0000000;
    if (local_70._4_4_ != 0x40) {
      uVar3 = 0x80000000;
    }
  }
  else {
    uVar1 = local_70._4_4_ - 8U >> 3 | local_70._4_4_ << 0x1d;
    if (uVar1 < 8) {
      uVar3 = *(undefined4 *)(&DAT_019f38a8 + (long)(int)uVar1 * 4);
    }
    else {
      uVar3 = 0x4800000;
    }
  }
  TurboAssembler::LoadStoreMacro((TurboAssembler *)this,&local_70,&local_a0,uVar3);
  UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_60);
  return;
}

