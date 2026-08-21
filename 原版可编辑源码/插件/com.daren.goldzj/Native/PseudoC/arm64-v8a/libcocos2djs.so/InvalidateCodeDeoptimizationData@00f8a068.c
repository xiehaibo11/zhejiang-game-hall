
/* v8::internal::Heap::InvalidateCodeDeoptimizationData(v8::internal::Code) */

void __thiscall v8::internal::Heap::InvalidateCodeDeoptimizationData(Heap *this,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  MemoryChunk *this_00;
  SlotSet *pSVar8;
  
  this_00 = (MemoryChunk *)(param_2 & 0xfffffffffffc0000);
  if ((*(char *)(*(long *)(this_00 + 0x18) + 0x168) == '\0') || (((byte)this_00[8] & 1) == 0)) {
    bVar3 = false;
    uVar5 = param_2;
  }
  else {
    MemoryChunk::SetReadAndWritable(this_00);
    bVar3 = true;
    uVar5 = extraout_x1;
  }
  uVar6 = *(ulong *)(this + -0x86e8);
  *(int *)(param_2 + 7) = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar7 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      IncrementalMarking::RecordWriteSlow
                (*(IncrementalMarking **)(*(long *)(this_00 + 0x18) + 0x828),param_2,param_2 + 7);
      uVar7 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
      uVar5 = extraout_x1_00;
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((ulong)this_00 | 8) & 0x18) == 0)) {
      pSVar8 = *(SlotSet **)(this_00 + 0x30);
      if (pSVar8 == (SlotSet *)0x0) {
        pSVar8 = MemoryChunk::AllocateSlotSet<(v8::internal::RememberedSetType)0>(this_00);
        uVar5 = extraout_x1_01;
      }
      uVar6 = (param_2 + 7) - (long)this_00;
      puVar4 = *(undefined8 **)(pSVar8 + (uVar6 >> 0xc) * 8);
      uVar7 = uVar6 >> 7 & 0x1f;
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = Malloced::operator_new((Malloced *)0x80,uVar5);
        puVar4[1] = 0;
        *puVar4 = 0;
        puVar4[3] = 0;
        puVar4[2] = 0;
        puVar4[5] = 0;
        puVar4[4] = 0;
        puVar4[7] = 0;
        puVar4[6] = 0;
        puVar4[9] = 0;
        puVar4[8] = 0;
        puVar4[0xb] = 0;
        puVar4[10] = 0;
        puVar4[0xd] = 0;
        puVar4[0xc] = 0;
        puVar4[0xf] = 0;
        puVar4[0xe] = 0;
        *(undefined8 **)(pSVar8 + (uVar6 >> 0xc) * 8) = puVar4;
      }
      uVar1 = *(uint *)((long)puVar4 + uVar7 * 4);
      uVar2 = 1 << (ulong)((uint)uVar6 >> 2 & 0x1f);
      if ((uVar1 & uVar2) == 0) {
        *(uint *)((long)puVar4 + uVar7 * 4) = uVar1 | uVar2;
      }
    }
  }
  if (bVar3) {
    if (FLAG_jitless != '\0') {
      MemoryChunk::SetReadable(this_00);
      return;
    }
    MemoryChunk::SetReadAndExecutable(this_00);
    return;
  }
  return;
}

