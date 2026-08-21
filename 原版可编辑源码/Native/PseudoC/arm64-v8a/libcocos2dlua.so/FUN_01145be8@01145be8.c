
undefined8 * FUN_01145be8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)WebPSafeCalloc(1,0x170);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x200000000;
    FUN_011500b4();
  }
  return puVar1;
}

