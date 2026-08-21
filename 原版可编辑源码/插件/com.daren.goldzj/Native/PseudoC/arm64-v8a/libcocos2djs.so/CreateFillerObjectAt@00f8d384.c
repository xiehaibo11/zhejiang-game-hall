
/* v8::internal::Heap::CreateFillerObjectAt(unsigned long, int, v8::internal::ClearRecordedSlots,
   v8::internal::ClearFreedMemoryMode) */

long __thiscall
v8::internal::Heap::CreateFillerObjectAt
          (Heap *this,undefined4 *param_1,uint param_2,int param_4,int param_5)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  
  if (param_2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (long)param_1 + 1;
    if (param_2 == 4) {
      *param_1 = *(undefined4 *)(this + -0x87c8);
    }
    else if (param_2 == 8) {
      *param_1 = *(undefined4 *)(this + -0x87c0);
      if (param_4 == 0 || param_5 == 0) {
        param_1[1] = 0;
      }
    }
    else {
      *param_1 = *(undefined4 *)(this + -0x87d0);
      param_1[1] = param_2 << 1;
      if (((param_2 & 0xfffffffc) != 8) && (param_4 == 0 || param_5 == 0)) {
        uVar1 = param_2 + 3;
        if (-1 < (int)param_2) {
          uVar1 = param_2;
        }
        memset(param_1 + 2,0,
               (-(ulong)((uint)((int)uVar1 >> 2) >> 0x1f) & 0xfffffffc00000000 |
               (ulong)(uint)((int)uVar1 >> 2) << 2) - 8);
      }
    }
    if ((((param_4 == 0) &&
         (plVar2 = (long *)((ulong)param_1 & 0xfffffffffffc0000),
         (*(byte *)(plVar2 + 1) & 0x18) == 0)) && (plVar2[0x15] != 0)) &&
       ((SlotSet *)plVar2[6] != (SlotSet *)0x0)) {
      iVar3 = (int)param_1 - (int)plVar2;
      SlotSet::RemoveRange
                ((SlotSet *)plVar2[6],(long)iVar3,(long)(int)(iVar3 + param_2),
                 *plVar2 + 0xfffU >> 0xc,1);
    }
  }
  return lVar4;
}

