
undefined4 * FUN_01143b34(void)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined4 *)WebPSafeCalloc(1,0xbc0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(char **)(puVar1 + 2) = "OK";
    puVar2 = (undefined8 *)WebPGetWorkerInterface();
    (*(code *)*puVar2)(puVar1 + 0x26);
    puVar1[1] = 0;
    puVar1[0x6c] = 1;
  }
  return puVar1;
}

