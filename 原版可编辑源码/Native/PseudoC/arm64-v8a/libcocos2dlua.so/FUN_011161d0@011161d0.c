
/* WARNING: Removing unreachable block (ram,0x01115218) */
/* WARNING: Removing unreachable block (ram,0x01116960) */
/* WARNING: Removing unreachable block (ram,0x0111521c) */
/* WARNING: Removing unreachable block (ram,0x01115230) */
/* WARNING: Removing unreachable block (ram,0x01115220) */
/* WARNING: Removing unreachable block (ram,0x01114980) */
/* WARNING: Removing unreachable block (ram,0x01114984) */

undefined8 FUN_011161d0(void)

{
  undefined8 uVar1;
  int iStack0000000000000018;
  uint uStack000000000000001c;
  
  TIFFSwabArrayOfLong(&stack0x00000018,2);
  if (iStack0000000000000018 != 0) {
    NEON_ucvtf((ulong)uStack000000000000001c);
  }
  uVar1 = FUN_01116aa4();
  return uVar1;
}

