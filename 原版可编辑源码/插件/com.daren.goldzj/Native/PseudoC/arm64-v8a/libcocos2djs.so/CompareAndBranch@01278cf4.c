
/* v8::internal::TurboAssembler::CompareAndBranch(v8::internal::Register const&,
   v8::internal::Operand const&, v8::internal::Condition, v8::internal::Label*) */

void __thiscall
v8::internal::TurboAssembler::CompareAndBranch
          (TurboAssembler *this,Register *param_1,char *param_2,uint param_4,Label *param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  char local_a0 [8];
  undefined1 local_98;
  long local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined4 local_68;
  long local_58;
  
  pcVar4 = local_a0;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((*(int *)(param_2 + 0x30) == -1) && (*(int *)(param_2 + 0x34) == 0)) {
    if ((((*(int *)(param_2 + 0x38) == 2) && (*param_2 == '\0')) && (param_4 < 2)) &&
       (*(long *)(param_2 + 0x20) == 0)) {
      if (param_4 == 0) {
        Cbz(this,param_1,param_5);
      }
      else {
        Cbnz(this,param_1,param_5);
      }
      goto LAB_01278d8c;
    }
    puVar3 = &DAT_019f4018;
    if (*(int *)(param_1 + 4) != 0x40) {
      puVar3 = &DAT_019f4000;
    }
    if (((*(int *)(param_2 + 0x38) != 2) || (*param_2 != '\0')) ||
       ((-1 < *(long *)(param_2 + 0x20) ||
        (uVar2 = Assembler::IsImmAddSub(-*(long *)(param_2 + 0x20)), (uVar2 & 1) == 0))))
    goto LAB_01278d60;
    local_78 = 0x13;
    local_70 = 0xffffffff;
    local_68 = 2;
    local_80 = -*(long *)(param_2 + 0x20);
    local_a0[0] = '\0';
    local_98 = 0;
    uVar5 = 0;
  }
  else {
    puVar3 = &DAT_019f4018;
    if (*(int *)(param_1 + 4) != 0x40) {
      puVar3 = &DAT_019f4000;
    }
LAB_01278d60:
    uVar5 = 0x40000000;
    pcVar4 = param_2;
  }
  AddSubMacro(this,puVar3,param_1,pcVar4,1,uVar5);
  B(this,param_5,param_4);
LAB_01278d8c:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

