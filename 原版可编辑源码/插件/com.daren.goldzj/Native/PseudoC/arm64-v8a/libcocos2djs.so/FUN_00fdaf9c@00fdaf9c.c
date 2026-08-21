
void FUN_00fdaf9c(undefined8 param_1,ulong param_2,undefined8 *param_3)

{
  Instruction IVar1;
  ushort uVar2;
  Instruction *pIVar3;
  uint *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  
  pIVar3 = (Instruction *)*param_3;
  if (*(char *)(param_3 + 1) == '\x02') {
    if (pIVar3[3] != (Instruction)0x18) goto LAB_00fdb0f0;
    lVar6 = param_3[3];
    puVar4 = (uint *)v8::internal::Instruction::ImmPCOffsetTarget(pIVar3);
    puVar5 = (undefined8 *)(lVar6 - 1U & 0xffffffff00000000 | (ulong)*puVar4);
  }
  else {
    IVar1 = pIVar3[3];
    puVar5 = (undefined8 *)v8::internal::Instruction::ImmPCOffsetTarget(pIVar3);
    if (IVar1 == (Instruction)0x58) {
      puVar5 = (undefined8 *)*puVar5;
    }
  }
  if (((*(byte *)(param_2 + 0x17) & 0x3e) == 0) &&
     ((*(uint *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0xf)) + 7) >> 3 & 1) !=
      0)) {
    uVar2 = *(ushort *)
             (((ulong)puVar5 & 0xffffffff00000000 | (ulong)*(uint *)((long)puVar5 + -1)) + 7);
    if (uVar2 == 0xa5) {
      return;
    }
    if (uVar2 == 0xa2) {
      if (0xa9 < *(ushort *)((long)puVar5 + 7)) {
        return;
      }
    }
    else {
      if (0xa8 < uVar2) {
        return;
      }
      if ((ushort)(uVar2 - 0x88) < 10) {
        return;
      }
    }
  }
  pIVar3 = (Instruction *)*param_3;
  if (*(char *)(param_3 + 1) == '\x02') {
    if (pIVar3[3] != (Instruction)0x18) {
LAB_00fdb0f0:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","instr->IsLdrLiteralW()");
    }
    lVar6 = param_3[3];
    puVar4 = (uint *)v8::internal::Instruction::ImmPCOffsetTarget(pIVar3);
    puVar5 = (undefined8 *)(lVar6 - 1U & 0xffffffff00000000 | (ulong)*puVar4);
  }
  else {
    IVar1 = pIVar3[3];
    puVar5 = (undefined8 *)v8::internal::Instruction::ImmPCOffsetTarget(pIVar3);
    if (IVar1 == (Instruction)0x58) {
      puVar5 = (undefined8 *)*puVar5;
    }
  }
  uVar7 = (long)puVar5 - ((ulong)puVar5 & 0xfffffffffffc0000);
  if ((*(uint *)(*(long *)(((ulong)puVar5 & 0xfffffffffffc0000) + 0x10) +
                (uVar7 >> 7 & 0x1ffffff) * 4) >> (ulong)((uint)(uVar7 >> 2) & 0x1f) & 1) != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","marking_state_->IsBlackOrGrey(heap_object)");
}

