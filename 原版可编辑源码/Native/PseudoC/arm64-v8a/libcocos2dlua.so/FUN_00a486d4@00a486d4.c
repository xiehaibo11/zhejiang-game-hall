
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00a486d4(long *param_1,long param_2,char *param_3,undefined1 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  undefined4 uVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  char local_70 [4];
  uint local_6c;
  ulong local_68;
  
  uVar5 = *(uint *)(param_1 + 0xdf);
  *(undefined4 *)(param_1 + 0xdf) = 0;
  if ((*(uint *)(param_2 + 0x1e4) & 0x15) == 1) {
    uVar4 = (undefined4)param_1[0x83];
  }
  else {
    uVar4 = 0xffffffff;
  }
  if ((*(uint *)(param_2 + 0x1e4) & 0x2a) == 2) {
    uVar13 = *(undefined4 *)((long)param_1 + 0x41c);
  }
  else {
    uVar13 = 0xffffffff;
  }
  uVar5 = uVar5 | *(long *)(*param_1 + 0x8d00) != 0;
  if (uVar5 == 0) {
    uVar5 = FUN_00a2b3d0(uVar4,0xffffffff,uVar13,0);
  }
  if (uVar5 == 4) {
    FUN_00a38a08(param_2,"select/poll returned error");
    return 0x37;
  }
  uVar20 = *(uint *)(param_2 + 0x1e4);
  plVar1 = (long *)(param_2 + 0x78);
  if (((uVar20 & 1) == 0) || (((uVar5 & 1) == 0 && (*(char *)((long)param_1 + 0x3d1) == '\0')))) {
    uVar19 = 0;
  }
  else {
    local_6c = local_6c & 0xffffff00;
    *param_3 = '\0';
    *param_4 = 0;
    uVar20 = 0;
    uVar18 = 0;
    iVar7 = 100;
LAB_00a488f0:
    lVar10 = 0x4000;
    if (*(long *)(param_2 + 0x5d0) != 0) {
      lVar10 = *(long *)(param_2 + 0x5d0);
    }
    lVar11 = lVar10;
    if ((*(long *)(param_2 + 0x78) == -1) || (*(char *)(param_2 + 0xd8) != '\0')) {
LAB_00a48928:
      uVar8 = FUN_00a393e0(param_1,(int)param_1[0x83],*(undefined8 *)(param_2 + 0x1d0),lVar11,
                           &local_68);
      if ((int)uVar8 != 0) {
        uVar19 = uVar20;
        if ((int)uVar8 != 0x51) {
          return uVar8;
        }
        goto joined_r0x00a49118;
      }
      lVar14 = *(long *)(param_2 + 0x98);
    }
    else {
      lVar14 = *(long *)(param_2 + 0x98);
      lVar11 = *(long *)(param_2 + 0x78) - lVar14;
      if (lVar10 <= lVar11) {
        lVar11 = lVar10;
      }
      if (lVar11 != 0) goto LAB_00a48928;
      local_68 = 0;
    }
    if (((lVar14 == 0) && (*(long *)(param_2 + 0xa0) == 0)) &&
       (FUN_00a30f04(param_2,7), *(int *)(param_2 + 0x140) != 0)) {
      auVar22 = FUN_00a2e828();
      *(undefined1 (*) [16])(param_2 + 0x130) = auVar22;
    }
    uVar20 = 1;
    uVar19 = 1;
    if (local_68 != 0) {
      bVar3 = false;
      if ((long)local_68 < 1) goto LAB_00a48990;
LAB_00a489b4:
      *(undefined1 *)(*(long *)(param_2 + 0x1d0) + local_68) = 0;
LAB_00a489bc:
      *(undefined8 *)(param_2 + 0xf8) = *(undefined8 *)(param_2 + 0x1d0);
      if (*(code **)(param_1[0x80] + 0x68) != (code *)0x0) {
        uVar8 = (**(code **)(param_1[0x80] + 0x68))(param_2,param_1,&local_68,&local_6c);
        if ((int)uVar8 != 0) {
          return uVar8;
        }
        if ((char)local_6c != '\0') goto joined_r0x00a49118;
      }
      if (*(char *)(param_2 + 0xd8) != '\0') {
        local_70[0] = '\0';
        uVar8 = FUN_00a37420(param_2,param_1,&local_68,local_70);
        if ((int)uVar8 != 0) {
          return uVar8;
        }
        if (((*(code **)(param_1[0x80] + 0x68) != (code *)0x0) && (*(long *)(param_2 + 0x88) < 1))
           && (0 < (long)local_68)) {
          uVar8 = (**(code **)(param_1[0x80] + 0x68))(param_2,param_1,&local_68,&local_6c);
          if ((int)uVar8 != 0) {
            return uVar8;
          }
          if ((char)local_6c != '\0') goto joined_r0x00a49118;
        }
        if (local_70[0] != '\0') {
          if (0 < (long)local_68) {
            uVar18 = FUN_00a27f7c(*(undefined8 *)(*param_1 + 0x60),1);
            uVar8 = *(undefined8 *)(param_2 + 0x8cc0);
            if ((uVar18 & 1) == 0) {
              FUN_00a38740(param_2,
                           "Excess found in a non pipelined read: excess = %zd url = %s (zero-length body)\n"
                           ,local_68,uVar8);
            }
            else {
              FUN_00a38740(param_2,"Rewinding stream by : %zd bytes on url %s (zero-length body)\n",
                           local_68,uVar8);
              *(undefined1 *)((long)param_1 + 0x3d1) = 1;
              param_1[0x92] = param_1[0x92] - local_68;
            }
          }
          goto joined_r0x00a49118;
        }
      }
      if (((*(long *)(param_2 + 0xf8) == 0) || (*(char *)(param_2 + 0xd8) != '\0')) ||
         (!(bool)(bVar3 | 0 < (long)local_68))) {
LAB_00a48d8c:
        lVar10 = param_1[0x80];
      }
      else {
        if (*(char *)(param_2 + 0x620) != '\0') {
                    /* catch() { ... } // from try @ 00a49380 with catch @ 00a493b8 */
          FUN_00a26ce8(param_1,2);
          *param_3 = '\x01';
          return 8;
                    /* try { // try from 00a493cc to 00b4976b has its CatchHandler @ 00a493cc
                       catch() { ... } // from try @ 00a493cc with catch @ 00a493cc
                       catch() { ... } // from try @ 00a497ec with catch @ 00a493cc */
        }
        if ((!bVar3 && *(long *)(param_2 + 0x1c8) == 0) &&
           ((*(uint *)(param_1[0x80] + 0x78) & 0x40003) != 0)) {
          if (*(long *)(param_2 + 0x1f8) != 0) {
            if (*(char *)((long)param_1 + 0x3b9) != '\0') goto LAB_00a494a8;
            *(undefined1 *)(param_2 + 0x1e9) = 1;
            FUN_00a38740(param_2,"Ignoring the response-body\n");
          }
          if ((((*(long *)(param_2 + 0x8cd8) != 0) && (*(char *)(param_2 + 0x118) == '\0')) &&
              (*(int *)(param_2 + 0x430) == 1)) && (*(char *)(param_2 + 0x1e9) == '\0')) {
            if (*plVar1 != *(long *)(param_2 + 0x8cd8)) {
              FUN_00a38a08(param_2,
                           "HTTP server doesn\'t seem to support byte ranges. Cannot resume.");
              return 0x21;
            }
            FUN_00a38740(param_2,"The entire document is already downloaded");
            FUN_00a26ce8(param_1,1);
LAB_00a494a8:
            *(uint *)(param_2 + 0x1e4) = *(uint *)(param_2 + 0x1e4) & 0xfffffffe;
            *param_3 = '\x01';
            return 0;
          }
                    /* try { // try from 00a48cd0 to 00b48ce7 has its CatchHandler @ 00a48d70 */
          if (((*(int *)(param_2 + 0x420) != 0) && (*(long *)(param_2 + 0x8cd0) == 0)) &&
             ((lVar10 = *(long *)(param_2 + 0x1c0), lVar10 != 0 &&
              (lVar11 = *(long *)(param_2 + 0x428), lVar11 != 0)))) {
            if (*(int *)(param_2 + 0x420) == 2) {
              if (lVar11 <= lVar10) {
                pcVar12 = "The requested document is not old enough\n";
LAB_00a494f0:
                FUN_00a38740(param_2,pcVar12);
                *(undefined1 *)(param_2 + 0x8d80) = 1;
                *param_3 = '\x01';
                *(undefined4 *)(param_2 + 0x8d68) = 0x130;
                FUN_00a38740(param_2,"Simulate a HTTP 304 response!\n");
                FUN_00a26ce8(param_1,1);
                cVar2 = *param_3;
                goto joined_r0x00a49538;
              }
            }
            else if (lVar10 <= lVar11) {
              pcVar12 = "The requested document is not new enough\n";
              goto LAB_00a494f0;
            }
          }
        }
        *(long *)(param_2 + 0x1c8) = *(long *)(param_2 + 0x1c8) + 1;
        if ((*(char *)(param_2 + 0x628) != '\0') &&
           ((*(int *)(param_2 + 0xdc) == 0 ||
            (FUN_00a38860(param_2,3,*(undefined8 *)(param_2 + 0xaf8),*(undefined8 *)(param_2 + 0xf0)
                          ,param_1), *(int *)(param_2 + 0xdc) == 1)))) {
          FUN_00a38860(param_2,3,*(undefined8 *)(param_2 + 0xf8),local_68,param_1);
        }
        if (*(char *)(param_2 + 0x210) == '\0') {
LAB_00a48ba0:
          iVar6 = *(int *)(param_2 + 0xdc);
        }
        else {
          iVar6 = FUN_00a4a4d8(param_1,*(undefined8 *)(param_2 + 0xf8),local_68,&local_68);
          if (0 < iVar6) {
            if (iVar6 == 4) {
              FUN_00a38a08(param_2,"Failed writing data");
              return 0x17;
            }
            uVar8 = FUN_00a4a948();
            FUN_00a38a08(param_2,"%s in chunked-encoding",uVar8);
            return 0x38;
          }
          if (iVar6 != -1) goto LAB_00a48ba0;
                    /* try { // try from 00a48c5c to 00b48cab has its CatchHandler @ 00a48c5c
                       catch() { ... } // from try @ 00a48c5c with catch @ 00a48c5c
                       catch() { ... } // from try @ 00a48ce8 with catch @ 00a48c5c
                       catch() { ... } // from try @ 00a48d30 with catch @ 00a48c5c */
          *(uint *)(param_2 + 0x1e4) = *(uint *)(param_2 + 0x1e4) & 0xfffffffe;
          lVar10 = param_1[6];
          if (lVar10 == 0) goto LAB_00a48ba0;
          FUN_00a38740(*param_1,"Leftovers after chunking: %zu bytes\n",lVar10);
          uVar9 = FUN_00a27f7c(*(undefined8 *)(*param_1 + 0x60),1);
          if ((uVar9 & 1) == 0) goto LAB_00a48ba0;
          FUN_00a38740(*param_1,"Rewinding %zu bytes\n",lVar10);
                    /* try { // try from 00a48cac to 00b48cc3 has its CatchHandler @ 00a48d74 */
          param_1[0x92] = param_1[0x92] - lVar10;
          *(undefined1 *)((long)param_1 + 0x3d1) = 1;
          iVar6 = *(int *)(param_2 + 0xdc);
        }
        if ((iVar6 != 0) && (*(char *)(param_2 + 0x1e9) == '\0')) {
          *(long *)(param_2 + 0x98) = *(long *)(param_2 + 0x98) + *(long *)(param_2 + 0xf0);
        }
        lVar10 = *(long *)(param_2 + 0x88);
        if (lVar10 == -1) {
          lVar11 = *(long *)(param_2 + 0x98);
        }
        else {
          lVar11 = *(long *)(param_2 + 0x98);
          uVar9 = (local_68 + lVar11) - lVar10;
          if (lVar10 <= (long)(local_68 + lVar11)) {
            if ((uVar9 != 0) && (*(char *)(param_2 + 0x1e9) == '\0')) {
              uVar18 = FUN_00a27f7c(*(undefined8 *)(*param_1 + 0x60),1);
              if ((uVar18 & 1) == 0) {
                    /* try { // try from 00a48ce8 to 00b48d1b has its CatchHandler @ 00a48c5c */
                FUN_00a38740(param_2,
                             "Excess found in a non pipelined read: excess = %zu, size = %ld, maxdownload = %ld, bytecount = %ld\n"
                             ,uVar9,*(undefined8 *)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x88),
                             *(undefined8 *)(param_2 + 0x98));
              }
              else {
                FUN_00a38740(param_2,
                             "Rewinding stream by : %zu bytes on url %s (size = %ld, maxdownload = %ld, bytecount = %ld, nread = %zd)\n"
                             ,uVar9,*(undefined8 *)(param_2 + 0x8cc0),
                             *(undefined8 *)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x88),
                             *(undefined8 *)(param_2 + 0x98),local_68);
                param_1[0x92] = param_1[0x92] - uVar9;
                *(undefined1 *)((long)param_1 + 0x3d1) = 1;
              }
            }
            lVar11 = *(long *)(param_2 + 0x98);
            local_68 = *(long *)(param_2 + 0x88) - lVar11;
            local_68 = local_68 & ((long)local_68 >> 0x3f ^ 0xffffffffffffffffU);
                    /* try { // try from 00a48d1c to 00b48d2f has its CatchHandler @ 00a48d74 */
            *(uint *)(param_2 + 0x1e4) = *(uint *)(param_2 + 0x1e4) & 0xfffffffe;
            uVar18 = uVar9;
          }
        }
                    /* try { // try from 00a48d30 to 00b48d8f has its CatchHandler @ 00a48c5c */
        *(ulong *)(param_2 + 0x98) = local_68 + lVar11;
        FUN_00a31094(param_2);
        if (*(char *)(param_2 + 0x210) == '\0') {
          uVar21 = *(uint *)(param_2 + 0xdc);
                    /* catch() { ... } // from try @ 00a48cd0 with catch @ 00a48d70 */
                    /* catch() { ... } // from try @ 00a48cac with catch @ 00a48d74
                       catch() { ... } // from try @ 00a48d1c with catch @ 00a48d74 */
          if ((local_68 == 0) && (!bVar3 && uVar21 == 0)) goto LAB_00a48d8c;
          if (uVar21 != 0) {
            if (*(char *)(param_2 + 0x1e9) == '\0') {
              lVar10 = *(long *)(param_2 + 0x88);
              if (*(long *)(param_2 + 0xf0) <= lVar10 || lVar10 == -1) {
                lVar10 = *(long *)(param_2 + 0xf0);
              }
              uVar8 = FUN_00a391f0(param_1,1,*(undefined8 *)(param_2 + 0xaf8),lVar10);
              if ((int)uVar8 != 0) {
                return uVar8;
              }
              uVar21 = *(uint *)(param_2 + 0xdc);
            }
            if (uVar21 < 2) goto LAB_00a48e14;
            goto LAB_00a48e28;
          }
LAB_00a48e14:
          if (*(char *)(*param_1 + 0x651) == '\0') {
            iVar6 = *(int *)(param_2 + 0x148);
            if (iVar6 == 2) {
              if (*(char *)(param_2 + 0x1e9) == '\0') {
                uVar8 = FUN_00a4b6b8(param_1,plVar1,local_68);
                *(undefined4 *)(param_2 + 0xdc) = 0;
                iVar6 = (int)uVar8;
                goto joined_r0x00a48ea4;
              }
            }
            else {
              if (iVar6 != 1) {
                if (iVar6 != 0) {
                  FUN_00a38a08(param_2,
                               "Unrecognized content encoding type. libcurl understands `identity\', `deflate\' and `gzip\' content encodings."
                              );
                  *(undefined4 *)(param_2 + 0xdc) = 0;
                  return 0x3d;
                }
                goto LAB_00a48e20;
              }
              if (*(char *)(param_2 + 0x1e9) == '\0') {
                uVar8 = FUN_00a4b3cc(param_1,plVar1,local_68);
                *(undefined4 *)(param_2 + 0xdc) = 0;
                iVar6 = (int)uVar8;
                goto joined_r0x00a48ea4;
              }
            }
          }
          else {
LAB_00a48e20:
            if (*(char *)(param_2 + 0x1e9) == '\0') {
              if ((*(byte *)(param_1[0x80] + 0x79) & 0xc0) == 0) {
                uVar8 = FUN_00a391f0(param_1,1,*(undefined8 *)(param_2 + 0xf8),local_68);
                *(undefined4 *)(param_2 + 0xdc) = 0;
                iVar6 = (int)uVar8;
              }
              else {
                uVar8 = FUN_00a52554(param_1,*(undefined8 *)(param_2 + 0xf8),local_68);
                *(undefined4 *)(param_2 + 0xdc) = 0;
                iVar6 = (int)uVar8;
              }
joined_r0x00a48ea4:
              if (iVar6 != 0) {
                return uVar8;
              }
              goto LAB_00a48d8c;
            }
          }
LAB_00a48e28:
          *(undefined4 *)(param_2 + 0xdc) = 0;
          lVar10 = param_1[0x80];
        }
        else {
          lVar10 = param_1[0x80];
        }
      }
      if (((uVar18 != 0) && (pcVar15 = *(code **)(lVar10 + 0x68), pcVar15 != (code *)0x0)) &&
         (*(char *)((long)param_1 + 0x3d1) == '\0')) {
        *(ulong *)(param_2 + 0xf8) = *(long *)(param_2 + 0xf8) + local_68;
        local_68 = uVar18;
        uVar8 = (*pcVar15)(param_2,param_1,&local_68,&local_6c);
                    /* try { // try from 00a49160 to 00b491af has its CatchHandler @ 00a49160
                       catch() { ... } // from try @ 00a49160 with catch @ 00a49160
                       catch() { ... } // from try @ 00a49214 with catch @ 00a49160
                       catch() { ... } // from try @ 00a49258 with catch @ 00a49160 */
        if ((int)uVar8 != 0) {
          return uVar8;
        }
        if ((char)local_6c != '\0') {
          uVar20 = *(uint *)(param_2 + 0x1e4) | 1;
          goto LAB_00a49128;
        }
        goto joined_r0x00a49118;
      }
      if (bVar3) {
        *(uint *)(param_2 + 0x1e4) = *(uint *)(param_2 + 0x1e4) & 0xfffffffe;
      }
      if ((((*(byte *)(lVar10 + 0x78) & 0x30) == 0) &&
          (uVar9 = thunk_FUN_00a5e8bc(param_1,0), (uVar9 & 1) == 0)) ||
         (iVar7 = iVar7 + -1, iVar7 == -1)) goto joined_r0x00a49118;
      goto LAB_00a488f0;
    }
    bVar3 = *(long *)(param_2 + 0x1c8) == 0;
