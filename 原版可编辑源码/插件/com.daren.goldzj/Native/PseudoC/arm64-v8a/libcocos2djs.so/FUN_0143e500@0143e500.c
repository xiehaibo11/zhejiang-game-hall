
void FUN_0143e500(void)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x26;
  long unaff_x29;
  
  bVar1 = *(byte *)(unaff_x20 + unaff_x19 + 2);
  bVar2 = *(byte *)(unaff_x20 + unaff_x19 + 3);
  uVar3 = *(undefined8 *)(unaff_x29 + (long)*(char *)(unaff_x20 + unaff_x19 + 1) * 8);
  lVar4 = unaff_x26 +
          (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x29 + -0x10) + 0x13) + 3);
  if (*(int *)(lVar4 + -1) != (int)*(undefined8 *)(unaff_x26 + 0x158)) {
    lVar4 = *(long *)(unaff_x26 + 0xa0);
  }
  *(int *)(unaff_x29 + -0x20) = (int)unaff_x19 * 2;
  FUN_01389180(uVar3,(bVar1 & 0x1f) * '\x02',(uint)bVar2 * 2,lVar4);
                    /* WARNING: Could not recover jumptable at 0x0143e5bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) + unaff_x19 + 4) * 8))();
  return;
}

