
/* v8::internal::StringSet::New(v8::internal::Isolate*) */

void v8::internal::StringSet::New(Isolate *param_1)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = base::bits::RoundUpToPowerOfTwo32(0);
  if (iVar1 < 5) {
    iVar1 = 4;
  }
  else if (0x7fffffa < iVar1) {
                    /* WARNING: Subroutine does not return */
    Heap::FatalProcessOutOfMemory((Heap *)(param_1 + 0x8850),"invalid table size");
  }
  plVar2 = (long *)Factory::NewFixedArrayWithMap<v8::internal::FixedArray>(param_1,0xe,iVar1 + 3,0);
  *(undefined4 *)(*plVar2 + 7) = 0;
  *(undefined4 *)(*plVar2 + 0xb) = 0;
  *(int *)(*plVar2 + 0xf) = iVar1 << 1;
  return;
}

