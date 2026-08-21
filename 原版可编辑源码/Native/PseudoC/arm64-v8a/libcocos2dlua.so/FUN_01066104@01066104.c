
/* WARNING: Removing unreachable block (ram,0x01066838) */
/* WARNING: Removing unreachable block (ram,0x01066840) */

int FUN_01066104(long *param_1,long *param_2,undefined8 param_3,long param_4,undefined8 *param_5)

{
  undefined1 *puVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  undefined2 *__s;
  long lVar7;
  int *__s_00;
  size_t sVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long local_b0;
  ulong local_a8;
  size_t local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  byte local_64 [4];
  
                    /* try { // try from 01066128 to 01166137 has its CatchHandler @ 010661b8 */
  lVar14 = *param_1;
                    /* try { // try from 01066138 to 01166143 has its CatchHandler @ 01066188 */
  iVar5 = FT_Raccess_Get_HeaderInfo();
                    /* try { // try from 01066144 to 011661d3 has its CatchHandler @ 010660fc */
  if (iVar5 != 0) {
    return iVar5;
  }
                    /* catch() { ... } // from try @ 01066138 with catch @ 01066188 */
  iVar5 = FT_Raccess_Get_DataOffsets
                    (param_1,param_2,uStack_70,local_78,0x504f5354,1,&local_80,&local_88);
  if (iVar5 != 0) {
                    /* catch() { ... } // from try @ 01066128 with catch @ 010661b8 */
    iVar5 = FT_Raccess_Get_DataOffsets
                      (param_1,param_2,uStack_70,local_78,0x73666e74,0,&local_80,&local_88);
    if (iVar5 != 0) {
      return iVar5;
    }
                    /* try { // try from 010661d4 to 011661ff has its CatchHandler @ 010661d4
                       catch() { ... } // from try @ 010661d4 with catch @ 010661d4
                       catch() { ... } // from try @ 0106621c with catch @ 010661d4 */
    lVar7 = 0;
    if (local_88 != 0) {
      lVar7 = param_4 / local_88;
    }
    param_4 = param_4 - lVar7 * local_88;
    lVar7 = 0;
    if (param_4 != -1) {
      lVar7 = param_4;
    }
    if (local_88 <= lVar7) {
      iVar5 = 1;
      goto joined_r0x010663c4;
    }
    lVar15 = *param_1;
    uVar16 = *(ulong *)(local_80 + lVar7 * 8);
    if ((code *)param_2[5] == (code *)0x0) {
                    /* catch() { ... } // from try @ 010662d8 with catch @ 01066368 */
      uVar10 = param_2[1];
      if (uVar16 <= uVar10) goto LAB_01066380;
    }
    else {
                    /* try { // try from 01066200 to 0116620f has its CatchHandler @ 01066290 */
                    /* try { // try from 01066210 to 0116621b has its CatchHandler @ 01066260 */
      lVar6 = (*(code *)param_2[5])(param_2,uVar16,0,0);
      if (lVar6 == 0) {
                    /* try { // try from 0106621c to 011662ab has its CatchHandler @ 010661d4 */
        uVar10 = param_2[1];
LAB_01066380:
                    /* try { // try from 01066384 to 0116641b has its CatchHandler @ 01066384
                       catch() { ... } // from try @ 01066384 with catch @ 01066384
                       catch() { ... } // from try @ 01066448 with catch @ 01066384 */
        param_2[2] = uVar16;
        if (uVar10 <= uVar16 + 3) {
LAB_010663c0:
          iVar5 = 0x55;
          goto joined_r0x010663c4;
        }
        if ((code *)param_2[5] == (code *)0x0) {
          pbVar12 = (byte *)(*param_2 + uVar16);
          uVar10 = uVar16;
          if (pbVar12 != (byte *)0x0) goto LAB_010666e4;
          local_90 = 0;
        }
        else {
          lVar6 = (*(code *)param_2[5])(param_2,uVar16,local_64,4);
          if (lVar6 != 4) goto LAB_010663c0;
          pbVar12 = local_64;
          uVar10 = param_2[2];
LAB_010666e4:
          local_90 = (ulong)*pbVar12 << 0x18 | (ulong)pbVar12[1] << 0x10 | (ulong)pbVar12[2] << 8 |
                     (ulong)pbVar12[3];
        }
        param_2[2] = uVar10 + 4;
        iVar5 = FUN_0105d398(param_1,param_2,lVar7,param_5);
        if (iVar5 == 0) goto joined_r0x010663c4;
        uVar16 = uVar16 + 4;
        if ((code *)param_2[5] == (code *)0x0) {
          if ((ulong)param_2[1] < uVar16) goto joined_r0x010663c4;
        }
        else {
          lVar7 = (*(code *)param_2[5])(param_2,uVar16,0,0);
          if (lVar7 != 0) goto joined_r0x010663c4;
        }
        param_2[2] = uVar16;
        if (local_90 == 0) {
          __s_00 = (int *)0x0;
        }
        else {
          __s_00 = (int *)(**(code **)(lVar15 + 8))(lVar15);
          if (__s_00 == (int *)0x0) {
            iVar5 = 0x40;
            goto joined_r0x010663c4;
          }
          memset(__s_00,0,local_90);
          uVar16 = param_2[2];
        }
        uVar13 = param_2[1];
        uVar10 = uVar13 - uVar16;
        if (uVar16 <= uVar13 && uVar10 != 0) {
          if ((code *)param_2[5] == (code *)0x0) {
            sVar8 = local_90;
            if (uVar10 <= local_90) {
              sVar8 = uVar10;
            }
            memcpy(__s_00,(void *)(*param_2 + uVar16),sVar8);
          }
          else {
            sVar8 = (*(code *)param_2[5])(param_2,uVar16,__s_00,local_90);
          }
                    /* catch() { ... } // from try @ 010669bc with catch @ 010668f8 */
          param_2[2] = sVar8 + uVar16;
          if (local_90 <= sVar8) {
            pcVar9 = "truetype";
            if ((4 < local_90) && (*__s_00 == 0x4f54544f)) {
              pcVar9 = "cff";
            }
            iVar5 = FUN_01065e00(param_1,__s_00,local_90,0,pcVar9,param_5);
            goto joined_r0x010663c4;
          }
        }
      }
    }
    iVar5 = 0x55;
joined_r0x010663c4:
    if (local_80 != 0) {
      (**(code **)(lVar14 + 0x10))(lVar14,local_80);
    }
    if (iVar5 != 0) {
      return iVar5;
    }
    *(long *)*param_5 = local_88;
    return 0;
  }
  if (param_4 + 1U < 2) {
    if (local_88 < 1) {
      iVar5 = 10;
      goto joined_r0x01066354;
    }
    lVar15 = *param_1;
    lVar7 = 0;
    uVar16 = 0;
    do {
                    /* try { // try from 010662f4 to 01166383 has its CatchHandler @ 010662ac */
      uVar10 = *(ulong *)(local_80 + lVar7 * 8);
      if ((code *)param_2[5] == (code *)0x0) {
        uVar13 = param_2[1];
        if (uVar10 <= uVar13) goto LAB_01066328;
LAB_01066338:
                    /* catch() { ... } // from try @ 010662e8 with catch @ 01066338 */
        iVar5 = 0x55;
        goto LAB_0106680c;
      }
      lVar6 = (*(code *)param_2[5])(param_2,uVar10,0,0);
      if (lVar6 != 0) goto LAB_01066338;
      uVar13 = param_2[1];
LAB_01066328:
      param_2[2] = uVar10;
      if (uVar13 <= uVar10 + 3) goto LAB_01066338;
      if ((code *)param_2[5] != (code *)0x0) {
                    /* catch() { ... } // from try @ 01066210 with catch @ 01066260 */
        lVar6 = (*(code *)param_2[5])(param_2,uVar10,local_64,4);
        if (lVar6 != 4) goto LAB_01066338;
        uVar10 = param_2[2];
        pbVar12 = local_64;
LAB_01066290:
                    /* catch() { ... } // from try @ 01066200 with catch @ 01066290 */
        bVar2 = *pbVar12;
                    /* try { // try from 010662ac to 011662d7 has its CatchHandler @ 010662ac
                       catch() { ... } // from try @ 010662ac with catch @ 010662ac
                       catch() { ... } // from try @ 010662f4 with catch @ 010662ac */
        uVar13 = (ulong)bVar2 << 0x18 | (ulong)pbVar12[1] << 0x10 | (ulong)pbVar12[2] << 8 |
                 (ulong)pbVar12[3];
        param_2[2] = uVar10 + 4;
        if (-1 < (char)bVar2) goto LAB_010662c0;
LAB_0106635c:
        iVar5 = 9;
        goto LAB_0106680c;
      }
      pbVar12 = (byte *)(*param_2 + uVar10);
      if (pbVar12 != (byte *)0x0) goto LAB_01066290;
                    /* try { // try from 010662e8 to 011662f3 has its CatchHandler @ 01066338 */
      param_2[2] = uVar10 + 4;
      uVar13 = 0;
LAB_010662c0:
      lVar6 = uVar16 + uVar13;
      uVar10 = lVar6 + 6;
      if (uVar10 < uVar16) goto LAB_0106635c;
      lVar7 = lVar7 + 1;
                    /* try { // try from 010662d8 to 011662e7 has its CatchHandler @ 01066368 */
      uVar16 = uVar10;
    } while (lVar7 < local_88);
    uVar16 = lVar6 + 8;
    if (uVar16 < 6) {
      iVar5 = 10;
    }
    else if ((long)uVar16 < 1) {
      iVar5 = 6;
    }
    else {
      __s = (undefined2 *)(**(code **)(lVar15 + 8))(lVar15,uVar16);
                    /* try { // try from 0106641c to 01166423 has its CatchHandler @ 01066490 */
      if (__s != (undefined2 *)0x0) {
                    /* try { // try from 01066424 to 01166447 has its CatchHandler @ 01066498 */
        memset(__s,0,uVar16);
        *__s = 0x180;
        *(undefined4 *)(__s + 1) = 0;
                    /* try { // try from 01066448 to 011664c3 has its CatchHandler @ 01066384 */
        if (local_88 < 1) {
          local_b0 = 2;
          local_a8._0_4_ = 0;
          uVar13 = 6;
        }
        else {
          lVar7 = 0;
          bVar2 = 1;
          uVar13 = 6;
          local_b0 = 2;
          local_a8 = 0;
          do {
            uVar17 = *(ulong *)(local_80 + lVar7 * 8);
            if ((code *)param_2[5] == (code *)0x0) {
              uVar11 = param_2[1];
                    /* catch() { ... } // from try @ 01066424 with catch @ 01066498 */
              if (uVar11 < uVar17) goto LAB_010667f4;
            }
            else {
              lVar6 = (*(code *)param_2[5])(param_2,uVar17,0,0);
              if (lVar6 != 0) goto LAB_010667f4;
              uVar11 = param_2[1];
                    /* catch() { ... } // from try @ 0106641c with catch @ 01066490 */
            }
            param_2[2] = uVar17;
            if (uVar11 <= uVar17 + 3) goto LAB_010667f4;
            if ((code *)param_2[5] == (code *)0x0) {
              pbVar12 = (byte *)(*param_2 + uVar17);
              if (pbVar12 != (byte *)0x0) goto LAB_010664ec;
              uVar18 = 0;
              lVar6 = uVar17 + 4;
              param_2[2] = lVar6;
            }
            else {
              lVar6 = (*(code *)param_2[5])(param_2,uVar17,local_64,4);
              if (lVar6 != 4) goto LAB_010667f4;
              uVar17 = param_2[2];
              pbVar12 = local_64;
LAB_010664ec:
              bVar3 = *pbVar12;
              uVar18 = (ulong)bVar3 << 0x18 | (ulong)pbVar12[1] << 0x10 | (ulong)pbVar12[2] << 8 |
                       (ulong)pbVar12[3];
              lVar6 = uVar17 + 4;
              param_2[2] = lVar6;
              if ((char)bVar3 < '\0') goto LAB_010667f4;
              uVar11 = param_2[1];
            }
            if (uVar11 <= lVar6 + 1U) goto LAB_010667f4;
            if ((code *)param_2[5] == (code *)0x0) {
              pbVar12 = (byte *)(*param_2 + lVar6);
              if (pbVar12 != (byte *)0x0) goto LAB_01066564;
              param_2[2] = lVar6 + 2;
            }
            else {
              lVar6 = (*(code *)param_2[5])(param_2,lVar6,local_64,2);
              if (lVar6 != 2) goto LAB_010667f4;
              lVar6 = param_2[2];
              pbVar12 = local_64;
LAB_01066564:
              bVar3 = *pbVar12;
              param_2[2] = lVar6 + 2;
              if (bVar3 != 0) {
                uVar17 = uVar18 - 2;
                if (uVar18 < 2 || uVar17 == 0) {
                  uVar17 = 0;
                }
                if (bVar2 == bVar3) {
                  local_a8 = uVar17 + local_a8;
                  uVar11 = uVar13;
                }
                else {
                  if (uVar16 < local_b0 + 3U) goto LAB_010667f4;
                  puVar1 = (undefined1 *)((long)__s + local_b0);
                  *puVar1 = (char)local_a8;
                  puVar1[1] = (char)(local_a8 >> 8);
                  puVar1[2] = (char)(local_a8 >> 0x10);
                  *(char *)((long)__s + local_b0 + 3U) = (char)(local_a8 >> 0x18);
                  if (bVar3 == 5) break;
                  if (uVar16 < uVar13 + 6) goto LAB_010667f4;
                  local_b0 = uVar13 + 2;
                  puVar1 = (undefined1 *)((long)__s + uVar13);
                  *puVar1 = 0x80;
                  puVar1[1] = bVar3;
                  *(undefined1 *)((long)__s + local_b0) = 0;
                  puVar1[3] = 0;
                  *(undefined2 *)(puVar1 + 4) = 0;
                  bVar2 = bVar3;
                  uVar11 = uVar13 + 6;
                  local_a8 = uVar17;
                }
                if ((uVar10 < uVar11) || (uVar13 = uVar11 + uVar17, uVar10 < uVar13))
                goto LAB_010667f4;
                uVar18 = param_2[2];
                uVar4 = param_2[1] - uVar18;
                if ((ulong)param_2[1] < uVar18 || uVar4 == 0) goto LAB_010667f4;
                if ((code *)param_2[5] == (code *)0x0) {
                  sVar8 = uVar17;
                  if (uVar4 <= uVar17) {
                    sVar8 = uVar4;
                  }
                  memcpy((void *)((long)__s + uVar11),(void *)(*param_2 + uVar18),sVar8);
                }
                else {
                  sVar8 = (*(code *)param_2[5])(param_2,uVar18,(void *)((long)__s + uVar11),uVar17);
                }
                param_2[2] = sVar8 + uVar18;
                if (sVar8 < uVar17) goto LAB_010667f4;
              }
            }
            lVar7 = lVar7 + 1;
          } while (lVar7 < local_88);
        }
        if (uVar13 + 2 <= uVar16) {
          *(undefined2 *)((long)__s + uVar13) = 0x380;
          if (local_b0 + 3U <= uVar16) {
            puVar1 = (undefined1 *)((long)__s + local_b0);
            *puVar1 = (char)(undefined4)local_a8;
            puVar1[1] = (char)((uint)(undefined4)local_a8 >> 8);
            puVar1[2] = (char)((uint)(undefined4)local_a8 >> 0x10);
            *(char *)((long)__s + local_b0 + 3U) = (char)((uint)(undefined4)local_a8 >> 0x18);
            iVar5 = FUN_01065e00(param_1,__s,uVar13 + 2,0,"type1",param_5);
            goto joined_r0x01066354;
          }
        }
LAB_010667f4:
        (**(code **)(lVar15 + 0x10))(lVar15,__s);
        goto LAB_01066804;
      }
      iVar5 = 0x40;
    }
  }
  else {
LAB_01066804:
    iVar5 = 1;
joined_r0x01066354:
    if (local_80 == 0) goto LAB_0106681c;
  }
LAB_0106680c:
  (**(code **)(lVar14 + 0x10))(lVar14,local_80);
LAB_0106681c:
  if (iVar5 == 0) {
    *(undefined8 *)*param_5 = 1;
  }
  return iVar5;
}

