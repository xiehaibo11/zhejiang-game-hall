
uint FUN_00c2593c(uint *param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  long lVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  double dVar12;
  char cVar13;
  double *pdVar14;
  uint local_8 [2];
  
  uVar3 = *param_1;
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0xe);
LAB_00c2596c:
  if (-1 < (char)(&DAT_01410f61)[(int)uVar3]) {
    switch(uVar3) {
    case 0:
      uVar3 = 0x103;
      goto LAB_00c25998;
    default:
      pbVar6 = *(byte **)(param_1 + 8);
      break;
    case 9:
    case 0xb:
    case 0xc:
    case 0x20:
switchD_00c259c0_caseD_9:
      pbVar6 = *(byte **)(param_1 + 8);
      goto LAB_00c259c8;
    case 10:
    case 0xd:
      pbVar6 = *(byte **)(param_1 + 8);
      bVar2 = *pbVar6;
      if (bVar2 != uVar3) {
        pbVar6 = pbVar6 + (bVar2 == 0xd || bVar2 == 10);
      }
      param_1[0x1a] = param_1[0x1a] + 1;
LAB_00c259c8:
      *(byte **)(param_1 + 8) = pbVar6 + 1;
      uVar3 = (uint)*pbVar6;
      *param_1 = uVar3;
      if (uVar3 == 0x5c) {
        FUN_00c24f64(param_1);
        uVar3 = *param_1;
      }
      goto LAB_00c2596c;
    case 0x21:
      pbVar6 = *(byte **)(param_1 + 8);
      *(byte **)(param_1 + 8) = pbVar6 + 1;
      bVar2 = *pbVar6;
      uVar5 = (uint)bVar2;
      *param_1 = (uint)bVar2;
      if (bVar2 == 0x5c) {
        uVar5 = FUN_00c24f64(param_1);
      }
      uVar3 = 0x21;
      if (uVar5 != 0x3d) goto LAB_00c25998;
      pbVar6 = *(byte **)(param_1 + 8);
      uVar3 = 0x107;
      break;
    case 0x22:
    case 0x27:
      pbVar6 = *(byte **)(param_1 + 8);
      *(byte **)(param_1 + 8) = pbVar6 + 1;
      bVar2 = *pbVar6;
      uVar5 = (uint)bVar2;
      *param_1 = (uint)bVar2;
      if (bVar2 == 0x5c) {
        FUN_00c24f64(param_1);
        uVar5 = *param_1;
      }
      puVar1 = param_1 + 10;
      goto LAB_00c25a54;
    case 0x24:
      pbVar6 = *(byte **)(param_1 + 8);
      *(byte **)(param_1 + 8) = pbVar6 + 1;
      bVar2 = *pbVar6;
      uVar3 = (uint)bVar2;
      *param_1 = (uint)bVar2;
      if (bVar2 == 0x5c) {
        uVar3 = FUN_00c24f64(param_1);
      }
      pdVar14 = *(double **)(param_1 + 0x16);
      if (((char)(&DAT_01410f61)[(int)uVar3] < '\0') || (uVar3 == 0x24)) {
                    /* WARNING: Subroutine does not return */
        FUN_00c24fe0(param_1,uVar3,0xab8);
      }
      if ((pdVar14 == (double *)0x0) ||
         (lVar7 = *(long *)(param_1 + 0x12), *(double **)(lVar7 + 0x28) <= pdVar14)) {
                    /* WARNING: Subroutine does not return */
        FUN_00c2520c(param_1,0xc23);
      }
      *(double **)(param_1 + 0x16) = pdVar14 + 1;
      dVar12 = *pdVar14;
      uVar3 = (uint)((long)dVar12 >> 0x2f);
      if (uVar3 == 0xfffffffb) {
        param_1[3] = 0;
        uVar3 = 0x100;
        *(ulong *)(param_1 + 4) = (ulong)dVar12 & 0x7fffffffffff;
        *(undefined8 *)(param_1 + 6) = **(undefined8 **)(param_1 + 0x14);
      }
      else if (uVar3 < 0xfffffff3) {
        if (uVar3 == 0xfffffff2) {
          uVar3 = *(uint *)pdVar14;
        }
        else {
          uVar3 = (uint)*pdVar14;
        }
        param_1[2] = uVar3;
        uVar3 = 0x102;
        param_1[3] = 9;
      }
      else {
        if (uVar3 != 0xfffffff5) {
                    /* WARNING: Subroutine does not return */
          FUN_00bfb470(lVar7,(int)((long)pdVar14 - *(long *)(lVar7 + 0x20) >> 3) + 1,
                       "type parameter");
        }
        uVar3 = (uint)*(ushort *)(((ulong)dVar12 & 0x7fffffffffff) + 10);
        if (uVar3 == 0x15) {
          uVar3 = 0x24;
          param_1[3] = *(uint *)(((ulong)dVar12 & 0x7fffffffffff) + 0x10);
        }
        else {
          param_1[3] = uVar3;
          uVar3 = 0x24;
        }
      }
      goto LAB_00c25998;
    case 0x26:
      pbVar6 = *(byte **)(param_1 + 8);
      *(byte **)(param_1 + 8) = pbVar6 + 1;
      bVar2 = *pbVar6;
      uVar5 = (uint)bVar2;
      *param_1 = (uint)bVar2;
      if (bVar2 == 0x5c) {
        uVar5 = FUN_00c24f64(param_1);
      }
      uVar3 = 0x26;
      if (uVar5 != 0x26) goto LAB_00c25998;
      pbVar6 = *(byte **)(param_1 + 8);
      uVar3 = 0x105;
      break;
    case 0x2d:
      pbVar6 = *(byte **)(param_1 + 8);
      *(byte **)(param_1 + 8) = pbVar6 + 1;
      bVar2 = *pbVar6;
      uVar5 = (uint)bVar2;
      *param_1 = (uint)bVar2;
      if (bVar2 == 0x5c) {
        uVar5 = FUN_00c24f64(param_1);
      }
      uVar3 = 0x2d;
      if (uVar5 != 0x3e) goto LAB_00c25998;
      pbVar6 = *(byte **)(param_1 + 8);
      uVar3 = 0x10c;
      break;
    case 0x2f:
      pbVar6 = *(byte **)(param_1 + 8);
      *(byte **)(param_1 + 8) = pbVar6 + 1;
      bVar2 = *pbVar6;
      uVar3 = (uint)bVar2;
      *param_1 = (uint)bVar2;
      if (bVar2 == 0x5c) {
        uVar3 = FUN_00c24f64(param_1);
      }
      if (uVar3 == 0x2a) goto LAB_00c25dc8;
      if (*param_1 != 0x2f) {
        uVar3 = 0x2f;
        goto LAB_00c25998;
      }
      do {
        pbVar6 = *(byte **)(param_1 + 8);
        *(byte **)(param_1 + 8) = pbVar6 + 1;
        bVar2 = *pbVar6;
        uVar5 = (uint)bVar2;
        *param_1 = uVar5;
        uVar3 = (uint)bVar2;
        if (uVar5 == 0x5c) {
          uVar5 = FUN_00c24f64(param_1);
          uVar3 = *param_1;
        }
      } while (((uVar5 != 0xd) && (uVar5 != 10)) && (uVar3 != 0));
      goto LAB_00c2596c;
    case 0x3c:
      pbVar6 = *(byte **)(param_1 + 8);
      *(byte **)(param_1 + 8) = pbVar6 + 1;
      bVar2 = *pbVar6;
      uVar3 = (uint)bVar2;
      *param_1 = (uint)bVar2;
      if (bVar2 == 0x5c) {
        uVar3 = FUN_00c24f64(param_1);
      }
      if (uVar3 == 0x3d) {
        pbVar6 = *(byte **)(param_1 + 8);
        uVar3 = 0x108;
      }
      else {
        uVar3 = 0x3c;
        if (*param_1 != 0x3c) goto LAB_00c25998;
        pbVar6 = *(byte **)(param_1 + 8);
        uVar3 = 0x10a;
      }
      break;
    case 0x3d:
      pbVar6 = *(byte **)(param_1 + 8);
      *(byte **)(param_1 + 8) = pbVar6 + 1;
      bVar2 = *pbVar6;
      uVar5 = (uint)bVar2;
      *param_1 = (uint)bVar2;
      if (bVar2 == 0x5c) {
        uVar5 = FUN_00c24f64(param_1);
      }
      uVar3 = 0x3d;
      if (uVar5 != 0x3d) goto LAB_00c25998;
      pbVar6 = *(byte **)(param_1 + 8);
      uVar3 = 0x106;
      break;
    case 0x3e:
      pbVar6 = *(byte **)(param_1 + 8);
      *(byte **)(param_1 + 8) = pbVar6 + 1;
      bVar2 = *pbVar6;
      uVar3 = (uint)bVar2;
      *param_1 = (uint)bVar2;
      if (bVar2 == 0x5c) {
        uVar3 = FUN_00c24f64(param_1);
      }
      if (uVar3 == 0x3d) {
        pbVar6 = *(byte **)(param_1 + 8);
        uVar3 = 0x109;
      }
      else {
        uVar3 = 0x3e;
        if (*param_1 != 0x3e) goto LAB_00c25998;
        pbVar6 = *(byte **)(param_1 + 8);
        uVar3 = 0x10b;
      }
      break;
    case 0x7c:
      pbVar6 = *(byte **)(param_1 + 8);
      *(byte **)(param_1 + 8) = pbVar6 + 1;
      bVar2 = *pbVar6;
      uVar5 = (uint)bVar2;
      *param_1 = (uint)bVar2;
      if (bVar2 == 0x5c) {
        uVar5 = FUN_00c24f64(param_1);
      }
      uVar3 = 0x7c;
      if (uVar5 != 0x7c) goto LAB_00c25998;
      pbVar6 = *(byte **)(param_1 + 8);
      uVar3 = 0x104;
    }
    *(byte **)(param_1 + 8) = pbVar6 + 1;
    bVar2 = *pbVar6;
    *param_1 = (uint)bVar2;
    if (bVar2 == 0x5c) {
      FUN_00c24f64(param_1);
    }
    goto LAB_00c25998;
  }
  if (((byte)(&DAT_01410f61)[(int)uVar3] >> 3 & 1) == 0) {
    puVar9 = *(undefined1 **)(param_1 + 10);
    while( true ) {
      if ((int)*(undefined8 *)(param_1 + 0xc) == (int)puVar9) {
        puVar9 = (undefined1 *)FUN_00c1a4a8(param_1 + 10,1);
      }
      puVar10 = puVar9 + 1;
      *puVar9 = (char)uVar3;
      pbVar6 = *(byte **)(param_1 + 8);
      *(undefined1 **)(param_1 + 10) = puVar10;
      *(byte **)(param_1 + 8) = pbVar6 + 1;
      bVar2 = *pbVar6;
      uVar3 = (uint)bVar2;
      *param_1 = (uint)bVar2;
      if (bVar2 == 0x5c) {
        uVar3 = FUN_00c24f64(param_1);
        puVar10 = *(undefined1 **)(param_1 + 10);
      }
      if (-1 < (char)(&DAT_01410f61)[(int)uVar3]) break;
      uVar3 = *param_1;
      puVar9 = puVar10;
    }
    uVar11 = FUN_00bfba1c(*(undefined8 *)(param_1 + 0x12),*(undefined8 *)(param_1 + 0xe),
                          (int)puVar10 - (int)*(undefined8 *)(param_1 + 0xe));
    *(undefined8 *)(param_1 + 4) = uVar11;
    uVar3 = FUN_00c0e944(*(undefined8 *)(param_1 + 0x14),param_1 + 6,uVar11,param_1[0x1c]);
    param_1[3] = uVar3;
    uVar3 = **(uint **)(param_1 + 6) & 0xffff;
    if (**(uint **)(param_1 + 6) >> 0x1c != 0xd) {
      uVar3 = 0x100;
    }
  }
  else {
    puVar9 = *(undefined1 **)(param_1 + 10);
    puVar1 = param_1 + 10;
    while( true ) {
      puVar10 = puVar9;
      if ((int)*(undefined8 *)(param_1 + 0xc) == (int)puVar9) {
        puVar10 = (undefined1 *)FUN_00c1a4a8(puVar1,1);
      }
      puVar9 = puVar10 + 1;
      *puVar10 = (char)uVar3;
      pbVar6 = *(byte **)(param_1 + 8);
      *(undefined1 **)puVar1 = puVar9;
      *(byte **)(param_1 + 8) = pbVar6 + 1;
      bVar2 = *pbVar6;
      uVar3 = (uint)bVar2;
      *param_1 = (uint)bVar2;
      if (bVar2 == 0x5c) {
        uVar3 = FUN_00c24f64(param_1);
        puVar9 = *(undefined1 **)puVar1;
      }
      if (-1 < (char)(&DAT_01410f61)[(int)uVar3]) break;
      uVar3 = *param_1;
    }
    if ((int)*(undefined8 *)(param_1 + 0xc) == (int)puVar9) {
      puVar9 = (undefined1 *)FUN_00c1a4a8(puVar1,1);
    }
    *puVar9 = 0;
    *(undefined1 **)(param_1 + 10) = puVar9 + 1;
    iVar4 = FUN_00c1ed60(*(undefined8 *)(param_1 + 0xe),local_8,0x10);
    if (iVar4 == 3) {
      param_1[3] = 9;
    }
    else if (iVar4 == 4) {
      param_1[3] = 10;
    }
    else if ((param_1[0x1d] >> 5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00c24fe0(param_1,0x102,0x884);
    }
    uVar3 = 0x102;
    param_1[2] = local_8[0];
  }
  goto LAB_00c25998;
LAB_00c25dc8:
  do {
    pbVar6 = *(byte **)(param_1 + 8);
    *(byte **)(param_1 + 8) = pbVar6 + 1;
    bVar2 = *pbVar6;
    uVar3 = (uint)bVar2;
    *param_1 = (uint)bVar2;
    if (bVar2 == 0x5c) {
      uVar3 = FUN_00c24f64(param_1);
    }
    if (uVar3 == 0x2a) {
      do {
        pbVar6 = *(byte **)(param_1 + 8);
        *(byte **)(param_1 + 8) = pbVar6 + 1;
        uVar3 = (uint)*pbVar6;
        *param_1 = uVar3;
        if (uVar3 == 0x5c) {
          uVar3 = FUN_00c24f64(param_1);
        }
        if (uVar3 == 0x2f) goto switchD_00c259c0_caseD_9;
        uVar5 = *param_1;
      } while (uVar5 == 0x2a);
    }
    else {
      uVar5 = *param_1;
    }
    if ((uVar5 == 0xd) || (uVar5 == 10)) {
      bVar2 = **(byte **)(param_1 + 8);
      if ((bVar2 != uVar5) && (bVar2 == 0xd || bVar2 == 10)) {
        *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
      }
      param_1[0x1a] = param_1[0x1a] + 1;
    }
    uVar3 = 0;
  } while (uVar5 != 0);
  goto LAB_00c2596c;
LAB_00c25a54:
  if (uVar3 != uVar5) {
    if (uVar5 == 0) {
LAB_00c25fbc:
                    /* WARNING: Subroutine does not return */
      FUN_00c24fe0(param_1,0x103,0x8c4);
    }
    cVar13 = (char)uVar5;
    if (uVar5 == 0x5c) {
      pbVar6 = *(byte **)(param_1 + 8);
      *(byte **)(param_1 + 8) = pbVar6 + 1;
      bVar2 = *pbVar6;
      uVar5 = (uint)bVar2;
      *param_1 = (uint)bVar2;
      if (bVar2 == 0x5c) {
        uVar5 = FUN_00c24f64(param_1);
      }
      if (uVar5 == 0x66) {
        cVar13 = '\f';
        goto LAB_00c25a20;
      }
      if (0x66 < (int)uVar5) {
        if (uVar5 == 0x74) {
          cVar13 = '\t';
        }
        else if ((int)uVar5 < 0x75) {
          if (uVar5 == 0x6e) {
            cVar13 = '\n';
          }
          else {
            cVar13 = '\r';
            if (uVar5 != 0x72) goto LAB_00c25e4c;
          }
        }
        else {
          if (uVar5 != 0x76) {
            iVar4 = 0;
            if (uVar5 != 0x78) goto LAB_00c25e4c;
            while( true ) {
              cVar13 = (char)iVar4;
              pbVar6 = *(byte **)(param_1 + 8);
              *(byte **)(param_1 + 8) = pbVar6 + 1;
              bVar2 = *pbVar6;
              uVar5 = (uint)bVar2;
              *param_1 = (uint)bVar2;
              if (bVar2 == 0x5c) {
                uVar5 = FUN_00c24f64(param_1);
              }
              if (((byte)(&DAT_01410f61)[(int)uVar5] >> 4 & 1) == 0) break;
              uVar5 = *param_1;
              if (((byte)(&DAT_01410f61)[(int)uVar5] >> 3 & 1) == 0) {
                iVar4 = iVar4 * 0x10 + (uVar5 & 0xf) + 9;
              }
              else {
                iVar4 = iVar4 * 0x10 + (uVar5 - 0x30);
              }
            }
            goto LAB_00c25ed8;
          }
          cVar13 = '\v';
        }
        goto LAB_00c25a20;
      }
      if (uVar5 == 0x61) {
        cVar13 = '\a';
        goto LAB_00c25a20;
      }
      if (0x61 < (int)uVar5) {
        if (uVar5 == 0x62) {
          cVar13 = '\b';
        }
        else {
          cVar13 = '\x1b';
          if (uVar5 != 0x65) goto LAB_00c25e4c;
        }
        goto LAB_00c25a20;
      }
      if (uVar5 == 0) goto LAB_00c25fbc;
LAB_00c25e4c:
      cVar13 = (char)uVar5;
      if (((byte)(&DAT_01410f61)[(int)uVar5] >> 3 & 1) == 0) goto LAB_00c25a20;
      pbVar6 = *(byte **)(param_1 + 8);
      cVar13 = cVar13 + -0x30;
      *(byte **)(param_1 + 8) = pbVar6 + 1;
      bVar2 = *pbVar6;
      uVar5 = (uint)bVar2;
      *param_1 = (uint)bVar2;
      if (bVar2 == 0x5c) {
        uVar5 = FUN_00c24f64(param_1);
      }
      if (((byte)(&DAT_01410f61)[(int)uVar5] >> 3 & 1) != 0) {
        pbVar6 = *(byte **)(param_1 + 8);
        *(byte **)(param_1 + 8) = pbVar6 + 1;
        bVar2 = *pbVar6;
        uVar5 = (uint)bVar2;
        cVar13 = (char)*param_1 + -0x30 + cVar13 * '\b';
        *param_1 = (uint)bVar2;
        if (bVar2 == 0x5c) {
          uVar5 = FUN_00c24f64(param_1);
        }
        if (((byte)(&DAT_01410f61)[(int)uVar5] >> 3 & 1) != 0) {
          pbVar6 = *(byte **)(param_1 + 8);
          *(byte **)(param_1 + 8) = pbVar6 + 1;
          cVar13 = (char)*param_1 + -0x30 + cVar13 * '\b';
          uVar5 = (uint)*pbVar6;
          *param_1 = uVar5;
          if (uVar5 == 0x5c) {
            FUN_00c24f64(param_1);
          }
        }
      }
LAB_00c25ed8:
      pcVar8 = *(char **)puVar1;
      if ((int)*(undefined8 *)(param_1 + 0xc) == (int)pcVar8) {
        pcVar8 = (char *)FUN_00c1a4a8(puVar1,1);
      }
      *pcVar8 = cVar13;
      *(char **)puVar1 = pcVar8 + 1;
      uVar5 = *param_1;
    }
    else {
LAB_00c25a20:
      pcVar8 = *(char **)puVar1;
      if ((int)*(undefined8 *)(param_1 + 0xc) == (int)pcVar8) {
        pcVar8 = (char *)FUN_00c1a4a8(puVar1,1);
      }
      *pcVar8 = cVar13;
      pbVar6 = *(byte **)(param_1 + 8);
      *(char **)puVar1 = pcVar8 + 1;
      *(byte **)(param_1 + 8) = pbVar6 + 1;
      bVar2 = *pbVar6;
      uVar5 = (uint)bVar2;
      *param_1 = (uint)bVar2;
      if (bVar2 == 0x5c) {
        FUN_00c24f64(param_1);
        uVar5 = *param_1;
      }
    }
    goto LAB_00c25a54;
  }
  pbVar6 = *(byte **)(param_1 + 8);
  *(byte **)(param_1 + 8) = pbVar6 + 1;
  uVar5 = (uint)*pbVar6;
  *param_1 = uVar5;
  if (uVar5 == 0x5c) {
    FUN_00c24f64(param_1);
  }
  if (uVar3 == 0x22) {
    uVar3 = 0x101;
    uVar11 = FUN_00bfba1c(*(undefined8 *)(param_1 + 0x12),*(undefined8 *)(param_1 + 0xe),
                          (int)*(undefined8 *)(param_1 + 10) - (int)*(undefined8 *)(param_1 + 0xe));
    *(undefined8 *)(param_1 + 4) = uVar11;
  }
  else {
    if ((int)*(undefined8 *)(param_1 + 10) - (int)*(byte **)(param_1 + 0xe) != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00c258bc(param_1,0x27);
    }
    uVar3 = 0x102;
    param_1[2] = (uint)**(byte **)(param_1 + 0xe);
    param_1[3] = 9;
  }
LAB_00c25998:
  param_1[1] = uVar3;
  return uVar3;
}

