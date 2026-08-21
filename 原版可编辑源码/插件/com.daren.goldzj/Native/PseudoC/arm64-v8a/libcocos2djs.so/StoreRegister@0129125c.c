
/* v8::internal::RegExpMacroAssemblerARM64::StoreRegister(int, v8::internal::Register) */

void v8::internal::RegExpMacroAssemblerARM64::StoreRegister
               (long param_1,uint param_2,ulong param_3,int param_4)

{
  int iVar1;
  Assembler *this;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
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
  
  iVar5 = *(int *)(param_1 + 0x34);
  if (iVar5 <= (int)param_2) {
    iVar5 = param_2 + 1;
    *(int *)(param_1 + 0x34) = iVar5;
  }
  iVar3 = 1;
  if ((param_2 & 1) != 0) {
    iVar3 = 2;
  }
  iVar1 = 0;
  if ((int)param_2 < 0x10) {
    iVar1 = iVar3;
  }
  uVar2 = (uint)param_3;
  local_20 = param_3;
  local_18 = param_4;
  if (iVar1 == 2) {
    if ((int)param_2 < 0) {
      param_2 = param_2 + 1;
    }
    param_2 = (int)param_2 >> 1;
    this = *(Assembler **)(param_1 + 0x28);
    local_60 = 0x400000003f;
    if (uVar2 != 0x3f) {
      local_60 = param_3 & 0xffffffff | 0x4000000000;
    }
    iVar5 = 0x20;
  }
  else {
    iVar3 = (int)(param_3 >> 0x20);
    if (iVar1 != 1) {
      if (iVar1 == 0) {
        if (iVar5 <= (int)param_2) {
          *(uint *)(param_1 + 0x34) = param_2 + 1;
        }
        local_50 = 0x400000001d;
        local_38 = (long)(int)(param_2 * -4 + 0xc);
        local_48 = 0;
        local_44 = 0xffffffff;
        local_3c = 2;
        local_30 = 0xffffffff00000000;
        uStack_28 = 0xffffffff;
        if (param_4 == 0) {
          uVar4 = 0xc0000000;
          if (iVar3 != 0x40) {
            uVar4 = 0x80000000;
          }
        }
        else {
          uVar2 = iVar3 - 8U >> 3 | iVar3 << 0x1d;
          if (uVar2 < 8) {
            uVar4 = *(undefined4 *)(&DAT_019f38a8 + (long)(int)uVar2 * 4);
          }
          else {
            uVar4 = 0x4800000;
          }
        }
        TurboAssembler::LoadStoreMacro
                  (*(TurboAssembler **)(param_1 + 0x28),&local_20,&local_50,uVar4);
        return;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    if ((int)param_2 < 0) {
      param_2 = param_2 + 1;
    }
    param_2 = (int)param_2 >> 1;
    if (((param_2 == uVar2) && (iVar3 == 0x20)) && (param_4 == 0)) {
      return;
    }
    this = *(Assembler **)(param_1 + 0x28);
    local_60 = 0x400000003f;
    if (uVar2 != 0x3f) {
      local_60 = param_3 & 0xffffffff | 0x4000000000;
    }
    iVar5 = 0;
  }
  local_50 = (ulong)param_2 | 0x4000000000;
  local_48 = 0;
  local_58 = 0;
  Assembler::bfm(this,(Register *)&local_50,(Register *)&local_60,iVar5,0x1f);
  return;
}

