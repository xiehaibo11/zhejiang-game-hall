
/* v8::internal::wasm::LiftoffAssembler::StackCheck(v8::internal::Label*, v8::internal::Register) */

void v8::internal::wasm::LiftoffAssembler::StackCheck
               (TurboAssembler *param_1,undefined8 param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  ulong local_90;
  uint local_88;
  ulong local_80;
  uint local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulong local_50;
  uint local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_74 = 0xffffffff;
  local_6c = 2;
  local_68 = 0;
  local_60 = 0xffffffff00000000;
  local_58 = 0xffffffff;
  iVar3 = (int)(param_3 >> 0x20);
  if (param_4 == 0) {
    uVar4 = 0xc0400000;
    if (iVar3 != 0x40) {
      uVar4 = 0x80400000;
    }
  }
  else {
    uVar1 = iVar3 - 8U >> 3 | iVar3 << 0x1d;
    if (uVar1 < 8) {
      uVar4 = *(undefined4 *)(&DAT_01a63df8 + (long)(int)uVar1 * 4);
    }
    else {
      uVar4 = 0x4c00000;
    }
  }
  local_90 = param_3;
  local_88 = param_4;
  local_80 = param_3;
  local_78 = param_4;
  TurboAssembler::LoadStoreMacro(param_1,&local_90,&local_80,uVar4);
  local_80 = local_80 & 0xffffffffffffff00;
  local_78 = local_78 & 0xffffff00;
  local_60 = 0;
  local_58 = CONCAT71(local_58._1_7_,0x13);
  local_44 = 0xffffffff00000000;
  local_50 = local_90;
  local_48 = local_88;
  local_3c = 0;
  TurboAssembler::AddSubMacro(param_1,&DAT_01a63d28,&DAT_01a63d04,&local_80,1,0x40000000);
  TurboAssembler::B(param_1,param_2,9);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

