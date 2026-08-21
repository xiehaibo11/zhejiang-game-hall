
void WebPFreeDecBuffer(long param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xc) == 0) {
      WebPSafeFree(*(void **)(param_1 + 0x70));
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  return;
}

