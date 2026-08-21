
int FUN_00a5210c(long *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(*param_1 + 0x218);
  if (puVar1 == (undefined4 *)0x0) {
    param_2 = 0;
  }
  else {
    if (param_2 != 0) {
      FUN_00a26ce8(param_1,1);
    }
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(puVar1 + 2));
    *(undefined8 *)(puVar1 + 2) = 0;
                    /* catch() { ... } // from try @ 00a520cc with catch @ 00a52154 */
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(puVar1 + 4));
    *(undefined8 *)(puVar1 + 4) = 0;
    *puVar1 = 0;
  }
  return param_2;
}

