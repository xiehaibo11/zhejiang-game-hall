
/* v8::internal::CPURegList::Align() */

void __thiscall v8::internal::CPURegList::Align(CPURegList *this)

{
  ulong uVar1;
  
  uVar1 = CountSetBits(*(ulong *)this,0x40);
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)this;
    if ((uVar1 & (ulong)(*(int *)(this + 0xc) == 0) << 0x1f) == 0) {
      uVar1 = uVar1 | 0x80000000;
    }
    else {
      if (*(int *)(this + 0xc) != 0) {
        return;
      }
      uVar1 = uVar1 & 0xffffffff7fffffff;
    }
    *(ulong *)this = uVar1;
  }
  return;
}

