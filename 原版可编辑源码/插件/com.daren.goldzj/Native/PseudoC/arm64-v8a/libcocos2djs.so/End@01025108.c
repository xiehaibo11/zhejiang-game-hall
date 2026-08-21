
/* v8::internal::ICStats::End() */

void __thiscall v8::internal::ICStats::End(ICStats *this)

{
  int iVar1;
  
  if (*(int *)(this + 4) == 1) {
    iVar1 = *(int *)(this + 0x70);
    *(int *)(this + 0x70) = iVar1 + 1;
    if (iVar1 + 1 == *(int *)this) {
      Dump(this);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}

