
/* v8::internal::RegExpMacroAssemblerARM64::GetRegister(int, v8::internal::Register) */

undefined1  [16]
v8::internal::RegExpMacroAssemblerARM64::GetRegister
          (long param_1,uint param_2,ulong param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  ulong local_60;
  undefined4 local_58;
  ulong local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulong local_20;
  int local_18;
  
  iVar4 = *(int *)(param_1 + 0x34);
  if (iVar4 <= (int)param_2) {
    iVar4 = param_2 + 1;
    *(int *)(param_1 + 0x34) = iVar4;
  }
  iVar5 = 1;
  if ((param_2 & 1) != 0) {
    iVar5 = 2;
  }
  iVar1 = 0;
  if ((int)param_2 < 0x10) {
    iVar1 = iVar5;
  }
  local_20 = param_3;
  local_18 = param_4;
  if (iVar1 == 2) {
    local_50 = 0x400000003f;
    if ((int)param_3 != 0x3f) {
      local_50 = param_3 & 0xffffffff | 0x4000000000;
    }
    if ((int)param_2 < 0) {
      param_2 = param_2 + 1;
    }
    local_60 = (ulong)(uint)((int)param_2 >> 1) | 0x4000000000;
    local_48 = 0;
    local_58 = 0;
    Assembler::ubfm(*(Assembler **)(param_1 + 0x28),(Register *)&local_50,(Register *)&local_60,0x20
                    ,0x3f);
  }
  else if (iVar1 == 1) {
    uVar2 = param_2 & 0xfffffffe;
    if ((int)param_2 < 0) {
      param_2 = param_2 + 1;
    }
    local_18 = 0;
    local_20 = 0x200000003f;
    if (uVar2 != 0x7e) {
      local_20 = (ulong)(uint)((int)param_2 >> 1) | 0x2000000000;
    }
  }
  else {
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    if (iVar4 <= (int)param_2) {
      *(uint *)(param_1 + 0x34) = param_2 + 1;
    }
    local_50 = 0x400000001d;
    local_38 = (long)(int)(param_2 * -4 + 0xc);
    local_48 = 0;
    local_44 = 0xffffffff;
    local_3c = 2;
    local_30 = 0xffffffff00000000;
    uStack_28 = 0xffffffff;
    iVar4 = (int)(param_3 >> 0x20);
    if (param_4 == 0) {
      uVar3 = 0xc0400000;
      if (iVar4 != 0x40) {
        uVar3 = 0x80400000;
      }
    }
    else {
      uVar2 = iVar4 - 8U >> 3 | iVar4 << 0x1d;
      if (uVar2 < 8) {
        uVar3 = *(undefined4 *)(&DAT_019f3888 + (long)(int)uVar2 * 4);
      }
      else {
        uVar3 = 0x4c00000;
      }
    }
    TurboAssembler::LoadStoreMacro(*(TurboAssembler **)(param_1 + 0x28),&local_20,&local_50,uVar3);
  }
  auVar6._8_4_ = local_18;
  auVar6._0_8_ = local_20;
  auVar6._12_4_ = 0;
  return auVar6;
}

