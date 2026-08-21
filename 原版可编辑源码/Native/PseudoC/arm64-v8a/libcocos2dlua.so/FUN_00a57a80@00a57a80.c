
undefined4 FUN_00a57a80(long *param_1,ulong param_2,undefined8 *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  
  if (param_3 == (undefined8 *)0x0) {
    if (param_2 < 5) goto LAB_00a57b48;
    iVar4 = memcmp(param_1,"LOGIN",5);
    if (iVar4 == 0) {
      if (param_2 != 5) {
        bVar1 = *(byte *)((long)param_1 + 5);
        iVar4 = isupper((uint)bVar1);
        if ((((bVar1 == 0x5f) || (bVar1 == 0x2d)) || (iVar4 != 0)) || (bVar1 - 0x30 < 10))
        goto LAB_00a57c0c;
      }
      goto LAB_00a57de8;
    }
LAB_00a57c0c:
    iVar4 = memcmp(param_1,"PLAIN",5);
    if (iVar4 == 0) {
      if (param_2 != 5) {
        bVar1 = *(byte *)((long)param_1 + 5);
                    /* try { // try from 00a57e3c to 00b57e6f has its CatchHandler @ 00a57ec0 */
        iVar4 = isupper((uint)bVar1);
        if (((bVar1 == 0x5f) || (bVar1 == 0x2d)) || ((iVar4 != 0 || (bVar1 - 0x30 < 10))))
        goto LAB_00a57c24;
      }
      goto LAB_00a57e60;
    }
LAB_00a57c24:
    if (7 < param_2) {
                    /* try { // try from 00a57e70 to 00b57f0b has its CatchHandler @ 00a57bd0 */
      if (*param_1 == 0x35444d2d4d415243) {
        if (param_2 != 8) {
          bVar1 = *(byte *)(param_1 + 1);
          iVar4 = isupper((uint)bVar1);
          if (((bVar1 == 0x5f) || (bVar1 == 0x2d)) || ((iVar4 != 0 || (bVar1 - 0x30 < 10))))
          goto LAB_00a57e84;
        }
        goto LAB_00a58088;
      }
LAB_00a57e84:
      if ((9 < param_2) && (iVar4 = memcmp(param_1,"DIGEST-MD5",10), iVar4 == 0)) {
        if (param_2 != 10) {
          bVar1 = *(byte *)((long)param_1 + 10);
          iVar4 = isupper((uint)bVar1);
          bVar3 = false;
          bVar2 = false;
          if ((((bVar1 == 0x5f) || (bVar2 = bVar3, bVar1 == 0x2d)) || (iVar4 != 0)) ||
             (bVar1 - 0x30 < 10)) goto LAB_00a57ea8;
        }
        goto LAB_00a58150;
      }
      bVar2 = false;
LAB_00a57ea8:
      iVar4 = memcmp(param_1,"GSSAPI",6);
                    /* catch() { ... } // from try @ 00a57e24 with catch @ 00a57ebc */
      if (iVar4 == 0) {
        if (param_2 != 6) {
          bVar1 = *(byte *)((long)param_1 + 6);
          iVar4 = isupper((uint)bVar1);
          if (((bVar1 == 0x5f) || (bVar1 == 0x2d)) || ((iVar4 != 0 || (bVar1 - 0x30 < 10))))
          goto LAB_00a57ec0;
        }
        goto LAB_00a58010;
      }
LAB_00a57ec0:
                    /* catch() { ... } // from try @ 00a57e3c with catch @ 00a57ec0 */
      if (bVar2) goto LAB_00a57b50;
      if (*param_1 != 0x4c414e5245545845) {
LAB_00a57b48:
        if (param_2 < 4) {
          return 0;
        }
        goto LAB_00a57b50;
      }
      if (param_2 != 8) {
        bVar1 = *(byte *)(param_1 + 1);
                    /* catch() { ... } // from try @ 00a57df0 with catch @ 00a57ef0 */
        iVar4 = isupper((uint)bVar1);
        if (((bVar1 == 0x5f) || (bVar1 == 0x2d)) || ((iVar4 != 0 || (bVar1 - 0x30 < 10))))
        goto LAB_00a57b48;
      }
      goto LAB_00a57f14;
    }
    if (5 < param_2) {
      bVar2 = true;
      goto LAB_00a57ea8;
    }
LAB_00a57b50:
    if ((int)*param_1 == 0x4d4c544e) {
                    /* try { // try from 00a57df0 to 00b57e23 has its CatchHandler @ 00a57ef0 */
      if (param_2 != 4) {
        bVar1 = *(byte *)((long)param_1 + 4);
        iVar4 = isupper((uint)bVar1);
        if ((((bVar1 == 0x5f) || (bVar1 == 0x2d)) || (iVar4 != 0)) || (bVar1 - 0x30 < 10))
        goto LAB_00a57b64;
      }
      goto LAB_00a57e24;
    }
LAB_00a57b64:
    if (param_2 < 7) {
      return 0;
    }
    iVar4 = memcmp(param_1,"XOAUTH2",7);
    if (iVar4 == 0) {
      if (param_2 != 7) {
        bVar1 = *(byte *)((long)param_1 + 7);
        iVar4 = isupper((uint)bVar1);
        if (((bVar1 == 0x5f) || (bVar1 == 0x2d)) || ((iVar4 != 0 || (bVar1 - 0x30 < 10))))
        goto LAB_00a57b84;
      }
      goto LAB_00a5804c;
    }
LAB_00a57b84:
    if (param_2 < 0xb) {
      return 0;
    }
    iVar4 = memcmp(param_1,"OAUTHBEARER",0xb);
    if (iVar4 != 0) {
      return 0;
    }
    if (param_2 != 0xb) {
      bVar1 = *(byte *)((long)param_1 + 0xb);
      iVar4 = isupper((uint)bVar1);
      goto joined_r0x00a580f4;
    }
  }
  else {
    if (param_2 < 5) goto LAB_00a57aac;
    iVar4 = memcmp(param_1,"LOGIN",5);
    if (iVar4 == 0) {
      *param_3 = 5;
      if (param_2 != 5) {
        bVar1 = *(byte *)((long)param_1 + 5);
        iVar4 = isupper((uint)bVar1);
        if (((bVar1 == 0x5f) || (bVar1 == 0x2d)) || ((iVar4 != 0 || (bVar1 - 0x30 < 10))))
        goto LAB_00a57bc4;
      }
LAB_00a57de8:
      lVar5 = 0;
      goto LAB_00a58154;
    }
LAB_00a57bc4:
                    /* try { // try from 00a57bd0 to 00b57def has its CatchHandler @ 00a57bd0
                       catch() { ... } // from try @ 00a57bd0 with catch @ 00a57bd0
                       catch() { ... } // from try @ 00a57e70 with catch @ 00a57bd0 */
    iVar4 = memcmp(param_1,"PLAIN",5);
    if (iVar4 == 0) {
      *param_3 = 5;
      if (param_2 != 5) {
        bVar1 = *(byte *)((long)param_1 + 5);
        iVar4 = isupper((uint)bVar1);
        if ((((bVar1 == 0x5f) || (bVar1 == 0x2d)) || (iVar4 != 0)) || (bVar1 - 0x30 < 10))
        goto LAB_00a57bdc;
      }
LAB_00a57e60:
      lVar5 = 1;
      goto LAB_00a58154;
    }
LAB_00a57bdc:
    if (param_2 < 8) {
      if (5 < param_2) {
        bVar2 = true;
        goto LAB_00a57d3c;
      }
    }
    else {
      if (*param_1 == 0x35444d2d4d415243) {
        *param_3 = 8;
        if (param_2 != 8) {
          bVar1 = *(byte *)(param_1 + 1);
          iVar4 = isupper((uint)bVar1);
          if (((bVar1 == 0x5f) || (bVar1 == 0x2d)) || ((iVar4 != 0 || (bVar1 - 0x30 < 10))))
          goto LAB_00a57d18;
        }
LAB_00a58088:
        lVar5 = 2;
        goto LAB_00a58154;
      }
LAB_00a57d18:
      if ((9 < param_2) && (iVar4 = memcmp(param_1,"DIGEST-MD5",10), iVar4 == 0)) {
        *param_3 = 10;
        if (param_2 != 10) {
          bVar1 = *(byte *)((long)param_1 + 10);
          iVar4 = isupper((uint)bVar1);
          bVar3 = false;
          bVar2 = false;
          if ((((bVar1 == 0x5f) || (bVar2 = bVar3, bVar1 == 0x2d)) || (iVar4 != 0)) ||
             (bVar1 - 0x30 < 10)) goto LAB_00a57d3c;
        }
LAB_00a58150:
        lVar5 = 3;
        goto LAB_00a58154;
      }
      bVar2 = false;
LAB_00a57d3c:
      iVar4 = memcmp(param_1,"GSSAPI",6);
      if (iVar4 == 0) {
        *param_3 = 6;
        if (param_2 != 6) {
          bVar1 = *(byte *)((long)param_1 + 6);
          iVar4 = isupper((uint)bVar1);
          if (((bVar1 == 0x5f) || (bVar1 == 0x2d)) || ((iVar4 != 0 || (bVar1 - 0x30 < 10))))
          goto LAB_00a57d54;
        }
LAB_00a58010:
        lVar5 = 4;
        goto LAB_00a58154;
      }
LAB_00a57d54:
      if (bVar2) goto LAB_00a57ab4;
      if (*param_1 == 0x4c414e5245545845) {
        *param_3 = 8;
        if (param_2 != 8) {
          bVar1 = *(byte *)(param_1 + 1);
          iVar4 = isupper((uint)bVar1);
          if (((bVar1 == 0x5f) || (bVar1 == 0x2d)) || ((iVar4 != 0 || (bVar1 - 0x30 < 10))))
          goto LAB_00a57aac;
        }
LAB_00a57f14:
        lVar5 = 5;
        goto LAB_00a58154;
      }
LAB_00a57aac:
      if (param_2 < 4) {
        return 0;
      }
    }
LAB_00a57ab4:
    if ((int)*param_1 == 0x4d4c544e) {
      *param_3 = 4;
      if (param_2 != 4) {
        bVar1 = *(byte *)((long)param_1 + 4);
        iVar4 = isupper((uint)bVar1);
        if ((((bVar1 == 0x5f) || (bVar1 == 0x2d)) || (iVar4 != 0)) || (bVar1 - 0x30 < 10))
        goto LAB_00a57ac8;
      }
LAB_00a57e24:
                    /* try { // try from 00a57e24 to 00b57e37 has its CatchHandler @ 00a57ebc */
      lVar5 = 6;
      goto LAB_00a58154;
    }
LAB_00a57ac8:
    if (param_2 < 7) {
      return 0;
    }
    iVar4 = memcmp(param_1,"XOAUTH2",7);
    if (iVar4 == 0) {
      lVar5 = 7;
      *param_3 = 7;
      if (param_2 == 7) goto LAB_00a58154;
      bVar1 = *(byte *)((long)param_1 + 7);
      iVar4 = isupper((uint)bVar1);
      if (((bVar1 != 0x5f) && (bVar1 != 0x2d)) && ((iVar4 == 0 && (9 < bVar1 - 0x30)))) {
LAB_00a5804c:
        lVar5 = 7;
        goto LAB_00a58154;
      }
    }
    if ((param_2 < 0xb) || (iVar4 = memcmp(param_1,"OAUTHBEARER",0xb), iVar4 != 0)) {
      return 0;
    }
    *param_3 = 0xb;
    if (param_2 != 0xb) {
      bVar1 = *(byte *)((long)param_1 + 0xb);
      iVar4 = isupper((uint)bVar1);
joined_r0x00a580f4:
      if (bVar1 == 0x5f) {
        return 0;
      }
      if (bVar1 == 0x2d) {
        return 0;
      }
      if (iVar4 != 0) {
        return 0;
      }
      if (bVar1 - 0x30 < 10) {
        return 0;
      }
    }
  }
  lVar5 = 8;
LAB_00a58154:
                    /* try { // try from 00a58154 to 00b58223 has its CatchHandler @ 00a58154
                       catch() { ... } // from try @ 00a58154 with catch @ 00a58154
                       catch() { ... } // from try @ 00a582a4 with catch @ 00a58154 */
  return (&DAT_016a4830)[lVar5 * 6];
}

