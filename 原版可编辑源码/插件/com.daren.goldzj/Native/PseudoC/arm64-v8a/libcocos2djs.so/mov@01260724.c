
/* v8::internal::Assembler::mov(v8::internal::Register const&, v8::internal::Register const&) */

void __thiscall v8::internal::Assembler::mov(Assembler *this,Register *param_1,Register *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 local_70 [8];
  undefined1 local_68;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  int local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (((*(int *)(param_1 + 8) == 0) && (*(int *)param_1 == 0x3f)) ||
     ((local_38 = *(int *)(param_2 + 8), local_38 == 0 && (*(int *)param_2 == 0x3f)))) {
    local_70[0] = 0;
    local_68 = 0;
    local_50 = 0;
    local_48 = 0x13;
    local_40 = 0xffffffff;
    local_38 = 2;
    AddSub();
  }
  else {
    local_40 = *(undefined8 *)param_2;
    puVar1 = &DAT_019f3858;
    if (*(int *)(param_1 + 4) != 0x40) {
      puVar1 = &DAT_019f3864;
    }
    local_70[0] = 0;
    local_68 = 0;
    local_50 = 0;
    local_48 = 0x13;
    local_34 = 0xffffffff00000000;
    local_2c = 0;
    Logical(this,param_1,puVar1,local_70,0x20000000);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

