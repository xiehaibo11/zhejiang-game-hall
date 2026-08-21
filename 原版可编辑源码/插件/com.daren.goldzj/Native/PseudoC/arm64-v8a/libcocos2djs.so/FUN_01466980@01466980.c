
void FUN_01466980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x26;
  long unaff_x29;
  undefined1 auVar4 [16];
  
  *(int *)(unaff_x29 + -0x20) = ((int)unaff_x19 + -1) * 2;
  auVar4 = FUN_013bf160(*(undefined4 *)(unaff_x20 + unaff_x19 + 7),
                        *(undefined8 *)
                         (*(long *)(unaff_x26 + 0x14a8) +
                          (ulong)*(ushort *)(unaff_x20 + unaff_x19 + 1) * 0x20 + 0x10),param_3,
                        param_1,unaff_x29,(long)*(int *)(unaff_x20 + unaff_x19 + 3),
                        *(undefined8 *)(unaff_x29 + -8));
  lVar2 = *(long *)(unaff_x29 + -0x18);
  lVar1 = (long)((ulong)*(uint *)(unaff_x29 + -0x20) << 0x20) >> 0x21;
  lVar3 = (long)*(int *)(lVar2 + lVar1 + 0xc);
  *(long *)(unaff_x29 + lVar3 * 8) = auVar4._0_8_;
  *(long *)(unaff_x29 + (lVar3 + -1) * 8) = auVar4._8_8_;
                    /* WARNING: Could not recover jumptable at 0x01466a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x26 + 0x13e0) + (ulong)*(byte *)(lVar2 + lVar1 + 0x10) * 8))(param_1)
  ;
  return;
}

