
/* v8::internal::TurboAssembler::DropArguments(v8::internal::Register const&,
   v8::internal::TurboAssembler::ArgumentsCountMode) */

void __thiscall
v8::internal::TurboAssembler::DropArguments(TurboAssembler *this,undefined8 param_1,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  ulong local_d0;
  int local_c8;
  TurboAssembler *local_c0;
  TurboAssembler *pTStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [8];
  undefined1 local_98;
  undefined8 local_80;
  undefined1 local_78;
  ulong local_70;
  int local_68;
  undefined8 local_64;
  undefined4 local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_c0 = this + 0x198;
  pTStack_b8 = this + 0x1a8;
  local_b0 = *(undefined8 *)(this + 0x198);
  local_a8 = *(undefined8 *)(this + 0x1a8);
  uVar1 = 1;
  if (param_3 == 1) {
    uVar1 = 2;
  }
  uVar3 = UseScratchRegisterScope::AcquireNextAvailable(local_c0);
  local_d0 = 0x400000003f;
  if (uVar3 != 0x3f) {
    local_d0 = (ulong)uVar3 | 0x4000000000;
  }
  local_c8 = 0;
  local_a0[0] = 0;
  local_98 = 0;
  local_78 = 0x13;
  local_70 = 0xffffffff;
  local_68 = 2;
  local_80 = uVar1;
  AddSubMacro(this,&local_d0,param_1,local_a0,0,0);
  local_a0[0] = 0;
  local_98 = 0;
  local_80 = 1;
  local_78 = 0x13;
  local_70 = 0xffffffff;
  local_68 = 2;
  LogicalMacro(this,&local_d0,&local_d0,local_a0,0x200000);
  local_a0[0] = 0;
  local_98 = 0;
  local_80 = 0;
  local_78 = 0x13;
  local_64 = 0xffffffff00000000;
  local_70 = local_d0;
  local_68 = local_c8;
  local_5c = 3;
  if ((int)local_d0 == -1) {
    if ((local_d0 >> 0x20 == 0) && (local_c8 == 2)) goto LAB_0161a588;
  }
  else if ((local_c8 == 0) && ((int)local_d0 == 0x1f)) goto LAB_0161a588;
  AssertPositiveOrZero(this);
  AddSubMacro(this,&DAT_01a56370,&DAT_01a56370,local_a0,0,0);
LAB_0161a588:
  UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_c0);
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

