
undefined8 FUN_00a4d64c(long param_1)

{
  long lVar1;
  
                    /* try { // try from 00a4d650 to 00b4d663 has its CatchHandler @ 00a4dbbc */
  lVar1 = *(long *)(param_1 + 0x618);
  if (lVar1 != 0) {
                    /* try { // try from 00a4d668 to 00b4d673 has its CatchHandler @ 00a4dba4 */
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(lVar1 + 0x160));
                    /* try { // try from 00a4d674 to 00b4d687 has its CatchHandler @ 00a4db8c */
    *(undefined8 *)(lVar1 + 0x160) = 0;
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(lVar1 + 0x168));
    *(undefined8 *)(lVar1 + 0x168) = 0;
    (*(code *)PTR_free_01769a00)(lVar1);
  }
  return 0;
}

