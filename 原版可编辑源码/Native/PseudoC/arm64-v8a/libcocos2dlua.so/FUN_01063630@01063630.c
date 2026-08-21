
undefined8
FUN_01063630(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
            undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_01066efc(*param_1,param_3,".resource/");
  if (lVar1 == 0) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0;
    *param_4 = lVar1;
    *param_5 = 0;
  }
                    /* try { // try from 0106367c to 01163687 has its CatchHandler @ 01063720 */
  return uVar2;
}

