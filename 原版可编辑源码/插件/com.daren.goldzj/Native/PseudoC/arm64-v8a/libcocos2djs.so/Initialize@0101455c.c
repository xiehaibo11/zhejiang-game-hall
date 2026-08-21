
/* v8::internal::LargePage::Initialize(v8::internal::Heap*, v8::internal::MemoryChunk*,
   v8::internal::Executability) */

void v8::internal::LargePage::Initialize(undefined8 param_1,ulong *param_2,int param_3)

{
  if ((param_3 != 0) && (0x20000000 < *param_2)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Code page is too large.");
  }
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[1] = param_2[1] | 0x20;
  return;
}

