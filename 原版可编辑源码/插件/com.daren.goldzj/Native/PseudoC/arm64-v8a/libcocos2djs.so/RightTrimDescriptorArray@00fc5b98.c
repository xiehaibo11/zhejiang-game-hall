
/* v8::internal::MarkCompactCollector::RightTrimDescriptorArray(v8::internal::DescriptorArray, int)
    */

void __thiscall
v8::internal::MarkCompactCollector::RightTrimDescriptorArray
          (MarkCompactCollector *this,ulong param_2,int param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)(param_2 & 0xfffffffffffc0000);
  param_3 = *(short *)(param_2 + 3) - param_3;
  lVar1 = param_2 + (long)(param_3 * 0xc) + 0xf;
  iVar3 = (int)param_2 + *(short *)(param_2 + 3) * 0xc + 0xf;
  iVar2 = (int)lVar1;
  iVar4 = (int)plVar5;
  if (*(SlotSet **)((ulong)plVar5 | 0x30) != (SlotSet *)0x0) {
    SlotSet::RemoveRange
              (*(SlotSet **)((ulong)plVar5 | 0x30),(long)(iVar2 - iVar4),(long)(iVar3 - iVar4),
               *plVar5 + 0xfffU >> 0xc,0);
  }
  if ((SlotSet *)plVar5[7] != (SlotSet *)0x0) {
    SlotSet::RemoveRange
              ((SlotSet *)plVar5[7],(long)(iVar2 - iVar4),(long)(iVar3 - iVar4),
               *plVar5 + 0xfffU >> 0xc,0);
  }
  Heap::CreateFillerObjectAt(*(Heap **)(this + 8),lVar1,iVar3 - iVar2,1,1);
  *(short *)(param_2 + 3) = (short)param_3;
  return;
}

