
/* WARNING: Removing unreachable block (ram,0x0111521c) */
/* WARNING: Removing unreachable block (ram,0x01115230) */
/* WARNING: Removing unreachable block (ram,0x01115220) */
/* WARNING: Removing unreachable block (ram,0x01114980) */

undefined8 switchD_01114b18::caseD_1(void)

{
  undefined8 uVar1;
  long unaff_x21;
  uint uStack0000000000000014;
  
  uStack0000000000000014 = (uint)*(byte *)(unaff_x21 + 0x10);
  uVar1 = TIFFSetField();
  if ((int)uVar1 != 0) {
    uVar1 = 1;
  }
  return uVar1;
}

