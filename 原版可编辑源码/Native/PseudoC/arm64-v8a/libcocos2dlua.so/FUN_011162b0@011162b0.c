
/* WARNING: Removing unreachable block (ram,0x0111521c) */
/* WARNING: Removing unreachable block (ram,0x01115230) */
/* WARNING: Removing unreachable block (ram,0x01115220) */
/* WARNING: Removing unreachable block (ram,0x01114980) */

undefined8 FUN_011162b0(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 in_stack_00000008;
  
  if ((*(uint *)(unaff_x19 + 0x10) >> 7 & 1) != 0) {
    TIFFSwabLong8(&stack0x00000008);
    uVar1 = FUN_01115884();
    return uVar1;
  }
  uVar1 = TIFFSetField();
  if ((int)uVar1 != 0) {
    uVar1 = 1;
  }
  return uVar1;
}

