
/* v8::internal::RegExpMacroAssemblerARM64::ReadCurrentPositionFromRegister(int) */

void __thiscall
v8::internal::RegExpMacroAssemblerARM64::ReadCurrentPositionFromRegister
          (RegExpMacroAssemblerARM64 *this,int param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  ulong local_80;
  undefined4 local_78;
  ulong local_70;
  uint local_68;
  undefined8 local_64;
  undefined4 local_5c;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  iVar4 = 1;
  if ((param_1 & 1U) != 0) {
    iVar4 = 2;
  }
  iVar2 = 0;
  if (param_1 < 0x10) {
    iVar2 = iVar4;
  }
  if (iVar2 == 2) {
    local_70 = 0x4000000015;
    if (param_1 < 0) {
      param_1 = param_1 + 1;
    }
    local_80 = (ulong)(uint)(param_1 >> 1) | 0x4000000000;
    local_68 = 0;
    local_78 = 0;
    Assembler::ubfm(*(Assembler **)(this + 0x28),(Register *)&local_70,(Register *)&local_80,0x20,
                    0x3f);
  }
  else if (iVar2 == 1) {
    uVar1 = param_1 & 0xfffffffe;
    if (param_1 < 0) {
      param_1 = param_1 + 1;
    }
    local_80 = 0x2000000015;
    local_40 = 0x200000003f;
    if (uVar1 != 0x7e) {
      local_40 = (ulong)(uint)(param_1 >> 1) | 0x2000000000;
    }
    local_78 = 0;
    local_70 = local_70 & 0xffffffffffffff00;
    local_68 = local_68 & 0xffffff00;
    local_50 = 0;
    local_48 = CONCAT71(local_48._1_7_,0x13);
    uStack_30 = 0xffffffff;
    local_38 = 0;
    TurboAssembler::Mov(*(TurboAssembler **)(this + 0x28),&local_80,&local_70,0);
  }
  else {
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    local_80 = 0x2000000015;
    local_78 = 0;
    if (*(int *)(this + 0x34) <= param_1) {
      *(int *)(this + 0x34) = param_1 + 1;
    }
    local_70 = 0x400000001d;
    local_58 = (long)(param_1 * -4 + 0xc);
    local_68 = 0;
    local_64 = 0xffffffff;
    local_5c = 2;
    local_50 = 0xffffffff00000000;
    local_48 = 0xffffffff;
    TurboAssembler::LoadStoreMacro(*(TurboAssembler **)(this + 0x28),&local_80,&local_70,0x80400000)
    ;
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

