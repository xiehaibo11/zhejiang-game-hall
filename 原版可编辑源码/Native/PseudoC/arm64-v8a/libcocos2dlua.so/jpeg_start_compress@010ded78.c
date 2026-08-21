
void jpeg_start_compress(long *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  iVar1 = *(int *)((long)param_1 + 0x24);
  if (iVar1 != 100) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x15;
    *(int *)((long)puVar3 + 0x2c) = iVar1;
    (*(code *)*puVar3)(param_1);
  }
  if (param_2 != 0) {
                    /* try { // try from 010dedbc to 011dedc7 has its CatchHandler @ 010defa4 */
    jpeg_suppress_tables(param_1,0);
  }
  (**(code **)(*param_1 + 0x20))(param_1);
                    /* try { // try from 010dedd0 to 011deddb has its CatchHandler @ 010defa0 */
                    /* try { // try from 010deddc to 011dede7 has its CatchHandler @ 010def80 */
  (**(code **)(param_1[5] + 0x10))(param_1);
  jinit_compress_master(param_1);
                    /* try { // try from 010dede8 to 011dedf7 has its CatchHandler @ 010def48 */
  (**(code **)param_1[0x3e])(param_1);
  *(undefined4 *)(param_1 + 0x2b) = 0;
  uVar2 = 0x65;
  if ((int)param_1[0x24] != 0) {
    uVar2 = 0x66;
  }
  *(undefined4 *)((long)param_1 + 0x24) = uVar2;
  return;
}

