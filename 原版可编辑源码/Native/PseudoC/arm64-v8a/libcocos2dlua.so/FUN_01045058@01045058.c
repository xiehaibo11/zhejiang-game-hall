
undefined8 FUN_01045058(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  ushort uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
                    /* try { // try from 0104506c to 0114508f has its CatchHandler @ 010458fc */
  lVar7 = param_1 + (long)param_2 * 0x6f8;
  lVar5 = *(long *)(lVar7 + 0xe8);
  lVar8 = (long)param_2;
  plVar1 = (long *)(lVar7 + 0xe0);
  if (lVar5 != 0) {
    lVar7 = *plVar1;
    do {
      lVar2 = lVar7 + (long)*(int *)(lVar5 + 0x2d4) * 8;
                    /* try { // try from 01045090 to 0114509b has its CatchHandler @ 01045820 */
      uVar3 = *(ushort *)(lVar2 + 6);
      *(ushort *)(lVar2 + 6) = uVar3 | *(ushort *)(lVar2 + 4) & 1;
      if ((uVar3 & 1) != 0 || (*(ushort *)(lVar2 + 4) & 1) != 0) {
        uVar4 = 1;
                    /* try { // try from 0104516c to 0114517b has its CatchHandler @ 01045810 */
        lVar5 = *(long *)(param_1 + lVar8 * 0x6f8 + 0x128);
        goto joined_r0x01045178;
      }
      lVar5 = *(long *)(lVar5 + 0x48);
    } while (lVar5 != 0);
  }
  uVar4 = 0;
                    /* try { // try from 010450bc to 011450cb has its CatchHandler @ 0104581c */
  lVar5 = *(long *)(param_1 + lVar8 * 0x6f8 + 0x128);
joined_r0x01045178:
  while (lVar7 = lVar5, lVar7 != 0) {
    lVar5 = *(long *)(lVar7 + 0x2c8);
    lVar2 = *plVar1 + (long)*(int *)(lVar7 + 0x2d4) * 8;
                    /* try { // try from 010450d4 to 011450f7 has its CatchHandler @ 010458f8 */
    uVar3 = *(ushort *)(lVar2 + 6);
    *(ushort *)(lVar2 + 6) = uVar3 | *(ushort *)(lVar2 + 4) & 1;
    if ((uVar3 & 1) != 0 || (*(ushort *)(lVar2 + 4) & 1) != 0) {
      lws_ssl_remove_wsi_from_buffered_list(lVar7);
      uVar4 = 1;
    }
  }
  plVar6 = *(long **)(param_1 + lVar8 * 0x6f8 + 0x110);
  do {
    if (plVar6 == (long *)0x0) {
      return uVar4;
    }
                    /* try { // try from 01045124 to 01145133 has its CatchHandler @ 01045814 */
    if ((*(short *)((long)plVar6 + 0xb5c) != *(short *)((long)plVar6 + 0xb5e)) &&
       ((*(byte *)(plVar6[1] + 0x2f4) & 1) == 0)) {
      lVar5 = *plVar1 + (long)*(int *)(plVar6[1] + 0x2d4) * 8;
                    /* try { // try from 01045138 to 01145157 has its CatchHandler @ 010458e8 */
      uVar3 = *(ushort *)(lVar5 + 6);
      *(ushort *)(lVar5 + 6) = uVar3 | *(ushort *)(lVar5 + 4) & 1;
      if ((uVar3 & 1) != 0 || (*(ushort *)(lVar5 + 4) & 1) != 0) {
                    /* try { // try from 01045180 to 0114519f has its CatchHandler @ 010458e4 */
        return 1;
      }
    }
    plVar6 = (long *)*plVar6;
  } while( true );
}

