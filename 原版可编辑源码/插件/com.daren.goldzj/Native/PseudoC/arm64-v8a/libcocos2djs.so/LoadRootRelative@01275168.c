
/* v8::internal::TurboAssembler::LoadRootRelative(v8::internal::Register, int) */

void v8::internal::TurboAssembler::LoadRootRelative
               (TurboAssembler *param_1,undefined8 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  int local_18;
  
  local_50 = 0x400000001a;
  local_38 = (long)param_4;
  local_48 = 0;
  local_30 = 0xffffffff00000000;
  uStack_28 = 0xffffffff;
  local_44 = 0xffffffff;
  local_3c = 2;
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
  local_20 = param_2;
  local_18 = param_3;
  LoadStoreMacro(param_1,&local_20,&local_50,uVar3);
  return;
}

