
/* v8::internal::GlobalHandles::MakeWeak(unsigned long**) */

void v8::internal::GlobalHandles::MakeWeak(ulong **param_1)

{
  ulong *puVar1;
  
  puVar1 = *param_1;
  if (*puVar1 != 0x1baffed00baffedf) {
    puVar1[2] = (ulong)param_1;
    puVar1[3] = 0;
    *(byte *)((long)puVar1 + 0xb) = *(byte *)((long)puVar1 + 0xb) & 0xf8 | 0x32;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","object_ != kGlobalHandleZapValue");
}

