
undefined4 FUN_00a41098(long *param_1,ulong param_2,undefined8 *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  
  if (param_3 == (undefined8 *)0x0) {
                    /* catch() { ... } // from try @ 00a40f94 with catch @ 00a4115c */
    if (param_2 < 5) goto LAB_00a41160;
                    /* try { // try from 00a4121c to 00b41233 has its CatchHandler @ 00a413fc */
    iVar4 = memcmp(param_1,"LOGIN",5);
    if (iVar4 == 0) {
      if (param_2 != 5) {
        bVar1 = *(byte *)((long)param_1 + 5);
        iVar4 = isupper((uint)bVar1);
                    /* catch() { ... } // from try @ 00a41248 with catch @ 00a413f4 */
                    /* catch() { ... } // from try @ 00a4123c with catch @ 00a413f8 */
                    /* catch() { ... } // from try @ 00a4121c with catch @ 00a413fc */
        if ((((bVar1 == 0x5f) || (bVar1 == 0x2d)) || (iVar4 != 0)) || (bVar1 - 0x30 < 10))
        goto LAB_00a41224;
      }
      goto LAB_00a41400;
    }
LAB_00a41224:
    iVar4 = memcmp(param_1,"PLAIN",5);
    if (iVar4 == 0) {
      if (param_2 != 5) {
        bVar1 = *(byte *)((long)param_1 + 5);
        iVar4 = isupper((uint)bVar1);
                    /* try { // try from 00a41464 to 00b414b7 has its CatchHandler @ 00a41464
                       catch() { ... } // from try @ 00a41464 with catch @ 00a41464
                       catch() { ... } // from try @ 00a41628 with catch @ 00a41464 */
        if (((bVar1 == 0x5f) || (bVar1 == 0x2d)) || ((iVar4 != 0 || (bVar1 - 0x30 < 10))))
        goto LAB_00a4123c;
      }
      goto LAB_00a41478;
    }
LAB_00a4123c:
                    /* try { // try from 00a4123c to 00b41247 has its CatchHandler @ 00a413f8 */
    if (7 < param_2) {
      if (*param_1 == 0x35444d2d4d415243) {
        if (param_2 != 8) {
          bVar1 = *(byte *)(param_1 + 1);
          iVar4 = isupper((uint)bVar1);
                    /* catch() { ... } // from try @ 00a414e4 with catch @ 00a4169c */
          if (((bVar1 == 0x5f) || (bVar1 == 0x2d)) || ((iVar4 != 0 || (bVar1 - 0x30 < 10))))
          goto LAB_00a4149c;
        }
        goto LAB_00a416a0;
      }
LAB_00a4149c:
                    /* try { // try from 00a414b8 to 00b414cf has its CatchHandler @ 00a416a4 */
      if ((9 < param_2) && (iVar4 = memcmp(param_1,"DIGEST-MD5",10), iVar4 == 0)) {
        if (param_2 != 10) {
          bVar1 = *(byte *)((long)param_1 + 10);
          iVar4 = isupper((uint)bVar1);
          bVar3 = false;
          bVar2 = false;
                    /* try { // try from 00a41760 to 00b41777 has its CatchHandler @ 00a41940 */
          if ((((bVar1 == 0x5f) || (bVar2 = bVar3, bVar1 == 0x2d)) || (iVar4 != 0)) ||
             (bVar1 - 0x30 < 10)) goto LAB_00a414c0;
        }
        goto LAB_00a41768;
      }
      bVar2 = false;
LAB_00a414c0:
      iVar4 = memcmp(param_1,"GSSAPI",6);
      if (iVar4 == 0) {
        if (param_2 != 6) {
          bVar1 = *(byte *)((long)param_1 + 6);
          iVar4 = isupper((uint)bVar1);
          if (((bVar1 == 0x5f) || (bVar1 == 0x2d)) || ((iVar4 != 0 || (bVar1 - 0x30 < 10))))
          goto LAB_00a414d8;
        }
        goto LAB_00a41628;
      }
LAB_00a414d8:
                    /* try { // try from 00a414d8 to 00b414e3 has its CatchHandler @ 00a416a0 */
      if (bVar2) goto LAB_00a41168;
                    /* try { // try from 00a414e4 to 00b414ef has its CatchHandler @ 00a4169c */
                    /* try { // try from 00a414f0 to 00b41627 has its CatchHandler @ 00a416b4 */
      if (*param_1 != 0x4c414e5245545845) {
LAB_00a41160:
                    /* catch() { ... } // from try @ 00a40f74 with catch @ 00a41160 */
        if (param_2 < 4) {
          return 0;
        }
        goto LAB_00a41168;
      }
      if (param_2 != 8) {
        bVar1 = *(byte *)(param_1 + 1);
        iVar4 = isupper((uint)bVar1);
        if (((bVar1 == 0x5f) || (bVar1 == 0x2d)) || ((iVar4 != 0 || (bVar1 - 0x30 < 10))))
        goto LAB_00a41160;
      }
      goto LAB_00a4152c;
    }
                    /* try { // try from 00a41248 to 00b41253 has its CatchHandler @ 00a413f4 */
    if (5 < param_2) {
      bVar2 = true;
      goto LAB_00a414c0;
    }
LAB_00a41168:
                    /* catch() { ... } // from try @ 00a40fac with catch @ 00a41170 */
    if ((int)*param_1 == 0x4d4c544e) {
                    /* catch() { ... } // from try @ 00a41254 with catch @ 00a4140c */
      if (param_2 != 4) {
        bVar1 = *(byte *)((long)param_1 + 4);
        iVar4 = isupper((uint)bVar1);
        if ((((bVar1 == 0x5f) || (bVar1 == 0x2d)) || (iVar4 != 0)) || (bVar1 - 0x30 < 10))
        goto LAB_00a4117c;
      }
      goto LAB_00a4143c;
    }
LAB_00a4117c:
    if (param_2 < 7) {
      return 0;
    }
    iVar4 = memcmp(param_1,"XOAUTH2",7);
    if (iVar4 == 0) {
      if (param_2 != 7) {
        bVar1 = *(byte *)((long)param_1 + 7);
        iVar4 = isupper((uint)bVar1);
        if (((bVar1 == 0x5f) || (bVar1 == 0x2d)) || ((iVar4 != 0 || (bVar1 - 0x30 < 10))))
        goto LAB_00a4119c;
      }
      goto LAB_00a41664;
    }
LAB_00a4119c:
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
      goto joined_r0x00a4170c;
    }
  }
  else {
    if (param_2 < 5) goto LAB_00a410c4;
                    /* try { // try from 00a411c8 to 00b4121b has its CatchHandler @ 00a411c8
                       catch() { ... } // from try @ 00a411c8 with catch @ 00a411c8
                       catch() { ... } // from try @ 00a41380 with catch @ 00a411c8 */
    iVar4 = memcmp(param_1,"LOGIN",5);
    if (iVar4 == 0) {
                    /* try { // try from 00a41254 to 00b4137f has its CatchHandler @ 00a4140c */
      *param_3 = 5;
      if (param_2 != 5) {
        bVar1 = *(byte *)((long)param_1 + 5);
        iVar4 = isupper((uint)bVar1);
        if (((bVar1 == 0x5f) || (bVar1 == 0x2d)) || ((iVar4 != 0 || (bVar1 - 0x30 < 10))))
        goto LAB_00a411dc;
      }
LAB_00a41400:
      lVar5 = 0;
      goto LAB_00a4176c;
    }
LAB_00a411dc:
    iVar4 = memcmp(param_1,"PLAIN",5);
    if (iVar4 == 0) {
      *param_3 = 5;
      if (param_2 != 5) {
        bVar1 = *(byte *)((long)param_1 + 5);
        iVar4 = isupper((uint)bVar1);
        if ((((bVar1 == 0x5f) || (bVar1 == 0x2d)) || (iVar4 != 0)) || (bVar1 - 0x30 < 10))
        goto LAB_00a411f4;
      }
LAB_00a41478:
      lVar5 = 1;
      goto LAB_00a4176c;
    }
LAB_00a411f4:
    if (param_2 < 8) {
      if (5 < param_2) {
        bVar2 = true;
        goto LAB_00a41354;
      }
    }
    else {
      if (*param_1 == 0x35444d2d4d415243) {
        *param_3 = 8;
        if (param_2 != 8) {
          bVar1 = *(byte *)(param_1 + 1);
          iVar4 = isupper((uint)bVar1);
          if (((bVar1 == 0x5f) || (bVar1 == 0x2d)) || ((iVar4 != 0 || (bVar1 - 0x30 < 10))))
          goto LAB_00a41330;
        }
LAB_00a416a0:
                    /* catch() { ... } // from try @ 00a414d8 with catch @ 00a416a0 */
        lVar5 = 2;
                    /* catch() { ... } // from try @ 00a414b8 with catch @ 00a416a4 */
        goto LAB_00a4176c;
      }
LAB_00a41330:
      if ((9 < param_2) && (iVar4 = memcmp(param_1,"DIGEST-MD5",10), iVar4 == 0)) {
        *param_3 = 10;
                    /* catch() { ... } // from try @ 00a414f0 with catch @ 00a416b4 */
        if (param_2 != 10) {
          bVar1 = *(byte *)((long)param_1 + 10);
          iVar4 = isupper((uint)bVar1);
          bVar3 = false;
          bVar2 = false;
          if ((((bVar1 == 0x5f) || (bVar2 = bVar3, bVar1 == 0x2d)) || (iVar4 != 0)) ||
             (bVar1 - 0x30 < 10)) goto LAB_00a41354;
        }
LAB_00a41768:
        lVar5 = 3;
        goto LAB_00a4176c;
      }
      bVar2 = false;
LAB_00a41354:
      iVar4 = memcmp(param_1,"GSSAPI",6);
      if (iVar4 == 0) {
        *param_3 = 6;
        if (param_2 != 6) {
          bVar1 = *(byte *)((long)param_1 + 6);
          iVar4 = isupper((uint)bVar1);
          if (((bVar1 == 0x5f) || (bVar1 == 0x2d)) || ((iVar4 != 0 || (bVar1 - 0x30 < 10))))
          goto LAB_00a4136c;
        }
LAB_00a41628:
                    /* try { // try from 00a41628 to 00b4170b has its CatchHandler @ 00a41464 */
        lVar5 = 4;
        goto LAB_00a4176c;
      }
LAB_00a4136c:
      if (bVar2) goto LAB_00a410cc;
                    /* try { // try from 00a41380 to 00b41463 has its CatchHandler @ 00a411c8 */
      if (*param_1 == 0x4c414e5245545845) {
        *param_3 = 8;
        if (param_2 != 8) {
          bVar1 = *(byte *)(param_1 + 1);
          iVar4 = isupper((uint)bVar1);
          if (((bVar1 == 0x5f) || (bVar1 == 0x2d)) || ((iVar4 != 0 || (bVar1 - 0x30 < 10))))
          goto LAB_00a410c4;
        }
LAB_00a4152c:
        lVar5 = 5;
        goto LAB_00a4176c;
      }
LAB_00a410c4:
      if (param_2 < 4) {
        return 0;
      }
    }
LAB_00a410cc:
    if ((int)*param_1 == 0x4d4c544e) {
      *param_3 = 4;
      if (param_2 != 4) {
        bVar1 = *(byte *)((long)param_1 + 4);
        iVar4 = isupper((uint)bVar1);
        if ((((bVar1 == 0x5f) || (bVar1 == 0x2d)) || (iVar4 != 0)) || (bVar1 - 0x30 < 10))
        goto LAB_00a410e0;
      }
LAB_00a4143c:
      lVar5 = 6;
      goto LAB_00a4176c;
    }
LAB_00a410e0:
                    /* try { // try from 00a410e4 to 00b411c7 has its CatchHandler @ 00a40f20 */
    if (param_2 < 7) {
      return 0;
    }
    iVar4 = memcmp(param_1,"XOAUTH2",7);
    if (iVar4 == 0) {
      lVar5 = 7;
      *param_3 = 7;
      if (param_2 == 7) goto LAB_00a4176c;
      bVar1 = *(byte *)((long)param_1 + 7);
      iVar4 = isupper((uint)bVar1);
      if (((bVar1 != 0x5f) && (bVar1 != 0x2d)) && ((iVar4 == 0 && (9 < bVar1 - 0x30)))) {
LAB_00a41664:
        lVar5 = 7;
        goto LAB_00a4176c;
      }
    }
    if ((param_2 < 0xb) || (iVar4 = memcmp(param_1,"OAUTHBEARER",0xb), iVar4 != 0)) {
      return 0;
    }
    *param_3 = 0xb;
    if (param_2 != 0xb) {
      bVar1 = *(byte *)((long)param_1 + 0xb);
      iVar4 = isupper((uint)bVar1);
joined_r0x00a4170c:
                    /* try { // try from 00a4170c to 00b4175f has its CatchHandler @ 00a4170c
                       catch() { ... } // from try @ 00a4170c with catch @ 00a4170c
                       catch() { ... } // from try @ 00a418c4 with catch @ 00a4170c */
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
LAB_00a4176c:
                    /* try { // try from 00a41780 to 00b4178b has its CatchHandler @ 00a4193c */
                    /* try { // try from 00a4178c to 00b41797 has its CatchHandler @ 00a41938 */
  return (&DAT_01c6e060)[lVar5 * 6];
}

