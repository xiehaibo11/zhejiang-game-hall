
void png_set_sCAL_s(long param_1,long param_2,int param_3,char *param_4,char *param_5)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  void *pvVar4;
  
                    /* try { // try from 010d3e14 to 011d3e1b has its CatchHandler @ 010d4020 */
  if ((param_1 == 0) || (param_2 == 0)) {
    return;
  }
  if (1 < param_3 - 1U) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"Invalid sCAL unit");
  }
                    /* try { // try from 010d3e4c to 011d3e5b has its CatchHandler @ 010d401c */
                    /* try { // try from 010d3e60 to 011d3e6b has its CatchHandler @ 010d4018 */
  if ((((param_4 != (char *)0x0) && (sVar2 = strlen(param_4), sVar2 != 0)) && (*param_4 != '-')) &&
     (iVar1 = png_check_fp_string(param_4,sVar2), iVar1 != 0)) {
                    /* try { // try from 010d3e88 to 011d3e8f has its CatchHandler @ 010d4014 */
    if (((param_5 != (char *)0x0) && (sVar3 = strlen(param_5), sVar3 != 0)) &&
       ((*param_5 != '-' && (iVar1 = png_check_fp_string(param_5,sVar3), iVar1 != 0)))) {
      *(char *)(param_2 + 0x13c) = (char)param_3;
      pvVar4 = (void *)png_malloc_warn(param_1,sVar2 + 1);
                    /* try { // try from 010d3ec0 to 011d3ecb has its CatchHandler @ 010d4010 */
      *(void **)(param_2 + 0x140) = pvVar4;
      if (pvVar4 != (void *)0x0) {
                    /* try { // try from 010d3ecc to 011d422f has its CatchHandler @ 010d35bc */
        memcpy(pvVar4,param_4,sVar2 + 1);
        pvVar4 = (void *)png_malloc_warn(param_1,sVar3 + 1);
        *(void **)(param_2 + 0x148) = pvVar4;
        if (pvVar4 != (void *)0x0) {
          memcpy(pvVar4,param_5,sVar3 + 1);
          *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x4000;
          *(uint *)(param_2 + 0x11c) = *(uint *)(param_2 + 0x11c) | 0x100;
          return;
        }
        png_free(param_1,*(undefined8 *)(param_2 + 0x140));
        *(undefined8 *)(param_2 + 0x140) = 0;
      }
      png_warning(param_1,"Memory allocation failed while processing sCAL");
      return;
    }
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"Invalid sCAL height");
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"Invalid sCAL width");
}

