
void FUN_01440a94(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                 undefined8 param_6,uint param_7)

{
  code *pcVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x26;
  
  if ((param_7 >> 0x15 & 1) != 0) {
    uVar2 = unaff_x26 + (ulong)*(uint *)(param_4 + 3);
    if ((uVar2 & 1) == 0) {
      uVar2 = *(ulong *)(unaff_x26 + 0x410);
    }
    if ((long)((ulong)*(uint *)(uVar2 + 3) << 0x20) >> 0x21 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(0,0x1440ad8);
      (*pcVar1)();
    }
    if (*(int *)(uVar2 + 7) == 0) {
      do {
        if (((*(int *)(param_4 + 7) != (int)*(undefined8 *)(unaff_x26 + 0x168)) &&
            (*(int *)(param_4 + 7) != (int)*(undefined8 *)(unaff_x26 + 1000))) &&
           ((*(short *)(param_1 + 7) != 0x423 || (*(int *)(param_4 + 0xb) != 0)))) break;
        param_4 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xf);
        if ((int)param_4 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
                    /* WARNING: Could not recover jumptable at 0x01440bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x21 + (ulong)*(byte *)(unaff_x20 + unaff_x19 + 2) * 8))
                    (*(undefined8 *)(unaff_x26 + 0x168));
          return;
        }
        param_1 = unaff_x26 + (ulong)*(uint *)(param_4 + -1);
      } while ((*(uint *)(param_1 + 0xb) & 0x3ff) == 0);
    }
  }
  *(int *)(param_5 + -0x20) = (int)unaff_x19 * 2;
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x1e10));
}

