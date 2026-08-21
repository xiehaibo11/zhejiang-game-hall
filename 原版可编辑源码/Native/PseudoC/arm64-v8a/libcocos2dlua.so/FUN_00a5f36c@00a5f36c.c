
undefined8 FUN_00a5f36c(UI *param_1,UI_STRING *param_2)

{
  UI_string_types UVar1;
  uint uVar2;
  char *result;
  UI_METHOD *pUVar3;
  undefined8 uVar4;
  UI_STRING *extraout_x1;
  
                    /* try { // try from 00a5f384 to 00b5f393 has its CatchHandler @ 00a5f63c */
  UVar1 = UI_get_string_type(param_2);
                    /* try { // try from 00a5f39c to 00b5f3af has its CatchHandler @ 00a5f638 */
  if (((UVar1 - UIT_PROMPT < 2) && (result = UI_get0_user_data(param_1), result != (char *)0x0)) &&
     (uVar2 = UI_get_input_flags(param_2), (uVar2 >> 1 & 1) != 0)) {
    UI_set_result(param_1,param_2,result);
                    /* try { // try from 00a5f3f8 to 00b5f42b has its CatchHandler @ 00a5f65c */
    return 1;
  }
  pUVar3 = UI_OpenSSL();
  uVar2 = UI_method_get_reader((UI *)pUVar3,extraout_x1);
                    /* try { // try from 00a5f3c8 to 00b5f3e7 has its CatchHandler @ 00a5f640 */
                    /* WARNING: Could not recover jumptable at 0x00a5f3d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)(ulong)uVar2)(param_1,param_2);
  return uVar4;
}

