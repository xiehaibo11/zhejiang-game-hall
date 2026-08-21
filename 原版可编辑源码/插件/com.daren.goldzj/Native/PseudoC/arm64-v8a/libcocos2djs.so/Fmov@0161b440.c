
/* v8::internal::TurboAssembler::Fmov(v8::internal::VRegister, double) */

void v8::internal::TurboAssembler::Fmov
               (double param_1,Assembler *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  ulong local_70;
  undefined4 local_68;
  Assembler *local_60;
  Assembler *pAStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  iVar3 = (int)((ulong)param_3 >> 0x20);
  local_40 = param_3;
  uStack_38 = param_4;
  if (iVar3 != 0x20) {
    iVar4 = (int)((ulong)param_4 >> 0x20);
    if (iVar3 == 0x80) {
      if (iVar4 == 4) goto LAB_0161b4b0;
    }
    else if ((iVar3 == 0x40) && (iVar4 == 2)) goto LAB_0161b4b0;
    uVar2 = Assembler::IsImmFP64(param_1);
    if ((uVar2 & 1) == 0) {
      if (iVar4 == 1) {
        if (param_1 == 0.0) {
          Assembler::fmov(param_2,(VRegister *)&local_40,(Register *)&DAT_01a5640c);
        }
        else {
          local_60 = param_2 + 0x198;
          pAStack_58 = param_2 + 0x1a8;
          local_50 = *(undefined8 *)(param_2 + 0x198);
          local_48 = *(undefined8 *)(param_2 + 0x1a8);
          uVar1 = UseScratchRegisterScope::AcquireNextAvailable(local_60);
          local_70 = 0x400000003f;
          if (uVar1 != 0x3f) {
            local_70 = (ulong)uVar1 | 0x4000000000;
          }
          local_68 = 0;
          Mov((TurboAssembler *)param_2,(Register *)&local_70,(ulong)param_1);
          Assembler::fmov(param_2,(VRegister *)&local_40,(Register *)&local_70);
          UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_60);
        }
      }
      else {
        Movi((TurboAssembler *)param_2,&local_40,param_1,0,0);
      }
    }
    else {
      Assembler::fmov(param_2,(VRegister *)&local_40,param_1);
    }
    return;
  }
LAB_0161b4b0:
  Fmov((float)param_1,param_2);
  return;
}

