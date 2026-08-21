
void png_set_iCCP(long param_1,long param_2,char *param_3,int param_4,void *param_5,uint param_6)

{
  int iVar1;
  size_t sVar2;
  void *__dest;
  void *__dest_00;
  char *pcVar3;
  ulong __n;
  
  __n = (ulong)param_6;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != (char *)0x0)) && (param_5 != (void *)0x0))
  {
    if (param_4 != 0) {
                    /* try { // try from 010d4364 to 011d436f has its CatchHandler @ 010d522c */
                    /* try { // try from 010d4370 to 011d43d3 has its CatchHandler @ 010d4230 */
      png_app_error(param_1,"Invalid iCCP compression method");
    }
    iVar1 = png_colorspace_set_ICC
                      (param_1,param_2 + 0x34,param_3,__n,param_5,*(undefined1 *)(param_2 + 0x25));
    png_colorspace_sync_info(param_1,param_2);
    if (iVar1 != 0) {
      *(ushort *)(param_2 + 0x7e) = *(ushort *)(param_2 + 0x7e) | 0x18;
      sVar2 = strlen(param_3);
      __dest = (void *)png_malloc_warn(param_1,sVar2 + 1);
      if (__dest == (void *)0x0) {
        pcVar3 = "Insufficient memory to process iCCP chunk";
      }
      else {
                    /* try { // try from 010d43d4 to 011d43df has its CatchHandler @ 010d5228 */
        memcpy(__dest,param_3,sVar2 + 1);
                    /* try { // try from 010d43e0 to 011d443b has its CatchHandler @ 010d4230 */
        __dest_00 = (void *)png_malloc_warn(param_1,__n);
        if (__dest_00 != (void *)0x0) {
          memcpy(__dest_00,param_5,__n);
          png_free_data(param_1,param_2,0x10,0);
          *(uint *)(param_2 + 0x90) = param_6;
          *(void **)(param_2 + 0x80) = __dest;
          *(void **)(param_2 + 0x88) = __dest_00;
          *(uint *)(param_2 + 0x11c) = *(uint *)(param_2 + 0x11c) | 0x10;
          *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x1000;
          return;
        }
        png_free(param_1,__dest);
        pcVar3 = "Insufficient memory to process iCCP profile";
      }
      png_benign_error(param_1,pcVar3);
      return;
    }
  }
                    /* try { // try from 010d443c to 011d4447 has its CatchHandler @ 010d5224 */
                    /* try { // try from 010d4448 to 011d44b3 has its CatchHandler @ 010d4230 */
  return;
}

