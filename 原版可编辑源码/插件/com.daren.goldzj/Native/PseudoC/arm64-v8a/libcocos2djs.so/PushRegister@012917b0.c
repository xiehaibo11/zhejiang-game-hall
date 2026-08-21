
/* v8::internal::RegExpMacroAssemblerARM64::PushRegister(int,
   v8::internal::RegExpMacroAssembler::StackCheckFlag) */

void __thiscall
v8::internal::RegExpMacroAssemblerARM64::PushRegister
          (RegExpMacroAssemblerARM64 *this,undefined8 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30 [12];
  
  local_30 = GetRegister(this,param_2,0x200000000a,0);
  local_60 = 0x4000000017;
  local_48 = 0xfffffffffffffffc;
  local_58 = 0;
  local_54 = 0xffffffff;
  local_4c = 2;
  local_40 = 0xffffffff00000001;
  uStack_38 = 0xffffffff;
  iVar2 = local_30._4_4_;
  if (local_30._8_4_ == 0) {
    uVar3 = 0xc0000000;
    if (iVar2 != 0x40) {
      uVar3 = 0x80000000;
    }
  }
  else {
    uVar1 = iVar2 - 8U >> 3 | iVar2 << 0x1d;
    if (uVar1 < 8) {
      uVar3 = *(undefined4 *)(&DAT_019f38a8 + (long)(int)uVar1 * 4);
    }
    else {
      uVar3 = 0x4800000;
    }
  }
  TurboAssembler::LoadStoreMacro(*(TurboAssembler **)(this + 0x28),local_30,&local_60,uVar3);
  if (param_3 != 0) {
    CheckStackLimit(this);
  }
  return;
}

