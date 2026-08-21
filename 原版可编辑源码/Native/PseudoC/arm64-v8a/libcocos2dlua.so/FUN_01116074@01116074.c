
/* WARNING: Removing unreachable block (ram,0x0111609c) */
/* WARNING: Removing unreachable block (ram,0x01116960) */

undefined8 FUN_01116074(void)

{
  undefined8 uVar1;
  long in_stack_00000018;
  
  TIFFSwabLong8(&stack0x00000018);
  if (in_stack_00000018 < 0) {
    FUN_01116d2c();
    return 0;
  }
  uVar1 = FUN_01115884();
  return uVar1;
}

