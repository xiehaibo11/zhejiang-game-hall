
/* v8::internal::BasicBlockProfiler::Data::ResetCounts() */

void __thiscall v8::internal::BasicBlockProfiler::Data::ResetCounts(Data *this)

{
  ulong uVar1;
  
  if (*(long *)this != 0) {
    uVar1 = 0;
    do {
      *(undefined4 *)(*(long *)(this + 0x20) + uVar1 * 4) = 0;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ulong *)this);
  }
  return;
}

