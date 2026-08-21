
/* v8::internal::TurboAssembler::LoadRoot(v8::internal::Register, v8::internal::RootIndex) */

void v8::internal::TurboAssembler::LoadRoot
               (TurboAssembler *param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  int local_38;
  
  local_40 = param_2;
  local_38 = param_3;
  iVar2 = TurboAssemblerBase::RootRegisterOffsetForRootIndex(param_4);
  local_70 = 0x400000001a;
  local_58 = (long)iVar2;
  local_68 = 0;
  local_50 = 0xffffffff00000000;
  uStack_48 = 0xffffffff;
  local_64 = 0xffffffff;
  local_5c = 2;
  iVar2 = (int)((ulong)param_2 >> 0x20);
  if (param_3 == 0) {
    uVar3 = 0xc0400000;
    if (iVar2 != 0x40) {
      uVar3 = 0x80400000;
    }
  }
  else {
    uVar1 = iVar2 - 8U >> 3 | iVar2 << 0x1d;
    if (uVar1 < 8) {
      uVar3 = *(undefined4 *)(&DAT_019f3888 + (long)(int)uVar1 * 4);
    }
    else {
      uVar3 = 0x4c00000;
    }
  }
  LoadStoreMacro(param_1,&local_40,&local_70,uVar3);
  return;
}

