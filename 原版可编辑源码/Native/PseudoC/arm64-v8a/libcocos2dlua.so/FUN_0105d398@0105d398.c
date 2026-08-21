
uint FUN_0105d398(long *param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  char *pcVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  bool bVar9;
  uint uVar10;
  long lVar11;
  void *__s;
  size_t __n;
  code *pcVar12;
  byte *pbVar13;
  ulong uVar14;
  undefined1 *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  ulong local_78;
  ulong local_70;
  byte local_68 [4];
  undefined1 local_64 [4];
  
  uVar2 = param_2[2];
  if ((ulong)param_2[1] <= uVar2 + 3) {
    return 0x55;
  }
  lVar16 = *param_1;
  if ((code *)param_2[5] == (code *)0x0) {
    pbVar13 = (byte *)(*param_2 + uVar2);
    uVar14 = uVar2;
    if (pbVar13 != (byte *)0x0) goto LAB_0105d41c;
    param_2[2] = uVar2 + 4;
    uVar10 = 2;
LAB_0105d4bc:
    pcVar12 = (code *)param_2[5];
  }
  else {
    lVar11 = (*(code *)param_2[5])(param_2,uVar2,local_68,4);
    if (lVar11 != 4) {
      return 0x55;
    }
    pbVar13 = local_68;
    uVar14 = param_2[2];
LAB_0105d41c:
    bVar3 = *pbVar13;
    bVar4 = pbVar13[1];
                    /* try { // try from 0105d424 to 0115d43b has its CatchHandler @ 0105d55c */
    bVar5 = pbVar13[2];
    bVar6 = pbVar13[3];
    lVar11 = uVar14 + 4;
    param_2[2] = lVar11;
    if (((ulong)bVar3 << 0x18 | (ulong)bVar4 << 0x10 | (ulong)bVar5 << 8 | (ulong)bVar6) ==
        0x74797031) {
      if ((ulong)param_2[1] <= uVar14 + 5) {
        return 0x55;
      }
                    /* try { // try from 0105d464 to 0115d483 has its CatchHandler @ 0105d528 */
      if ((code *)param_2[5] == (code *)0x0) {
        puVar15 = (undefined1 *)(*param_2 + lVar11);
        if (puVar15 == (undefined1 *)0x0) {
          uVar10 = 0;
          uVar17 = uVar14 + 0xc;
          param_2[2] = uVar14 + 6;
          if ((ulong)param_2[1] < uVar17) {
            return 0x55;
          }
          goto LAB_0105d57c;
        }
        pcVar12 = (code *)0x0;
      }
      else {
        lVar11 = (*(code *)param_2[5])(param_2,lVar11,local_64,2);
        if (lVar11 != 2) {
          return 0x55;
        }
                    /* try { // try from 0105d484 to 0115d593 has its CatchHandler @ 0105d304 */
        lVar11 = param_2[2];
        pcVar12 = (code *)param_2[5];
        puVar15 = local_64;
      }
      uVar7 = *puVar15;
      uVar8 = puVar15[1];
                    /* catch() { ... } // from try @ 0105d464 with catch @ 0105d528 */
      uVar17 = lVar11 + 8;
      param_2[2] = lVar11 + 2;
      uVar10 = (uint)CONCAT11(uVar7,uVar8);
      if (pcVar12 == (code *)0x0) {
                    /* catch() { ... } // from try @ 0105d424 with catch @ 0105d55c */
        if ((ulong)param_2[1] < uVar17) {
          return 0x55;
        }
      }
      else {
        lVar11 = (*pcVar12)(param_2,uVar17,0,0);
        if (lVar11 != 0) {
          return 0x55;
        }
      }
LAB_0105d57c:
      param_2[2] = uVar17;
      if (uVar10 == 0) {
        return 0x8e;
      }
      bVar9 = false;
      iVar19 = 0;
      local_78 = 0xffffffffffffffff;
      do {
        uVar14 = param_2[1];
        if (uVar14 <= uVar17 + 3) {
          return 0x55;
        }
        if ((code *)param_2[5] == (code *)0x0) {
          pbVar13 = (byte *)(*param_2 + uVar17);
          if (pbVar13 != (byte *)0x0) {
            pcVar12 = (code *)0x0;
            goto LAB_0105d5e0;
          }
          uVar18 = uVar17 + 8;
          local_70 = 0;
          param_2[2] = uVar17 + 4;
          if (uVar14 < uVar18) {
            return 0x55;
          }
        }
        else {
          lVar11 = (*(code *)param_2[5])(param_2,uVar17,local_68,4);
          if (lVar11 != 4) {
            return 0x55;
          }
          uVar17 = param_2[2];
          pcVar12 = (code *)param_2[5];
          pbVar13 = local_68;
LAB_0105d5e0:
          local_70 = (ulong)*pbVar13 << 0x18 | (ulong)pbVar13[1] << 0x10 | (ulong)pbVar13[2] << 8 |
                     (ulong)pbVar13[3];
          uVar18 = uVar17 + 8;
          param_2[2] = uVar17 + 4;
          if (pcVar12 == (code *)0x0) {
                    /* try { // try from 0105d634 to 0115d643 has its CatchHandler @ 0105d65c */
            uVar14 = param_2[1];
            if (uVar14 < uVar18) {
              return 0x55;
            }
          }
          else {
            lVar11 = (*pcVar12)(param_2,uVar18,0,0);
            if (lVar11 != 0) {
              return 0x55;
            }
            uVar14 = param_2[1];
          }
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105d634 with catch @ 0105d65c
                        */
        param_2[2] = uVar18;
        if (uVar14 <= uVar17 + 0xb) {
          return 0x55;
        }
                    /* catch() { ... } // from try @ 0105d6a8 with catch @ 0105d670 */
        if ((code *)param_2[5] == (code *)0x0) {
                    /* try { // try from 0105d6a0 to 0115d6a7 has its CatchHandler @ 0105d754 */
          pbVar13 = (byte *)(*param_2 + uVar18);
          if (pbVar13 != (byte *)0x0) goto LAB_0105d6a8;
          uVar20 = 0;
        }
        else {
          lVar11 = (*(code *)param_2[5])(param_2,uVar18,local_68,4);
          if (lVar11 != 4) {
            return 0x55;
          }
          uVar14 = param_2[1];
          uVar18 = param_2[2];
          pbVar13 = local_68;
LAB_0105d6a8:
                    /* try { // try from 0105d6a8 to 0115d76f has its CatchHandler @ 0105d670 */
          uVar20 = (ulong)*pbVar13 << 0x18 | (ulong)pbVar13[1] << 0x10 | (ulong)pbVar13[2] << 8 |
                   (ulong)pbVar13[3];
        }
        lVar11 = uVar18 + 4;
        param_2[2] = lVar11;
        if (uVar14 <= uVar18 + 7) {
          return 0x55;
        }
        if ((code *)param_2[5] == (code *)0x0) {
          pbVar13 = (byte *)(*param_2 + lVar11);
          if (pbVar13 != (byte *)0x0) goto LAB_0105d714;
          uVar14 = 0;
        }
        else {
          lVar11 = (*(code *)param_2[5])(param_2,lVar11,local_68,4);
          if (lVar11 != 4) {
            return 0x55;
          }
          lVar11 = param_2[2];
          pbVar13 = local_68;
LAB_0105d714:
          uVar14 = (ulong)*pbVar13 << 0x18 | (ulong)pbVar13[1] << 0x10 | (ulong)pbVar13[2] << 8 |
                   (ulong)pbVar13[3];
        }
        uVar17 = lVar11 + 4;
        param_2[2] = uVar17;
        if (local_70 == 0x54595031) {
          uVar20 = uVar20 + 0x18;
          uVar14 = uVar14 - 0x18;
          bVar9 = false;
joined_r0x0105d784:
          if (-1 < (long)param_3) {
            local_78 = local_78 + 1;
            goto LAB_0105d794;
          }
LAB_0105d7e8:
          uVar20 = uVar20 + uVar2;
          if ((code *)param_2[5] == (code *)0x0) {
            if ((ulong)param_2[1] < uVar20) {
              return 0;
            }
          }
          else {
            lVar11 = (*(code *)param_2[5])(param_2,uVar20,0,0);
            if (lVar11 != 0) {
              return 0;
            }
          }
          param_2[2] = uVar20;
          if ((long)uVar14 < 1) {
            if (uVar14 != 0) {
              return 6;
            }
            __s = (void *)0x0;
          }
          else {
            __s = (void *)(**(code **)(lVar16 + 8))(lVar16,uVar14);
            if (__s == (void *)0x0) {
              return 0x40;
            }
            memset(__s,0,uVar14);
            uVar20 = param_2[2];
          }
          uVar17 = param_2[1] - uVar20;
          if ((ulong)param_2[1] < uVar20 || uVar17 == 0) {
            return 0x55;
          }
          if ((code *)param_2[5] == (code *)0x0) {
            __n = uVar14;
            if (uVar17 <= uVar14) {
              __n = uVar17;
            }
            memcpy(__s,(void *)(*param_2 + uVar20),__n);
          }
          else {
            __n = (*(code *)param_2[5])(param_2,uVar20,__s,uVar14);
          }
          param_2[2] = __n + uVar20;
          if (__n < uVar14) {
            return 0x55;
          }
          pcVar1 = "cid";
          if (!bVar9) {
            pcVar1 = "type1";
          }
          uVar10 = FUN_01065e00(param_1,__s,uVar14,param_3 & (long)param_3 >> 0x3f,pcVar1,param_4);
          if ((uVar10 & 0xff) != 2) {
            return uVar10;
          }
          goto LAB_0105d4bc;
        }
                    /* catch() { ... } // from try @ 0105d6a0 with catch @ 0105d754 */
        if (local_70 == 0x43494420) {
          uVar20 = uVar20 + 0x16;
          uVar14 = uVar14 - 0x16;
          bVar9 = true;
          goto joined_r0x0105d784;
        }
LAB_0105d794:
        if ((-1 < (long)param_3) && (local_78 == param_3)) goto LAB_0105d7e8;
        iVar19 = iVar19 + 1;
        if ((int)uVar10 <= iVar19) {
          return 0x8e;
        }
      } while( true );
    }
    uVar10 = 2;
    pcVar12 = (code *)param_2[5];
  }
  if (pcVar12 == (code *)0x0) {
    if (uVar2 <= (ulong)param_2[1]) {
LAB_0105d504:
      param_2[2] = uVar2;
      return uVar10;
    }
  }
  else {
    lVar16 = (*pcVar12)(param_2,uVar2,0,0);
    if (lVar16 == 0) goto LAB_0105d504;
  }
  return 0x55;
}

