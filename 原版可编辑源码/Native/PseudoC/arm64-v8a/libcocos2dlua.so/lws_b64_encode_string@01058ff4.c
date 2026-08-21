
long lws_b64_encode_string(byte *param_1,int param_2,undefined1 *param_3,int param_4)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  uint uVar8;
  byte local_2;
  
                    /* try { // try from 01058ff4 to 011590bb has its CatchHandler @ 01058fbc */
  if (param_2 == 0) {
    lVar5 = 0;
    if (1 < param_4) goto LAB_0105916c;
  }
  else {
    lVar4 = 0;
    puVar6 = param_3;
    do {
      while( true ) {
        lVar5 = lVar4;
        bVar2 = *param_1;
        if (param_2 == 1) {
          uVar7 = 0;
          param_2 = 0;
          uVar8 = 1;
          local_2 = 0;
          param_1 = param_1 + 1;
        }
        else {
          uVar7 = (ulong)param_1[1];
          if (param_2 == 2) {
            param_2 = 0;
            param_1 = param_1 + 2;
            uVar8 = 2;
            local_2 = 0;
          }
          else {
            local_2 = param_1[2];
            param_1 = param_1 + 3;
            param_2 = param_2 + -3;
            uVar8 = 3;
          }
        }
                    /* catch() { ... } // from try @ 01058fec with catch @ 010590a0 */
        if (param_4 <= (int)lVar5 + 4) {
          return 0xffffffff;
        }
        cVar3 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                [(ulong)((bVar2 & 3) << 4) | uVar7 >> 4];
                    /* try { // try from 010590bc to 01159283 has its CatchHandler @ 010590bc
                       catch() { ... } // from try @ 010590bc with catch @ 010590bc
                       catch() { ... } // from try @ 010592b4 with catch @ 010590bc */
        pcVar1 = param_3 + lVar5;
        *pcVar1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[bVar2 >> 2];
        param_3[lVar5 + 1] = cVar3;
        if (1 < uVar8) break;
        pcVar1[2] = '=';
        puVar6[3] = 0x3d;
joined_r0x0105913c:
        puVar6 = param_3 + lVar5 + 4;
        lVar4 = lVar5 + 4;
        if (param_2 == 0) goto LAB_01059140;
      }
      pcVar1[2] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                  [(ulong)(((uint)uVar7 & 0xf) << 2) | (ulong)(local_2 >> 6)];
      if (uVar8 != 2) {
        pcVar1[3] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                    [(ulong)local_2 & 0x3f];
        goto joined_r0x0105913c;
      }
      pcVar1[3] = '=';
      puVar6 = param_3 + lVar5 + 4;
      lVar4 = lVar5 + 4;
    } while (param_2 != 0);
LAB_01059140:
    lVar5 = lVar5 + 4;
    param_3 = param_3 + lVar5;
    if ((int)((uint)lVar5 | 1) < param_4) {
LAB_0105916c:
      *param_3 = 0;
      return lVar5;
    }
  }
  return 0xffffffff;
}

