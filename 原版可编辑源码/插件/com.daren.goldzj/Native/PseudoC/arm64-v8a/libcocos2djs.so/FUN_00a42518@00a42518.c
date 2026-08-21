
undefined4 FUN_00a42518(long *param_1,undefined4 param_2)

{
  long lVar1;
  
                    /* try { // try from 00a4251c to 00b42533 has its CatchHandler @ 00a426fc */
  lVar1 = *(long *)(*param_1 + 0x218);
                    /* try { // try from 00a4253c to 00b42547 has its CatchHandler @ 00a426f8 */
                    /* try { // try from 00a42548 to 00b42553 has its CatchHandler @ 00a426f4 */
  (*(code *)PTR_free_01d1b748)(*(undefined8 *)(lVar1 + 8));
  *(undefined8 *)(lVar1 + 8) = 0;
                    /* try { // try from 00a42554 to 00b4267b has its CatchHandler @ 00a4270c */
  (*(code *)PTR_free_01d1b748)(*(undefined8 *)(*param_1 + 0x218));
  *(undefined8 *)(*param_1 + 0x218) = 0;
  return param_2;
}

