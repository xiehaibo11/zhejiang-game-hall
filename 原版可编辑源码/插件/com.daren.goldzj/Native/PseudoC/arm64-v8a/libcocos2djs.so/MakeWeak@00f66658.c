
/* v8::internal::GlobalHandles::MakeWeak(unsigned long*, void*, void (*)(v8::WeakCallbackInfo<void>
   const&), v8::WeakCallbackType) */

void v8::internal::GlobalHandles::MakeWeak(long *param_1,long param_2,long param_3,int param_4)

{
  byte bVar1;
  
  if (*param_1 == 0x1baffed00baffedf) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","object_ != kGlobalHandleZapValue");
  }
  bVar1 = *(byte *)((long)param_1 + 0xb);
  *(byte *)((long)param_1 + 0xb) = bVar1 & 0xf8 | 2;
  if (param_4 == 2) {
    bVar1 = bVar1 & 200 | 2;
  }
  else if (param_4 == 1) {
    bVar1 = bVar1 & 200 | 0x22;
  }
  else {
    if (param_4 != 0) goto LAB_00f666cc;
    bVar1 = bVar1 & 200 | 0x12;
  }
  *(byte *)((long)param_1 + 0xb) = bVar1;
LAB_00f666cc:
  param_1[2] = param_2;
  param_1[3] = param_3;
  return;
}

