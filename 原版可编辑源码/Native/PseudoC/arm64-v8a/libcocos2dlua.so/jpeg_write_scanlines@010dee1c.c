
void jpeg_write_scanlines(long *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  int local_24;
  
                    /* try { // try from 010dee1c to 011dee27 has its CatchHandler @ 010def44 */
                    /* try { // try from 010dee28 to 011dee2f has its CatchHandler @ 010def40 */
  iVar1 = *(int *)((long)param_1 + 0x24);
  if (iVar1 != 0x65) {
    puVar4 = (undefined8 *)*param_1;
                    /* try { // try from 010dee54 to 011deea3 has its CatchHandler @ 010defa8 */
    *(undefined4 *)(puVar4 + 5) = 0x15;
    *(int *)((long)puVar4 + 0x2c) = iVar1;
    (*(code *)*puVar4)(param_1);
  }
  if (*(uint *)((long)param_1 + 0x34) <= *(uint *)(param_1 + 0x2b)) {
    lVar3 = *param_1;
    *(undefined4 *)(lVar3 + 0x28) = 0x7e;
    (**(code **)(lVar3 + 8))(param_1,0xffffffff);
  }
  puVar4 = (undefined8 *)param_1[2];
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = (ulong)*(uint *)(param_1 + 0x2b);
    puVar4[2] = (ulong)*(uint *)((long)param_1 + 0x34);
                    /* try { // try from 010deea8 to 011deeaf has its CatchHandler @ 010def3c */
    (*(code *)*puVar4)(param_1);
  }
  if (*(int *)(param_1[0x3e] + 0x18) != 0) {
    (**(code **)(param_1[0x3e] + 8))(param_1);
  }
                    /* try { // try from 010deec4 to 011deef3 has its CatchHandler @ 010defac */
  local_24 = 0;
  uVar2 = *(int *)((long)param_1 + 0x34) - (int)param_1[0x2b];
  if (param_3 <= uVar2) {
    uVar2 = param_3;
  }
  (**(code **)(param_1[0x3f] + 8))(param_1,param_2,&local_24,uVar2);
                    /* try { // try from 010deef4 to 011defc7 has its CatchHandler @ 010ded2c */
  *(int *)(param_1 + 0x2b) = (int)param_1[0x2b] + local_24;
  return;
}

