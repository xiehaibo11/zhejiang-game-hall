
/* v8::internal::TransitionArray::TransitionArrayVerify(v8::internal::Isolate*) */

void __thiscall
v8::internal::TransitionArray::TransitionArrayVerify(TransitionArray *this,Isolate *param_1)

{
  int iVar1;
  int iVar2;
  
  WeakFixedArray::WeakFixedArrayVerify((WeakFixedArray *)this,param_1);
  iVar2 = *(int *)(*(long *)this + 3);
  iVar1 = iVar2 >> 1;
  if (iVar2 < 4) {
    if (1 < iVar1) {
      return;
    }
  }
  else if ((int)(*(int *)(*(long *)this + 0xb) + 2U & 0xfffffffe) <= iVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","LengthFor(number_of_transitions()) <= length()");
}

