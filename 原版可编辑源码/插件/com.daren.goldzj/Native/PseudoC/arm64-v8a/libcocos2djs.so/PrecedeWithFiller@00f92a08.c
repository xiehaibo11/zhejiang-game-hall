
/* v8::internal::Heap::PrecedeWithFiller(v8::internal::HeapObject, int) */

long __thiscall v8::internal::Heap::PrecedeWithFiller(Heap *this,long param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
LAB_00f92a50:
    return param_2 + param_3;
  }
  if (param_3 == 4) {
    uVar1 = *(undefined4 *)(this + -0x87c8);
  }
  else {
    if (param_3 != 8) {
      *(undefined4 *)(param_2 + -1) = *(undefined4 *)(this + -0x87d0);
      *(int *)(param_2 + 3) = param_3 << 1;
      goto LAB_00f92a50;
    }
    uVar1 = *(undefined4 *)(this + -0x87c0);
  }
  *(undefined4 *)(param_2 + -1) = uVar1;
  return param_2 + param_3;
}

