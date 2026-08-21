
/* v8::internal::TurboAssembler::Move(v8::internal::Register, v8::internal::Smi) */

void v8::internal::TurboAssembler::Move
               (TurboAssembler *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_70 [8];
  undefined1 local_68;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_70[0] = 0;
  local_68 = 0;
  local_48 = 0x13;
  local_40 = 0xffffffff;
  local_38 = 2;
  local_80 = param_2;
  local_78 = param_3;
  local_50 = param_4;
  Mov(param_1,&local_80,local_70,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

