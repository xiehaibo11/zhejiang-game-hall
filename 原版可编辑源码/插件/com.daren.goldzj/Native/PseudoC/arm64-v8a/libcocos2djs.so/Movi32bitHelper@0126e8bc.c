
/* v8::internal::TurboAssembler::Movi32bitHelper(v8::internal::VRegister const&, unsigned long) */

void __thiscall
v8::internal::TurboAssembler::Movi32bitHelper(TurboAssembler *this,VRegister *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong local_40;
  ulong local_38;
  ulong local_18;
  
  uVar1 = (uint)param_2;
  uVar5 = (uint)(param_2 >> 0x10);
  local_18 = param_2;
  if ((((((param_2 & 0xff) == 0) || ((uVar1 & 0xff) == 0xff)) &&
       (((param_2 >> 8 & 0xff) == 0 || (((uint)(param_2 >> 8) & 0xff) == 0xff)))) &&
      (((uVar5 & 0xff) == 0xff || ((param_2 & 0xff0000) == 0)))) &&
     ((((uint)(param_2 >> 0x18) & 0xff) == 0xff || ((param_2 & 0xff000000) == 0)))) {
    local_40 = 0x4000000000;
    if (*(int *)(param_1 + 4) != 0x40) {
      local_40 = 0x8000000000;
    }
    local_38 = 0x100000001;
    if (*(int *)(param_1 + 4) != 0x40) {
      local_38 = 0x200000001;
    }
    local_40 = local_40 | *(uint *)param_1;
    uVar2 = param_2 | param_2 << 0x20;
    param_1 = (VRegister *)&local_40;
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    if (param_2 < 0x100) {
      uVar2 = 0;
      uVar4 = 0;
    }
    else if ((param_2 & 0xffffffffffff00ff) == 0) {
      uVar4 = 8;
      uVar2 = 1;
    }
    else if ((param_2 & 0xffffffffff00ffff) == 0) {
      uVar4 = 0x10;
      uVar2 = 2;
    }
    else {
      if ((param_2 & 0xffffff) != 0) {
        if ((~uVar1 & 0xffffff00) == 0) {
          uVar2 = 0;
          uVar3 = 0;
        }
        else {
          uVar2 = param_2 & 0xffff00ff;
          if (uVar2 == 0xffff00ff) {
            uVar3 = 8;
            uVar2 = 1;
          }
          else {
            uVar6 = param_2 & 0xff00ffff;
            if (uVar6 == 0xff00ffff) {
              uVar3 = 0x10;
              uVar2 = 2;
            }
            else {
              if ((~uVar1 & 0xffffff) != 0) {
                if (uVar6 == 0xffff) {
                  uVar2 = param_2 >> 0x10 & 0xff;
                  uVar3 = 4;
                  uVar4 = 0x10;
                }
                else {
                  if (uVar2 != 0xff) {
                    if (uVar6 == 0xff000000) {
                      Assembler::mvni((Assembler *)this,param_1,(uVar1 >> 0x10 ^ 0xffffffff) & 0xff,
                                      4,0x10);
                      return;
                    }
                    if (uVar2 == 0xffff0000) {
                      Assembler::mvni((Assembler *)this,param_1,(uVar1 >> 8 ^ 0xffffffff) & 0xff,4,8
                                     );
                      return;
                    }
                    if (((uVar5 ^ uVar1) & 0xffff) == 0) {
                      local_38 = 0x400000001;
                      local_40 = 0x4000000000;
                      if (*(int *)(param_1 + 4) != 0x40) {
                        local_40 = 0x8000000000;
                        local_38 = 0x800000001;
                      }
                      local_40 = local_40 | *(uint *)param_1;
                      Movi16bitHelper(this,(VRegister *)&local_40,param_2 & 0xffff);
                      return;
                    }
                    lVar7 = *(long *)(this + 0x198);
                    if (lVar7 != 0) {
                      uVar3 = *(undefined8 *)(this + 0x1a8);
                      uVar1 = CPURegList::PopLowestIndex((CPURegList *)(this + 0x198));
                      local_40 = 0x200000003f;
                      if (uVar1 != 0x3f) {
                        local_40 = (ulong)uVar1 | 0x2000000000;
                      }
                      local_38 = local_38 & 0xffffffff00000000;
                      Mov(this,(Register *)&local_40,param_2);
                      Assembler::dup((Assembler *)this,param_1,(Register *)&local_40);
                      *(long *)(this + 0x198) = lVar7;
                      *(undefined8 *)(this + 0x1a8) = uVar3;
                      return;
                    }
                    /* WARNING: Subroutine does not return */
                    V8_Fatal("Check failed: %s.","!available->IsEmpty()");
                  }
                  uVar2 = param_2 >> 8 & 0xff;
                  uVar3 = 4;
                  uVar4 = 8;
                }
                goto LAB_0126e9bc;
              }
              uVar3 = 0x18;
              uVar2 = 3;
            }
          }
        }
        Assembler::mvni((Assembler *)this,param_1,*(byte *)((ulong)&local_18 | uVar2) ^ 0xff,0,uVar3
                       );
        return;
      }
      uVar4 = 0x18;
      uVar2 = 3;
    }
    uVar2 = (ulong)*(byte *)((ulong)&local_18 | uVar2);
    uVar3 = 0;
  }
LAB_0126e9bc:
  Assembler::movi((Assembler *)this,param_1,uVar2,uVar3,uVar4);
  return;
}

