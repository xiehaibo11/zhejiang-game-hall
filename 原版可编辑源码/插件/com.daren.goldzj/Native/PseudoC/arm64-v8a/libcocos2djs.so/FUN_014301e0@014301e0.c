
void FUN_014301e0(void)

{
  byte bVar1;
  undefined8 uVar2;
  long in_x4;
  long lVar3;
  undefined8 in_x7;
  long unaff_x19;
  long unaff_x21;
  
  *(int *)(in_x4 + -0x20) = (int)unaff_x19 * 2;
  uVar2 = FUN_0134faa0(10,in_x7);
  lVar3 = *(long *)(in_x4 + -0x18);
  bVar1 = *(byte *)(lVar3 + unaff_x19 + 4);
  if (bVar1 == 0x26) {
    *(undefined8 *)(in_x4 + (long)*(char *)(lVar3 + unaff_x19 + 5) * 8) = uVar2;
    bVar1 = *(byte *)(lVar3 + unaff_x19 + 6);
  }
                    /* WARNING: Could not recover jumptable at 0x0142f2f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)bVar1 * 8))(uVar2);
  return;
}

