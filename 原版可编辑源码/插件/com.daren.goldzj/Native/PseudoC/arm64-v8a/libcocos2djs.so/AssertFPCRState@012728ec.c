
/* v8::internal::TurboAssembler::AssertFPCRState(v8::internal::Register) */

void v8::internal::TurboAssembler::AssertFPCRState
               (TurboAssembler *param_1,ulong param_2,int param_3)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  int local_88;
  undefined1 local_80 [8];
  undefined1 local_78;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_90 = param_2;
  local_88 = param_3;
  if (param_1[0xc0] != (TurboAssembler)0x0) {
    local_a0 = 0;
    uStack_98 = 0;
    lVar4 = *(long *)(param_1 + 0x198);
    uVar5 = *(undefined8 *)(param_1 + 0x1a8);
    if (param_3 == 2) {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!available->IsEmpty()");
      }
      uVar3 = CPURegList::PopLowestIndex((CPURegList *)(param_1 + 0x198));
      local_90 = 0x400000003f;
      if (uVar3 != 0x3f) {
        local_90 = (ulong)uVar3 | 0x4000000000;
      }
      local_88 = 0;
      Assembler::mrs((Assembler *)param_1,&local_90,0x5a20);
    }
    Tbnz(param_1,(Register *)&local_90,0x18,(Label *)&uStack_98);
    local_60 = 0xc00000;
    local_58 = 0x13;
    local_50 = 0xffffffff;
    puVar1 = &DAT_019f4018;
    if (local_90._4_4_ != 0x40) {
      puVar1 = &DAT_019f4000;
    }
    local_80[0] = 0;
    local_78 = 0;
    local_48 = 2;
    LogicalMacro(param_1,puVar1,&local_90,local_80,0x60000000);
    B(param_1,&local_a0,0);
    Assembler::bind((Label *)param_1);
    Abort(param_1,0x26);
    Assembler::bind((Label *)param_1);
    *(long *)(param_1 + 0x198) = lVar4;
    *(undefined8 *)(param_1 + 0x1a8) = uVar5;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

