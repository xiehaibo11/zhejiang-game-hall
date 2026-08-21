
/* v8::internal::TurboAssembler::MovePair(v8::internal::Register, v8::internal::Register,
   v8::internal::Register, v8::internal::Register) */

void v8::internal::TurboAssembler::MovePair
               (TurboAssembler *param_1,undefined8 param_2,int param_3,undefined8 param_4,
               int param_5,undefined8 param_6,int param_7,undefined8 param_8,undefined8 param_9,
               int param_10)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_c0;
  int local_b8;
  undefined8 local_b0;
  int local_a8;
  undefined1 local_a0 [8];
  undefined1 local_98;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  int local_68;
  undefined8 local_64;
  undefined4 local_5c;
  long local_58;
  
  puVar2 = &local_c0;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_c0 = param_6;
  local_b8 = param_7;
  local_b0 = param_2;
  local_a8 = param_3;
  if ((((int)param_2 == (int)param_9) &&
      ((int)((ulong)param_2 >> 0x20) == (int)((ulong)param_9 >> 0x20))) && (param_3 == param_10)) {
    if ((((int)param_6 == (int)param_4) &&
        ((int)((ulong)param_6 >> 0x20) == (int)((ulong)param_4 >> 0x20))) && (param_7 == param_5)) {
      Swap(param_1,param_2,param_3,param_4,param_5);
      goto LAB_01272e80;
    }
    local_a0[0] = 0;
    local_98 = 0;
    local_80 = 0;
    local_70 = param_9;
    local_78 = 0x13;
    local_64 = 0xffffffff00000000;
    local_5c = 0;
    local_68 = param_3;
    Mov(param_1,&local_c0,local_a0,0);
    puVar2 = &local_b0;
    local_70 = param_4;
    local_68 = param_5;
  }
  else {
    local_a0[0] = 0;
    local_98 = 0;
    local_80 = 0;
    local_78 = 0x13;
    local_64 = 0xffffffff00000000;
    local_5c = 0;
    local_70 = param_4;
    local_68 = param_5;
    Mov(param_1,&local_b0,local_a0,0);
    local_70 = param_9;
    local_68 = param_10;
  }
  local_5c = 0;
  local_64 = 0xffffffff00000000;
  local_78 = 0x13;
  local_80 = 0;
  local_98 = 0;
  local_a0[0] = 0;
  Mov(param_1,puVar2,local_a0,0);
LAB_01272e80:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

