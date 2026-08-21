
/* v8::internal::TurboAssembler::CallCFunction(v8::internal::ExternalReference, int, int) */

void v8::internal::TurboAssembler::CallCFunction
               (TurboAssembler *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong local_a0;
  undefined4 local_98;
  undefined1 local_90 [8];
  undefined1 local_88;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined4 local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x198);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!available->IsEmpty()");
  }
  uVar4 = *(undefined8 *)(param_1 + 0x1a8);
  uVar2 = CPURegList::PopLowestIndex((CPURegList *)(param_1 + 0x198));
  local_68 = 7;
  local_a0 = 0x400000003f;
  if (uVar2 != 0x3f) {
    local_a0 = (ulong)uVar2 | 0x4000000000;
  }
  local_98 = 0;
  local_90[0] = 0;
  local_88 = 0;
  local_60 = 0xffffffff;
  local_58 = 2;
  local_70 = param_2;
  Mov(param_1,&local_a0,local_90,0);
  CallCFunction(param_1,local_a0,local_98,param_3);
  *(long *)(param_1 + 0x198) = lVar3;
  *(undefined8 *)(param_1 + 0x1a8) = uVar4;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

