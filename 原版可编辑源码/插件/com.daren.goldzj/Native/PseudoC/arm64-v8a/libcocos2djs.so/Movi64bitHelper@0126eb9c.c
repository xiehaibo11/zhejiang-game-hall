
/* v8::internal::TurboAssembler::Movi64bitHelper(v8::internal::VRegister const&, unsigned long) */

void __thiscall
v8::internal::TurboAssembler::Movi64bitHelper(TurboAssembler *this,VRegister *param_1,ulong param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong local_60;
  undefined4 local_58;
  ulong local_50;
  undefined8 uStack_48;
  
  uVar3 = (uint)param_2;
  if ((((((((uVar3 & 0xff) == 0xff) || ((param_2 & 0xff) == 0)) &&
         ((uVar1 = uVar3 >> 8 & 0xff, uVar1 == 0 || (uVar1 == 0xff)))) &&
        ((uVar3 = uVar3 >> 0x10 & 0xff, uVar3 == 0xff || (uVar3 == 0)))) &&
       ((((uint)(param_2 >> 0x18) & 0xff) == 0xff || ((param_2 & 0xff000000) == 0)))) &&
      ((((uVar3 = (uint)(param_2 >> 0x20), (uVar3 & 0xff) == 0xff || ((param_2 & 0xff00000000) == 0)
         ) && ((uVar3 = uVar3 >> 8 & 0xff, uVar3 == 0xff || (uVar3 == 0)))) &&
       ((((ushort)(param_2 >> 0x30) & 0xff) == 0xff || ((param_2 & 0xff000000000000) == 0)))))) &&
     ((cVar2 = (char)(param_2 >> 0x38), cVar2 == -1 || (cVar2 == '\0')))) {
    Assembler::movi((Assembler *)this,param_1,param_2,0,0);
    return;
  }
  if (param_2 >> 0x20 == (param_2 & 0xffffffff)) {
    uStack_48 = 0x200000001;
    local_50 = 0x4000000000;
    if (*(int *)(param_1 + 4) != 0x40) {
      local_50 = 0x8000000000;
      uStack_48 = 0x400000001;
    }
    local_50 = local_50 | *(uint *)param_1;
    Movi32bitHelper(this,(VRegister *)&local_50,param_2 >> 0x20);
  }
  else {
    lVar4 = *(long *)(this + 0x198);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!available->IsEmpty()");
    }
    uVar5 = *(undefined8 *)(this + 0x1a8);
    uVar3 = CPURegList::PopLowestIndex((CPURegList *)(this + 0x198));
    local_60 = 0x400000003f;
    if (uVar3 != 0x3f) {
      local_60 = (ulong)uVar3 | 0x4000000000;
    }
    local_58 = 0;
    Mov(this,(Register *)&local_60,param_2);
    if ((*(int *)(param_1 + 4) == 0x40) && (*(int *)(param_1 + 0xc) == 1)) {
      local_50 = (ulong)*(uint *)param_1 | 0x4000000000;
      uStack_48 = 0x100000001;
      Assembler::mov((Assembler *)this,(VRegister *)&local_50,0,(Register *)&local_60);
    }
    else {
      local_50 = (ulong)*(uint *)param_1 | 0x8000000000;
      uStack_48 = 0x200000001;
      Assembler::dup((Assembler *)this,(VRegister *)&local_50,(Register *)&local_60);
    }
    *(long *)(this + 0x198) = lVar4;
    *(undefined8 *)(this + 0x1a8) = uVar5;
  }
  return;
}

