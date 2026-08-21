
/* v8::internal::TurboAssembler::Fmov(v8::internal::VRegister, float) */

void v8::internal::TurboAssembler::Fmov
               (float param_1,Assembler *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  ulong local_90;
  undefined4 local_88;
  Assembler *local_80;
  Assembler *pAStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  iVar3 = (int)((ulong)param_3 >> 0x20);
  iVar4 = (int)((ulong)param_4 >> 0x20);
  local_60 = param_3;
  uStack_58 = param_4;
  if (iVar3 == 0x80) {
    if (iVar4 == 2) goto LAB_0161b34c;
  }
  else if ((iVar3 == 0x40) && (iVar4 == 1)) {
LAB_0161b34c:
    Fmov((double)param_1,param_2);
    return;
  }
  uVar2 = Assembler::IsImmFP32(param_1);
  if ((uVar2 & 1) == 0) {
    if (iVar4 == 1) {
      if (param_1 == 0.0) {
        Assembler::fmov(param_2,(VRegister *)&local_60,(Register *)&DAT_01a56424);
      }
      else {
        local_80 = param_2 + 0x198;
        pAStack_78 = param_2 + 0x1a8;
        local_70 = *(undefined8 *)(param_2 + 0x198);
        local_68 = *(undefined8 *)(param_2 + 0x1a8);
        uVar1 = UseScratchRegisterScope::AcquireNextAvailable(local_80);
        local_90 = 0x200000003f;
        if (uVar1 != 0x3f) {
          local_90 = (ulong)uVar1 | 0x2000000000;
        }
        local_88 = 0;
        Mov((TurboAssembler *)param_2,(Register *)&local_90,(ulong)(uint)param_1);
        local_40 = local_60;
        uStack_38 = uStack_58;
        local_50 = local_90;
        local_48 = local_88;
        Assembler::fmov(param_2,(VRegister *)&local_40,(Register *)&local_50);
        UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_80);
      }
    }
    else {
      Movi((TurboAssembler *)param_2,&local_60,(ulong)(uint)param_1,0,0);
    }
  }
  else {
    Assembler::fmov(param_2,(VRegister *)&local_60,param_1);
  }
  return;
}

