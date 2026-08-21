
/* v8::Context::GetNumberOfEmbedderDataFields() */

int __thiscall v8::Context::GetNumberOfEmbedderDataFields(Context *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)this;
  if (*(short *)((uVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar1 - 1)) == 0x8f) {
    return *(int *)((uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 0x17)) + 3) >> 1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","context->IsNativeContext()");
}

