
int FUN_00a3b724(long *param_1,int param_2)

{
  undefined4 *puVar1;
  
                    /* try { // try from 00a3b73c to 00b3b747 has its CatchHandler @ 00a3b978 */
  puVar1 = *(undefined4 **)(*param_1 + 0x218);
  if (puVar1 == (undefined4 *)0x0) {
    param_2 = 0;
  }
  else {
    if (param_2 != 0) {
                    /* try { // try from 00a3b748 to 00b3b753 has its CatchHandler @ 00a3b974 */
      FUN_00a11300(param_1,1);
    }
                    /* try { // try from 00a3b754 to 00b3b8ff has its CatchHandler @ 00a3b98c */
    (*(code *)PTR_free_01d1b748)(*(undefined8 *)(puVar1 + 2));
    *(undefined8 *)(puVar1 + 2) = 0;
    (*(code *)PTR_free_01d1b748)(*(undefined8 *)(puVar1 + 4));
    *(undefined8 *)(puVar1 + 4) = 0;
    *puVar1 = 0;
  }
  return param_2;
}

