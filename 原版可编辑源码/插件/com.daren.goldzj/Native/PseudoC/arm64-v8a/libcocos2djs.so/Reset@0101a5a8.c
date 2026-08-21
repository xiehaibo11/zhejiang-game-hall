
/* v8::internal::FreeListCategory::Reset(v8::internal::FreeList*) */

void __thiscall v8::internal::FreeListCategory::Reset(FreeListCategory *this,FreeList *param_1)

{
  if ((((*(long *)(this + 0x10) != 0) || (*(long *)(this + 0x18) != 0)) ||
      (*(FreeListCategory **)(*(long *)(param_1 + 0x20) + (long)*(int *)this * 8) == this)) &&
     (*(int *)(this + 8) != 0)) {
    *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) - (ulong)*(uint *)(this + 4);
  }
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined8 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined8 *)(this + 0x14) = 0;
  return;
}

