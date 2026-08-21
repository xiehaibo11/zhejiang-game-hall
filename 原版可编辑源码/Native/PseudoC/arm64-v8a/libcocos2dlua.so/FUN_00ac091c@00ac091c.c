
void FUN_00ac091c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  void *__src;
  size_t __n;
  ulong uVar7;
  
  puVar6 = (undefined8 *)param_1[1];
  if (puVar6 < (undefined8 *)param_1[2]) {
    uVar5 = *param_2;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar6 = uVar5;
    param_1[1] = (long)puVar6 + 0xc;
    return;
  }
  __src = (void *)*param_1;
  __n = (long)puVar6 - (long)__src;
  uVar7 = 0x1555555555555555;
  uVar1 = ((long)__n >> 2) * -0x5555555555555555 + 1;
  if (0x1555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = (long)param_1[2] - (long)__src >> 2;
  if ((ulong)(lVar3 * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) {
    uVar4 = lVar3 * 0x5555555555555556;
    uVar7 = uVar1;
    if (uVar1 <= uVar4) {
      uVar7 = uVar4;
    }
    if (uVar7 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_00ac09c8;
    }
  }
  pvVar2 = operator_new(uVar7 * 0xc);
LAB_00ac09c8:
  uVar5 = *param_2;
  puVar6 = (undefined8 *)((long)pvVar2 + ((long)__n >> 2) * 4);
                    /* try { // try from 00ac09d8 to 00bc09ef has its CatchHandler @ 00ac0fec */
  *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_2 + 1);
  *puVar6 = uVar5;
  if (0 < (long)__n) {
                    /* try { // try from 00ac09f4 to 00bc09fb has its CatchHandler @ 00ac0fe4 */
                    /* try { // try from 00ac09fc to 00bc0a13 has its CatchHandler @ 00ac0fd4 */
    memcpy((void *)((long)puVar6 - __n),__src,__n);
  }
  *param_1 = (void *)((long)puVar6 - __n);
  param_1[1] = (long)puVar6 + 0xc;
  param_1[2] = (void *)((long)pvVar2 + uVar7 * 0xc);
  if (__src == (void *)0x0) {
                    /* try { // try from 00ac0a38 to 00bc0a6b has its CatchHandler @ 00ac0fc0 */
    return;
  }
                    /* try { // try from 00ac0a18 to 00bc0a2f has its CatchHandler @ 00ac0fc4 */
  operator_delete(__src);
  return;
}

