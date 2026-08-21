
void FUN_00b29ec0(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = BN_GENCB_get_arg(param_3);
  puVar2 = *(undefined4 **)(lVar1 + 0x40);
  *puVar2 = param_1;
  puVar2[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00b29ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x38))();
  return;
}

