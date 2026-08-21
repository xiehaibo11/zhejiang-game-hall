
undefined8 FUN_00a5f3fc(UI *param_1,UI_STRING *param_2)

{
  UI_string_types UVar1;
  uint uVar2;
  void *pvVar3;
  UI_METHOD *pUVar4;
  undefined8 uVar5;
  UI_STRING *extraout_x1;
  
  UVar1 = UI_get_string_type(param_2);
  if (((UVar1 - UIT_PROMPT < 2) && (pvVar3 = UI_get0_user_data(param_1), pvVar3 != (void *)0x0)) &&
     (uVar2 = UI_get_input_flags(param_2), (uVar2 >> 1 & 1) != 0)) {
    return 1;
  }
                    /* try { // try from 00a5f43c to 00b5f477 has its CatchHandler @ 00a5f648 */
  pUVar4 = UI_OpenSSL();
  uVar2 = UI_method_get_writer((UI *)pUVar4,extraout_x1);
                    /* WARNING: Could not recover jumptable at 0x00a5f458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*(code *)(ulong)uVar2)(param_1,param_2);
  return uVar5;
}

