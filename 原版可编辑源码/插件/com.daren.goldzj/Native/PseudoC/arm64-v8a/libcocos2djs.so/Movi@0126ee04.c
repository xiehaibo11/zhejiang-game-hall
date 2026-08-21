
/* v8::internal::TurboAssembler::Movi(v8::internal::VRegister const&, unsigned long, unsigned long)
    */

void __thiscall
v8::internal::TurboAssembler::Movi
          (TurboAssembler *this,VRegister *param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong local_60;
  undefined4 local_58;
  ulong local_50 [2];
  
  uVar3 = *(undefined8 *)(this + 0x198);
  uVar2 = *(undefined8 *)(this + 0x1a8);
  local_50[0] = (ulong)*(uint *)param_1 | 0x8000000000;
  local_50[1] = 0x200000001;
  Movi(this,local_50,param_3,0,0);
  if (*(long *)(this + 0x198) != 0) {
    uVar1 = CPURegList::PopLowestIndex((CPURegList *)(this + 0x198));
    local_60 = 0x400000003f;
    if (uVar1 != 0x3f) {
      local_60 = (ulong)uVar1 | 0x4000000000;
    }
    local_58 = 0;
    Mov(this,(Register *)&local_60,param_2);
    local_50[0] = (ulong)*(uint *)param_1 | 0x8000000000;
    local_50[1] = 0x200000001;
    Assembler::ins((Assembler *)this,(VRegister *)local_50,1,(Register *)&local_60);
    *(undefined8 *)(this + 0x198) = uVar3;
    *(undefined8 *)(this + 0x1a8) = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!available->IsEmpty()");
}

