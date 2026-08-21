
void jcopy_sample_rows(long param_1,int param_2,long param_3,int param_4,int param_5,uint param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (0 < param_5) {
                    /* try { // try from 010f0848 to 011f084f has its CatchHandler @ 010f093c */
    param_5 = param_5 + 1;
    puVar1 = (undefined8 *)(param_3 + (long)param_4 * 8);
    puVar2 = (undefined8 *)(param_1 + (long)param_2 * 8);
    do {
      memcpy((void *)*puVar1,(void *)*puVar2,(ulong)param_6);
      param_5 = param_5 + -1;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (1 < param_5);
  }
                    /* try { // try from 010f0874 to 011f0877 has its CatchHandler @ 010f0914 */
                    /* try { // try from 010f0878 to 011f0893 has its CatchHandler @ 010f0934 */
  return;
}

