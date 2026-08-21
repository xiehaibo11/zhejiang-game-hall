
undefined8 FUN_00a36c64(long param_1)

{
  long lVar1;
  
                    /* try { // try from 00a36c68 to 00b36cbf has its CatchHandler @ 00a36c68
                       catch() { ... } // from try @ 00a36c68 with catch @ 00a36c68
                       catch() { ... } // from try @ 00a36ed0 with catch @ 00a36c68 */
  lVar1 = *(long *)(param_1 + 0x618);
  if (lVar1 != 0) {
    (*(code *)PTR_free_01d1b748)(*(undefined8 *)(lVar1 + 0x160));
    *(undefined8 *)(lVar1 + 0x160) = 0;
    (*(code *)PTR_free_01d1b748)(*(undefined8 *)(lVar1 + 0x168));
    *(undefined8 *)(lVar1 + 0x168) = 0;
    (*(code *)PTR_free_01d1b748)(lVar1);
  }
  return 0;
}

