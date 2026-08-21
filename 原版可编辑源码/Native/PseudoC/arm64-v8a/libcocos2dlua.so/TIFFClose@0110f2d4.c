
void TIFFClose(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x3d8);
  uVar1 = *(undefined8 *)(param_1 + 0x3b8);
  TIFFCleanup();
                    /* WARNING: Could not recover jumptable at 0x0110f300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}

