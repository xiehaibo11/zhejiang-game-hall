
undefined8 * FUN_00de9740(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)WebPSafeCalloc(1,0x170);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x200000000;
    FUN_00df3c0c();
  }
  return puVar1;
}

