
/* v8::internal::wasm::LiftoffAssembler::LoadFromInstance(v8::internal::Register, unsigned int, int)
    */

void v8::internal::wasm::LiftoffAssembler::LoadFromInstance
               (TurboAssembler *param_1,ulong param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  ulong *puVar2;
  undefined4 uVar3;
  int iVar4;
  ulong local_90;
  undefined4 local_88;
  ulong local_80;
  int local_78;
  undefined8 local_74;
  undefined4 local_6c;
  ulong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  int local_48;
  
  puVar2 = &local_90;
  local_80 = 0x400000001d;
  local_78 = 0;
  local_68 = 0xfffffffffffffff0;
  local_60 = 0xffffffff00000000;
  uStack_58 = 0xffffffff;
  local_74 = 0xffffffff;
  local_6c = 2;
  iVar4 = (int)(param_2 >> 0x20);
  if (param_3 == 0) {
    uVar3 = 0xc0400000;
    if (iVar4 != 0x40) {
      uVar3 = 0x80400000;
    }
  }
  else {
    uVar1 = iVar4 - 8U >> 3 | iVar4 << 0x1d;
    if (uVar1 < 8) {
      uVar3 = *(undefined4 *)(&DAT_01a63df8 + (long)(int)uVar1 * 4);
    }
    else {
      uVar3 = 0x4c00000;
    }
  }
  local_50 = param_2;
  local_48 = param_3;
  TurboAssembler::LoadStoreMacro(param_1,&local_50,&local_80,uVar3);
  if (param_5 == 4) {
    local_90 = 0x200000003f;
    if ((int)local_50 != 0x3f) {
      local_90 = local_50 & 0xffffffff | 0x2000000000;
    }
    local_88 = 0;
    uVar3 = 0x80400000;
  }
  else {
    if (local_48 == 0) {
      uVar3 = 0xc0400000;
      if (local_50._4_4_ != 0x40) {
        uVar3 = 0x80400000;
      }
    }
    else {
      uVar1 = local_50._4_4_ - 8U >> 3 | local_50._4_4_ << 0x1d;
      if (uVar1 < 8) {
        uVar3 = *(undefined4 *)(&DAT_01a63df8 + (long)(int)uVar1 * 4);
      }
      else {
        uVar3 = 0x4c00000;
      }
    }
    puVar2 = &local_50;
  }
  local_68 = (ulong)param_4;
  uStack_58 = 0xffffffff;
  local_60 = 0xffffffff00000000;
  local_6c = 2;
  local_74 = 0xffffffff;
  local_78 = local_48;
  local_80 = local_50;
  TurboAssembler::LoadStoreMacro(param_1,puVar2,&local_80,uVar3);
  return;
}