LAB_00a48990:
    if (bVar3) goto LAB_00a489b4;
    if (0 < (long)local_68) goto LAB_00a489bc;
    uVar20 = *(uint *)(param_2 + 0x1e4) & 0xfffffffe;
LAB_00a49128:
    *(uint *)(param_2 + 0x1e4) = uVar20;
joined_r0x00a49118:
    if (iVar7 < 1) {
      *(undefined4 *)(param_1 + 0xdf) = 1;
      *param_4 = 1;
    }
    if (((*(uint *)(param_2 + 0x1e4) & 3) == 2) && (*(char *)((long)param_1 + 0x3b9) != '\0')) {
      FUN_00a38740(param_2,"we are done reading and this is set to close, stop send\n");
      *(uint *)(param_2 + 0x1e4) = *(uint *)(param_2 + 0x1e4) & 0xfffffffd;
    }
    cVar2 = *param_3;
joined_r0x00a49538:
    if (cVar2 != '\0') {
      return 0;
    }
    uVar20 = *(uint *)(param_2 + 0x1e4);
  }
  uVar21 = uVar19;
  if (((uVar5 & uVar20) >> 1 & 1) != 0) {
    if ((*(long *)(param_2 + 0x98) == 0) && (*(long *)(param_2 + 0xa0) == 0)) {
      FUN_00a30f04(param_2,7);
    }
    uVar21 = uVar19 | 2;
    if (*(long *)(param_2 + 0x200) == 0) {
      *(undefined8 *)(param_2 + 0x208) = *(undefined8 *)(param_2 + 0x1d8);
      if (*(char *)(param_2 + 0x1e8) == '\0') {
        if ((*(int *)(param_2 + 0x140) != 2) || (*(int *)(*(long *)(param_2 + 0x218) + 0x78) != 2))
        {
          if ((*(uint *)(param_1[0x80] + 0x78) & 0x40003) == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = *(int *)(*(long *)(param_2 + 0x218) + 0x78) == 1;
          }
                    /* try { // try from 00a491b0 to 00b49213 has its CatchHandler @ 00a49298 */
          uVar8 = FUN_00a48330(param_1,0x4000,&local_6c);
          if ((int)uVar8 != 0) {
            return uVar8;
          }
          lVar10 = (long)(int)local_6c;
          if (local_6c == 0) goto LAB_00a48f0c;
          if (0 < (int)local_6c) {
            *(long *)(param_2 + 0x200) = lVar10;
            if ((!bVar3) &&
               ((*(char *)(param_2 + 0x613) != '\0' || (*(char *)(param_2 + 0x3d2) != '\0')))) {
              plVar17 = (long *)(param_2 + 0x8b58);
              lVar11 = *plVar17;
              if (lVar11 == 0) {
                lVar11 = (*(code *)PTR_malloc_017699f8)(0x8000);
                *plVar17 = lVar11;
                    /* try { // try from 00a49214 to 00b49243 has its CatchHandler @ 00a49160 */
                if (lVar11 == 0) {
                  FUN_00a38a08(param_2,"Failed to alloc scratch buffer!");
                  return 0x1b;
                }
              }
              lVar14 = 0;
              lVar16 = 0;
              while( true ) {
                    /* try { // try from 00a49244 to 00b49257 has its CatchHandler @ 00a49298 */
                cVar2 = *(char *)(*(long *)(param_2 + 0x208) + lVar14);
                if (cVar2 == '\n') {
                  *(undefined1 *)(lVar11 + lVar16) = 0xd;
                    /* try { // try from 00a49258 to 00b492b3 has its CatchHandler @ 00a49160 */
                  lVar16 = lVar16 + 1;
                  *(undefined1 *)(*plVar17 + lVar16) = 10;
                  if ((*(char *)(param_2 + 0x3d2) == '\0') &&
                     (lVar11 = *(long *)(param_2 + 0x8cf8), lVar11 != -1)) {
                    *(long *)(param_2 + 0x8cf8) = lVar11 + 1;
                  }
                }
                else {
                  *(char *)(lVar11 + lVar16) = cVar2;
                }
                lVar16 = lVar16 + 1;
                if (lVar10 + -1 == lVar14) break;
                lVar11 = *plVar17;
                lVar14 = lVar14 + 1;
              }
              if (lVar16 != lVar10) {
                    /* catch() { ... } // from try @ 00a491b0 with catch @ 00a49298
                       catch() { ... } // from try @ 00a49244 with catch @ 00a49298 */
                *(long *)(param_2 + 0x200) = lVar16;
                *(long *)(param_2 + 0x208) = *plVar17;
                lVar10 = lVar16;
              }
            }
            if (((*(byte *)(param_1[0x80] + 0x7a) & 3) != 0) &&
               (uVar8 = FUN_00a53d48(param_1,lVar10), (int)uVar8 != 0)) {
              return uVar8;
            }
            goto LAB_00a487e8;
          }
          uVar5 = *(uint *)(param_2 + 0x1e4);
          goto LAB_00a48f14;
        }
        *(undefined4 *)(param_2 + 0x140) = 1;
        *(uint *)(param_2 + 0x1e4) = *(uint *)(param_2 + 0x1e4) & 0xfffffffd;
        auVar22 = FUN_00a2e828();
        *(undefined1 (*) [16])(param_2 + 0x130) = auVar22;
        FUN_00a27148(param_2,*(undefined8 *)(param_2 + 0x8e8));
        uVar21 = uVar19;
      }
      else {
LAB_00a48f0c:
        uVar5 = *(uint *)(param_2 + 0x1e4);
        if ((uVar5 >> 5 & 1) == 0) {
LAB_00a48f14:
          *(uint *)(param_2 + 0x1e4) = uVar5 & 0xfffffffd;
          if ((*(char *)((long)param_1 + 0x3cb) != '\0') &&
             (uVar8 = FUN_00a48534(param_1), (int)uVar8 != 0)) {
            return uVar8;
          }
        }
      }
    }
    else {
LAB_00a487e8:
      plVar17 = (long *)(param_2 + 0x208);
      uVar8 = FUN_00a38cd0(param_1,*(undefined4 *)((long)param_1 + 0x41c),*plVar17,
                           *(undefined8 *)(param_2 + 0x200),&local_68);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      if (*(char *)(param_2 + 0x628) != '\0') {
        FUN_00a38860(param_2,4,*plVar17,local_68,param_1);
      }
      lVar10 = *(long *)(param_2 + 0xa0) + local_68;
      *(long *)(param_2 + 0xa0) = lVar10;
      if (lVar10 == *(long *)(param_2 + 0x8cf8)) {
        *(undefined1 *)(param_2 + 0x1e8) = 1;
        FUN_00a38740(param_2,"We are completely uploaded and fine\n");
      }
      lVar10 = *(long *)(param_2 + 0x200) - local_68;
      if (lVar10 == 0) {
        *plVar17 = *(long *)(param_2 + 0x1d8);
        *(undefined8 *)(param_2 + 0x200) = 0;
        if (((*(char *)(param_2 + 0x1e8) != '\0') &&
            (*(uint *)(param_2 + 0x1e4) = *(uint *)(param_2 + 0x1e4) & 0xfffffffd,
            *(char *)((long)param_1 + 0x3cb) != '\0')) &&
           (uVar8 = FUN_00a48534(param_1), (int)uVar8 != 0)) {
          return uVar8;
        }
      }
      else {
        *(long *)(param_2 + 0x200) = lVar10;
        *plVar17 = *plVar17 + local_68;
      }
      FUN_00a3112c(param_2,*(undefined8 *)(param_2 + 0xa0));
    }
  }
  auVar22 = FUN_00a2e828();
  *(undefined1 (*) [16])(param_2 + 200) = auVar22;
  if (uVar21 == 0) {
    if ((*(int *)(param_2 + 0x140) == 1) &&
       (lVar10 = FUN_00a2e888(auVar22._0_8_,auVar22._8_8_,*(undefined8 *)(param_2 + 0x130),
                              *(undefined8 *)(param_2 + 0x138)),
       *(long *)(param_2 + 0x8e8) <= lVar10)) {
      *(undefined4 *)(param_2 + 0x140) = 0;
      *(uint *)(param_2 + 0x1e4) = *(uint *)(param_2 + 0x1e4) | 2;
      FUN_00a38740(param_2,"Done waiting for 100-continue\n");
    }
  }
  else {
    if (*(undefined8 **)(param_2 + 0x80) != (undefined8 *)0x0) {
      **(undefined8 **)(param_2 + 0x80) = *(undefined8 *)(param_2 + 0x98);
    }
    if (*(undefined8 **)(param_2 + 0x90) != (undefined8 *)0x0) {
      **(undefined8 **)(param_2 + 0x90) = *(undefined8 *)(param_2 + 0xa0);
    }
  }
  iVar7 = FUN_00a306d0(param_1);
  if (iVar7 == 0) {
    uVar8 = FUN_00a450e0(param_2,*(undefined8 *)(param_2 + 200),*(undefined8 *)(param_2 + 0xd0));
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    if (*(int *)(param_2 + 0x1e4) == 0) {
      if (*(char *)(param_2 + 0x620) == '\0') {
        lVar10 = *plVar1;
        if (lVar10 != -1) {
          lVar11 = lVar10 - *(long *)(param_2 + 0x98);
                    /* try { // try from 00a49380 to 00b49383 has its CatchHandler @ 00a493b8 */
                    /* try { // try from 00a49384 to 00b493cb has its CatchHandler @ 00a49334 */
          if (((lVar11 != 0) && (*(long *)(param_2 + 0x98) != *(long *)(param_2 + 0x8cb0) + lVar10))
             && (*(long *)(param_2 + 0x1f8) == 0)) {
            FUN_00a38a08(param_2,"transfer closed with %ld bytes remaining to read",lVar11);
            return 0x12;
          }
        }
        if ((*(char *)(param_2 + 0x210) != '\0') && ((int)param_1[4] != 4)) {
          FUN_00a38a08(param_2,"transfer closed with outstanding read data remaining");
          return 0x12;
        }
      }
      iVar7 = FUN_00a306d0(param_1);
      if (iVar7 != 0) goto LAB_00a4902c;
    }
    else {
      lVar10 = FUN_00a25238(param_2,param_2 + 200,0);
      if (lVar10 < 0) {
        lVar10 = *(long *)(param_2 + 0x78);
        uVar8 = FUN_00a2e888(*(undefined8 *)(param_2 + 200),*(undefined8 *)(param_2 + 0xd0),
                             *(undefined8 *)(param_2 + 0x9d8),*(undefined8 *)(param_2 + 0x9e0));
        if (lVar10 != -1) {
          FUN_00a38a08(param_2,
                       "Operation timed out after %ld milliseconds with %ld out of %ld bytes received"
                       ,uVar8,*(undefined8 *)(param_2 + 0x98),*(undefined8 *)(param_2 + 0x78));
          return 0x1c;
        }
        FUN_00a38a08(param_2,"Operation timed out after %ld milliseconds with %ld bytes received",
                     uVar8,*(undefined8 *)(param_2 + 0x98));
        return 0x1c;
      }
    }
    uVar8 = 0;
    *param_3 = (*(uint *)(param_2 + 0x1e4) & 0x33) == 0;
  }
  else {
LAB_00a4902c:
    uVar8 = 0x2a;
  }
                    /* try { // try from 00a49334 to 00b4937f has its CatchHandler @ 00a49334
                       catch() { ... } // from try @ 00a49334 with catch @ 00a49334
                       catch() { ... } // from try @ 00a49384 with catch @ 00a49334 */
  return uVar8;
}

