
/* v8::internal::Factory::AllocateRawWeakArrayList(int, v8::internal::AllocationType) */

void __thiscall
v8::internal::Factory::AllocateRawWeakArrayList(Factory *this,uint param_1,undefined4 param_3)

{
  if (0x7fffffc < param_1) {
                    /* WARNING: Subroutine does not return */
    Heap::FatalProcessOutOfMemory((Heap *)(this + 0x8850),"invalid array length");
  }
  AllocateRawArray(this,param_1 * 4 + 0xc,param_3);
  return;
}

