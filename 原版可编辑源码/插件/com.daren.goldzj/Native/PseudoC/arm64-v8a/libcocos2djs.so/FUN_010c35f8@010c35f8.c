
void FUN_010c35f8(undefined8 param_1,ulong param_2,ulong param_3,long param_4,long param_5)

{
  ulong extraout_x1;
  uint uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *extraout_x9;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((*(uint *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0xb)) + 0x1b) >> 2 & 1)
      != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!source.WasDetached()");
  }
  if ((*(uint *)((param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 0xb)) + 0x1b) >> 2 & 1)
      != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!destination.WasDetached()");
  }
  uVar1 = (uint)(*(byte *)((param_2 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(param_2 - 1)) >> 3
                );
  if (10 < uVar1 - 0x11) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  param_5 = param_5 - param_4;
  puVar2 = (undefined8 *)(*(long *)(param_3 + 0x27) + (ulong)*(uint *)(param_3 + 0x2f));
  switch(uVar1) {
  default:
    if (param_5 == 0) {
      return;
    }
    FUN_010c3880();
    param_5 = extraout_x8;
switchD_010c366c_caseD_17:
    if (param_5 != 0) {
      FUN_010c38a8();
      param_5 = extraout_x8_00;
switchD_010c366c_caseD_15:
      if (param_5 != 0) {
        FUN_010c3894();
        param_2 = extraout_x1;
        param_5 = extraout_x8_01;
        puVar2 = extraout_x9;
switchD_010c366c_caseD_1a:
        if (param_5 != 0) {
          puVar3 = (undefined8 *)
                   (*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f) + param_4 * 8);
          do {
            param_5 = param_5 + -1;
            *puVar2 = *puVar3;
            puVar2 = puVar2 + 1;
            puVar3 = puVar3 + 1;
          } while (param_5 != 0);
        }
      }
    }
    return;
  case 0x15:
    goto switchD_010c366c_caseD_15;
  case 0x17:
  case 0x18:
    goto switchD_010c366c_caseD_17;
  case 0x1a:
    goto switchD_010c366c_caseD_1a;
  case 0x1b:
    if (param_5 == 0) {
      return;
    }
    puVar3 = (undefined8 *)
             (*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f) + param_4 * 8);
    do {
      param_5 = param_5 + -1;
      *puVar2 = *puVar3;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (param_5 != 0);
    return;
  }
}

