
void FUN_01007a48(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
                    /* try { // try from 01007a4c to 01107a53 has its CatchHandler @ 01007adc */
  *param_2 = &PTR_FUN_01725698;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}

