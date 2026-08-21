
/* v8::internal::Heap::FatalProcessOutOfMemory(char const*) */

void __thiscall v8::internal::Heap::FatalProcessOutOfMemory(Heap *this,char *param_1)

{
                    /* WARNING: Subroutine does not return */
  V8::FatalProcessOutOfMemory((Isolate *)(this + -0x8850),param_1,true);
}

