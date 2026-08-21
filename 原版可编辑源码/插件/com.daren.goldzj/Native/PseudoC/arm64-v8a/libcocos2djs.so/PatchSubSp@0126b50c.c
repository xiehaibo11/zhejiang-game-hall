
/* v8::internal::PatchingAssembler::PatchSubSp(unsigned int) */

void __thiscall v8::internal::PatchingAssembler::PatchSubSp(PatchingAssembler *this,uint param_1)

{
  long lVar1;
  undefined1 local_70 [8];
  undefined1 local_68;
  ulong local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((**(uint **)(this + 0x10) & 0x1f000000) != 0x11000000) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","expected_adr->IsAddSubImmediate()");
  }
  local_50 = (ulong)param_1;
  local_70[0] = 0;
  local_68 = 0;
  local_48 = 0x13;
  local_40 = 0xffffffff;
  local_38 = 2;
  Assembler::AddSub(this,&DAT_019f387c,&DAT_019f387c,local_70,0,0x40000000);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

