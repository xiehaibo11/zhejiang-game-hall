
void FUN_00fdaefc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  Instruction IVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  IVar1 = ((Instruction *)*param_3)[3];
  puVar2 = (undefined8 *)v8::internal::Instruction::ImmPCOffsetTarget((Instruction *)*param_3);
  if (IVar1 == (Instruction)0x58) {
    puVar2 = (undefined8 *)*puVar2;
  }
  puVar3 = (undefined8 *)v8::internal::Isolate::CurrentEmbeddedBlob();
  uVar4 = v8::internal::Isolate::CurrentEmbeddedBlobSize();
  if ((puVar3 <= puVar2) && (puVar2 < (undefined8 *)((long)puVar3 + (uVar4 & 0xffffffff)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","address < start || address >= end");
  }
  uVar5 = (long)puVar2 - 0x3fU & 0xfffffffffffc0000;
  uVar4 = ((long)puVar2 - 0x3fU) - uVar5;
  if ((*(uint *)(*(long *)(uVar5 + 0x10) + (uVar4 >> 7 & 0x1ffffff) * 4) >>
       (ulong)((uint)(uVar4 >> 2) & 0x1f) & 1) != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","marking_state_->IsBlackOrGrey(heap_object)");
}

