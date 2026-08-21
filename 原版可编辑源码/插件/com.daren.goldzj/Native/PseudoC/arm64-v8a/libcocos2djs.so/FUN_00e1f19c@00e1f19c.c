
uint FUN_00e1f19c(long *param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  bool bVar10;
  uint uVar11;
  long lVar12;
  void *__s;
  size_t __n;
  code *pcVar13;
  ulong uVar14;
  byte *pbVar15;
  undefined1 *puVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  ulong local_70;
  byte local_68 [4];
  undefined1 local_64 [4];
  
  uVar3 = param_2[2];
  uVar1 = param_3 & 0xffff;
  if ((long)param_3 < 1) {
    uVar1 = param_3;
  }
  if ((ulong)param_2[1] <= uVar3 + 3) {
    return 0x55;
  }
  lVar17 = *param_1;
  if ((code *)param_2[5] == (code *)0x0) {
    pbVar15 = (byte *)(*param_2 + uVar3);
    uVar14 = uVar3;
    if (pbVar15 != (byte *)0x0) goto LAB_00e1f228;
    param_2[2] = uVar3 + 4;
    uVar11 = 2;
LAB_00e1f2c8:
    pcVar13 = (code *)param_2[5];
  }
  else {
    lVar12 = (*(code *)param_2[5])(param_2,uVar3,local_68,4);
    if (lVar12 != 4) {
      return 0x55;
    }
    pbVar15 = local_68;
    uVar14 = param_2[2];
LAB_00e1f228:
    bVar4 = *pbVar15;
    bVar5 = pbVar15[1];
    bVar6 = pbVar15[2];
    bVar7 = pbVar15[3];
    lVar12 = uVar14 + 4;
    param_2[2] = lVar12;
    if (((ulong)bVar4 << 0x18 | (ulong)bVar5 << 0x10 | (ulong)bVar6 << 8 | (ulong)bVar7) ==
        0x74797031) {
      if ((ulong)param_2[1] <= uVar14 + 5) {
        return 0x55;
      }
      if ((code *)param_2[5] == (code *)0x0) {
        puVar16 = (undefined1 *)(*param_2 + lVar12);
        if (puVar16 == (undefined1 *)0x0) {
          uVar11 = 0;
          uVar19 = uVar14 + 0xc;
          param_2[2] = uVar14 + 6;
          if ((ulong)param_2[1] < uVar19) {
            return 0x55;
          }
          goto LAB_00e1f388;
        }
        pcVar13 = (code *)0x0;
      }
      else {
        lVar12 = (*(code *)param_2[5])(param_2,lVar12,local_64,2);
        if (lVar12 != 2) {
          return 0x55;
        }
        lVar12 = param_2[2];
        pcVar13 = (code *)param_2[5];
        puVar16 = local_64;
      }
      uVar8 = *puVar16;
      uVar9 = puVar16[1];
      uVar19 = lVar12 + 8;
      param_2[2] = lVar12 + 2;
      uVar11 = (uint)CONCAT11(uVar8,uVar9);
      if (pcVar13 == (code *)0x0) {
        if ((ulong)param_2[1] < uVar19) {
          return 0x55;
        }
      }
      else {
        lVar12 = (*pcVar13)(param_2,uVar19,0,0);
        if (lVar12 != 0) {
          return 0x55;
        }
      }
LAB_00e1f388:
      param_2[2] = uVar19;
      if (uVar11 == 0) {
        return 0x8e;
      }
      bVar10 = false;
      uVar22 = 0;
      local_70 = 0xffffffffffffffff;
      do {
        uVar14 = param_2[1];
        if (uVar14 <= uVar19 + 3) {
          return 0x55;
        }
        if ((code *)param_2[5] == (code *)0x0) {
          pbVar15 = (byte *)(*param_2 + uVar19);
          if (pbVar15 != (byte *)0x0) {
            pcVar13 = (code *)0x0;
            goto LAB_00e1f3f8;
          }
          uVar21 = 0;
          uVar20 = uVar19 + 8;
          param_2[2] = uVar19 + 4;
          if (uVar14 < uVar20) {
            return 0x55;
          }
LAB_00e1f5c8:
          param_2[2] = uVar20;
          if (uVar14 <= uVar19 + 0xb) {
            return 0x55;
          }
        }
        else {
          lVar12 = (*(code *)param_2[5])(param_2,uVar19,local_68,4);
          if (lVar12 != 4) {
            return 0x55;
          }
          uVar19 = param_2[2];
          pcVar13 = (code *)param_2[5];
          pbVar15 = local_68;
LAB_00e1f3f8:
          uVar21 = (ulong)*pbVar15 << 0x18 | (ulong)pbVar15[1] << 0x10 | (ulong)pbVar15[2] << 8 |
                   (ulong)pbVar15[3];
          uVar20 = uVar19 + 8;
          param_2[2] = uVar19 + 4;
          if (pcVar13 == (code *)0x0) {
            uVar14 = param_2[1];
            if (uVar14 < uVar20) {
              return 0x55;
            }
            goto LAB_00e1f5c8;
          }
          lVar12 = (*pcVar13)(param_2,uVar20,0,0);
          if (lVar12 != 0) {
            return 0x55;
          }
          uVar14 = param_2[1];
          param_2[2] = uVar20;
          if (uVar14 <= uVar19 + 0xb) {
            return 0x55;
          }
        }
        if ((code *)param_2[5] == (code *)0x0) {
          pbVar15 = (byte *)(*param_2 + uVar20);
          if (pbVar15 != (byte *)0x0) goto LAB_00e1f490;
          uVar18 = 0;
        }
        else {
          lVar12 = (*(code *)param_2[5])(param_2,uVar20,local_68,4);
          if (lVar12 != 4) {
            return 0x55;
          }
          uVar14 = param_2[1];
          uVar20 = param_2[2];
          pbVar15 = local_68;
LAB_00e1f490:
          uVar18 = (ulong)*pbVar15 << 0x18 | (ulong)pbVar15[1] << 0x10 | (ulong)pbVar15[2] << 8 |
                   (ulong)pbVar15[3];
        }
        lVar12 = uVar20 + 4;
        param_2[2] = lVar12;
        if (uVar14 <= uVar20 + 7) {
          return 0x55;
        }
        if ((code *)param_2[5] == (code *)0x0) {
          pbVar15 = (byte *)(*param_2 + lVar12);
          if (pbVar15 != (byte *)0x0) goto LAB_00e1f4fc;
          uVar14 = 0;
        }
        else {
          lVar12 = (*(code *)param_2[5])(param_2,lVar12,local_68,4);
          if (lVar12 != 4) {
            return 0x55;
          }
          lVar12 = param_2[2];
          pbVar15 = local_68;
LAB_00e1f4fc:
          uVar14 = (ulong)*pbVar15 << 0x18 | (ulong)pbVar15[1] << 0x10 | (ulong)pbVar15[2] << 8 |
                   (ulong)pbVar15[3];
        }
        uVar19 = lVar12 + 4;
        param_2[2] = uVar19;
        if (uVar21 == 0x54595031) {
          uVar18 = uVar18 + 0x18;
          uVar14 = uVar14 - 0x18;
          bVar10 = false;
joined_r0x00e1f578:
          if (-1 < (long)uVar1) {
            local_70 = local_70 + 1;
            goto LAB_00e1f588;
          }
LAB_00e1f5f4:
          uVar19 = param_2[1];
          if (uVar19 < uVar18) {
            return 8;
          }
          if (uVar19 - uVar18 < uVar14) {
            return 8;
          }
          uVar18 = uVar18 + uVar3;
          if ((code *)param_2[5] == (code *)0x0) {
            if (uVar19 < uVar18) {
              return 0x55;
            }
          }
          else {
            lVar12 = (*(code *)param_2[5])(param_2,uVar18,0,0);
            if (lVar12 != 0) {
              return 0x55;
            }
          }
          param_2[2] = uVar18;
          if ((long)uVar14 < 1) {
            if (uVar14 != 0) {
              return 6;
            }
            __s = (void *)0x0;
            uVar19 = param_2[1] - uVar18;
            if ((ulong)param_2[1] < uVar18 || uVar19 == 0) goto LAB_00e1f6d0;
          }
          else {
            __s = (void *)(**(code **)(lVar17 + 8))(lVar17,uVar14);
            if (__s == (void *)0x0) {
              return 0x40;
            }
            memset(__s,0,uVar14);
            uVar18 = param_2[2];
            uVar19 = param_2[1] - uVar18;
            if ((ulong)param_2[1] < uVar18 || uVar19 == 0) goto LAB_00e1f6d0;
          }
          if ((code *)param_2[5] == (code *)0x0) {
            __n = uVar14;
            if (uVar19 <= uVar14) {
              __n = uVar19;
            }
            memcpy(__s,(void *)(*param_2 + uVar18),__n);
            param_2[2] = __n + uVar18;
          }
          else {
            __n = (*(code *)param_2[5])(param_2,uVar18,__s,uVar14);
            param_2[2] = __n + uVar18;
          }
          if (__n < uVar14) {
LAB_00e1f6d0:
            if (__s == (void *)0x0) {
              return 0x55;
            }
            (**(code **)(lVar17 + 0x10))(lVar17,__s);
            return 0x55;
          }
          pcVar2 = "type1";
          if (bVar10) {
            pcVar2 = "cid";
          }
          uVar11 = FUN_00e1f768(param_1,__s,uVar14,uVar1 & (long)uVar1 >> 0x3f,pcVar2,param_4);
          if ((uVar11 & 0xff) != 2) {
            return uVar11;
          }
          goto LAB_00e1f2c8;
        }
        if (uVar21 == 0x43494420) {
          uVar18 = uVar18 + 0x16;
          uVar14 = uVar14 - 0x16;
          bVar10 = true;
          goto joined_r0x00e1f578;
        }
LAB_00e1f588:
        if ((-1 < (long)uVar1) && (local_70 == uVar1)) goto LAB_00e1f5f4;
        uVar22 = uVar22 + 1;
        if (uVar11 <= uVar22) {
          return 0x8e;
        }
      } while( true );
    }
    uVar11 = 2;
    pcVar13 = (code *)param_2[5];
  }
  if (pcVar13 == (code *)0x0) {
    if (uVar3 <= (ulong)param_2[1]) goto LAB_00e1f310;
  }
  else {
    lVar17 = (*pcVar13)(param_2,uVar3,0,0);
    if (lVar17 == 0) {
LAB_00e1f310:
      param_2[2] = uVar3;
      return uVar11;
    }
  }
  return 0x55;
}

