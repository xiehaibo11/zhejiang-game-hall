
/* v8::internal::Deserializer::ReadObject(v8::internal::SnapshotSpace) */

long __thiscall v8::internal::Deserializer::ReadObject(Deserializer *this,ulong param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  Isolate *pIVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  long lVar8;
  undefined8 *puVar9;
  Isolate *pIVar10;
  undefined8 *puVar11;
  
  puVar3 = (uint *)(*(long *)(this + 0x70) + (long)*(int *)(this + 0x7c));
  uVar5 = *puVar3;
  iVar1 = ((byte)*puVar3 & 3) + 1;
  *(int *)(this + 0x7c) = iVar1 + *(int *)(this + 0x7c);
  uVar5 = 0xffffffffU >> (ulong)(iVar1 * -8 & 0x1f) & uVar5 & 0xfffffffc;
  lVar8 = DeserializerAllocator::Allocate((DeserializerAllocator *)(this + 0x148),param_2,uVar5);
  pIVar10 = *(Isolate **)(this + 0x50);
  puVar11 = *(undefined8 **)(pIVar10 + 0x9460);
  pIVar4 = pIVar10 + 0x89d0;
  for (puVar9 = *(undefined8 **)(pIVar10 + 0x9458); puVar9 != puVar11; puVar9 = puVar9 + 1) {
    (*(code *)**(undefined8 **)*puVar9)((undefined8 *)*puVar9,lVar8,uVar5);
  }
  if (FLAG_fuzzer_gc_analysis == '\0') {
    if (0 < (int)FLAG_trace_allocation_stack_interval) {
      uVar2 = *(uint *)pIVar4 + 1;
      uVar6 = 0;
      if (FLAG_trace_allocation_stack_interval != 0) {
        uVar6 = uVar2 / FLAG_trace_allocation_stack_interval;
      }
      uVar6 = uVar6 * FLAG_trace_allocation_stack_interval;
      *(uint *)pIVar4 = uVar2;
      if (uVar2 == uVar6) {
        Isolate::PrintStack(pIVar10,waitpid,0);
      }
    }
  }
  else {
    *(uint *)pIVar4 = *(uint *)pIVar4 + 1;
  }
  bVar7 = ReadData<v8::internal::CompressedMaybeObjectSlot>
                    (this,lVar8,lVar8 + (int)uVar5,param_2 & 0xffffffff,lVar8);
  if (!bVar7) {
    return lVar8 + 1;
  }
  lVar8 = PostProcessNewObject(this,lVar8 + 1,param_2 & 0xffffffff);
  return lVar8;
}

