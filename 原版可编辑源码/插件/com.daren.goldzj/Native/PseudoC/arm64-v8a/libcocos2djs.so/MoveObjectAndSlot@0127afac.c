
/* v8::internal::TurboAssembler::MoveObjectAndSlot(v8::internal::Register, v8::internal::Register,
   v8::internal::Register, v8::internal::Operand) */

void v8::internal::TurboAssembler::MoveObjectAndSlot
               (TurboAssembler *param_1,undefined8 param_2,int param_3,undefined8 param_4,
               int param_5,undefined8 param_6,int param_7,char *param_8)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_b0;
  int local_a8;
  undefined8 local_a0;
  int local_98;
  undefined8 local_90;
  int local_88;
  char local_80 [8];
  undefined1 local_78;
  long local_60;
  undefined1 local_58;
  undefined8 local_50;
  int local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_b0 = param_6;
  local_a8 = param_7;
  local_a0 = param_4;
  local_98 = param_5;
  local_90 = param_2;
  local_88 = param_3;
  if ((((int)param_4 != (int)param_6) ||
      ((int)((ulong)param_4 >> 0x20) != (int)((ulong)param_6 >> 0x20))) || (param_5 != param_7)) {
    if ((((*(int *)(param_8 + 0x30) == -1) && (*(int *)(param_8 + 0x34) == 0)) &&
        ((*(int *)(param_8 + 0x38) == 2 && ((*param_8 == '\0' && (*(long *)(param_8 + 0x20) < 0)))))
        ) && (uVar2 = Assembler::IsImmAddSub(-*(long *)(param_8 + 0x20)), (uVar2 & 1) != 0)) {
      local_58 = 0x13;
      local_60 = -*(long *)(param_8 + 0x20);
      local_80[0] = '\0';
      local_78 = 0;
      local_50 = 0xffffffff;
      local_48 = 2;
      param_8 = local_80;
      uVar4 = 0x40000000;
    }
    else {
      uVar4 = 0;
    }
    AddSubMacro(param_1,&local_a0,&local_b0,param_8,0,uVar4);
    local_80[0] = '\0';
    local_78 = 0;
    local_60 = 0;
    local_58 = 0x13;
    local_44 = 0xffffffff00000000;
    local_50 = local_b0;
    local_48 = local_a8;
    local_3c = 0;
    Mov(param_1,&local_90,local_80,0);
    goto LAB_0127b2a8;
  }
  if ((((((*(int *)(param_8 + 0x30) == -1) && (*(int *)(param_8 + 0x34) == 0)) &&
        (*(int *)(param_8 + 0x38) == 2)) && (*param_8 == '\0')) ||
      (((int)*(undefined8 *)(param_8 + 0x30) != (int)param_2 ||
       (*(int *)(param_8 + 0x38) != param_3)))) ||
     ((int)((ulong)param_2 >> 0x20) != (int)((ulong)*(undefined8 *)(param_8 + 0x30) >> 0x20))) {
    local_80[0] = '\0';
    local_78 = 0;
    local_60 = 0;
    local_58 = 0x13;
    local_44 = 0xffffffff00000000;
    local_3c = 0;
    local_50 = param_4;
    local_48 = param_5;
    Mov(param_1,&local_90,local_80,0);
    if (((*(int *)(param_8 + 0x30) == -1) && (*(int *)(param_8 + 0x34) == 0)) &&
       ((*(int *)(param_8 + 0x38) == 2 &&
        (((*param_8 == '\0' && (*(long *)(param_8 + 0x20) < 0)) &&
         (uVar2 = Assembler::IsImmAddSub(-*(long *)(param_8 + 0x20)), (uVar2 & 1) != 0)))))) {
      local_50 = 0xffffffff;
      local_48 = 2;
      local_60 = -*(long *)(param_8 + 0x20);
      puVar3 = &local_a0;
      goto LAB_0127b0d0;
    }
    puVar3 = &local_a0;
    uVar4 = 0;
  }
  else {
    local_80[0] = '\0';
    local_78 = 0;
    local_60 = 0;
    local_58 = 0x13;
    local_44 = 0xffffffff00000000;
    local_3c = 0;
    local_50 = param_2;
    local_48 = param_3;
    AddSubMacro(param_1,&local_a0,&local_a0,local_80,0,0);
    puVar3 = &local_90;
    local_60 = 0;
    local_44 = 0xffffffff00000000;
    local_50 = local_90;
    local_48 = local_88;
    local_3c = 0;
LAB_0127b0d0:
    local_58 = 0x13;
    local_78 = 0;
    local_80[0] = '\0';
    param_8 = local_80;
    uVar4 = 0x40000000;
  }
  AddSubMacro(param_1,puVar3,&local_a0,param_8,0,uVar4);
LAB_0127b2a8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

