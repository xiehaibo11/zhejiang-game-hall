
int FUN_00eb35d8(long param_1,long *param_2,void *param_3,size_t param_4,long *param_5)

{
  int iVar1;
  long lVar2;
  void *__dest;
  long lVar3;
  long lVar4;
  
                    /* try { // try from 00eb35e4 to 00fb363f has its CatchHandler @ 00eb35e4
                       catch(type#1 @ 00000000) { ... } // from try @ 00eb35e4 with catch @ 00eb35e4
                       catch(type#1 @ 00000000) { ... } // from try @ 00eb3758 with catch @ 00eb35e4
                       catch(type#1 @ 00000000) { ... } // from try @ 00eb3804 with catch @ 00eb35e4
                        */
  if (param_1 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = (*(code *)param_5[1])(param_1,0,1);
  }
  param_2[0x1d] = 0;
  param_2[0x1c] = 0;
  param_2[0x1f] = 0;
  param_2[0x1e] = 0;
  param_2[0x19] = 0;
  param_2[0x18] = 0;
  param_2[0x1b] = 0;
  param_2[0x1a] = 0;
  param_2[0x15] = 0;
  param_2[0x14] = 0;
  param_2[0x17] = 0;
  param_2[0x16] = 0;
  param_2[0x11] = 0;
  param_2[0x10] = 0;
  param_2[0x13] = 0;
  param_2[0x12] = 0;
  param_2[0xd] = 0;
  param_2[0xc] = 0;
  param_2[0xf] = 0;
  param_2[0xe] = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[0xb] = 0;
  param_2[10] = 0;
                    /* try { // try from 00eb3640 to 00fb3647 has its CatchHandler @ 00eb37b0 */
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  *param_2 = param_1;
  lVar2 = *param_5;
  lVar4 = param_5[3];
  lVar3 = param_5[2];
  param_2[0x1d] = param_5[1];
  param_2[0x1c] = lVar2;
  param_2[0x1f] = lVar4;
  param_2[0x1e] = lVar3;
  lVar2 = ogg_sync_create();
                    /* try { // try from 00eb3658 to 00fb365b has its CatchHandler @ 00eb3840 */
  param_2[4] = lVar2;
  if (param_3 != (void *)0x0) {
    __dest = (void *)ogg_sync_bufferin(lVar2,param_4);
    memcpy(__dest,param_3,param_4);
    ogg_sync_wrote(param_2[4],param_4);
  }
  if (iVar1 != -1) {
    *(undefined4 *)(param_2 + 1) = 1;
  }
  *(undefined4 *)(param_2 + 5) = 1;
  lVar2 = ogg_stream_create(0xffffffff);
  param_2[0x1a] = lVar2;
                    /* try { // try from 00eb36b4 to 00fb372b has its CatchHandler @ 00eb37b4 */
  iVar1 = FUN_00eb5334(param_2,param_2 + 10,param_2 + 0x11,(long)param_2 + 0xb4,0);
  if (iVar1 < 0) {
    *param_2 = 0;
    ov_clear(param_2);
  }
  else if ((int)param_2[0x16] < 1) {
    *(undefined4 *)(param_2 + 0x16) = 1;
  }
  return iVar1;
}

