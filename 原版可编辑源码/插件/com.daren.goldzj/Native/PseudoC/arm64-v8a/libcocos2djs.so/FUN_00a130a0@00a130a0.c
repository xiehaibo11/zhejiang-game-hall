
/* WARNING: Removing unreachable block (ram,0x00a13f78) */
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00a130a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
LAB_00a13354:
      do {
        if (*pcVar2 != '\0') {
          FUN_00a22d58(param_4,"Pipe broke: handle %p, url = %s\n",param_4,
                       *(undefined8 *)(param_4 + 0x8cc0));
          if (*(uint *)(param_4 + 0x18) < 0x11) {
            if (*(uint *)(param_4 + 0x18) != 2) {
              *(undefined4 *)(param_4 + 0x18) = 2;
              FUN_00a32c00(param_4);
            }
                    /* try { // try from 00a13394 to 00b133b7 has its CatchHandler @ 00a131a4 */
            iVar7 = 0;
            iVar8 = -1;
          }
          else {
            iVar8 = 0;
          }
          *pcVar2 = '\0';
          *plVar1 = 0;
          iVar6 = iVar7;
          goto LAB_00a13474;
        }
        plVar12 = (long *)*plVar1;
        if ((plVar12 == (long *)0x0) && (*(int *)(param_4 + 0x18) - 3U < 0xd)) {
          FUN_00a23020(param_4,"In state %d with no easy_conn, bail out!\n");
          return 4;
        }
                    /* try { // try from 00a133b8 to 00b133bf has its CatchHandler @ 00a13528 */
        cVar4 = *(char *)(param_1 + 0xc0);
        *(undefined1 *)(param_1 + 0xc0) = 0;
        if (cVar4 != '\0') {
          FUN_00a11d24(param_1);
          plVar12 = (long *)*plVar1;
        }
        if (plVar12 != (long *)0x0) {
          uVar16 = *(uint *)(param_4 + 0x18);
          if (uVar16 - 3 < 0xe) {
            *plVar12 = param_4;
          }
                    /* try { // try from 00a133fc to 00b133ff has its CatchHandler @ 00a13530 */
                    /* try { // try from 00a13400 to 00b134a3 has its CatchHandler @ 00a131a4 */
          if ((0xe < uVar16 - 2) || (lVar9 = FUN_00a0f850(param_4,&local_80,uVar16 < 9), -1 < lVar9)
             ) goto LAB_00a1340c;
          if (*(int *)(param_4 + 0x18) == 4) {
            uVar10 = FUN_00a18ea0(local_80,uStack_78,*(undefined8 *)(param_4 + 0x9d8),
                                  *(undefined8 *)(param_4 + 0x9e0));
            FUN_00a23020(param_4,"Connection timed out after %ld milliseconds",uVar10);
          }
          else if (*(int *)(param_4 + 0x18) == 3) {
                    /* try { // try from 00a134a4 to 00b134ab has its CatchHandler @ 00a1352c */
            uVar10 = FUN_00a18ea0(local_80,uStack_78,*(undefined8 *)(param_4 + 0x9d8),
                                  *(undefined8 *)(param_4 + 0x9e0));
                    /* try { // try from 00a134ac to 00b13553 has its CatchHandler @ 00a131a4 */
            FUN_00a23020(param_4,"Resolving timed out after %ld milliseconds",uVar10);
          }
          else {
            lVar9 = *(long *)(param_4 + 0x78);
            uVar10 = FUN_00a18ea0(local_80,uStack_78,*(undefined8 *)(param_4 + 0x9d8),
                                  *(undefined8 *)(param_4 + 0x9e0));
            if (lVar9 == -1) {
              FUN_00a23020(param_4,
                           "Operation timed out after %ld milliseconds with %ld bytes received",
                           uVar10,*(undefined8 *)(param_4 + 0x98));
            }
            else {
              FUN_00a23020(param_4,
                           "Operation timed out after %ld milliseconds with %ld out of %ld bytes received"
                           ,uVar10,*(undefined8 *)(param_4 + 0x98),*(undefined8 *)(param_4 + 0x78));
            }
          }
          bVar5 = 9 < *(uint *)(param_4 + 0x18);
          if (bVar5) {
            FUN_00a11300(*plVar1,2);
          }
          iVar7 = 0x1c;
LAB_00a13dd4:
          FUN_00a11ea4(plVar1,iVar7,1);
          iVar8 = 0;
          goto LAB_00a14234;
        }
LAB_00a1340c:
        iVar8 = 0;
        bVar5 = false;
        switch(*(undefined4 *)(param_4 + 0x18)) {
        case 0:
          iVar7 = FUN_00a32c1c(param_4);
          if (iVar7 != 0) goto LAB_00a13c9c;
          if (*(int *)(param_4 + 0x18) != 2) {
            *(undefined4 *)(param_4 + 0x18) = 2;
            FUN_00a32c00(param_4);
          }
          FUN_00a1b51c(param_4,1);
LAB_00a135f0:
          bVar5 = false;
          iVar7 = 0;
          iVar8 = -1;
          break;
        case 1:
          goto switchD_00a13428_caseD_1;
        case 2:
          FUN_00a1b51c(param_4,2);
          iVar7 = FUN_00a29dc4(param_4,plVar1,local_88,local_8c);
          if (iVar7 != 0) {
            if (iVar7 != 0x59) goto LAB_00a13c9c;
            if (*(int *)(param_4 + 0x18) != 1) {
              *(undefined4 *)(param_4 + 0x18) = 1;
            }
            iVar6 = FUN_00a33fc4(*(long *)(param_1 + 0x28),
                                 *(undefined8 *)(*(long *)(param_1 + 0x28) + 8),param_4);
            bVar5 = false;
            iVar8 = 0;
            iVar7 = 0x1b;
                    /* catch() { ... } // from try @ 00a132c8 with catch @ 00a13524 */
            if (iVar6 != 0) {
              iVar7 = 0;
            }
            break;
          }
          iVar7 = FUN_00a17330(param_4,*(undefined8 *)(param_4 + 0x10));
          if (iVar7 != 0) goto LAB_00a13750;
          if (local_88[0] != '\0') {
            if (*(int *)(param_4 + 0x18) == 3) goto LAB_00a1331c;
            uVar17 = 3;
LAB_00a13344:
            iVar8 = 0;
            *(undefined4 *)(param_4 + 0x18) = uVar17;
            lVar9 = *plVar1;
            goto joined_r0x00a136d4;
          }
          if (local_8c[0] != '\0') goto LAB_00a1363c;
          if (*(int *)(*(long *)(param_4 + 0x10) + 0x710) == 1) {
            if (*(int *)(param_4 + 0x18) == 5) goto LAB_00a13e7c;
            uVar17 = 5;
          }
          else {
            if (*(int *)(param_4 + 0x18) == 4) goto LAB_00a13e7c;
            uVar17 = 4;
          }
LAB_00a136c8:
          *(undefined4 *)(param_4 + 0x18) = uVar17;
          iVar8 = -1;
          lVar9 = *plVar1;
          goto joined_r0x00a136d4;
        case 3:
                    /* catch() { ... } // from try @ 00a134a4 with catch @ 00a1352c */
          lVar9 = *plVar1;
                    /* catch() { ... } // from try @ 00a13248 with catch @ 00a13530
                       catch() { ... } // from try @ 00a133fc with catch @ 00a13530 */
                    /* catch() { ... } // from try @ 00a13328 with catch @ 00a13534 */
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
          lVar9 = FUN_00a1a188(lVar9,uVar10,*(undefined4 *)(lVar9 + 0x198));
          if (lVar9 == 0) {
            FUN_00a12120(param_1,param_4);
            iVar8 = 0;
            iVar7 = 6;
          }
          else {
            FUN_00a22d58(param_4,"Hostname \'%s\' was found in DNS cache\n",uVar10);
            FUN_00a12120(param_1,param_4);
            if (local_8c[0] == '\0') {
              if (*(int *)(*(long *)(param_4 + 0x10) + 0x710) == 1) {
                if (*(int *)(param_4 + 0x18) != 5) {
                  iVar7 = 5;
LAB_00a1417c:
                  *(int *)(param_4 + 0x18) = iVar7;
                }
              }
              else if (*(int *)(param_4 + 0x18) != 4) {
                iVar7 = 4;
                goto LAB_00a1417c;
              }
            }
            else {
              iVar7 = 9 - (*(uint *)(param_1 + 0xb8) & 1);
              if (*(int *)(param_4 + 0x18) != iVar7) goto LAB_00a1417c;
            }
            iVar7 = 0;
            iVar8 = -1;
          }
          bVar5 = iVar7 != 0;
          break;
        case 4:
          iVar7 = FUN_00a0fcbc(*plVar1,0,local_84);
          bVar5 = iVar7 != 0;
          iVar8 = 0;
          if ((iVar7 != 0) || (local_84[0] == '\0')) break;
          lVar9 = *plVar1;
          if (((*(int *)(lVar9 + 0x180) != 2) || (*(char *)(lVar9 + 0x3d9) != '\0')) &&
             (*(int *)(lVar9 + 0x710) != 1)) {
            cVar4 = *(char *)(lVar9 + 0x3c9);
            uVar15 = *(uint *)(param_4 + 0x18);
            uVar16 = 5;
LAB_00a13eb0:
            if (cVar4 == '\0') {
              uVar16 = uVar16 + 1;
            }
            if (uVar15 != uVar16) {
LAB_00a13e78:
              *(uint *)(param_4 + 0x18) = uVar16;
              goto LAB_00a13e7c;
            }
            goto LAB_00a13ebc;
          }
          if (*(int *)(param_4 + 0x18) != 5) {
            uVar17 = 5;
            goto LAB_00a13344;
          }
LAB_00a1331c:
          iVar8 = 0;
          lVar9 = *plVar1;
          goto joined_r0x00a136d4;
        case 5:
          iVar7 = FUN_00a20214(*plVar1,local_8c);
          lVar9 = *plVar1;
          if (*(char *)(lVar9 + 0x3d2) == '\0') {
            if (iVar7 != 0) goto LAB_00a13c9c;
            if (((*(int *)(lVar9 + 0x180) == 2) && (*(char *)(lVar9 + 0x3d9) == '\0')) ||
               (*(int *)(lVar9 + 0x710) == 1)) goto LAB_00a13e90;
            if (*(int *)(param_4 + 0x18) != 6) {
              uVar17 = 6;
              goto LAB_00a136c8;
            }
          }
          else {
            FUN_00a11ea4(plVar1,0,0);
            if (*(int *)(param_4 + 0x18) != 2) {
              *(undefined4 *)(param_4 + 0x18) = 2;
              FUN_00a32c00(param_4);
              goto LAB_00a135f0;
            }
          }
          goto LAB_00a13e7c;
        case 6:
          iVar7 = FUN_00a29b88(*plVar1,local_8c);
          if (local_8c[0] == '\0') {
            if (*(int *)(param_4 + 0x18) != 7) {
              uVar17 = 7;
              goto LAB_00a13ed8;
            }
LAB_00a13cf8:
            iVar8 = 0;
            bVar5 = false;
            goto joined_r0x00a13d00;
          }
          if (iVar7 != 0) {
LAB_00a13a5c:
            FUN_00a32db0(param_4);
            bVar5 = true;
            goto LAB_00a13dd4;
          }
LAB_00a1363c:
          uVar15 = *(uint *)(param_4 + 0x18);
          uVar16 = 9 - (*(uint *)(param_1 + 0xb8) & 1);
          if (uVar15 == uVar16) {
LAB_00a13ebc:
            bVar5 = false;
            iVar7 = 0;
            iVar8 = -1;
            uVar16 = uVar15;
            goto joined_r0x00a13ecc;
          }
          bVar5 = false;
          iVar7 = 0;
          *(uint *)(param_4 + 0x18) = uVar16;
          iVar8 = -1;
          if (uVar16 < 0x11) goto switchD_00a13428_caseD_1;
          goto LAB_00a142a0;
        case 7:
          iVar7 = FUN_00a29b38(*plVar1,local_8c);
          if ((iVar7 == 0) && (local_8c[0] != '\0')) goto LAB_00a1363c;
          if (iVar7 != 0) goto LAB_00a13a5c;
          goto LAB_00a13c9c;
        case 8:
          uVar11 = FUN_00a17828(param_4,*(undefined8 *)(param_4 + 0x10));
          if ((uVar11 & 1) != 0) {
            if (*(int *)(param_4 + 0x18) == 9) goto LAB_00a13ef8;
            uVar17 = 9;
            goto LAB_00a14164;
          }
          goto LAB_00a13c9c;
        case 9:
          plVar12 = *(long **)(param_4 + 0x10);
          if (*(char *)(param_4 + 0x641) == '\0') {
            if (*(code **)(plVar12[0x80] + 0x10) != (code *)0x0) {
              lVar9 = *plVar12;
              iVar7 = (**(code **)(plVar12[0x80] + 0x10))(plVar12,local_90);
              if (iVar7 == 0x37) {
                if ((*(char *)((long)plVar12 + 0x3ba) == '\0') || (*(long *)(lVar9 + 0x60) != 0)) {
LAB_00a13b98:
                  if (*(char *)(*plVar1 + 0x3ba) != '\0') {
                    local_68 = (long *)0x0;
                    iVar8 = FUN_00a334e4(*plVar1,&local_68);
                    plVar12 = local_68;
                    iVar7 = 0x37;
                    if (iVar8 != 0) {
                      iVar7 = iVar8;
                    }
                    FUN_00a32db0(param_4);
                    iVar6 = FUN_00a11ea4(plVar1,iVar7,0);
                    if ((iVar8 == 0) && (plVar12 != (long *)0x0)) {
                      bVar5 = false;
                      if (((iVar6 == 0x37) || (iVar7 = iVar6, iVar6 == 0)) &&
                         (iVar7 = FUN_00a32db8(param_4,local_68,2), iVar7 == 0)) {
                        if (*(int *)(param_4 + 0x18) != 2) {
                          *(undefined4 *)(param_4 + 0x18) = 2;
                          FUN_00a32c00(param_4);
                        }
                        iVar7 = 0;
                        iVar8 = -1;
                      }
                      else {
                        (*(code *)PTR_free_01d1b748)(local_68);
                        iVar8 = 0;
                      }
                    }
                    else {
                      (*(code *)PTR_free_01d1b748)(local_68);
                      iVar8 = 0;
                      bVar5 = true;
                    /* catch() { ... } // from try @ 00a1324c with catch @ 00a131a4
                       catch() { ... } // from try @ 00a132d0 with catch @ 00a131a4
                       catch() { ... } // from try @ 00a13394 with catch @ 00a131a4
                       catch() { ... } // from try @ 00a13400 with catch @ 00a131a4
                       catch() { ... } // from try @ 00a134ac with catch @ 00a131a4 */
                    }
                    break;
                  }
                  iVar7 = 0x37;
                }
                else {
                  plVar12 = (long *)*plVar1;
                  lVar9 = *plVar12;
                  local_68 = plVar12;
                  FUN_00a22d58(lVar9,"Re-used connection seems dead, get a new one\n");
                  FUN_00a11300(plVar12,1);
                  iVar7 = FUN_00a11ea4(&local_68,0,0);
                  *plVar1 = 0;
                  if ((iVar7 == 0x37) || (iVar7 == 0)) {
                    local_70[0] = 1;
                    iVar7 = FUN_00a29dc4(lVar9,plVar1,local_6c,local_70);
                    if (iVar7 != 0) goto LAB_00a13264;
                    plVar12 = (long *)*plVar1;
                    local_68 = plVar12;
                    if (local_6c[0] == 0) {
                    /* try { // try from 00a13248 to 00b1324b has its CatchHandler @ 00a13530 */
                    /* try { // try from 00a1324c to 00b132c7 has its CatchHandler @ 00a131a4 */
                      iVar7 = (**(code **)(plVar12[0x80] + 0x10))(plVar12,local_90);
                      goto LAB_00a13260;
                    }
                    iVar7 = 6;
                  }
                  else {
LAB_00a13264:
                    if (iVar7 == 0x37) goto LAB_00a13b98;
                  }
                  if (iVar7 == 0) goto LAB_00a132b4;
                }
                FUN_00a32db0(param_4);
                if (*(long *)(param_4 + 0x10) == 0) goto LAB_00a13750;
                goto LAB_00a13740;
              }
LAB_00a13260:
              if (iVar7 != 0) goto LAB_00a13264;
              if (local_90[0] != '\0') {
                lVar9 = *plVar12;
                iVar7 = (int)plVar12[0x83];
                if ((int)plVar12[0x83] <= *(int *)((long)plVar12 + 0x41c)) {
                  iVar7 = *(int *)((long)plVar12 + 0x41c);
                }
                *(undefined1 *)(lVar9 + 0x210) = 0;
                *(int *)(lVar9 + 0x1e0) = iVar7 + 1;
                FUN_00a1b51c(lVar9,6);
                goto LAB_00a132b4;
              }
LAB_00a132e0:
              if ((*(char *)(param_4 + 0x888) == '\0') || ((*(uint *)(param_4 + 0x8d30) | 2) != 6))
              {
                if (*(int *)(param_4 + 0x18) != 10) {
                  uVar17 = 10;
                  goto LAB_00a13344;
                }
                goto LAB_00a1331c;
              }
              FUN_00a11ea4(plVar1,0,0);
              goto LAB_00a136b8;
            }
LAB_00a132b4:
            if (local_90[0] == '\0') goto LAB_00a132e0;
                    /* try { // try from 00a132c8 to 00b132cf has its CatchHandler @ 00a13524 */
            if (*(char *)(*(long *)(param_4 + 0x10) + 0x3c4) != '\0') {
                    /* try { // try from 00a132d0 to 00b13327 has its CatchHandler @ 00a131a4 */
              if (*(int *)(param_4 + 0x18) != 0xb) {
                uVar17 = 0xb;
                goto LAB_00a13344;
              }
              goto LAB_00a1331c;
            }
            if (*(int *)(param_4 + 0x18) != 0xc) {
              uVar17 = 0xc;
              goto LAB_00a136c8;
            }
          }
          else {
            FUN_00a11300(plVar12,0);
LAB_00a136b8:
            if (*(int *)(param_4 + 0x18) != 0x10) {
              uVar17 = 0x10;
              goto LAB_00a136c8;
            }
          }
LAB_00a13e7c:
          iVar8 = -1;
          lVar9 = *plVar1;
          goto joined_r0x00a136d4;
        case 10:
          iVar7 = FUN_00a29b60(*plVar1,local_90);
          if (iVar7 == 0) {
            if (local_90[0] != '\0') {
              cVar4 = *(char *)(*(long *)(param_4 + 0x10) + 0x3c4);
              uVar15 = *(uint *)(param_4 + 0x18);
              uVar16 = 0xb;
              goto LAB_00a13eb0;
            }
            goto LAB_00a13e90;
          }
LAB_00a13738:
          FUN_00a32db0(param_4);
LAB_00a13740:
          FUN_00a11ea4(plVar1,iVar7,0);
LAB_00a13750:
          iVar8 = 0;
          bVar5 = true;
          break;
        case 0xb:
          plVar12 = (long *)*plVar1;
          local_98 = 0;
          if (*(code **)(plVar12[0x80] + 0x20) != (code *)0x0) {
            iVar7 = (**(code **)(plVar12[0x80] + 0x20))(plVar12,&local_98);
            if (iVar7 != 0) goto LAB_00a13738;
            if (local_98 == 1) {
              lVar9 = *plVar12;
              iVar7 = (int)plVar12[0x83];
              if ((int)plVar12[0x83] <= *(int *)((long)plVar12 + 0x41c)) {
                iVar7 = *(int *)((long)plVar12 + 0x41c);
              }
              *(undefined1 *)(lVar9 + 0x210) = 0;
              *(int *)(lVar9 + 0x1e0) = iVar7 + 1;
              FUN_00a1b51c(lVar9,6);
            }
            if (local_98 != 0) {
              uVar15 = *(uint *)(param_4 + 0x18);
              uVar16 = 0xc;
              if (local_98 != 1) {
                uVar16 = 10;
              }
              if (uVar15 != uVar16) goto LAB_00a13e78;
              goto LAB_00a13ebc;
            }
          }
LAB_00a13e90:
          bVar5 = false;
          iVar7 = 0;
          iVar8 = 0;
          break;
        case 0xc:
          FUN_00a173b0(param_4,*(undefined8 *)(param_4 + 0x10));
          FUN_00a11d24(param_1);
          if ((*(int *)(*(long *)(param_4 + 0x10) + 0x418) == -1) &&
             (*(int *)(*(long *)(param_4 + 0x10) + 0x41c) == -1)) {
            if (*(int *)(param_4 + 0x18) == 0x10) {
LAB_00a13ef8:
              bVar5 = false;
              iVar8 = -1;
              goto joined_r0x00a13d00;
            }
            uVar17 = 0x10;
          }
          else {
            if (*(int *)(param_4 + 0x18) == 0xd) goto LAB_00a13ef8;
            uVar17 = 0xd;
          }
LAB_00a14164:
          bVar5 = false;
          *(undefined4 *)(param_4 + 0x18) = uVar17;
          iVar8 = -1;
          goto joined_r0x00a13d00;
        case 0xd:
          uVar11 = FUN_00a17888(param_4,*(undefined8 *)(param_4 + 0x10));
          if ((uVar11 & 1) != 0) {
            if (*(int *)(param_4 + 0x18) == 0xe) goto LAB_00a13ef8;
            uVar17 = 0xe;
            goto LAB_00a14164;
          }
          goto LAB_00a13c9c;
        case 0xe:
          local_68 = (long *)0x0;
          local_6c[0] = 0;
          if (((0 < *(long *)(param_4 + 0x3a0)) &&
              (uVar11 = FUN_00a1b648(*(undefined8 *)(param_4 + 0x960),
                                     *(undefined8 *)(param_4 + 0xa18),*(long *)(param_4 + 0x3a0),
                                     *(undefined8 *)(param_4 + 0xa08),
                                     *(undefined8 *)(param_4 + 0xa10),local_80,uStack_78),
              0 < (long)uVar11)) ||
             ((0 < *(long *)(param_4 + 0x3a8) &&
              (uVar11 = FUN_00a1b648(*(undefined8 *)(param_4 + 0x958),
                                     *(undefined8 *)(param_4 + 0xa30),*(long *)(param_4 + 0x3a8),
                                     *(undefined8 *)(param_4 + 0xa20),
                                     *(undefined8 *)(param_4 + 0xa28),local_80,uStack_78),
              0 < (long)uVar11)))) {
            if (*(int *)(param_4 + 0x18) != 0xf) {
              *(undefined4 *)(param_4 + 0x18) = 0xf;
            }
            auVar18 = FUN_00a18e40();
            if (*(long *)(param_4 + 0x8c58) != 0 || *plVar3 != 0) {
              lVar13 = auVar18._8_8_ + (uVar11 + ((uVar11 >> 3) / 0x7d) * -1000) * 1000;
              lVar9 = auVar18._0_8_ + (uVar11 >> 3) / 0x7d;
              if (999999 < lVar13) {
                lVar9 = lVar9 + 1;
                lVar13 = lVar13 + -1000000;
              }
              lVar9 = FUN_00a18ea0(lVar9,lVar13);
              if (0 < lVar9) goto LAB_00a13c9c;
            }
            FUN_00a11760(param_4,uVar11);
            goto LAB_00a13c9c;
          }
          iVar7 = FUN_00a31cec(*(undefined8 *)(param_4 + 0x10),param_4,local_94,local_6c);
          if ((*(uint *)(param_4 + 0x1e4) & 1) == 0) {
            FUN_00a178e8(*(undefined8 *)(param_4 + 0x10));
            if ((*(uint *)(param_4 + 0x1e4) >> 1 & 1) != 0) goto LAB_00a13cd8;
LAB_00a13d0c:
            FUN_00a173a8(*plVar1);
            if (iVar7 != 0x38) goto LAB_00a13ce0;
LAB_00a13d1c:
            iVar8 = FUN_00a334e4(*plVar1,&local_68);
            if ((iVar8 != 0) || (local_68 == (long *)0x0)) goto LAB_00a13de0;
            bVar5 = true;
            local_94[0] = '\x01';
LAB_00a14064:
            FUN_00a32db0(param_4);
            FUN_00a297a4(param_4,*(undefined8 *)(*(long *)(param_4 + 0x10) + 0x480));
            plVar12 = (long *)**(long **)(*(long *)(param_4 + 0x10) + 0x480);
            if (plVar12 != (long *)0x0) {
              lVar13 = *plVar12;
              auVar18 = FUN_00a18e40();
              lVar9 = auVar18._0_8_;
              if (*(long *)(lVar13 + 0x8c58) != 0 || *(long *)(lVar13 + 0x8c50) != 0) {
                if (999999 < auVar18._8_8_) {
                  auVar18._8_8_ = auVar18._8_8_ + -1000000;
                  auVar18._0_8_ = lVar9 + 1;
                }
                lVar9 = FUN_00a18ea0(auVar18._0_8_,auVar18._8_8_);
                if (0 < lVar9) goto LAB_00a140e4;
              }
              FUN_00a11760(lVar13,0);
            }
LAB_00a140e4:
            FUN_00a11d24(param_1);
            if ((bool)(bVar5 | *(long *)(param_4 + 0x1f8) != 0)) {
              if (bVar5) {
                uVar17 = 2;
              }
              else {
                (*(code *)PTR_free_01d1b748)(local_68);
                local_68 = *(long **)(param_4 + 0x1f8);
                uVar17 = 3;
                *(undefined8 *)(param_4 + 0x1f8) = 0;
              }
              iVar7 = FUN_00a11ea4(plVar1,0,0);
              if ((iVar7 != 0) || (iVar7 = FUN_00a32db8(param_4,local_68,uVar17), iVar7 != 0))
              goto LAB_00a14218;
              if (*(int *)(param_4 + 0x18) != 2) {
                *(undefined4 *)(param_4 + 0x18) = 2;
                FUN_00a32c00(param_4);
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
                (*(code *)PTR_free_01d1b748)(local_68);
                local_68 = *(long **)(param_4 + 0x1f0);
                bVar5 = true;
                *(undefined8 *)(param_4 + 0x1f0) = 0;
                iVar7 = FUN_00a32db8(param_4,local_68,1);
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
            if ((*(uint *)(param_4 + 0x1e4) >> 1 & 1) == 0) goto LAB_00a13d0c;
LAB_00a13cd8:
            if (iVar7 == 0x38) goto LAB_00a13d1c;
LAB_00a13ce0:
            if (local_94[0] != '\0') goto LAB_00a13d1c;
LAB_00a13de0:
            if (iVar7 == 0) {
              if (local_94[0] != '\0') {
                bVar5 = false;
                goto LAB_00a14064;
              }
              bVar5 = false;
              iVar7 = 0;
              iVar8 = -(local_6c[0] & 1);
            }
            else {
              if ((iVar7 != 0x5c) && ((*(uint *)(*(long *)(*plVar1 + 0x400) + 0x7c) >> 1 & 1) == 0))
              {
                FUN_00a11300(*plVar1,2);
              }
              FUN_00a32db0(param_4);
              FUN_00a11ea4(plVar1,iVar7,1);
LAB_00a14218:
              bVar5 = false;
              iVar8 = 0;
            }
          }
          (*(code *)PTR_free_01d1b748)(local_68);
          break;
        case 0xf:
          iVar7 = FUN_00a1ace8(*plVar1);
          if (iVar7 == 0) {
            iVar7 = FUN_00a2e6f8(param_4,local_80,uStack_78);
            lVar9 = *(long *)(param_4 + 0x3a0);
          }
          else {
            iVar7 = 0x2a;
            lVar9 = *(long *)(param_4 + 0x3a0);
          }
          if (((lVar9 == 0) ||
              (lVar9 = FUN_00a1b648(*(undefined8 *)(param_4 + 0x960),
                                    *(undefined8 *)(param_4 + 0xa18),lVar9,
                                    *(undefined8 *)(param_4 + 0xa08),
                                    *(undefined8 *)(param_4 + 0xa10),local_80,uStack_78), lVar9 < 1)
              ) && ((*(long *)(param_4 + 0x3a8) == 0 ||
                    (lVar9 = FUN_00a1b648(*(undefined8 *)(param_4 + 0x958),
                                          *(undefined8 *)(param_4 + 0xa30),
                                          *(long *)(param_4 + 0x3a8),
                                          *(undefined8 *)(param_4 + 0xa20),
                                          *(undefined8 *)(param_4 + 0xa28),local_80,uStack_78),
                    lVar9 < 1)))) {
            if (*(int *)(param_4 + 0x18) == 0xe) goto LAB_00a13cf8;
            uVar17 = 0xe;
LAB_00a13ed8:
            iVar8 = 0;
            bVar5 = false;
            *(undefined4 *)(param_4 + 0x18) = uVar17;
            goto joined_r0x00a13d00;
          }
LAB_00a13c9c:
          bVar5 = false;
          iVar8 = 0;
          break;
        case 0x10:
          if (*plVar1 != 0) {
            FUN_00a297a4(param_4,*(undefined8 *)(*plVar1 + 0x480));
            FUN_00a11d24(param_1);
            iVar8 = FUN_00a11ea4(plVar1,iVar7,0);
            if (iVar7 != 0) {
              iVar8 = iVar7;
            }
            iVar7 = iVar8;
            if (*(long *)(param_4 + 0x10) != 0) {
              *plVar1 = 0;
            }
          }
          if ((*(char *)(param_4 + 0x888) != '\0') && (*(uint *)(param_4 + 0x8d30) != 6)) {
            if (*(int *)(param_4 + 0x18) == 0) goto LAB_00a13ef8;
            bVar5 = false;
            *(undefined4 *)(param_4 + 0x18) = 0;
            iVar8 = -1;
            goto joined_r0x00a13d00;
          }
          if (*(int *)(param_4 + 0x18) != 0x11) {
            *(undefined4 *)(param_4 + 0x18) = 0x11;
            bVar5 = false;
            iVar8 = -1;
            *(int *)(*(long *)(param_4 + 0x60) + 0x1c) =
                 *(int *)(*(long *)(param_4 + 0x60) + 0x1c) + -1;
            break;
          }
          goto LAB_00a142e4;
        case 0x11:
          *(undefined8 *)(param_4 + 0x10) = 0;
          if (*(long *)(param_4 + 0x60) != 0) {
            if ((*plVar3 == 0) && (*(long *)(param_4 + 0x8c58) == 0)) goto LAB_00a13c9c;
            lVar9 = *(long *)(param_4 + 0x8c90);
            iVar8 = FUN_00a1620c(*(undefined8 *)(*(long *)(param_4 + 0x60) + 0x80),param_4 + 0x8c60)
            ;
            if (iVar8 == 0) goto LAB_00a139d8;
            FUN_00a22d58(param_4,"Internal error clearing splay node = %d\n",iVar8);
            lVar13 = *(long *)(lVar9 + 0x18);
            while (lVar13 != 0) {
              FUN_00a34074(lVar9,*(undefined8 *)(lVar9 + 8),0);
LAB_00a139d8:
              lVar13 = *(long *)(lVar9 + 0x18);
            }
            bVar5 = false;
            iVar8 = 0;
            *plVar3 = 0;
            *(undefined8 *)(param_4 + 0x8c58) = 0;
            break;
          }
          goto LAB_00a142e4;
        case 0x12:
          uVar17 = 0;
          goto LAB_00a14334;
        default:
          return 4;
        }
LAB_00a14234:
        uVar16 = *(uint *)(param_4 + 0x18);
joined_r0x00a13ecc:
        if (uVar16 < 0x11) {
switchD_00a13428_caseD_1:
joined_r0x00a13d00:
          if (iVar7 == 0) {
            lVar9 = *plVar1;
joined_r0x00a136d4:
            if (lVar9 == 0) {
              iVar6 = 0;
              goto LAB_00a13474;
            }
            iVar7 = FUN_00a1ace8();
            if (iVar7 == 0) {
              iVar7 = 0;
              iVar6 = 0;
              if (*(int *)(param_4 + 0x18) != 0x11) goto LAB_00a13474;
            }
            else {
              FUN_00a11300(*(undefined8 *)(param_4 + 0x10),2);
              uVar16 = *(uint *)(param_4 + 0x18);
              uVar15 = 0x10;
              if (0xf < uVar16) {
                uVar15 = 0x11;
              }
              if (uVar16 == uVar15) {
                iVar8 = -1;
                iVar7 = 0x2a;
                goto LAB_00a142a0;
              }
              *(uint *)(param_4 + 0x18) = uVar15;
              if (uVar16 < 0x10) {
                iVar8 = -1;
                iVar6 = 0x2a;
                goto LAB_00a13474;
              }
              iVar7 = 0x2a;
              *(int *)(*(long *)(param_4 + 0x60) + 0x1c) =
                   *(int *)(*(long *)(param_4 + 0x60) + 0x1c) + -1;
            }
          }
          else {
            *pcVar2 = '\0';
            FUN_00a11d24(param_1);
            if (*plVar1 == 0) {
              iVar8 = *(int *)(param_4 + 0x18);
              if (iVar8 == 2) {
                FUN_00a32db0(param_4);
                goto LAB_00a142c0;
              }
            }
            else {
              FUN_00a173a8();
              FUN_00a178e8(*(undefined8 *)(param_4 + 0x10));
              FUN_00a297a4(param_4,*(undefined8 *)(*(long *)(param_4 + 0x10) + 0x478));
              FUN_00a297a4(param_4,*(undefined8 *)(*(long *)(param_4 + 0x10) + 0x480));
              if (bVar5) {
                FUN_00a293a8(*plVar1,iVar7 == 0x1c);
                *plVar1 = 0;
              }
LAB_00a142c0:
              iVar8 = *(int *)(param_4 + 0x18);
            }
            if (iVar8 != 0x11) {
              *(undefined4 *)(param_4 + 0x18) = 0x11;
              *(int *)(*(long *)(param_4 + 0x60) + 0x1c) =
                   *(int *)(*(long *)(param_4 + 0x60) + 0x1c) + -1;
            }
          }
LAB_00a142e4:
          *(undefined4 *)(param_4 + 0x20) = 1;
          *(long *)(param_4 + 0x28) = param_4;
          *(int *)(param_4 + 0x30) = iVar7;
          iVar8 = FUN_00a33fc4(*(long *)(param_1 + 0x20),
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
LAB_00a142a0:
          iVar6 = iVar7;
          if (uVar16 == 0x11) goto LAB_00a142e4;
LAB_00a13474:
          iVar7 = iVar6;
          uVar17 = 0;
          if (iVar8 == -1) goto LAB_00a13354;
        }
      } while (*(char *)(param_1 + 0xc0) != '\0');
LAB_00a14334:
      *(int *)(param_4 + 0x1c) = iVar7;
    }
  }
  return uVar17;
}

