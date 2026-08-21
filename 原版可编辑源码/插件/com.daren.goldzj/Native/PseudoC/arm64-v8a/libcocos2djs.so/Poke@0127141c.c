
/* v8::internal::TurboAssembler::Poke(v8::internal::CPURegister const&, v8::internal::Operand
   const&) */

void __thiscall
v8::internal::TurboAssembler::Poke(TurboAssembler *this,CPURegister *param_1,Operand *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  Operand *pOVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  ulong local_90;
  uint local_88;
  undefined8 local_84;
  int local_7c;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar7 = *(int *)(param_2 + 0x30);
  if ((((iVar7 == -1) && (*(int *)(param_2 + 0x34) == 0)) && (*(int *)(param_2 + 0x38) == 2)) &&
     (*param_2 == (Operand)0x0)) {
    iVar7 = -1;
  }
  else if (this[0xc0] != (TurboAssembler)0x0) {
    if ((((iVar7 == -1) && (*(int *)(param_2 + 0x34) == 0)) &&
        ((*(int *)(param_2 + 0x38) == 2 &&
         ((*param_2 == (Operand)0x0 && (*(long *)(param_2 + 0x20) < 0)))))) &&
       (uVar3 = Assembler::IsImmAddSub(-*(long *)(param_2 + 0x20)), (uVar3 & 1) != 0)) {
      local_70 = -*(long *)(param_2 + 0x20);
      local_90 = local_90 & 0xffffffffffffff00;
      local_88 = local_88 & 0xffffff00;
      local_68 = CONCAT71(local_68._1_7_,0x13);
      local_60 = 0xffffffff;
      local_58 = 2;
      uVar5 = 0;
      pOVar4 = (Operand *)&local_90;
    }
    else {
      uVar5 = 0x40000000;
      pOVar4 = param_2;
    }
    AddSubMacro(this,&DAT_019f4018,&DAT_019f4018,pOVar4,1,uVar5);
    local_90 = 0;
    B(this,&local_90,0xd);
    Abort(this,0x22);
    Assembler::bind((Label *)this);
    iVar7 = *(int *)(param_2 + 0x30);
  }
  local_88 = 0;
  local_90 = 0x400000003f;
  local_84 = 0xffffffff;
  local_70 = local_70 & 0xffffffff00000000;
  local_7c = 2;
  if (iVar7 == -1) {
    if (*(int *)(param_2 + 0x34) == 0) {
      iVar7 = *(int *)(param_2 + 0x38);
      if (iVar7 == 2) {
        if (*param_2 == (Operand)0x0) {
          local_78 = *(undefined8 *)(param_2 + 0x20);
          goto LAB_012715fc;
        }
        iVar7 = 2;
      }
    }
    else {
      iVar7 = *(int *)(param_2 + 0x38);
    }
    local_84 = *(undefined8 *)(param_2 + 0x30);
    local_7c = iVar7;
  }
  else {
    local_7c = *(int *)(param_2 + 0x38);
    local_84 = *(undefined8 *)(param_2 + 0x30);
    if (*(uint *)(param_2 + 0x3c) != 0xffffffff) {
      local_70 = (ulong)*(uint *)(param_2 + 0x3c) << 0x20;
      local_78 = 0;
      local_68 = CONCAT44(*(undefined4 *)(param_2 + 0x44),0xffffffff);
      goto LAB_012715fc;
    }
  }
  local_68 = *(undefined8 *)(param_2 + 0x40);
  local_78 = 0;
  local_70 = 0xffffffff00000000;
LAB_012715fc:
  iVar7 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 8) == 0) {
    uVar6 = 0xc0000000;
    if (iVar7 != 0x40) {
      uVar6 = 0x80000000;
    }
  }
  else {
    uVar1 = iVar7 - 8U >> 3 | iVar7 << 0x1d;
    if (uVar1 < 8) {
      uVar6 = *(undefined4 *)(&DAT_019f38a8 + (long)(int)uVar1 * 4);
    }
    else {
      uVar6 = 0x4800000;
    }
  }
  LoadStoreMacro(this,param_1,&local_90,uVar6);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

