
/* v8::internal::TurboAssembler::CopySlots(int, v8::internal::Register, v8::internal::Register) */

void v8::internal::TurboAssembler::CopySlots
               (TurboAssembler *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5,undefined4 param_6)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b0 [8];
  undefined1 local_a8;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(param_1 + 0x198);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!available->IsEmpty()");
  }
  uVar5 = *(undefined8 *)(param_1 + 0x1a8);
  uVar3 = CPURegList::PopLowestIndex((CPURegList *)(param_1 + 0x198));
  uVar1 = 0x400000003f;
  if (uVar3 != 0x3f) {
    uVar1 = (ulong)uVar3 | 0x4000000000;
  }
  SlotAddress(param_1,uVar1,0,param_2);
  local_b0[0] = 0;
  local_a8 = 0;
  local_90 = 0;
  local_88 = 0x13;
  local_74 = 0xffffffff00000000;
  local_6c = 3;
  local_c0 = param_3;
  local_b8 = param_4;
  local_80 = param_3;
  local_78 = param_4;
  AddSubMacro(param_1,&local_c0,&DAT_019f3ff4,local_b0,0,0);
  CopyDoubleWords(param_1,uVar1,0,param_3,param_4,param_5,param_6,0);
  *(long *)(param_1 + 0x198) = lVar4;
  *(undefined8 *)(param_1 + 0x1a8) = uVar5;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

