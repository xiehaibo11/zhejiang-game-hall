
undefined4 FUN_0108f340(long *param_1)

{
  undefined4 uVar1;
  long local_28;
  
                    /* try { // try from 0108f354 to 0118f35b has its CatchHandler @ 0108f500 */
                    /* try { // try from 0108f35c to 0118f3bf has its CatchHandler @ 0108f1ec */
  uVar1 = FT_New_Size(*(undefined8 *)(*param_1 + 800),&local_28);
  param_1[0xb] = local_28;
  FT_Activate_Size();
  return uVar1;
}

