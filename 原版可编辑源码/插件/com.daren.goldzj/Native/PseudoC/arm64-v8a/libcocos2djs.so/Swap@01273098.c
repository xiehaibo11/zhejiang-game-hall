
/* v8::internal::TurboAssembler::Swap(v8::internal::VRegister, v8::internal::VRegister) */

void v8::internal::TurboAssembler::Swap
               (Assembler *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  CPURegList *this;
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong local_60 [3];
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar4 = *(undefined8 *)(param_1 + 0x198);
  lVar3 = *(long *)(param_1 + 0x1a8);
  this = (CPURegList *)(param_1 + 0x1a8);
  local_60[1] = 2;
  local_60[0] = 0xffffffff;
  local_60[2] = param_4;
  uStack_48 = param_5;
  local_40 = param_2;
  uStack_38 = param_3;
  if ((int)param_3 == 1) {
    iVar2 = (int)((ulong)param_2 >> 0x20);
    if (iVar2 == 0x40) {
      if (lVar3 != 0) {
        uVar1 = CPURegList::PopLowestIndex(this);
        local_60[0] = 0x4000000000;
        goto LAB_01273108;
      }
      goto LAB_01273174;
    }
    if (iVar2 == 0x20) {
      if (lVar3 == 0) goto LAB_01273174;
      uVar1 = CPURegList::PopLowestIndex(this);
      local_60[0] = 0x2000000000;
      goto LAB_01273108;
    }
  }
  if (lVar3 != 0) {
    uVar1 = CPURegList::PopLowestIndex(this);
    local_60[0] = 0x8000000000;
LAB_01273108:
    local_60[0] = local_60[0] | uVar1 & 0xffffffff;
    local_60[1] = 0x100000001;
    Assembler::mov(param_1,(VRegister *)local_60,(VRegister *)(local_60 + 2));
    Assembler::mov(param_1,(VRegister *)(local_60 + 2),(VRegister *)&local_40);
    Assembler::mov(param_1,(VRegister *)&local_40,(VRegister *)local_60);
    *(undefined8 *)(param_1 + 0x198) = uVar4;
    *(long *)(param_1 + 0x1a8) = lVar3;
    return;
  }
LAB_01273174:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!available->IsEmpty()");
}

