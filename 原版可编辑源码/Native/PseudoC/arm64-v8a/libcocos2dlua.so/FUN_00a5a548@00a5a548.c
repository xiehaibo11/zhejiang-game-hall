
undefined8 FUN_00a5a548(char *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *param_1;
                    /* try { // try from 00a5a54c to 00b5a57f has its CatchHandler @ 00a5a63c */
  *param_2 = 0;
  *param_3 = 0;
  if ((cVar1 != '\0') && (*param_1 != '=')) {
    uVar2 = FUN_00a2e8fc();
    return uVar2;
  }
  return 0;
}

