
undefined8 ssl_parse_serverhello_tlsext(int *param_1,long *param_2)

{
  byte *pbVar1;
  uint num;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  short sVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  void *pvVar11;
  char *pcVar12;
  int line;
  long lVar13;
  ulong *puVar14;
  code *pcVar15;
  long lVar16;
  ulong uVar17;
  undefined1 *puVar18;
  byte *pbVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined4 local_80;
  byte local_7c [4];
  void *local_78;
  byte *local_70;
  ulong local_68;
  
  local_80 = 0xffffffff;
  if (*param_1 < 0x300) {
    return 1;
  }
  lVar13 = *(long *)(param_1 + 0x24);
  *(undefined4 *)(lVar13 + 0x3c8) = 0;
  param_1[0xa1] = 0;
  CRYPTO_free(*(void **)(lVar13 + 0x3d0));
  puVar14 = *(ulong **)(param_1 + 0x24);
  puVar14[0x7a] = 0;
  *puVar14 = *puVar14 & 0xfffffffffffffcff;
  uVar20 = param_2[1] - 2;
  if ((ulong)param_2[1] < 2) {
LAB_00aee388:
    if ((param_1[0x79] & 0x40004U) == 0) {
      iVar10 = 0x152;
      line = 0xa7a;
    }
    else {
LAB_00aee394:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aee410 with catch @ 00aee3a0
                       catch(type#1 @ 00000000) { ... } // from try @ 00aee440 with catch @ 00aee3a0
                       catch(type#1 @ 00000000) { ... } // from try @ 00aee470 with catch @ 00aee3a0
                       catch(type#1 @ 00000000) { ... } // from try @ 00aee498 with catch @ 00aee3a0
                       catch(type#1 @ 00000000) { ... } // from try @ 00aee4c4 with catch @ 00aee3a0
                        */
      if ((param_1[0x2c] == 0) ||
         (((*(uint *)(*(long *)(param_1 + 0x5e) + 0x150) ^ **(uint **)(param_1 + 0x24) >> 9) & 1) ==
          0)) {
        local_70 = (byte *)CONCAT44(local_70._4_4_,0x70);
        if ((*(long *)(param_1 + 0xa4) != 0) && (*(long *)(param_1 + 0xa2) != 0)) {
          lVar13 = *(long *)(*(long *)(param_1 + 0x5e) + 0x118);
          if (((lVar13 != 0) &&
              (uVar20 = *(ulong *)(*(long *)(param_1 + 0x5e) + 0x110), uVar20 != 0)) &&
             (lVar16 = *(long *)(*(uint **)(param_1 + 0x24) + 0x8a),
             (*(uint *)(lVar16 + 0x18) & 8) != 0 || (*(uint *)(lVar16 + 0x14) & 4) != 0)) {
            uVar17 = 0;
            do {
              if (*(char *)(lVar13 + uVar17) == '\0') goto LAB_00aee478;
              uVar17 = uVar17 + 1;
                    /* try { // try from 00aee408 to 00bee40f has its CatchHandler @ 00aee504 */
            } while (uVar17 < uVar20);
                    /* try { // try from 00aee410 to 00bee433 has its CatchHandler @ 00aee3a0 */
            ERR_put_error(0x14,0x118,0x9d,"ssl/t1_lib.c",0xb55);
            goto LAB_00aee4f4;
          }
        }
LAB_00aee478:
        lVar13 = *(long *)(param_1 + 0x6e);
                    /* try { // try from 00aee490 to 00bee497 has its CatchHandler @ 00aee500 */
        if (((lVar13 == 0) || (pcVar15 = *(code **)(lVar13 + 0x1c0), pcVar15 == (code *)0x0)) &&
           ((lVar13 = *(long *)(param_1 + 0xb4), lVar13 == 0 ||
            (pcVar15 = *(code **)(lVar13 + 0x1c0), pcVar15 == (code *)0x0)))) {
          CRYPTO_free(*(void **)(param_1 + 0x9e));
          param_1[0x9e] = 0;
          param_1[0x9f] = 0;
          param_1[0xa0] = -1;
          return 1;
        }
                    /* try { // try from 00aee498 to 00bee4b7 has its CatchHandler @ 00aee3a0 */
        iVar10 = (*pcVar15)(param_1,&local_70,*(undefined8 *)(lVar13 + 0x1c8));
                    /* try { // try from 00aee4b8 to 00bee4c3 has its CatchHandler @ 00aee500 */
        CRYPTO_free(*(void **)(param_1 + 0x9e));
                    /* try { // try from 00aee4c4 to 00bee507 has its CatchHandler @ 00aee3a0 */
        param_1[0x9e] = 0;
        param_1[0x9f] = 0;
        param_1[0xa0] = -1;
        if (iVar10 == 1) {
          ssl3_send_alert(param_1,1,(ulong)local_70 & 0xffffffff);
          return 1;
        }
        if (iVar10 == 3) {
          param_1[0x8c] = 0;
          return 1;
        }
        if (iVar10 != 2) {
          return 1;
        }
        ssl3_send_alert(param_1,2,(ulong)local_70 & 0xffffffff);
LAB_00aee4f4:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aee468 with catch @ 00aee500
                       catch(type#1 @ 00000000) { ... } // from try @ 00aee490 with catch @ 00aee500
                       catch(type#1 @ 00000000) { ... } // from try @ 00aee4b8 with catch @ 00aee500
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aee408 with catch @ 00aee504
                       catch(type#1 @ 00000000) { ... } // from try @ 00aee434 with catch @ 00aee504
                        */
        ERR_put_error(0x14,0x12f,0x113,"ssl/t1_lib.c",0xb8a);
        return 0;
      }
      iVar10 = 0x68;
      line = 0xa86;
    }
    local_80 = 0x28;
    ERR_put_error(0x14,0x141,iVar10,"ssl/t1_lib.c",line);
  }
  else {
    puVar18 = (undefined1 *)*param_2;
                    /* try { // try from 00aee434 to 00bee43f has its CatchHandler @ 00aee504 */
    uVar2 = *puVar18;
    uVar3 = puVar18[1];
                    /* try { // try from 00aee440 to 00bee467 has its CatchHandler @ 00aee3a0 */
    *param_2 = (long)(puVar18 + 2);
    param_2[1] = uVar20;
    pbVar19 = local_70;
    uVar17 = local_68;
    if ((uVar20 == CONCAT11(uVar2,uVar3)) &&
       (iVar10 = FUN_00af06b8(param_2), pbVar19 = local_70, uVar17 = local_68, iVar10 != 0)) {
      uVar20 = param_2[1];
      if (uVar20 < 2) {
                    /* try { // try from 00aee468 to 00bee46f has its CatchHandler @ 00aee500 */
        bVar8 = false;
        bVar9 = false;
                    /* try { // try from 00aee470 to 00bee48f has its CatchHandler @ 00aee3a0 */
        uVar22 = uVar20;
      }
      else {
        bVar9 = false;
        bVar8 = false;
        do {
          puVar18 = (undefined1 *)*param_2;
          uVar22 = uVar20 - 2;
          uVar2 = *puVar18;
          uVar3 = puVar18[1];
          *param_2 = (long)(puVar18 + 2);
          param_2[1] = uVar22;
          if (uVar22 < 2) break;
          uVar4 = puVar18[2];
          uVar5 = puVar18[3];
          pbVar1 = puVar18 + 4;
          uVar20 = uVar20 - 4;
          *param_2 = (long)pbVar1;
          param_2[1] = uVar20;
          num = (uint)CONCAT11(uVar4,uVar5);
          uVar22 = (ulong)num;
          if (uVar20 < uVar22) goto LAB_00aeea9c;
          *param_2 = (long)(pbVar1 + uVar22);
          param_2[1] = uVar20 - uVar22;
          sVar7 = CONCAT11(uVar2,uVar3);
          local_70 = pbVar1;
          local_68 = uVar22;
          if (*(code **)(param_1 + 0x86) != (code *)0x0) {
            (**(code **)(param_1 + 0x86))
                      (param_1,1,sVar7,pbVar1,uVar22,*(undefined8 *)(param_1 + 0x88));
          }
          if (sVar7 == -0xff) {
            iVar10 = ssl_parse_serverhello_renegotiate_ext(param_1,&local_70,&local_80);
            if (iVar10 != 0) {
              bVar9 = true;
              goto LAB_00aee628;
            }
            goto LAB_00aeea28;
          }
          if (*param_1 == 0x300) goto LAB_00aee628;
          pbVar19 = local_70;
          uVar17 = local_68;
          switch(sVar7) {
          case 0:
                    /* try { // try from 00aee650 to 00bee8e3 has its CatchHandler @ 00aee650
                       catch() { ... } // from try @ 00aee650 with catch @ 00aee650
                       catch() { ... } // from try @ 00aeea44 with catch @ 00aee650
                       catch() { ... } // from try @ 00aeebdc with catch @ 00aee650
                       catch() { ... } // from try @ 00aeec04 with catch @ 00aee650
                       catch() { ... } // from try @ 00aeedb8 with catch @ 00aee650 */
            if ((num != 0) || (*(long *)(param_1 + 0x8a) == 0)) goto LAB_00aeeac0;
            bVar8 = true;
            break;
          case 1:
          case 2:
          case 3:
          case 4:
          case 6:
          case 7:
          case 8:
          case 9:
          case 10:
          case 0xc:
          case 0xd:
          case 0xe:
          case 0xf:
          case 0x11:
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x18:
          case 0x19:
          case 0x1a:
          case 0x1b:
          case 0x1c:
          case 0x1d:
          case 0x1e:
          case 0x1f:
          case 0x20:
          case 0x21:
          case 0x22:
            goto switchD_00aee648_caseD_1;
          case 5:
            if ((num != 0) || (param_1[0x8d] == -1)) {
LAB_00aeeac8:
              local_80 = 0x6e;
              goto LAB_00aeea28;
            }
            param_1[0x98] = 1;
            break;
          case 0xb:
            if (local_68 == 0) goto LAB_00aeea20;
            local_68 = local_68 - 1;
            pbVar19 = local_70 + 1;
            bVar6 = *local_70;
            uVar20 = (ulong)bVar6;
            uVar17 = local_68;
            if (num - 1 != (uint)bVar6) goto LAB_00aeea20;
            local_70 = pbVar19;
            if (param_1[0x2c] == 0) {
              lVar13 = *(long *)(param_1 + 0x5e);
              *(undefined8 *)(lVar13 + 0x110) = 0;
              CRYPTO_free(*(void **)(lVar13 + 0x118));
              pvVar11 = CRYPTO_malloc((uint)bVar6,"ssl/t1_lib.c",0x9a3);
              lVar13 = *(long *)(param_1 + 0x5e);
              *(void **)(lVar13 + 0x118) = pvVar11;
              if (pvVar11 == (void *)0x0) goto LAB_00aeead0;
              *(ulong *)(lVar13 + 0x110) = uVar20;
              pbVar19 = local_70;
              uVar17 = local_68;
              if (local_68 < uVar20) goto LAB_00aeea20;
              memcpy(pvVar11,local_70,uVar20);
              local_70 = local_70 + uVar20;
              local_68 = local_68 - uVar20;
            }
            break;
          case 0x10:
            if (*(int *)(*(long *)(param_1 + 0x24) + 0x3f0) == 0) goto LAB_00aeeac8;
            uVar20 = local_68 - 2;
            if (local_68 < 2) goto LAB_00aeea20;
            pbVar19 = local_70 + 2;
            uVar17 = uVar20;
            if ((uVar20 == 0) || (uVar20 != CONCAT11(*local_70,local_70[1]))) goto LAB_00aeea20;
            pbVar1 = local_70 + 2;
            uVar20 = local_68 - 3;
            local_70 = local_70 + 3;
            pbVar19 = local_70;
            uVar17 = uVar20;
            if (uVar20 != *pbVar1) goto LAB_00aeea20;
            local_68 = uVar20;
            CRYPTO_free(*(void **)(*(long *)(param_1 + 0x24) + 0x3d0));
            pvVar11 = CRYPTO_malloc((int)uVar20,"ssl/t1_lib.c",0xa20);
            *(void **)(*(long *)(param_1 + 0x24) + 0x3d0) = pvVar11;
            if (pvVar11 == (void *)0x0) goto LAB_00aeead0;
            pbVar19 = local_70;
            uVar17 = local_68;
            if (local_68 < uVar20) goto LAB_00aeea20;
            memcpy(pvVar11,local_70,uVar20);
            local_68 = local_68 - uVar20;
            *(ulong *)(*(long *)(param_1 + 0x24) + 0x3d8) = uVar20;
            local_70 = local_70 + uVar20;
            break;
          case 0x12:
            if (*(long *)(param_1 + 0x8e) == 0) goto switchD_00aee648_caseD_1;
            if (*(void **)(param_1 + 0x94) != (void *)0x0) {
              CRYPTO_free(*(void **)(param_1 + 0x94));
              param_1[0x94] = 0;
              param_1[0x95] = 0;
            }
            *(ushort *)(param_1 + 0x96) = CONCAT11(uVar4,uVar5);
            if (num != 0) {
              pvVar11 = CRYPTO_malloc(num,"ssl/t1_lib.c",0x9dc);
              *(void **)(param_1 + 0x94) = pvVar11;
              if (pvVar11 == (void *)0x0) goto LAB_00aeead0;
              memcpy(pvVar11,pbVar1,uVar22);
            }
            break;
          case 0x23:
                    /* try { // try from 00aee8e4 to 00beea2b has its CatchHandler @ 00aeefb0 */
            if ((*(code **)(param_1 + 0xac) != (code *)0x0) &&
               (iVar10 = (**(code **)(param_1 + 0xac))
                                   (param_1,pbVar1,uVar22,*(undefined8 *)(param_1 + 0xae)),
               iVar10 == 0)) {
LAB_00aeead0:
              local_80 = 0x50;
              goto LAB_00aeea28;
            }
            if (((*(byte *)((long)param_1 + 0x1e5) >> 6 & 1) != 0) ||
               ((iVar10 = ssl_security(param_1,10,0,0,0), num != 0 || (iVar10 == 0))))
            goto LAB_00aeeac8;
            param_1[0xa1] = 1;
            break;
          default:
            if ((sVar7 == 0x3374) && (*(int *)(*(long *)(param_1 + 0x24) + 400) == 0)) {
              pcVar15 = *(code **)(*(long *)(param_1 + 0x6e) + 0x2d8);
              if (pcVar15 != (code *)0x0) {
                while (local_68 != 0) {
                  bVar6 = *local_70;
                  uVar21 = (ulong)bVar6;
                  uVar20 = (local_68 - 1) - uVar21;
                  pbVar19 = local_70;
                  uVar17 = local_68;
                  if ((local_68 - 1 < uVar21) ||
                     (local_70 = local_70 + uVar21 + 1, pbVar19 = local_70, uVar17 = uVar20,
                     local_68 = uVar20, bVar6 == 0)) goto LAB_00aeea20;
                }
                iVar10 = (*pcVar15)(param_1,&local_78,local_7c,pbVar1,uVar22,
                                    *(undefined8 *)(*(long *)(param_1 + 0x6e) + 0x2e0));
                if (iVar10 == 0) {
                  CRYPTO_free(*(void **)(param_1 + 0xb6));
                  pvVar11 = CRYPTO_malloc((uint)local_7c[0],"ssl/t1_lib.c",0xa01);
                  *(void **)(param_1 + 0xb6) = pvVar11;
                  if (pvVar11 != (void *)0x0) {
                    memcpy(pvVar11,local_78,(ulong)local_7c[0]);
                    *(byte *)(param_1 + 0xb8) = local_7c[0];
                    *(undefined4 *)(*(long *)(param_1 + 0x24) + 0x3c8) = 1;
                    break;
                  }
                }
                goto LAB_00aeead0;
              }
              goto LAB_00aeeac8;
            }
switchD_00aee648_caseD_1:
            if ((sVar7 == 0xe) &&
               ((*(uint *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x68) >> 3 & 1) != 0)) {
              iVar10 = ssl_parse_serverhello_use_srtp_ext(param_1,&local_70,&local_80);
              if (iVar10 != 0) goto LAB_00aeea28;
            }
            else if (sVar7 == 0x17) {
              **(ulong **)(param_1 + 0x24) = **(ulong **)(param_1 + 0x24) | 0x200;
              if (param_1[0x2c] == 0) {
                *(uint *)(*(long *)(param_1 + 0x5e) + 0x150) =
                     *(uint *)(*(long *)(param_1 + 0x5e) + 0x150) | 1;
              }
            }
            else if (sVar7 == 0x16) {
              puVar14 = *(ulong **)(param_1 + 0x24);
              if ((*(int *)(puVar14[0x45] + 0x20) != 0x40) && (*(int *)(puVar14[0x45] + 0x1c) != 4))
              {
                *puVar14 = *puVar14 | 0x100;
              }
            }
            else {
              iVar10 = custom_ext_parse(param_1,0,sVar7,pbVar1,uVar22,&local_80);
              if (iVar10 < 1) goto LAB_00aeea28;
            }
          }
LAB_00aee628:
          uVar20 = param_2[1];
          uVar22 = uVar20;
        } while (1 < uVar20);
      }
      pbVar19 = local_70;
      uVar17 = local_68;
      if (uVar22 == 0) {
        if (((bVar8) && (param_1[0x2c] == 0)) && (*(char **)(param_1 + 0x8a) != (char *)0x0)) {
          if (*(long *)(*(long *)(param_1 + 0x5e) + 0x108) != 0) goto LAB_00aeea20;
          pcVar12 = CRYPTO_strdup(*(char **)(param_1 + 0x8a),"ssl/t1_lib.c",0xa61);
          *(char **)(*(long *)(param_1 + 0x5e) + 0x108) = pcVar12;
          if (pcVar12 == (char *)0x0) {
LAB_00aeeac0:
            local_80 = 0x70;
            goto LAB_00aeea28;
          }
        }
LAB_00aeea9c:
        if (!bVar9) goto LAB_00aee388;
        goto LAB_00aee394;
      }
    }
LAB_00aeea20:
    local_68 = uVar17;
    local_70 = pbVar19;
    local_80 = 0x32;
  }
LAB_00aeea28:
                    /* try { // try from 00aeea34 to 00beea43 has its CatchHandler @ 00aeef4c */
  ssl3_send_alert(param_1,2,local_80);
                    /* try { // try from 00aeea44 to 00beeb53 has its CatchHandler @ 00aee650 */
  return 0;
}

