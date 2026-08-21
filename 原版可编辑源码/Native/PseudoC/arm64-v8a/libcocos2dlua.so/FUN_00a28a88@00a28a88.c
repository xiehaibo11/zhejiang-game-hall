
/* WARNING: Removing unreachable block (ram,0x00a29960) */
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00a28a88(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  char *pcVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined1 auVar18 [16];
  int local_98;
  char local_94 [4];
  char local_90 [4];
  char local_8c [4];
  char local_88 [4];
  char local_84 [4];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70 [4];
  byte local_6c [4];
  long *local_68;
  
  local_8c[0] = '\0';
  local_90[0] = '\0';
  local_94[0] = '\0';
  if (param_4 == 0) {
    uVar17 = 2;
  }
  else {
    uVar17 = 2;
    if (*(int *)(param_4 + 0x8e60) == -0x3f212453) {
      pcVar2 = (char *)(param_4 + 0x8ca9);
      plVar3 = (long *)(param_4 + 0x8c50);
      iVar7 = 0;
      plVar1 = (long *)(param_4 + 0x10);
      local_80 = param_2;
      uStack_78 = param_3;
LAB_00a28d3c:
      do {
        if (*pcVar2 != '\0') {
          FUN_00a38740(param_4,"Pipe broke: handle %p, url = %s\n",param_4,
                       *(undefined8 *)(param_4 + 0x8cc0));
          if (*(uint *)(param_4 + 0x18) < 0x11) {
            if (*(uint *)(param_4 + 0x18) != 2) {
              *(undefined4 *)(param_4 + 0x18) = 2;
              FUN_00a495e8(param_4);
            }
            iVar7 = 0;
            iVar8 = -1;
          }
          else {
            iVar8 = 0;
          }
          *pcVar2 = '\0';
          *plVar1 = 0;
          iVar6 = iVar7;
          goto LAB_00a28e5c;
        }
        plVar12 = (long *)*plVar1;
        if ((plVar12 == (long *)0x0) && (*(int *)(param_4 + 0x18) - 3U < 0xd)) {
          FUN_00a38a08(param_4,"In state %d with no easy_conn, bail out!\n");
          return 4;
        }
                    /* try { // try from 00a28da0 to 00b28deb has its CatchHandler @ 00a28da0
                       catch() { ... } // from try @ 00a28da0 with catch @ 00a28da0
                       catch() { ... } // from try @ 00a28df0 with catch @ 00a28da0 */
        cVar4 = *(char *)(param_1 + 0xc0);
        *(undefined1 *)(param_1 + 0xc0) = 0;
        if (cVar4 != '\0') {
          FUN_00a2770c(param_1);
          plVar12 = (long *)*plVar1;
        }
        if (plVar12 != (long *)0x0) {
          uVar16 = *(uint *)(param_4 + 0x18);
          if (uVar16 - 3 < 0xe) {
            *plVar12 = param_4;
          }
                    /* try { // try from 00a28dec to 00b28def has its CatchHandler @ 00a28e24 */
                    /* try { // try from 00a28df0 to 00b28e37 has its CatchHandler @ 00a28da0 */
          if ((0xe < uVar16 - 2) || (lVar9 = FUN_00a25238(param_4,&local_80,uVar16 < 9), -1 < lVar9)
             ) goto LAB_00a28df4;
          if (*(int *)(param_4 + 0x18) == 4) {
                    /* catch() { ... } // from try @ 00a293b0 with catch @ 00a293e8 */
            uVar10 = FUN_00a2e888(local_80,uStack_78,*(undefined8 *)(param_4 + 0x9d8),
                                  *(undefined8 *)(param_4 + 0x9e0));
                    /* try { // try from 00a293fc to 00b294e3 has its CatchHandler @ 00a293fc
                       catch() { ... } // from try @ 00a293fc with catch @ 00a293fc
                       catch() { ... } // from try @ 00a29564 with catch @ 00a293fc */
            FUN_00a38a08(param_4,"Connection timed out after %ld milliseconds",uVar10);
          }
          else if (*(int *)(param_4 + 0x18) == 3) {
            uVar10 = FUN_00a2e888(local_80,uStack_78,*(undefined8 *)(param_4 + 0x9d8),
                                  *(undefined8 *)(param_4 + 0x9e0));
            FUN_00a38a08(param_4,"Resolving timed out after %ld milliseconds",uVar10);
          }
          else {
            lVar9 = *(long *)(param_4 + 0x78);
            uVar10 = FUN_00a2e888(local_80,uStack_78,*(undefined8 *)(param_4 + 0x9d8),
                                  *(undefined8 *)(param_4 + 0x9e0));
            if (lVar9 == -1) {
              FUN_00a38a08(param_4,
                           "Operation timed out after %ld milliseconds with %ld bytes received",
                           uVar10,*(undefined8 *)(param_4 + 0x98));
            }
            else {
              FUN_00a38a08(param_4,
                           "Operation timed out after %ld milliseconds with %ld out of %ld bytes received"
                           ,uVar10,*(undefined8 *)(param_4 + 0x98),*(undefined8 *)(param_4 + 0x78));
            }
          }
          bVar5 = 9 < *(uint *)(param_4 + 0x18);
          if (bVar5) {
            FUN_00a26ce8(*plVar1,2);
          }
          iVar7 = 0x1c;
LAB_00a297bc:
          FUN_00a2788c(plVar1,iVar7,1);
          iVar8 = 0;
          goto LAB_00a29c1c;
        }
LAB_00a28df4:
        iVar8 = 0;
        bVar5 = false;
        switch(*(undefined4 *)(param_4 + 0x18)) {
        case 0:
          iVar7 = FUN_00a49604(param_4);
          if (iVar7 != 0) goto LAB_00a29684;
                    /* catch() { ... } // from try @ 00a28dec with catch @ 00a28e24 */
          if (*(int *)(param_4 + 0x18) != 2) {
                    /* try { // try from 00a28e38 to 00b28f4f has its CatchHandler @ 00a28e38
                       catch() { ... } // from try @ 00a28e38 with catch @ 00a28e38
                       catch() { ... } // from try @ 00a28fd0 with catch @ 00a28e38 */
            *(undefined4 *)(param_4 + 0x18) = 2;
            FUN_00a495e8(param_4);
          }
          FUN_00a30f04(param_4,1);
LAB_00a28fd8:
          bVar5 = false;
          iVar7 = 0;
          iVar8 = -1;
          break;
        case 1:
          goto switchD_00a28e10_caseD_1;
        case 2:
          FUN_00a30f04(param_4,2);
          iVar7 = FUN_00a407ac(param_4,plVar1,local_88,local_8c);
          if (iVar7 != 0) {
            if (iVar7 != 0x59) goto LAB_00a29684;
            if (*(int *)(param_4 + 0x18) != 1) {
              *(undefined4 *)(param_4 + 0x18) = 1;
            }
            iVar6 = FUN_00a4a9ac(*(long *)(param_1 + 0x28),
                                 *(undefined8 *)(*(long *)(param_1 + 0x28) + 8),param_4);
            bVar5 = false;
            iVar8 = 0;
            iVar7 = 0x1b;
            if (iVar6 != 0) {
              iVar7 = 0;
            }
            break;
          }
          iVar7 = FUN_00a2cd18(param_4,*(undefined8 *)(param_4 + 0x10));
          if (iVar7 != 0) goto LAB_00a29138;
          if (local_88[0] != '\0') {
            if (*(int *)(param_4 + 0x18) == 3) goto LAB_00a28d04;
            uVar17 = 3;
LAB_00a28d2c:
            iVar8 = 0;
            *(undefined4 *)(param_4 + 0x18) = uVar17;
            lVar9 = *plVar1;
            goto joined_r0x00a290bc;
          }
          if (local_8c[0] != '\0') goto LAB_00a29024;
          if (*(int *)(*(long *)(param_4 + 0x10) + 0x710) == 1) {
            if (*(int *)(param_4 + 0x18) == 5) goto LAB_00a29864;
            uVar17 = 5;
          }
          else {
            if (*(int *)(param_4 + 0x18) == 4) goto LAB_00a29864;
            uVar17 = 4;
          }
LAB_00a290b0:
          *(undefined4 *)(param_4 + 0x18) = uVar17;
          iVar8 = -1;
          lVar9 = *plVar1;
          goto joined_r0x00a290bc;
        case 3:
          lVar9 = *plVar1;
          if (*(char *)(lVar9 + 0x3bd) == '\0') {
            if (*(char *)(lVar9 + 0x3bb) == '\0') {
              puVar14 = (undefined8 *)(lVar9 + 0xc0);
            }
            else {
              puVar14 = (undefined8 *)(lVar9 + 0xe8);
            }
          }
          else {
            puVar14 = (undefined8 *)(lVar9 + 0x108);
          }
          uVar10 = *puVar14;
          lVar9 = FUN_00a2fb70(lVar9,uVar10,*(undefined4 *)(lVar9 + 0x198));
          if (lVar9 == 0) {
                    /* try { // try from 00a299f4 to 00b29a27 has its CatchHandler @ 00a29af4 */
            FUN_00a27b08(param_1,param_4);
            iVar8 = 0;
            iVar7 = 6;
          }
          else {
            FUN_00a38740(param_4,"Hostname \'%s\' was found in DNS cache\n",uVar10);
            FUN_00a27b08(param_1,param_4);
            if (local_8c[0] == '\0') {
              if (*(int *)(*(long *)(param_4 + 0x10) + 0x710) == 1) {
                if (*(int *)(param_4 + 0x18) != 5) {
                    /* try { // try from 00a29a28 to 00b29a3b has its CatchHandler @ 00a29ac0 */
                  iVar7 = 5;
LAB_00a29b64:
                  *(int *)(param_4 + 0x18) = iVar7;
                }
              }
              else if (*(int *)(param_4 + 0x18) != 4) {
                iVar7 = 4;
                goto LAB_00a29b64;
              }
            }
            else {
              iVar7 = 9 - (*(uint *)(param_1 + 0xb8) & 1);
              if (*(int *)(param_4 + 0x18) != iVar7) goto LAB_00a29b64;
            }
            iVar7 = 0;
            iVar8 = -1;
          }
          bVar5 = iVar7 != 0;
          break;
        case 4:
          iVar7 = FUN_00a256a4(*plVar1,0,local_84);
          bVar5 = iVar7 != 0;
          iVar8 = 0;
                    /* try { // try from 00a28f50 to 00b28f83 has its CatchHandler @ 00a29050 */
          if ((iVar7 != 0) || (local_84[0] == '\0')) break;
          lVar9 = *plVar1;
          if (((*(int *)(lVar9 + 0x180) != 2) || (*(char *)(lVar9 + 0x3d9) != '\0')) &&
             (*(int *)(lVar9 + 0x710) != 1)) {
            cVar4 = *(char *)(lVar9 + 0x3c9);
            uVar15 = *(uint *)(param_4 + 0x18);
            uVar16 = 5;
LAB_00a29898:
            if (cVar4 == '\0') {
              uVar16 = uVar16 + 1;
            }
            if (uVar15 != uVar16) {
LAB_00a29860:
              *(uint *)(param_4 + 0x18) = uVar16;
              goto LAB_00a29864;
            }
            goto LAB_00a298a4;
          }
          if (*(int *)(param_4 + 0x18) != 5) {
                    /* try { // try from 00a28f84 to 00b28f97 has its CatchHandler @ 00a2901c */
            uVar17 = 5;
            goto LAB_00a28d2c;
          }
LAB_00a28d04:
          iVar8 = 0;
          lVar9 = *plVar1;
          goto joined_r0x00a290bc;
        case 5:
          iVar7 = FUN_00a35bfc(*plVar1,local_8c);
                    /* try { // try from 00a28f9c to 00b28fcf has its CatchHandler @ 00a29020 */
          lVar9 = *plVar1;
          if (*(char *)(lVar9 + 0x3d2) == '\0') {
            if (iVar7 != 0) goto LAB_00a29684;
            if (((*(int *)(lVar9 + 0x180) == 2) && (*(char *)(lVar9 + 0x3d9) == '\0')) ||
               (*(int *)(lVar9 + 0x710) == 1)) goto LAB_00a29878;
            if (*(int *)(param_4 + 0x18) != 6) {
              uVar17 = 6;
              goto LAB_00a290b0;
            }
          }
          else {
            FUN_00a2788c(plVar1,0,0);
            if (*(int *)(param_4 + 0x18) != 2) {
                    /* try { // try from 00a28fd0 to 00b2906b has its CatchHandler @ 00a28e38 */
              *(undefined4 *)(param_4 + 0x18) = 2;
              FUN_00a495e8(param_4);
              goto LAB_00a28fd8;
            }
          }
          goto LAB_00a29864;
        case 6:
          iVar7 = FUN_00a40570(*plVar1,local_8c);
          if (local_8c[0] == '\0') {
            if (*(int *)(param_4 + 0x18) != 7) {
              uVar17 = 7;
              goto LAB_00a298c0;
            }
LAB_00a296e0:
            iVar8 = 0;
            bVar5 = false;
            goto joined_r0x00a296e8;
          }
          if (iVar7 != 0) {
LAB_00a29444:
            FUN_00a49798(param_4);
            bVar5 = true;
            goto LAB_00a297bc;
          }
LAB_00a29024:
          uVar15 = *(uint *)(param_4 + 0x18);
          uVar16 = 9 - (*(uint *)(param_1 + 0xb8) & 1);
          if (uVar15 == uVar16) {
LAB_00a298a4:
            bVar5 = false;
            iVar7 = 0;
            iVar8 = -1;
            uVar16 = uVar15;
            goto joined_r0x00a298b4;
          }
          bVar5 = false;
          iVar7 = 0;
          *(uint *)(param_4 + 0x18) = uVar16;
          iVar8 = -1;
                    /* catch() { ... } // from try @ 00a28f50 with catch @ 00a29050 */
          if (uVar16 < 0x11) goto switchD_00a28e10_caseD_1;
          goto LAB_00a29c88;
        case 7:
          iVar7 = FUN_00a40520(*plVar1,local_8c);
                    /* catch() { ... } // from try @ 00a28f84 with catch @ 00a2901c */
                    /* catch() { ... } // from try @ 00a28f9c with catch @ 00a29020 */
          if ((iVar7 == 0) && (local_8c[0] != '\0')) goto LAB_00a29024;
          if (iVar7 != 0) goto LAB_00a29444;
          goto LAB_00a29684;
        case 8:
          uVar11 = FUN_00a2d210(param_4,*(undefined8 *)(param_4 + 0x10));
          if ((uVar11 & 1) != 0) {
            if (*(int *)(param_4 + 0x18) == 9) goto LAB_00a298e0;
            uVar17 = 9;
            goto LAB_00a29b4c;
          }
          goto LAB_00a29684;
        case 9:
          plVar12 = *(long **)(param_4 + 0x10);
          if (*(char *)(param_4 + 0x641) == '\0') {
            if (*(code **)(plVar12[0x80] + 0x10) != (code *)0x0) {
              lVar9 = *plVar12;
              iVar7 = (**(code **)(plVar12[0x80] + 0x10))(plVar12,local_90);
              if (iVar7 == 0x37) {
                    /* try { // try from 00a294e4 to 00b29517 has its CatchHandler @ 00a295e4 */
                if ((*(char *)((long)plVar12 + 0x3ba) == '\0') || (*(long *)(lVar9 + 0x60) != 0)) {
LAB_00a29580:
                  if (*(char *)(*plVar1 + 0x3ba) != '\0') {
                    local_68 = (long *)0x0;
                    iVar8 = FUN_00a49ecc(*plVar1,&local_68);
                    plVar12 = local_68;
                    iVar7 = 0x37;
                    /* catch() { ... } // from try @ 00a29518 with catch @ 00a295b0 */
                    /* catch() { ... } // from try @ 00a29530 with catch @ 00a295b4 */
                    if (iVar8 != 0) {
                      iVar7 = iVar8;
                    }
                    FUN_00a49798(param_4);
                    iVar6 = FUN_00a2788c(plVar1,iVar7,0);
                    if ((iVar8 == 0) && (plVar12 != (long *)0x0)) {
                      bVar5 = false;
                    /* catch() { ... } // from try @ 00a294e4 with catch @ 00a295e4 */
                      if (((iVar6 == 0x37) || (iVar7 = iVar6, iVar6 == 0)) &&
                         (iVar7 = FUN_00a497a0(param_4,local_68,2), iVar7 == 0)) {
                        if (*(int *)(param_4 + 0x18) != 2) {
                          *(undefined4 *)(param_4 + 0x18) = 2;
                          FUN_00a495e8(param_4);
                        }
                        iVar7 = 0;
                        iVar8 = -1;
                      }
                      else {
                        (*(code *)PTR_free_01769a00)(local_68);
                        iVar8 = 0;
                      }
                    }
                    else {
                      (*(code *)PTR_free_01769a00)(local_68);
                      iVar8 = 0;
                      bVar5 = true;
                    }
                    break;
                  }
                  iVar7 = 0x37;
                }
                else {
                  plVar12 = (long *)*plVar1;
                  lVar9 = *plVar12;
                  local_68 = plVar12;
                  FUN_00a38740(lVar9,"Re-used connection seems dead, get a new one\n");
                    /* try { // try from 00a29518 to 00b2952b has its CatchHandler @ 00a295b0 */
                  FUN_00a26ce8(plVar12,1);
                  iVar7 = FUN_00a2788c(&local_68,0,0);
                    /* try { // try from 00a29530 to 00b29563 has its CatchHandler @ 00a295b4 */
                  *plVar1 = 0;
                  if ((iVar7 == 0x37) || (iVar7 == 0)) {
                    local_70[0] = 1;
                    iVar7 = FUN_00a407ac(lVar9,plVar1,local_6c,local_70);
                    if (iVar7 != 0) goto LAB_00a28c4c;
                    /* try { // try from 00a29564 to 00b295ff has its CatchHandler @ 00a293fc */
                    plVar12 = (long *)*plVar1;
                    local_68 = plVar12;
                    if (local_6c[0] == 0) {
                      iVar7 = (**(code **)(plVar12[0x80] + 0x10))(plVar12,local_90);
                      goto LAB_00a28c48;
                    }
                    iVar7 = 6;
                  }
                  else {
LAB_00a28c4c:
                    if (iVar7 == 0x37) goto LAB_00a29580;
                  }
                  if (iVar7 == 0) goto LAB_00a28c9c;
                }
                FUN_00a49798(param_4);
                if (*(long *)(param_4 + 0x10) == 0) goto LAB_00a29138;
                goto LAB_00a29128;
              }
LAB_00a28c48:
              if (iVar7 != 0) goto LAB_00a28c4c;
              if (local_90[0] != '\0') {
                lVar9 = *plVar12;
                iVar7 = (int)plVar12[0x83];
                if ((int)plVar12[0x83] <= *(int *)((long)plVar12 + 0x41c)) {
                  iVar7 = *(int *)((long)plVar12 + 0x41c);
                }
                *(undefined1 *)(lVar9 + 0x210) = 0;
                *(int *)(lVar9 + 0x1e0) = iVar7 + 1;
                FUN_00a30f04(lVar9,6);
                goto LAB_00a28c9c;
              }
LAB_00a28cc8:
              if ((*(char *)(param_4 + 0x888) == '\0') || ((*(uint *)(param_4 + 0x8d30) | 2) != 6))
              {
                if (*(int *)(param_4 + 0x18) != 10) {
                  uVar17 = 10;
                  goto LAB_00a28d2c;
                }
                goto LAB_00a28d04;
              }
              FUN_00a2788c(plVar1,0,0);
              goto LAB_00a290a0;
            }
LAB_00a28c9c:
            if (local_90[0] == '\0') goto LAB_00a28cc8;
            if (*(char *)(*(long *)(param_4 + 0x10) + 0x3c4) != '\0') {
              if (*(int *)(param_4 + 0x18) != 0xb) {
                uVar17 = 0xb;
                goto LAB_00a28d2c;
              }
              goto LAB_00a28d04;
            }
            if (*(int *)(param_4 + 0x18) != 0xc) {
              uVar17 = 0xc;
              goto LAB_00a290b0;
            }
          }
          else {
            FUN_00a26ce8(plVar12,0);
LAB_00a290a0:
            if (*(int *)(param_4 + 0x18) != 0x10) {
              uVar17 = 0x10;
              goto LAB_00a290b0;
            }
          }
LAB_00a29864:
          iVar8 = -1;
          lVar9 = *plVar1;
          goto joined_r0x00a290bc;
        case 10:
          iVar7 = FUN_00a40548(*plVar1,local_90);
          if (iVar7 == 0) {
            if (local_90[0] != '\0') {
              cVar4 = *(char *)(*(long *)(param_4 + 0x10) + 0x3c4);
              uVar15 = *(uint *)(param_4 + 0x18);
              uVar16 = 0xb;
              goto LAB_00a29898;
            }
            goto LAB_00a29878;
          }
LAB_00a29120:
          FUN_00a49798(param_4);
LAB_00a29128:
          FUN_00a2788c(plVar1,iVar7,0);
LAB_00a29138:
          iVar8 = 0;
          bVar5 = true;
          break;
        case 0xb:
          plVar12 = (long *)*plVar1;
          local_98 = 0;
          if (*(code **)(plVar12[0x80] + 0x20) != (code *)0x0) {
            iVar7 = (**(code **)(plVar12[0x80] + 0x20))(plVar12,&local_98);
            if (iVar7 != 0) goto LAB_00a29120;
            if (local_98 == 1) {
              lVar9 = *plVar12;
              iVar7 = (int)plVar12[0x83];
              if ((int)plVar12[0x83] <= *(int *)((long)plVar12 + 0x41c)) {
                iVar7 = *(int *)((long)plVar12 + 0x41c);
              }
              *(undefined1 *)(lVar9 + 0x210) = 0;
              *(int *)(lVar9 + 0x1e0) = iVar7 + 1;
              FUN_00a30f04(lVar9,6);
            }
            if (local_98 != 0) {
              uVar15 = *(uint *)(param_4 + 0x18);
              uVar16 = 0xc;
              if (local_98 != 1) {
                uVar16 = 10;
              }
              if (uVar15 != uVar16) goto LAB_00a29860;
              goto LAB_00a298a4;
            }
          }
LAB_00a29878:
          bVar5 = false;
          iVar7 = 0;
          iVar8 = 0;
          break;
        case 0xc:
          FUN_00a2cd98(param_4,*(undefined8 *)(param_4 + 0x10));
          FUN_00a2770c(param_1);
          if ((*(int *)(*(long *)(param_4 + 0x10) + 0x418) == -1) &&
             (*(int *)(*(long *)(param_4 + 0x10) + 0x41c) == -1)) {
            if (*(int *)(param_4 + 0x18) == 0x10) {
LAB_00a298e0:
              bVar5 = false;
              iVar8 = -1;
              goto joined_r0x00a296e8;
            }
            uVar17 = 0x10;
          }
          else {
            if (*(int *)(param_4 + 0x18) == 0xd) goto LAB_00a298e0;
            uVar17 = 0xd;
          }
LAB_00a29b4c:
          bVar5 = false;
          *(undefined4 *)(param_4 + 0x18) = uVar17;
          iVar8 = -1;
          goto joined_r0x00a296e8;
        case 0xd:
          uVar11 = FUN_00a2d270(param_4,*(undefined8 *)(param_4 + 0x10));
          if ((uVar11 & 1) != 0) {
            if (*(int *)(param_4 + 0x18) == 0xe) goto LAB_00a298e0;
            uVar17 = 0xe;
            goto LAB_00a29b4c;
          }
          goto LAB_00a29684;
        case 0xe:
          local_68 = (long *)0x0;
          local_6c[0] = 0;
          if (((0 < *(long *)(param_4 + 0x3a0)) &&
              (uVar11 = FUN_00a31030(*(undefined8 *)(param_4 + 0x960),
                                     *(undefined8 *)(param_4 + 0xa18),*(long *)(param_4 + 0x3a0),
                                     *(undefined8 *)(param_4 + 0xa08),
                                     *(undefined8 *)(param_4 + 0xa10),local_80,uStack_78),
              0 < (long)uVar11)) ||
             ((0 < *(long *)(param_4 + 0x3a8) &&
              (uVar11 = FUN_00a31030(*(undefined8 *)(param_4 + 0x958),
                                     *(undefined8 *)(param_4 + 0xa30),*(long *)(param_4 + 0x3a8),
                                     *(undefined8 *)(param_4 + 0xa20),
                                     *(undefined8 *)(param_4 + 0xa28),local_80,uStack_78),
              0 < (long)uVar11)))) {
            if (*(int *)(param_4 + 0x18) != 0xf) {
              *(undefined4 *)(param_4 + 0x18) = 0xf;
            }
            auVar18 = FUN_00a2e828();
            if (*(long *)(param_4 + 0x8c58) != 0 || *plVar3 != 0) {
              lVar13 = auVar18._8_8_ + (uVar11 + ((uVar11 >> 3) / 0x7d) * -1000) * 1000;
              lVar9 = auVar18._0_8_ + (uVar11 >> 3) / 0x7d;
              if (999999 < lVar13) {
                lVar9 = lVar9 + 1;
                lVar13 = lVar13 + -1000000;
              }
              lVar9 = FUN_00a2e888(lVar9,lVar13);
              if (0 < lVar9) goto LAB_00a29684;
            }
            FUN_00a27148(param_4,uVar11);
            goto LAB_00a29684;
          }
          iVar7 = FUN_00a486d4(*(undefined8 *)(param_4 + 0x10),param_4,local_94,local_6c);
          if ((*(uint *)(param_4 + 0x1e4) & 1) == 0) {
            FUN_00a2d2d0(*(undefined8 *)(param_4 + 0x10));
            if ((*(uint *)(param_4 + 0x1e4) >> 1 & 1) != 0) goto LAB_00a296c0;
LAB_00a296f4:
            FUN_00a2cd90(*plVar1);
            if (iVar7 != 0x38) goto LAB_00a296c8;
LAB_00a29704:
            iVar8 = FUN_00a49ecc(*plVar1,&local_68);
            if ((iVar8 != 0) || (local_68 == (long *)0x0)) goto LAB_00a297c8;
            bVar5 = true;
            local_94[0] = '\x01';
LAB_00a29a4c:
            FUN_00a49798(param_4);
            FUN_00a4018c(param_4,*(undefined8 *)(*(long *)(param_4 + 0x10) + 0x480));
            plVar12 = (long *)**(long **)(*(long *)(param_4 + 0x10) + 0x480);
            if (plVar12 != (long *)0x0) {
                    /* try { // try from 00a29a74 to 00b29b0f has its CatchHandler @ 00a2990c */
              lVar13 = *plVar12;
              auVar18 = FUN_00a2e828();
              lVar9 = auVar18._0_8_;
              if (*(long *)(lVar13 + 0x8c58) != 0 || *(long *)(lVar13 + 0x8c50) != 0) {
                if (999999 < auVar18._8_8_) {
                  auVar18._8_8_ = auVar18._8_8_ + -1000000;
                  auVar18._0_8_ = lVar9 + 1;
                }
                lVar9 = FUN_00a2e888(auVar18._0_8_,auVar18._8_8_);
                if (0 < lVar9) goto LAB_00a29acc;
              }
                    /* catch() { ... } // from try @ 00a29a28 with catch @ 00a29ac0 */
                    /* catch() { ... } // from try @ 00a29a40 with catch @ 00a29ac4 */
              FUN_00a27148(lVar13,0);
            }
LAB_00a29acc:
            FUN_00a2770c(param_1);
            if ((bool)(bVar5 | *(long *)(param_4 + 0x1f8) != 0)) {
              if (bVar5) {
                uVar17 = 2;
                    /* catch() { ... } // from try @ 00a299f4 with catch @ 00a29af4 */
              }
              else {
                (*(code *)PTR_free_01769a00)(local_68);
                local_68 = *(long **)(param_4 + 0x1f8);
                uVar17 = 3;
                *(undefined8 *)(param_4 + 0x1f8) = 0;
              }
              iVar7 = FUN_00a2788c(plVar1,0,0);
              if ((iVar7 != 0) || (iVar7 = FUN_00a497a0(param_4,local_68,uVar17), iVar7 != 0))
              goto LAB_00a29c00;
              if (*(int *)(param_4 + 0x18) != 2) {
                *(undefined4 *)(param_4 + 0x18) = 2;
                FUN_00a495e8(param_4);
              }
              bVar5 = false;
              iVar7 = 0;
              local_68 = (long *)0x0;
              iVar8 = -1;
            }
            else {
              if (*(long *)(param_4 + 0x1f0) == 0) {
                bVar5 = false;
                iVar7 = 0;
              }
              else {
                (*(code *)PTR_free_01769a00)(local_68);
                local_68 = *(long **)(param_4 + 0x1f0);
                bVar5 = true;
                *(undefined8 *)(param_4 + 0x1f0) = 0;
                iVar7 = FUN_00a497a0(param_4,local_68,1);
                if (iVar7 == 0) {
                  bVar5 = false;
                  local_68 = (long *)0x0;
                }
              }
              if (*(int *)(param_4 + 0x18) == 0x10) {
                iVar8 = -1;
              }
              else {
                *(undefined4 *)(param_4 + 0x18) = 0x10;
                iVar8 = -1;
              }
            }
          }
          else {
            if ((*(uint *)(param_4 + 0x1e4) >> 1 & 1) == 0) goto LAB_00a296f4;
LAB_00a296c0:
            if (iVar7 == 0x38) goto LAB_00a29704;
LAB_00a296c8:
            if (local_94[0] != '\0') goto LAB_00a29704;
LAB_00a297c8:
            if (iVar7 == 0) {
                    /* try { // try from 00a29a40 to 00b29a73 has its CatchHandler @ 00a29ac4 */
              if (local_94[0] != '\0') {
                bVar5 = false;
                goto LAB_00a29a4c;
              }
              bVar5 = false;
              iVar7 = 0;
              iVar8 = -(local_6c[0] & 1);
            }
            else {
              if ((iVar7 != 0x5c) && ((*(uint *)(*(long *)(*plVar1 + 0x400) + 0x7c) >> 1 & 1) == 0))
              {
                FUN_00a26ce8(*plVar1,2);
              }
              FUN_00a49798(param_4);
              FUN_00a2788c(plVar1,iVar7,1);
LAB_00a29c00:
              bVar5 = false;
              iVar8 = 0;
            }
          }
          (*(code *)PTR_free_01769a00)(local_68);
          break;
        case 0xf:
          iVar7 = FUN_00a306d0(*plVar1);
          if (iVar7 == 0) {
            iVar7 = FUN_00a450e0(param_4,local_80,uStack_78);
            lVar9 = *(long *)(param_4 + 0x3a0);
          }
          else {
            iVar7 = 0x2a;
            lVar9 = *(long *)(param_4 + 0x3a0);
          }
          if (((lVar9 == 0) ||
              (lVar9 = FUN_00a31030(*(undefined8 *)(param_4 + 0x960),
                                    *(undefined8 *)(param_4 + 0xa18),lVar9,
                                    *(undefined8 *)(param_4 + 0xa08),
                                    *(undefined8 *)(param_4 + 0xa10),local_80,uStack_78), lVar9 < 1)
              ) && ((*(long *)(param_4 + 0x3a8) == 0 ||
                    (lVar9 = FUN_00a31030(*(undefined8 *)(param_4 + 0x958),
                                          *(undefined8 *)(param_4 + 0xa30),
                                          *(long *)(param_4 + 0x3a8),
                                          *(undefined8 *)(param_4 + 0xa20),
                                          *(undefined8 *)(param_4 + 0xa28),local_80,uStack_78),
                    lVar9 < 1)))) {
            if (*(int *)(param_4 + 0x18) == 0xe) goto LAB_00a296e0;
            uVar17 = 0xe;
LAB_00a298c0:
                    /* try { // try from 00a298c0 to 00b298c3 has its CatchHandler @ 00a298f8 */
            iVar8 = 0;
                    /* try { // try from 00a298c4 to 00b2990b has its CatchHandler @ 00a29874 */
            bVar5 = false;
            *(undefined4 *)(param_4 + 0x18) = uVar17;
            goto joined_r0x00a296e8;
          }
LAB_00a29684:
          bVar5 = false;
          iVar8 = 0;
          break;
        case 0x10:
          if (*plVar1 != 0) {
            FUN_00a4018c(param_4,*(undefined8 *)(*plVar1 + 0x480));
            FUN_00a2770c(param_1);
            iVar8 = FUN_00a2788c(plVar1,iVar7,0);
            if (iVar7 != 0) {
              iVar8 = iVar7;
            }
            iVar7 = iVar8;
            if (*(long *)(param_4 + 0x10) != 0) {
              *plVar1 = 0;
            }
          }
          if ((*(char *)(param_4 + 0x888) != '\0') && (*(uint *)(param_4 + 0x8d30) != 6)) {
            if (*(int *)(param_4 + 0x18) == 0) goto LAB_00a298e0;
            bVar5 = false;
            *(undefined4 *)(param_4 + 0x18) = 0;
            iVar8 = -1;
            goto joined_r0x00a296e8;
          }
          if (*(int *)(param_4 + 0x18) != 0x11) {
            *(undefined4 *)(param_4 + 0x18) = 0x11;
            bVar5 = false;
            iVar8 = -1;
            *(int *)(*(long *)(param_4 + 0x60) + 0x1c) =
                 *(int *)(*(long *)(param_4 + 0x60) + 0x1c) + -1;
            break;
          }
          goto LAB_00a29ccc;
        case 0x11:
          *(undefined8 *)(param_4 + 0x10) = 0;
          if (*(long *)(param_4 + 0x60) != 0) {
                    /* try { // try from 00a29364 to 00b293af has its CatchHandler @ 00a29364
                       catch() { ... } // from try @ 00a29364 with catch @ 00a29364
                       catch() { ... } // from try @ 00a293b4 with catch @ 00a29364 */
            if ((*plVar3 == 0) && (*(long *)(param_4 + 0x8c58) == 0)) goto LAB_00a29684;
            lVar9 = *(long *)(param_4 + 0x8c90);
            iVar8 = FUN_00a2bbf4(*(undefined8 *)(*(long *)(param_4 + 0x60) + 0x80),param_4 + 0x8c60)
            ;
            if (iVar8 == 0) goto LAB_00a293c0;
            FUN_00a38740(param_4,"Internal error clearing splay node = %d\n",iVar8);
            lVar13 = *(long *)(lVar9 + 0x18);
            while (lVar13 != 0) {
                    /* try { // try from 00a293b0 to 00b293b3 has its CatchHandler @ 00a293e8 */
                    /* try { // try from 00a293b4 to 00b293fb has its CatchHandler @ 00a29364 */
              FUN_00a4aa5c(lVar9,*(undefined8 *)(lVar9 + 8),0);
LAB_00a293c0:
              lVar13 = *(long *)(lVar9 + 0x18);
            }
            bVar5 = false;
            iVar8 = 0;
            *plVar3 = 0;
            *(undefined8 *)(param_4 + 0x8c58) = 0;
            break;
          }
          goto LAB_00a29ccc;
        case 0x12:
          uVar17 = 0;
          goto LAB_00a29d1c;
        default:
          return 4;
        }
LAB_00a29c1c:
        uVar16 = *(uint *)(param_4 + 0x18);
joined_r0x00a298b4:
        if (uVar16 < 0x11) {
switchD_00a28e10_caseD_1:
joined_r0x00a296e8:
          if (iVar7 == 0) {
            lVar9 = *plVar1;
joined_r0x00a290bc:
            if (lVar9 == 0) {
              iVar6 = 0;
                    /* try { // try from 00a29874 to 00b298bf has its CatchHandler @ 00a29874
                       catch() { ... } // from try @ 00a29874 with catch @ 00a29874
                       catch() { ... } // from try @ 00a298c4 with catch @ 00a29874 */
              goto LAB_00a28e5c;
            }
            iVar7 = FUN_00a306d0();
                    /* catch() { ... } // from try @ 00a298c0 with catch @ 00a298f8 */
            if (iVar7 == 0) {
              iVar7 = 0;
              iVar6 = 0;
              if (*(int *)(param_4 + 0x18) != 0x11) goto LAB_00a28e5c;
            }
            else {
              FUN_00a26ce8(*(undefined8 *)(param_4 + 0x10),2);
              uVar16 = *(uint *)(param_4 + 0x18);
                    /* try { // try from 00a2990c to 00b299f3 has its CatchHandler @ 00a2990c
                       catch() { ... } // from try @ 00a2990c with catch @ 00a2990c
                       catch() { ... } // from try @ 00a29a74 with catch @ 00a2990c */
              uVar15 = 0x10;
              if (0xf < uVar16) {
                uVar15 = 0x11;
              }
              if (uVar16 == uVar15) {
                iVar8 = -1;
                iVar7 = 0x2a;
                goto LAB_00a29c88;
              }
              *(uint *)(param_4 + 0x18) = uVar15;
              if (uVar16 < 0x10) {
                iVar8 = -1;
                iVar6 = 0x2a;
                goto LAB_00a28e5c;
              }
              iVar7 = 0x2a;
              *(int *)(*(long *)(param_4 + 0x60) + 0x1c) =
                   *(int *)(*(long *)(param_4 + 0x60) + 0x1c) + -1;
            }
          }
          else {
            *pcVar2 = '\0';
            FUN_00a2770c(param_1);
            if (*plVar1 == 0) {
              iVar8 = *(int *)(param_4 + 0x18);
              if (iVar8 == 2) {
                FUN_00a49798(param_4);
                goto LAB_00a29ca8;
              }
            }
            else {
              FUN_00a2cd90();
              FUN_00a2d2d0(*(undefined8 *)(param_4 + 0x10));
              FUN_00a4018c(param_4,*(undefined8 *)(*(long *)(param_4 + 0x10) + 0x478));
              FUN_00a4018c(param_4,*(undefined8 *)(*(long *)(param_4 + 0x10) + 0x480));
              if (bVar5) {
                FUN_00a3fd90(*plVar1,iVar7 == 0x1c);
                *plVar1 = 0;
              }
LAB_00a29ca8:
              iVar8 = *(int *)(param_4 + 0x18);
            }
            if (iVar8 != 0x11) {
              *(undefined4 *)(param_4 + 0x18) = 0x11;
              *(int *)(*(long *)(param_4 + 0x60) + 0x1c) =
                   *(int *)(*(long *)(param_4 + 0x60) + 0x1c) + -1;
            }
          }
LAB_00a29ccc:
          *(undefined4 *)(param_4 + 0x20) = 1;
          *(long *)(param_4 + 0x28) = param_4;
          *(int *)(param_4 + 0x30) = iVar7;
          iVar8 = FUN_00a4a9ac(*(long *)(param_1 + 0x20),
                               *(undefined8 *)(*(long *)(param_1 + 0x20) + 8),param_4 + 0x20);
          uVar17 = 3;
          if (iVar8 != 0) {
            uVar17 = 0;
          }
          if (*(int *)(param_4 + 0x18) != 0x12) {
            *(undefined4 *)(param_4 + 0x18) = 0x12;
          }
        }
        else {
LAB_00a29c88:
          iVar6 = iVar7;
          if (uVar16 == 0x11) goto LAB_00a29ccc;
LAB_00a28e5c:
          iVar7 = iVar6;
          uVar17 = 0;
          if (iVar8 == -1) goto LAB_00a28d3c;
        }
      } while (*(char *)(param_1 + 0xc0) != '\0');
LAB_00a29d1c:
      *(int *)(param_4 + 0x1c) = iVar7;
    }
  }
  return uVar17;
}

