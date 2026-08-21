
/* v8::internal::TurboAssembler::LoadEntryFromBuiltinIndex(v8::internal::Register) */

void v8::internal::TurboAssembler::LoadEntryFromBuiltinIndex
               (TurboAssembler *param_1,ulong param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 local_80;
  int local_78;
  ulong local_70;
  uint local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_40 = 0x200000003f;
  if ((int)param_2 != 0x3f) {
    local_40 = param_2 & 0xffffffff | 0x2000000000;
  }
  local_70 = local_70 & 0xffffffffffffff00;
  local_68 = local_68 & 0xffffff00;
  local_50 = 0;
  local_48 = CONCAT71(local_48._1_7_,0x13);
  uStack_30 = 0x200000006;
  local_38 = 0xffffffff00000000;
  local_80 = param_2;
  local_78 = param_3;
  AddSubMacro(param_1,&local_80,&DAT_019f4144,&local_70,0,0);
  local_58 = 0x2c78;
  local_70 = local_80;
  local_64 = 0xffffffff;
  local_68 = local_78;
  local_5c = 2;
  local_50 = 0xffffffff00000000;
  local_48 = 0xffffffff;
  if (local_78 == 0) {
    uVar3 = 0xc0400000;
    if (local_80._4_4_ != 0x40) {
      uVar3 = 0x80400000;
    }
  }
  else {
    uVar1 = local_80._4_4_ - 8U >> 3 | local_80._4_4_ << 0x1d;
    if (uVar1 < 8) {
      uVar3 = *(undefined4 *)(&DAT_019f3888 + (long)(int)uVar1 * 4);
    }
    else {
      uVar3 = 0x4c00000;
    }
  }
  LoadStoreMacro(param_1,&local_80,&local_70,uVar3);
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

