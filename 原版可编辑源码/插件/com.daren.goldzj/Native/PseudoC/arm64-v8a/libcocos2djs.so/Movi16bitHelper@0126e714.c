
/* v8::internal::TurboAssembler::Movi16bitHelper(v8::internal::VRegister const&, unsigned long) */

void __thiscall
v8::internal::TurboAssembler::Movi16bitHelper(TurboAssembler *this,VRegister *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong local_50;
  undefined8 local_48;
  
  uVar1 = (uint)param_2 & 0xff;
  uVar2 = (uint)param_2 >> 8 & 0xff;
  if (uVar1 == uVar2) {
    local_48 = 0x800000001;
    local_50 = 0x4000000000;
    if (*(int *)(param_1 + 4) != 0x40) {
      local_50 = 0x8000000000;
      local_48 = 0x1000000001;
    }
    local_50 = local_50 | *(uint *)param_1;
    Assembler::movi((Assembler *)this,&local_50,uVar1,0,0);
    return;
  }
  if ((param_2 & 0xff) == 0) {
    uVar3 = 8;
  }
  else {
    if (uVar2 != 0) {
      if (uVar1 == 0xff) {
        uVar3 = 8;
        uVar1 = uVar2;
      }
      else {
        if (uVar2 != 0xff) {
          lVar4 = *(long *)(this + 0x198);
          if (lVar4 != 0) {
            uVar3 = *(undefined8 *)(this + 0x1a8);
            uVar1 = CPURegList::PopLowestIndex((CPURegList *)(this + 0x198));
            local_50 = 0x200000003f;
            if (uVar1 != 0x3f) {
              local_50 = (ulong)uVar1 | 0x2000000000;
            }
            local_48 = (ulong)local_48._4_4_ << 0x20;
            Assembler::MoveWide((Assembler *)this,&local_50,param_2,0xffffffff,0x40000000);
            Assembler::dup((Assembler *)this,param_1,(Register *)&local_50);
            *(long *)(this + 0x198) = lVar4;
            *(undefined8 *)(this + 0x1a8) = uVar3;
            return;
          }
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","!available->IsEmpty()");
        }
        uVar3 = 0;
      }
      Assembler::mvni((Assembler *)this,param_1,uVar1 ^ 0xff,0,uVar3);
      return;
    }
    uVar3 = 0;
    uVar2 = uVar1;
  }
  Assembler::movi((Assembler *)this,param_1,uVar2,0,uVar3);
  return;
}

