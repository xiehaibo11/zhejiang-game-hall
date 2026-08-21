
/* v8::internal::Heap::AddDirtyJSFinalizationGroup(v8::internal::JSFinalizationGroup,
   std::__ndk1::function<void (v8::internal::HeapObject, v8::internal::CompressedObjectSlot,
   v8::internal::Object)>) */

void __thiscall
v8::internal::Heap::AddDirtyJSFinalizationGroup(Heap *this,ulong param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  MemoryChunk *this_00;
  SlotSet *pSVar9;
  undefined8 local_68;
  long lStack_60;
  ulong local_58;
  
  *(uint *)(param_2 + 0x23) = *(uint *)(param_2 + 0x23) & 0xfffffffc | 2;
  uVar6 = *(ulong *)(this + -0x78a8);
  lVar8 = param_2 + 0x1f;
  *(int *)(param_2 + 0x1f) = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar7 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    this_00 = (MemoryChunk *)(param_2 & 0xfffffffffffc0000);
    uVar5 = param_2;
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      IncrementalMarking::RecordWriteSlow
                (*(IncrementalMarking **)(*(long *)(this_00 + 0x18) + 0x828),param_2,lVar8);
      uVar7 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
      uVar5 = extraout_x1;
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((ulong)this_00 | 8) & 0x18) == 0)) {
      pSVar9 = *(SlotSet **)(this_00 + 0x30);
      if (pSVar9 == (SlotSet *)0x0) {
        pSVar9 = MemoryChunk::AllocateSlotSet<(v8::internal::RememberedSetType)0>(this_00);
        uVar5 = extraout_x1_00;
      }
      uVar6 = lVar8 - (long)this_00;
      puVar3 = *(undefined8 **)(pSVar9 + (uVar6 >> 0xc) * 8);
      uVar7 = uVar6 >> 7 & 0x1f;
      if (puVar3 == (undefined8 *)0x0) {
        puVar3 = Malloced::operator_new((Malloced *)0x80,uVar5);
        puVar3[1] = 0;
        *puVar3 = 0;
        puVar3[3] = 0;
        puVar3[2] = 0;
        puVar3[5] = 0;
        puVar3[4] = 0;
        puVar3[7] = 0;
        puVar3[6] = 0;
        puVar3[9] = 0;
        puVar3[8] = 0;
        puVar3[0xb] = 0;
        puVar3[10] = 0;
        puVar3[0xd] = 0;
        puVar3[0xc] = 0;
        puVar3[0xf] = 0;
        puVar3[0xe] = 0;
        *(undefined8 **)(pSVar9 + (uVar6 >> 0xc) * 8) = puVar3;
      }
      uVar1 = *(uint *)((long)puVar3 + uVar7 * 4);
      uVar2 = 1 << (ulong)((uint)uVar6 >> 2 & 0x1f);
      if ((uVar1 & uVar2) == 0) {
        *(uint *)((long)puVar3 + uVar7 * 4) = uVar1 | uVar2;
      }
    }
  }
  local_68 = *(undefined8 *)(this + -0x78a8);
  plVar4 = *(long **)(param_3 + 0x20);
  lStack_60 = lVar8;
  local_58 = param_2;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_58,&lStack_60,&local_68);
    *(ulong *)(this + -0x78a8) = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_008589d0();
}

