
/* v8::internal::TurboAssembler::Mov(v8::internal::Register const&, v8::internal::Smi) */

void __thiscall
v8::internal::TurboAssembler::Mov(TurboAssembler *this,undefined8 param_1,undefined8 param_3)

{
  long lVar1;
  undefined1 local_70 [8];
  undefined1 local_68;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_48 = 0x13;
  local_70[0] = 0;
  local_68 = 0;
  local_40 = 0xffffffff;
  local_38 = 2;
  local_50 = param_3;
  Mov(this,param_1,local_70,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

