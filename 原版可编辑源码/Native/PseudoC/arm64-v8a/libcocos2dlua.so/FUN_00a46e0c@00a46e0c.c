
undefined8 FUN_00a46e0c(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + 0x218);
  if (lVar1 != 0) {
    FUN_00a2c624(*(undefined8 *)(lVar1 + 0x1cb0));
    *(undefined8 *)(lVar1 + 0x1cb0) = 0;
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(*param_1 + 0x218));
    *(undefined8 *)(*param_1 + 0x218) = 0;
  }
                    /* try { // try from 00a46e54 to 00b46e57 has its CatchHandler @ 00a46e8c */
                    /* try { // try from 00a46e58 to 00b46e9f has its CatchHandler @ 00a46e08 */
  return 0;
}

