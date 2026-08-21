
void FUN_00de977c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (param_1 != 0) {
    WebPSafeFree(*(void **)(param_1 + 0xd0));
    WebPSafeFree(*(void **)(param_1 + 0xe8));
    FUN_00e03004(*(undefined8 *)(param_1 + 0xe0));
    FUN_00e02fb0(param_1 + 0xa0);
    FUN_00e02fb0(param_1 + 0xb0);
    memset((void *)(param_1 + 0x98),0,0x58);
    WebPSafeFree(*(void **)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (0 < *(int *)(param_1 + 0xf0)) {
      lVar1 = 0;
      puVar2 = (undefined8 *)(param_1 + 0x108);
      do {
        WebPSafeFree((void *)*puVar2);
        *puVar2 = 0;
        lVar1 = lVar1 + 1;
        puVar2 = puVar2 + 3;
      } while (lVar1 < *(int *)(param_1 + 0xf0));
    }
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
    WebPSafeFree(*(void **)(param_1 + 0x160));
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}

