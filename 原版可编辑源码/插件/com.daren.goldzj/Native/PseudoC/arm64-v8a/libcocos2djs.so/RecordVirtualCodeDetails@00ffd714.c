
/* v8::internal::ObjectStatsCollectorImpl::RecordVirtualCodeDetails(v8::internal::Code) */

void __thiscall
v8::internal::ObjectStatsCollectorImpl::RecordVirtualCodeDetails
          (ObjectStatsCollectorImpl *this,ulong param_2)

{
  Instruction IVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_80 [2];
  Instruction *local_70;
  char local_68;
  long local_58;
  char local_48;
  
  uVar2 = *(uint *)(param_2 + 0x17) >> 1 & 0x1f;
  if (0xb < uVar2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  uVar8 = param_2 & 0xffffffff00000000;
  local_80[0] = param_2;
  iVar3 = HeapObject::SizeFromMap((HeapObject *)local_80,uVar8 | *(uint *)(param_2 - 1));
  RecordVirtualObjectStats(this,0,param_2,uVar2,(long)iVar3,0,0);
  uVar6 = uVar8 | *(uint *)(param_2 + 7);
  local_80[0] = uVar6;
  iVar3 = HeapObject::SizeFromMap((HeapObject *)local_80,uVar8 | *(uint *)(uVar6 - 1));
  RecordVirtualObjectStats(this,param_2,uVar6,0x15,(long)iVar3,0,0);
  uVar6 = uVar8 | *(uint *)(param_2 + 3);
  local_80[0] = uVar6;
  iVar3 = HeapObject::SizeFromMap((HeapObject *)local_80,uVar8 | *(uint *)(uVar6 - 1));
  RecordVirtualObjectStats(this,param_2,uVar6,0x3f,(long)iVar3,0,0);
  if ((*(uint *)(param_2 + 0xb) & 1) != 0) {
    uVar6 = uVar8 | *(uint *)(param_2 + 0xb);
    if (*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x69) {
      uVar6 = uVar8 | *(uint *)(uVar6 + 3);
    }
    local_80[0] = uVar6;
    iVar3 = HeapObject::SizeFromMap((HeapObject *)local_80,uVar8 | *(uint *)(uVar6 - 1));
    RecordVirtualObjectStats(this,param_2,uVar6,0x4c,(long)iVar3,0,0);
  }
  if (((*(byte *)(param_2 + 0x17) & 0x3e) == 0) &&
     (uVar6 = uVar8 | *(uint *)(param_2 + 7), 1 < *(int *)(uVar6 + 3))) {
    uVar7 = uVar8 | *(uint *)(uVar6 + 0xf);
    local_80[0] = uVar7;
    iVar3 = HeapObject::SizeFromMap((HeapObject *)local_80,uVar8 | *(uint *)(uVar7 - 1));
    RecordVirtualObjectStats(this,uVar6,uVar7,0x38,(long)iVar3,0,0);
  }
  RelocIterator::RelocIterator((RelocIterator *)local_80,param_2,0xc);
  do {
    if (local_48 != '\0') {
      return;
    }
    if (local_68 == '\x02') {
      if (local_70[3] != (Instruction)0x18) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","instr->IsLdrLiteralW()");
      }
      uVar6 = local_58 - 1;
      puVar4 = (uint *)Instruction::ImmPCOffsetTarget(local_70);
      puVar5 = (undefined8 *)(uVar6 & 0xffffffff00000000 | (ulong)*puVar4);
      if ((*puVar4 & 1) != 0) {
LAB_00ffd930:
        if (*(short *)(((ulong)puVar5 & 0xffffffff00000000 | 7) +
                      (ulong)*(uint *)((long)puVar5 + -1)) == 0x76) {
          RecordVirtualObjectsForConstantPoolOrEmbeddedObjects(this,param_2,puVar5,0x18);
        }
      }
    }
    else {
      IVar1 = local_70[3];
      puVar5 = (undefined8 *)Instruction::ImmPCOffsetTarget(local_70);
      if (IVar1 == (Instruction)0x58) {
        puVar5 = (undefined8 *)*puVar5;
      }
      if (((ulong)puVar5 & 1) != 0) goto LAB_00ffd930;
    }
    RelocIterator::next((RelocIterator *)local_80);
  } while( true );
}

