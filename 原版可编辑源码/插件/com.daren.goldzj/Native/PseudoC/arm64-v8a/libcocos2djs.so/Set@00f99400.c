
/* v8::internal::WeakArrayList::Set(int, v8::internal::MaybeObject, v8::internal::WriteBarrierMode)
    */

void __thiscall
v8::internal::WeakArrayList::Set(WeakArrayList *this,ulong param_2,ulong param_3,int param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong extraout_x1;
  ulong extraout_x1_00;
  SlotSet *pSVar6;
  int iVar7;
  MemoryChunk *this_00;
  ulong uVar8;
  
  lVar1 = (long)((int)param_2 << 2) + 0xb;
  iVar7 = (int)param_3;
  *(int *)(lVar1 + *(long *)this) = iVar7;
  if (param_4 != 0) {
    if (((param_4 == 4) && (iVar7 != 3)) && ((param_3 & 1) != 0)) {
      if ((*(byte *)((param_3 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0) {
        uVar5 = *(ulong *)this;
        IncrementalMarking::RecordWriteSlow
                  (*(IncrementalMarking **)(*(long *)((uVar5 & 0xfffffffffffc0000) + 0x18) + 0x828),
                   uVar5,lVar1 + uVar5,param_3 & 0xfffffffffffffffd);
        param_2 = extraout_x1;
      }
      uVar5 = 1;
    }
    else {
      uVar5 = param_3 & 1;
    }
    if (((iVar7 != 3) && (uVar5 != 0)) &&
       ((*(byte *)((param_3 & 0xfffffffffffc0000) + 8) & 0x18) != 0)) {
      uVar5 = *(ulong *)this;
      this_00 = (MemoryChunk *)(uVar5 & 0xfffffffffffc0000);
      if ((*(byte *)((ulong)this_00 | 8) & 0x18) == 0) {
        pSVar6 = *(SlotSet **)(this_00 + 0x30);
        if (pSVar6 == (SlotSet *)0x0) {
          pSVar6 = MemoryChunk::AllocateSlotSet<(v8::internal::RememberedSetType)0>(this_00);
          param_2 = extraout_x1_00;
        }
        uVar5 = (lVar1 + uVar5) - (long)this_00;
        puVar4 = *(undefined8 **)(pSVar6 + (uVar5 >> 0xc) * 8);
        uVar8 = uVar5 >> 7 & 0x1f;
        if (puVar4 == (undefined8 *)0x0) {
          puVar4 = Malloced::operator_new((Malloced *)0x80,param_2);
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
          *(undefined8 **)(pSVar6 + (uVar5 >> 0xc) * 8) = puVar4;
        }
        uVar2 = *(uint *)((long)puVar4 + uVar8 * 4);
        uVar3 = 1 << (ulong)((uint)uVar5 >> 2 & 0x1f);
        if ((uVar2 & uVar3) == 0) {
          *(uint *)((long)puVar4 + uVar8 * 4) = uVar2 | uVar3;
        }
      }
    }
  }
  return;
}

