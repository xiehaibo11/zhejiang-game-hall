
/* v8::internal::Heap::AlignWithFiller(v8::internal::HeapObject, int, int,
   v8::internal::AllocationAlignment) */

long __thiscall
v8::internal::Heap::AlignWithFiller(Heap *this,long param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  bVar1 = ((int)param_2 - 1U & 7) == 0;
  param_4 = param_4 - param_3;
  if ((bVar1 && param_5 == 2) || (!bVar1 && param_5 == 1)) {
    param_4 = param_4 + -4;
    *(undefined4 *)(param_2 + -1) = *(undefined4 *)(this + -0x87c8);
    param_2 = param_2 + 4;
  }
  if (param_4 == 0) {
    return param_2;
  }
  puVar3 = (undefined4 *)(param_2 + param_3 + -1);
  if (param_4 == 4) {
    uVar2 = *(undefined4 *)(this + -0x87c8);
  }
  else {
    if (param_4 != 8) {
      *puVar3 = *(undefined4 *)(this + -0x87d0);
      *(int *)(param_2 + param_3 + 3) = param_4 << 1;
      return param_2;
    }
    uVar2 = *(undefined4 *)(this + -0x87c0);
  }
  *puVar3 = uVar2;
  return param_2;
}

