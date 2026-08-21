
void jinit_inverse_dct(long param_1)

{
  undefined8 *puVar1;
  void *__s;
  long lVar2;
  undefined8 *puVar3;
  
                    /* try { // try from 010fd26c to 011fd277 has its CatchHandler @ 010fd320 */
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x80);
  *(undefined8 **)(param_1 + 0x278) = puVar1;
  *puVar1 = FUN_010fd300;
                    /* try { // try from 010fd290 to 011fd297 has its CatchHandler @ 010fd334 */
                    /* try { // try from 010fd298 to 011fd367 has its CatchHandler @ 010fd1e8 */
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar2 = 0;
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x130) + 0x58);
    do {
      __s = (void *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x100);
      *puVar3 = __s;
      memset(__s,0,0x100);
      *(undefined4 *)((long)puVar1 + lVar2 * 4 + 0x58) = 0xffffffff;
      lVar2 = lVar2 + 1;
      puVar3 = puVar3 + 0xc;
    } while (lVar2 < *(int *)(param_1 + 0x38));
  }
  return;
}

