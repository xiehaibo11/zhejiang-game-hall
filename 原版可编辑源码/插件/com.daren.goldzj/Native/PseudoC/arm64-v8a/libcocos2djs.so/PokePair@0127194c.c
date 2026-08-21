
/* v8::internal::TurboAssembler::PokePair(v8::internal::CPURegister const&,
   v8::internal::CPURegister const&, int) */

void v8::internal::TurboAssembler::PokePair(CPURegister *param_1,CPURegister *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int in_w3;
  int iVar3;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_40 = 0x400000003f;
  local_28 = (long)in_w3;
  local_38 = 0;
  local_20 = 0xffffffff00000000;
  uStack_18 = 0xffffffff;
  local_34 = 0xffffffff;
  local_2c = 2;
  iVar2 = *(int *)(param_2 + 4);
  iVar3 = 0x44000000;
  if (iVar2 != 0x40) {
    iVar3 = -0x7c000000;
  }
  iVar1 = 0x4000000;
  if (iVar2 != 0x20) {
    iVar1 = iVar3;
  }
  iVar3 = (uint)(iVar2 == 0x40) << 0x1f;
  if (*(int *)(param_2 + 8) != 0) {
    iVar3 = iVar1;
  }
  LoadStorePairMacro((TurboAssembler *)param_1,param_2,param_3,&local_40,iVar3);
  return;
}

