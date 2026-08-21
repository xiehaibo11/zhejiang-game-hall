
void FUN_00c165dc(void)

{
  bool in_CY;
  ulong uVar1;
  undefined4 *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x27;
  
  if (in_CY) {
    FUN_00c1a098();
  }
  uVar1 = FUN_00c1b840();
  *(ulong *)(*(long *)(unaff_x23 + 0x20) + unaff_x27 * 8) =
       uVar1 & 0xffffffffffff | 0xfffa000000000000;
                    /* WARNING: Could not recover jumptable at 0x00c16618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + (ulong)(byte)*unaff_x21 * 8 + 0x2a0))();
  return;
}

