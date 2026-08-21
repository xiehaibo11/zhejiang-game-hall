
void png_set_pCAL(long param_1,long param_2,char *param_3,undefined4 param_4,undefined4 param_5,
                 uint param_6,uint param_7,char *param_8,long param_9)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong __n;
  long lVar6;
  long lVar7;
  char *pcVar8;
  
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == (char *)0x0)) ||
     ((param_8 == (char *)0x0 || ((0 < (int)param_7 && (param_9 == 0)))))) {
                    /* try { // try from 010d3c20 to 011d3c27 has its CatchHandler @ 010d4040 */
    return;
  }
  sVar2 = strlen(param_3);
  if (3 < param_6) {
                    /* try { // try from 010d3dec to 011d3df7 has its CatchHandler @ 010d4024 */
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"Invalid pCAL equation type");
  }
                    /* try { // try from 010d3c44 to 011d3c4f has its CatchHandler @ 010d403c */
  if (0xff < param_7) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"Invalid pCAL parameter count");
  }
  if (param_7 != 0) {
    lVar7 = 0;
    do {
      pcVar8 = *(char **)(param_9 + lVar7 * 8);
      if (pcVar8 == (char *)0x0) {
LAB_010d3ddc:
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"Invalid format for pCAL parameter");
      }
      sVar3 = strlen(pcVar8);
      iVar1 = png_check_fp_string(pcVar8,sVar3);
      if (iVar1 == 0) goto LAB_010d3ddc;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)param_7);
  }
                    /* try { // try from 010d3c84 to 011d3c8b has its CatchHandler @ 010d4038 */
  pvVar4 = (void *)png_malloc_warn(param_1,sVar2 + 1);
  *(void **)(param_2 + 0xf8) = pvVar4;
  if (pvVar4 == (void *)0x0) {
    pcVar8 = "Insufficient memory for pCAL purpose";
  }
  else {
                    /* try { // try from 010d3ca4 to 011d3caf has its CatchHandler @ 010d4034 */
    memcpy(pvVar4,param_3,sVar2 + 1);
    *(undefined4 *)(param_2 + 0x100) = param_4;
    *(char *)(param_2 + 0x118) = (char)param_6;
    *(char *)(param_2 + 0x119) = (char)param_7;
    *(undefined4 *)(param_2 + 0x104) = param_5;
    sVar2 = strlen(param_8);
    pvVar4 = (void *)png_malloc_warn(param_1,sVar2 + 1);
    *(void **)(param_2 + 0x108) = pvVar4;
                    /* try { // try from 010d3ce0 to 011d3ceb has its CatchHandler @ 010d4030 */
    if (pvVar4 == (void *)0x0) {
      pcVar8 = "Insufficient memory for pCAL units";
    }
    else {
                    /* try { // try from 010d3cec to 011d3dc7 has its CatchHandler @ 010d35bc */
      memcpy(pvVar4,param_8,sVar2 + 1);
      __n = -(ulong)(param_7 + 1 >> 0x1f) & 0xfffffff800000000 | (ulong)(param_7 + 1) << 3;
      pvVar4 = (void *)png_malloc_warn(param_1,__n);
      *(void **)(param_2 + 0x110) = pvVar4;
      if (pvVar4 != (void *)0x0) {
        memset(pvVar4,0,__n);
        if (0 < (int)param_7) {
          lVar7 = 0;
          do {
            lVar6 = lVar7 * 8;
            sVar2 = strlen(*(char **)(param_9 + lVar6));
            uVar5 = png_malloc_warn(param_1,sVar2 + 1);
            *(undefined8 *)(*(long *)(param_2 + 0x110) + lVar6) = uVar5;
            pvVar4 = *(void **)(*(long *)(param_2 + 0x110) + lVar6);
            if (pvVar4 == (void *)0x0) {
              pcVar8 = "Insufficient memory for pCAL parameter";
              goto LAB_010d3db8;
            }
            memcpy(pvVar4,*(void **)(param_9 + lVar7 * 8),sVar2 + 1);
            lVar7 = lVar7 + 1;
          } while (lVar7 < (int)param_7);
        }
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x400;
        *(uint *)(param_2 + 0x11c) = *(uint *)(param_2 + 0x11c) | 0x80;
        return;
      }
      pcVar8 = "Insufficient memory for pCAL params";
    }
  }
LAB_010d3db8:
                    /* try { // try from 010d3dc8 to 011d3dd7 has its CatchHandler @ 010d402c */
                    /* try { // try from 010d3dd8 to 011d3de7 has its CatchHandler @ 010d4028 */
  png_warning(param_1,pcVar8);
  return;
}

