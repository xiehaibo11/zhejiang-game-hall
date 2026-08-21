
/* WARNING: Removing unreachable block (ram,0x0111609c) */
/* WARNING: Removing unreachable block (ram,0x01116960) */

undefined8 FUN_01116a54(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long in_stack_00000018;
  
  if ((*(uint *)(unaff_x19 + 0x10) >> 7 & 1) != 0) {
    uVar1 = FUN_01116074();
    return uVar1;
  }
  if (in_stack_00000018 < 0) {
    FUN_01116d2c();
    return 0;
  }
  uVar1 = FUN_01115884();
  return uVar1;
}

