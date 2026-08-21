
uint lws_extension_callback_pm_deflate
               (long param_1,undefined8 param_2,long param_3,undefined4 param_4,long *param_5,
               long *param_6,uint param_7)

{
  byte bVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  long *__s;
  undefined4 uVar5;
  byte *pbVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  
  __s = param_5;
  switch(param_4) {
  case 4:
  case 5:
    iVar4 = *(int *)(param_1 + 0xc84);
    lVar11 = *(long *)(*(long *)(param_3 + 0x248) + 0x18);
    if (lVar11 != 0) {
      iVar4 = (int)lVar11;
    }
    if (iVar4 < 0x80) {
      return 0xffffffff;
    }
    __s = (long *)FUN_0104b1fc(0x108,"pmd priv");
    *param_5 = (long)__s;
    memset(__s,0,0x108);
    if (param_6 != (long *)0x0) {
      *param_6 = (long)&PTR_s_server_no_context_takeover_01728140;
    }
  case 0x17:
                    /* try { // try from 01056bd4 to 01156bdb has its CatchHandler @ 01056cfc */
    __s[0x1f] = 0x8010a0a0f0f0000;
    lVar11 = *(long *)(*(long *)(param_3 + 0x248) + 0x18);
    iVar9 = *(int *)(*(long *)(param_3 + 0x220) + 0xc84);
    iVar4 = 6;
    if (lVar11 != 0) {
      iVar9 = (int)lVar11;
    }
    do {
      uVar7 = iVar4 + 2;
      iVar4 = iVar4 + 1;
    } while (1 << (ulong)(uVar7 & 0x1f) <= iVar9);
    if (iVar4 < 10) {
      *(char *)((long)__s + 0xfc) = (char)iVar4;
      return 0;
    }
    break;
  case 8:
    thunk_FUN_0104b1cc(param_5[0x1c],0,"lws_free");
    thunk_FUN_0104b1cc(param_5[0x1d],0,"lws_free");
    bVar1 = *(byte *)((long)param_5 + 0x106);
    if ((bVar1 >> 1 & 1) != 0) {
      inflateEnd(param_5);
      bVar1 = *(byte *)((long)param_5 + 0x106);
    }
    if ((bVar1 & 1) != 0) {
      deflateEnd(param_5 + 0xe);
    }
    thunk_FUN_0104b1cc(param_5,0,"lws_free");
    return 0;
  case 0xc:
    if ((*(byte *)((long)param_5 + 0x106) >> 2 & 1) != 0) {
      *(byte *)((long)param_5 + 0x106) = *(byte *)((long)param_5 + 0x106) & 0xfb;
      pbVar6 = (byte *)*param_6;
                    /* try { // try from 01056cb8 to 01156d17 has its CatchHandler @ 01056a90 */
      uVar7 = (uint)(char)*pbVar6;
      if (((char)*pbVar6 < '\0') && (*(char *)((long)param_5 + 0xf9) != '\0')) {
        deflateEnd(param_5 + 0xe);
        *(byte *)((long)param_5 + 0x106) = *(byte *)((long)param_5 + 0x106) & 0xfe;
        pbVar6 = (byte *)*param_6;
        uVar7 = (uint)*pbVar6;
      }
      if ((uVar7 & 0xf) - 1 < 2) {
                    /* catch() { ... } // from try @ 01056af0 with catch @ 01056cf8
                       catch() { ... } // from try @ 01056bfc with catch @ 01056cf8 */
                    /* catch() { ... } // from try @ 01056bd4 with catch @ 01056cfc */
        *pbVar6 = (byte)uVar7 | 0x40;
      }
    }
    break;
  case 0x15:
    bVar1 = *(byte *)((long)param_5 + 0x106);
    if ((bVar1 & 1) == 0) {
                    /* try { // try from 01056d18 to 01156d6f has its CatchHandler @ 01056d18
                       catch() { ... } // from try @ 01056d18 with catch @ 01056d18
                       catch() { ... } // from try @ 01056e00 with catch @ 01056d18 */
      lVar11 = 2;
      if (*(int *)(*(long *)(param_3 + 0x228) + 0x1d0) < 1) {
        lVar11 = 3;
      }
      iVar4 = deflateInit2_(param_5 + 0xe,*(undefined1 *)((long)param_5 + 0xfe),8,
                            -(uint)*(byte *)((long)param_5 + lVar11 + 0xf8),
                            *(undefined1 *)((long)param_5 + 0xff),0,"1.2.8",0x70);
      if (iVar4 != 0) {
        return 1;
      }
      bVar1 = *(byte *)((long)param_5 + 0x106);
    }
    lVar11 = param_5[0x1d];
    *(byte *)((long)param_5 + 0x106) = bVar1 | 1;
    if (lVar11 == 0) {
      lVar11 = thunk_FUN_0104b1cc(0,(long)(1 << (ulong)(*(byte *)((long)param_5 + 0xfd) & 0x1f)) +
                                    0x1c,"pmd tx deflate buf");
      param_5[0x1d] = lVar11;
      if (lVar11 == 0) {
LAB_01057070:
        pcVar12 = "%s: OOM\n";
LAB_01057078:
        _lws_log(1,pcVar12,"lws_extension_callback_pm_deflate");
        return 0xffffffff;
      }
    }
    if (*param_6 != 0) {
      param_5[0xe] = *param_6;
      *(int *)(param_5 + 0xf) = (int)param_6[1];
    }
    param_5[0x11] = lVar11 + 0x15;
    *param_6 = lVar11 + 0x15;
    *(int *)(param_5 + 0x12) = 1 << (ulong)(*(byte *)((long)param_5 + 0xfd) & 0x1f);
    iVar4 = deflate(param_5 + 0xe,2);
    if (iVar4 == -2) {
                    /* try { // try from 01057088 to 011570c3 has its CatchHandler @ 010571d8 */
      return 0xffffffff;
    }
    if ((*(byte *)((long)param_5 + 0x106) >> 4 & 1) != 0) {
      *(byte *)((long)param_5 + 0x106) = *(byte *)((long)param_5 + 0x106) & 0xef;
      if ((int)param_5[0x12] == 1 << (ulong)(*(byte *)((long)param_5 + 0xfd) & 0x1f)) {
        lVar8 = *param_6;
        lVar11 = param_5[0x20];
        *param_6 = lVar8 + -1;
        *(char *)(lVar8 + -1) = (char)lVar11;
      }
      else {
        lVar11 = *param_6;
                    /* try { // try from 010570c8 to 011570d3 has its CatchHandler @ 010571d4 */
        *param_6 = lVar11 + -5;
        *(char *)(lVar11 + -5) = (char)param_5[0x20];
                    /* try { // try from 010570dc to 011570e7 has its CatchHandler @ 010571bc */
        *(undefined1 *)(*param_6 + 1) = *(undefined1 *)((long)param_5 + 0x101);
                    /* try { // try from 010570e8 to 011571eb has its CatchHandler @ 0105700c */
        *(undefined1 *)(*param_6 + 2) = *(undefined1 *)((long)param_5 + 0x102);
        *(undefined1 *)(*param_6 + 3) = *(undefined1 *)((long)param_5 + 0x103);
        *(undefined1 *)(*param_6 + 4) = *(undefined1 *)((long)param_5 + 0x104);
      }
    }
    lVar11 = param_5[0x11];
    *(byte *)((long)param_5 + 0x106) = *(byte *)((long)param_5 + 0x106) | 4;
    iVar4 = (int)lVar11 - (int)*param_6;
    *(int *)(param_6 + 1) = iVar4;
    if ((param_7 >> 6 & 1) == 0) {
      bVar2 = (int)param_5[0x12] == 0;
      uVar10 = (ulong)bVar2;
      uVar7 = bVar2 | 4;
      if (iVar4 < (int)uVar7) goto LAB_010571b0;
    }
    else {
      uVar10 = 1;
      uVar7 = 5;
      if (iVar4 < 5) goto LAB_010571b0;
    }
    param_5[0x11] = lVar11 + -1;
    *(byte *)((long)param_5 + 0x106) =
         *(byte *)((long)param_5 + 0x106) & 0xef | (byte)((int)uVar10 << 4);
    *(undefined1 *)((long)param_5 + uVar10 + 0x103) = *(undefined1 *)(lVar11 + -1);
    uVar10 = uVar10 | 0x102;
    do {
      lVar11 = param_5[0x11];
      param_5[0x11] = lVar11 + -1;
      lVar8 = uVar10 - 0x100;
      *(undefined1 *)((long)param_5 + uVar10) = *(undefined1 *)(lVar11 + -1);
      uVar10 = uVar10 - 1;
    } while (0 < lVar8);
    *(uint *)(param_6 + 1) = (int)param_6[1] - uVar7;
LAB_010571b0:
                    /* catch() { ... } // from try @ 010570dc with catch @ 010571bc */
    return (uint)((int)param_5[0x12] == 0);
  case 0x16:
    if ((*(byte *)(param_3 + 0x101) >> 6 & 1) == 0) {
                    /* try { // try from 01056d70 to 01156d97 has its CatchHandler @ 01056fa8 */
      return 0;
    }
    bVar1 = *(byte *)((long)param_5 + 0x106);
    if ((bVar1 >> 1 & 1) == 0) {
      iVar4 = inflateInit2_(param_5,-(uint)*(byte *)((long)param_5 + 0xfa),"1.2.8",0x70);
      if (iVar4 != 0) {
        pcVar12 = "%s: iniflateInit failed\n";
        goto LAB_01057078;
      }
      bVar1 = *(byte *)((long)param_5 + 0x106);
    }
    lVar11 = param_5[0x1c];
    *(byte *)((long)param_5 + 0x106) = bVar1 | 2;
                    /* catch() { ... } // from try @ 01056df4 with catch @ 01056f8c */
    if (lVar11 == 0) {
                    /* catch() { ... } // from try @ 01056de8 with catch @ 01056f90 */
                    /* catch() { ... } // from try @ 01056d70 with catch @ 01056fa8 */
      lVar11 = thunk_FUN_0104b1cc(0,(long)(1 << (ulong)(*(byte *)((long)param_5 + 0xfc) & 0x1f)) +
                                    0x1c,"pmd rx inflate buf");
      param_5[0x1c] = lVar11;
      if (lVar11 == 0) goto LAB_01057070;
    }
    iVar4 = (int)param_5[1];
    if (iVar4 == 0) {
      if (*param_6 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (int)param_6[1];
        if (iVar4 != 0) {
          *param_5 = *param_6;
          *(int *)(param_5 + 1) = iVar4;
        }
      }
    }
    param_5[3] = lVar11 + 0x10;
    *param_6 = lVar11 + 0x10;
    *(int *)(param_5 + 4) = 1 << (ulong)(*(byte *)((long)param_5 + 0xfc) & 0x1f);
    if ((*(byte *)((long)param_5 + 0x106) >> 3 & 1) != 0) {
      param_5[3] = lVar11 + 0x11;
      *(undefined1 *)(lVar11 + 0x10) = *(undefined1 *)((long)param_5 + 0x105);
      iVar4 = (int)param_5[1];
      *(int *)(param_5 + 4) = (int)param_5[4] + -1;
                    /* try { // try from 0105700c to 01157087 has its CatchHandler @ 0105700c
                       catch() { ... } // from try @ 0105700c with catch @ 0105700c
                       catch() { ... } // from try @ 010570e8 with catch @ 0105700c */
      *(byte *)((long)param_5 + 0x106) = *(byte *)((long)param_5 + 0x106) & 0xf7;
    }
    if (((iVar4 == 0) && ((*(byte *)(param_3 + 0x106) & 1) != 0)) &&
       (*(long *)(param_3 + 0x60) == 0)) {
      bVar2 = true;
      *param_5 = (long)&DAT_0177ed00;
      *(undefined4 *)(param_5 + 1) = 4;
    }
    else {
      bVar2 = false;
    }
    iVar4 = inflate(param_5,0);
    if ((iVar4 + 4U < 7) && ((0x47U >> (ulong)(iVar4 + 4U & 0x1f) & 1) != 0)) {
      return 0xffffffff;
    }
                    /* catch() { ... } // from try @ 010570c8 with catch @ 010571d4 */
                    /* catch() { ... } // from try @ 01057088 with catch @ 010571d8 */
    if ((((int)param_5[1] != 0) || ((*(byte *)(param_3 + 0x106) & 1) == 0)) ||
       ((bVar2 || (*(long *)(param_3 + 0x60) != 0)))) {
      iVar4 = (int)param_5[4];
joined_r0x01057064:
      if (iVar4 != 0) {
        lVar11 = param_5[3];
        goto LAB_01057360;
      }
    }
    else {
      if ((int)param_5[4] != 0) {
        *param_5 = (long)&DAT_0177ed00;
        *(undefined4 *)(param_5 + 1) = 4;
        iVar4 = inflate(param_5,2);
        if ((iVar4 + 4U < 7) && ((0x47U >> (ulong)(iVar4 + 4U & 0x1f) & 1) != 0)) {
          return 0xffffffff;
        }
        bVar2 = true;
        iVar4 = (int)param_5[4];
        goto joined_r0x01057064;
      }
      bVar2 = false;
    }
    lVar8 = param_5[3];
    lVar11 = lVar8 + -1;
    param_5[3] = lVar11;
    uVar3 = *(undefined1 *)(lVar8 + -1);
    *(byte *)((long)param_5 + 0x106) = *(byte *)((long)param_5 + 0x106) | 8;
    *(undefined1 *)((long)param_5 + 0x105) = uVar3;
LAB_01057360:
    iVar4 = (int)lVar11 - (int)*param_6;
    *(int *)(param_6 + 1) = iVar4;
    param_5[0x1e] = param_5[0x1e] + (long)iVar4;
    if ((bVar2) && (param_5[0x1e] = 0, (char)param_5[0x1f] != '\0')) {
      inflateEnd(param_5);
      *(byte *)((long)param_5 + 0x106) = *(byte *)((long)param_5 + 0x106) & 0xfd;
    }
    return *(byte *)((long)param_5 + 0x106) >> 3 & 1;
  case 0x18:
    uVar5 = (undefined4)param_6[1];
    goto LAB_0105727c;
  case 0x19:
    if ((*(byte *)((long)param_5 + 0xfa) & 0xf8) != 8) {
      return 0xffffffff;
    }
    if ((*(byte *)((long)param_5 + 0xfb) & 0xf8) != 8) {
      return 0xffffffff;
    }
    break;
  case 0x1a:
    pcVar12 = (char *)*param_6;
    if (pcVar12 == (char *)0x0) {
      return 0;
    }
    iVar4 = strcmp("server_no_context_takeover",pcVar12);
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      iVar4 = strcmp("client_no_context_takeover",pcVar12);
      if (iVar4 == 0) {
        uVar5 = 1;
      }
      else {
                    /* try { // try from 01056de8 to 01156df3 has its CatchHandler @ 01056f90 */
        iVar4 = strcmp("server_max_window_bits",pcVar12);
                    /* try { // try from 01056df4 to 01156dff has its CatchHandler @ 01056f8c */
        if (iVar4 == 0) {
          uVar5 = 2;
        }
        else {
                    /* try { // try from 01056e00 to 01156fbb has its CatchHandler @ 01056d18 */
          iVar4 = strcmp("client_max_window_bits",pcVar12);
          if (iVar4 == 0) {
            uVar5 = 3;
          }
          else {
            iVar4 = strcmp("rx_buf_size",pcVar12);
            if (iVar4 == 0) {
              uVar5 = 4;
            }
            else {
              iVar4 = strcmp("tx_buf_size",pcVar12);
              if (iVar4 == 0) {
                uVar5 = 5;
              }
              else {
                iVar4 = strcmp("compression_level",pcVar12);
                if (iVar4 == 0) {
                  uVar5 = 6;
                }
                else {
                  iVar4 = strcmp("mem_level",pcVar12);
                  if (iVar4 == 0) {
                    uVar5 = 7;
                  }
                  else {
                    iVar4 = strcmp((char *)0x0,pcVar12);
                    if (iVar4 != 0) {
                      return 0;
                    }
                    uVar5 = 8;
                  }
                }
              }
            }
          }
        }
      }
    }
    *(undefined4 *)(param_6 + 1) = uVar5;
LAB_0105727c:
    _lws_log(4,"%s: option set: idx %d, %s, len %d\n","lws_extension_callback_pm_deflate",uVar5,
             param_6[2],(int)param_6[3]);
    if ((char *)param_6[2] == (char *)0x0) {
      uVar3 = 1;
    }
    else {
      iVar4 = atoi((char *)param_6[2]);
      uVar3 = (undefined1)iVar4;
    }
    *(undefined1 *)((long)param_5 + (long)(int)param_6[1] + 0xf8) = uVar3;
    if (*(char *)((long)param_5 + 0xfb) == '\b') {
      *(undefined1 *)((long)param_5 + 0xfb) = 9;
    }
    lVar11 = *(long *)(*(long *)(param_3 + 0x248) + 0x18);
    iVar9 = *(int *)(*(long *)(param_3 + 0x220) + 0xc84);
    iVar4 = 6;
    if (lVar11 != 0) {
      iVar9 = (int)lVar11;
    }
    do {
      uVar7 = iVar4 + 2;
      iVar4 = iVar4 + 1;
    } while (1 << (ulong)(uVar7 & 0x1f) <= iVar9);
    if (iVar4 < (int)(uint)*(byte *)((long)param_5 + 0xfc)) {
      *(char *)((long)param_5 + 0xfc) = (char)iVar4;
      return 0;
    }
  }
  return 0;
}

