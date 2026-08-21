
int * _lws_plat_file_open(undefined8 param_1,char *param_2,undefined8 param_3,uint *param_4)

{
  uint uVar1;
  int __fd;
  int iVar2;
  int *piVar3;
  __off_t local_80;
  
  __fd = open(param_2,*param_4 & 0x7fffff,0x1b4);
                    /* try { // try from 01052260 to 01152277 has its CatchHandler @ 01053988 */
  if (-1 < __fd) {
    iVar2 = fstat(__fd,(stat *)&stack0xffffffffffffff50);
    if ((-1 < iVar2) && (piVar3 = malloc(0x30), piVar3 != (int *)0x0)) {
      *(undefined8 *)(piVar3 + 2) = param_1;
      piVar3[4] = 0;
      piVar3[5] = 0;
      uVar1 = *param_4;
                    /* try { // try from 0105228c to 0115229f has its CatchHandler @ 01053754 */
      *piVar3 = __fd;
      piVar3[6] = 0;
      piVar3[7] = 0;
      *(__off_t *)(piVar3 + 8) = local_80;
      piVar3[10] = uVar1;
      return piVar3;
    }
    close(__fd);
  }
                    /* try { // try from 010522a4 to 011522bf has its CatchHandler @ 01053750 */
  return (int *)0x0;
}

