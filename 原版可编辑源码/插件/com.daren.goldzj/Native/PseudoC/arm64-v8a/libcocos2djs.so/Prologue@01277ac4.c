
/* v8::internal::TurboAssembler::Prologue() */

void __thiscall v8::internal::TurboAssembler::Prologue(TurboAssembler *this)

{
  long lVar1;
  undefined1 local_80 [8];
  undefined1 local_78;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  PushHelper(this,4,8,(CPURegister *)&DAT_019f4198,(CPURegister *)&DAT_019f418c,
             (CPURegister *)&DAT_019f41bc,(CPURegister *)&DAT_019f415c);
  local_80[0] = 0;
  local_78 = 0;
  local_60 = 0x10;
  local_58 = 0x13;
  local_50 = 0xffffffff;
  local_48 = 2;
  AddSubMacro(this,&DAT_019f418c,&DAT_019f3ff4,local_80,0,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

