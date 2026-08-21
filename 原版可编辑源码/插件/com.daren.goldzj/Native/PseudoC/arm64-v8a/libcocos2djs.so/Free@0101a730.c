
/* v8::internal::FreeListCategory::Free(unsigned long, unsigned long, v8::internal::FreeMode,
   v8::internal::FreeList*) */

void __thiscall
v8::internal::FreeListCategory::Free
          (FreeListCategory *this,long param_1,long param_2,int param_4,long *param_5)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 8);
  *(long *)(this + 8) = param_1 + 1;
  *(int *)(this + 4) = *(int *)(this + 4) + (int)param_2;
  if (param_4 != 0) {
    return;
  }
  if (((*(long *)(this + 0x10) == 0) && (*(long *)(this + 0x18) == 0)) &&
     (*(FreeListCategory **)(param_5[4] + (long)*(int *)this * 8) != this)) {
                    /* WARNING: Could not recover jumptable at 0x0101a79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_5 + 0x38))(param_5,this);
    return;
  }
  param_5[5] = param_5[5] + param_2;
  return;
}

