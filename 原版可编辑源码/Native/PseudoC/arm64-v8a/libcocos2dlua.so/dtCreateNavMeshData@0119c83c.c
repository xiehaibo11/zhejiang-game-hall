
/* dtCreateNavMeshData(dtNavMeshCreateParams*, unsigned char**, int*) */

void dtCreateNavMeshData(dtNavMeshCreateParams *param_1,uchar **param_2,int *param_3)

{
  float *pfVar1;
  ushort *puVar2;
  uchar *puVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  long lVar30;
  float fVar31;
  long lVar32;
  long lVar33;
  undefined8 uVar34;
  char *pcVar35;
  uchar *__s;
  long lVar36;
  long lVar37;
  void *pvVar38;
  uint uVar39;
  uint uVar40;
  ushort uVar41;
  char *pcVar42;
  short *psVar43;
  ushort uVar44;
  uchar *puVar45;
  byte *pbVar46;
  ushort *puVar47;
  ushort uVar48;
  int iVar49;
  int iVar50;
  long lVar51;
  ulong uVar52;
  uint uVar53;
  ushort uVar54;
  int iVar55;
  long lVar56;
  ushort uVar57;
  int iVar58;
  long lVar59;
  int iVar60;
  ulong uVar61;
  char cVar62;
  ulong uVar63;
  long lVar64;
  ushort *puVar65;
  char cVar66;
  byte bVar67;
  ushort *puVar68;
  uchar *puVar69;
  uint uVar70;
  short *psVar71;
  long lVar72;
  ulong uVar73;
  short sVar74;
  int iVar75;
  ushort uVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined1 auVar80 [16];
  float fVar81;
  float fVar82;
  float fVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  float fVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  int iVar104;
  int iVar105;
  int iVar106;
  int iVar107;
  int iVar108;
  int iVar109;
  int iVar110;
  int iVar111;
  int iVar112;
  int iVar113;
  int iVar114;
  int iVar115;
  int iVar116;
  int iVar117;
  int iVar118;
  int iVar119;
  uchar uVar120;
  uchar uVar121;
  uchar uVar122;
  uchar uVar123;
  uchar uVar124;
  uchar uVar125;
  uchar uVar126;
  uchar uVar127;
  uchar uVar128;
  uchar uVar130;
  uchar uVar131;
  uchar uVar132;
  uchar uVar133;
  uchar uVar134;
  uchar uVar135;
  uchar uVar136;
  undefined8 uVar129;
  undefined4 local_7c;
  long local_78;
  
  lVar30 = tpidr_el0;
  local_78 = *(long *)(lVar30 + 0x28);
  uVar12 = *(uint *)(param_1 + 0x2c);
  lVar72 = (long)(int)uVar12;
  if ((int)uVar12 < 7) {
    uVar34 = 0;
    if ((0xfffe < *(int *)(param_1 + 8)) || (*(int *)(param_1 + 8) == 0)) goto LAB_0119c87c;
    if ((*(long *)param_1 == 0) ||
       ((*(int *)(param_1 + 0x28) == 0 || (*(long *)(param_1 + 0x10) == 0)))) goto LAB_0119c878;
    if (*(int *)(param_1 + 0x88) < 1) {
      iVar49 = 0;
      iVar75 = 0;
      pcVar35 = (char *)0x0;
    }
    else {
      pcVar35 = (char *)dtAlloc(*(int *)(param_1 + 0x88) << 1,1);
      uVar34 = 0;
      if (pcVar35 == (char *)0x0) goto LAB_0119c87c;
      if (*(long *)(param_1 + 0x38) == 0) {
LAB_0119c974:
        if (*(int *)(param_1 + 8) < 1) {
LAB_0119c9dc:
          fVar79 = 3.4028235e+38;
          uVar84 = 0xff;
          uVar85 = 0xff;
          uVar86 = 0x7f;
          uVar87 = 0xff;
        }
        else {
          uVar52 = 0;
          lVar51 = 0;
          uVar84 = 0xff;
          uVar85 = 0xff;
          uVar86 = 0x7f;
          uVar87 = 0xff;
          fVar79 = 3.4028235e+38;
          do {
            uVar73 = uVar52 & 0xffffffff;
            lVar51 = lVar51 + 1;
            uVar52 = uVar52 + 3;
            fVar77 = (float)NEON_ucvtf((uint)*(ushort *)(*(long *)param_1 + 2 + uVar73 * 2));
            fVar77 = *(float *)(param_1 + 0xa0) + *(float *)(param_1 + 0xc4) * fVar77;
            if (fVar77 <= fVar79) {
              fVar79 = fVar77;
            }
            if ((float)CONCAT13(uVar87,CONCAT12(uVar86,CONCAT11(uVar85,uVar84))) == fVar77 ||
                (float)CONCAT13(uVar87,CONCAT12(uVar86,CONCAT11(uVar85,uVar84))) < fVar77) {
              uVar84 = SUB41(fVar77,0);
              uVar85 = (undefined1)((uint)fVar77 >> 8);
              uVar86 = (undefined1)((uint)fVar77 >> 0x10);
              uVar87 = (undefined1)((uint)fVar77 >> 0x18);
            }
          } while (lVar51 < *(int *)(param_1 + 8));
        }
      }
      else {
        uVar7 = *(uint *)(param_1 + 0x40);
        if (uVar7 == 0) goto LAB_0119c974;
        if ((int)uVar7 < 1) goto LAB_0119c9dc;
        lVar51 = 0;
        uVar84 = 0xff;
        uVar85 = 0xff;
        uVar86 = 0x7f;
        uVar87 = 0xff;
        fVar79 = 3.4028235e+38;
        do {
          fVar77 = *(float *)(*(long *)(param_1 + 0x38) + (ulong)((int)lVar51 + 1) * 4);
          lVar51 = lVar51 + 3;
          if (fVar77 <= fVar79) {
            fVar79 = fVar77;
          }
          if ((float)CONCAT13(uVar87,CONCAT12(uVar86,CONCAT11(uVar85,uVar84))) == fVar77 ||
              (float)CONCAT13(uVar87,CONCAT12(uVar86,CONCAT11(uVar85,uVar84))) < fVar77) {
            uVar84 = SUB41(fVar77,0);
            uVar85 = (undefined1)((uint)fVar77 >> 8);
            uVar86 = (undefined1)((uint)fVar77 >> 0x10);
            uVar87 = (undefined1)((uint)fVar77 >> 0x18);
          }
        } while ((ulong)uVar7 * 3 != lVar51);
      }
      if (*(int *)(param_1 + 0x88) < 1) {
        iVar49 = 0;
        iVar75 = 0;
      }
      else {
        fVar77 = *(float *)(param_1 + 0xbc);
        fVar78 = *(float *)(param_1 + 0x9c);
        fVar81 = *(float *)(param_1 + 0xa4);
        fVar82 = *(float *)(param_1 + 0xa8);
        fVar83 = *(float *)(param_1 + 0xb0);
        uVar52 = 0;
        lVar51 = 0;
        iVar75 = 0;
        iVar49 = 0;
        pcVar42 = pcVar35;
        do {
          pfVar5 = (float *)(*(long *)(param_1 + 0x58) + (uVar52 & 0xfffffffe) * 4);
          pfVar1 = (float *)(*(long *)(param_1 + 0x58) + (ulong)((int)uVar52 + 3) * 4);
          cVar62 = '\0';
          switch((*pfVar5 < fVar78) << 2 | fVar82 <= *pfVar5 | (fVar83 <= pfVar5[2]) << 1 |
                 (pfVar5[2] < fVar81) << 3) {
          case '\x01':
            break;
          case '\x02':
            cVar62 = '\x02';
            break;
          case '\x03':
            cVar62 = '\x01';
            break;
          case '\x04':
            cVar62 = '\x04';
            break;
          default:
            cVar62 = -1;
            break;
          case '\x06':
            cVar62 = '\x03';
            break;
          case '\b':
            cVar62 = '\x06';
            break;
          case '\t':
            cVar62 = '\a';
            break;
          case '\f':
            cVar62 = '\x05';
          }
          *pcVar42 = cVar62;
          fVar31 = *pfVar1;
          fVar88 = pfVar1[2];
          cVar66 = '\0';
          switch((fVar31 < fVar78) << 2 | fVar82 <= fVar31 | (fVar83 <= fVar88) << 1 |
                 (fVar88 < fVar81) << 3) {
          case '\x01':
            break;
          case '\x02':
            cVar66 = '\x02';
            break;
          case '\x03':
            cVar66 = '\x01';
            break;
          case '\x04':
            cVar66 = '\x04';
            break;
          default:
            cVar66 = -1;
            break;
          case '\x06':
            cVar66 = '\x03';
            break;
          case '\b':
            cVar66 = '\x06';
            break;
          case '\t':
            cVar66 = '\a';
            break;
          case '\f':
            cVar66 = '\x05';
          }
          pcVar42[1] = cVar66;
          if (cVar62 == -1) {
            if ((pfVar5[1] < fVar79 - fVar77) ||
               ((float)CONCAT13(uVar87,CONCAT12(uVar86,CONCAT11(uVar85,uVar84))) + fVar77 <
                pfVar5[1])) {
              cVar62 = '\0';
              *pcVar42 = '\0';
            }
            else {
              cVar62 = -1;
            }
          }
          if (cVar66 == -1) {
            iVar49 = iVar49 + 1;
          }
          lVar51 = lVar51 + 1;
          if (cVar62 == -1) {
            iVar49 = iVar49 + 1;
            iVar75 = iVar75 + 1;
          }
          uVar52 = uVar52 + 6;
          pcVar42 = pcVar42 + 2;
        } while (lVar51 < *(int *)(param_1 + 0x88));
      }
    }
    uVar7 = *(uint *)(param_1 + 0x28);
    uVar52 = (ulong)uVar7;
    uVar73 = (ulong)uVar12;
    if ((int)uVar7 < 1) {
      iVar55 = 0;
      iVar58 = 0;
    }
    else {
      iVar60 = 0;
      uVar61 = 0;
      iVar58 = 0;
      iVar55 = 0;
      do {
        if (0 < (int)uVar12) {
          psVar43 = (short *)(*(long *)(param_1 + 0x10) + (long)iVar60 * 2);
          uVar63 = uVar73;
          do {
            if (*psVar43 == -1) break;
            iVar58 = iVar58 + 1;
            if ((psVar43[lVar72] < 0) && (((psVar43[lVar72] ^ 0xffffU) & 0xf) != 0)) {
              iVar55 = iVar55 + 1;
            }
            uVar63 = uVar63 - 1;
            psVar43 = psVar43 + 1;
          } while (uVar63 != 0);
        }
        uVar61 = uVar61 + 1;
        iVar60 = iVar60 + uVar12 * 2;
      } while (uVar61 != uVar52);
    }
    iVar60 = *(int *)(param_1 + 8) + iVar75 * 2;
    iVar58 = iVar58 + (iVar55 + iVar49) * 2;
    if (*(long *)(param_1 + 0x30) == 0) {
      if (0 < (int)uVar7) {
        iVar49 = 0;
        uVar61 = 0;
        iVar55 = 0;
        if (0 < (int)uVar12) goto LAB_0119cd54;
        do {
          uVar63 = 0;
LAB_0119cd34:
          uVar61 = uVar61 + 1;
          iVar55 = iVar55 + (int)uVar63 + -2;
          iVar49 = iVar49 + uVar12 * 2;
          if (uVar61 == uVar52) goto LAB_0119cd7c;
        } while ((int)uVar12 < 1);
LAB_0119cd54:
        uVar63 = 0;
        do {
          if (*(short *)(*(long *)(param_1 + 0x10) + (long)iVar49 * 2 + uVar63 * 2) == -1) break;
          uVar63 = uVar63 + 1;
        } while (uVar73 != uVar63);
        goto LAB_0119cd34;
      }
      iVar55 = 0;
LAB_0119cd7c:
      iVar49 = 0;
    }
    else {
      iVar55 = *(int *)(param_1 + 0x50);
      if ((int)uVar7 < 1) goto LAB_0119cd7c;
      iVar50 = 0;
      uVar61 = 0;
      iVar49 = 0;
      do {
        uVar53 = (uint)uVar61;
        if ((int)uVar12 < 1) {
          uVar63 = 0;
        }
        else {
          uVar63 = 0;
          do {
            if (*(short *)(*(long *)(param_1 + 0x10) + (long)iVar50 * 2 + uVar63 * 2) == -1) break;
            uVar63 = uVar63 + 1;
          } while (uVar73 != uVar63);
        }
        uVar61 = uVar61 + 1;
        iVar49 = (*(int *)(*(long *)(param_1 + 0x30) + ((ulong)(uVar53 & 0x3fffffff) << 4 | 4)) +
                 iVar49) - (int)uVar63;
        iVar50 = iVar50 + uVar12 * 2;
      } while (uVar61 != uVar52);
    }
    iVar112 = iVar60 * 0xc;
    iVar113 = uVar7 * 0xc;
    iVar114 = (uVar7 + iVar75) * 0x20;
    iVar115 = iVar58 * 0xc;
    iVar104 = iVar49 * 0xc;
    iVar50 = 0;
    if (param_1[200] != (dtNavMeshCreateParams)0x0) {
      iVar50 = uVar7 << 5;
    }
    iVar4 = iVar113 + iVar75 * 0x24 + iVar114 + iVar112 + iVar115 + iVar55 * 4 + iVar104 + iVar50 +
            100;
    __s = (uchar *)dtAlloc(iVar4,0);
    if (__s != (uchar *)0x0) {
      memset(__s,0,(long)iVar4);
      __s[0] = 'V';
      __s[1] = 'A';
      __s[2] = 'N';
      __s[3] = 'D';
      __s[4] = '\a';
      __s[5] = '\0';
      __s[6] = '\0';
      __s[7] = '\0';
      auVar80 = *(undefined1 (*) [16])(param_1 + 0x8c);
      *(uint *)(__s + 0x18) = uVar7 + iVar75;
      *(int *)(__s + 0x1c) = iVar60;
      *(int *)(__s + 0x20) = iVar58;
      auVar80 = NEON_ext(auVar80,auVar80,4,1);
      *(long *)(__s + 0x10) = auVar80._8_8_;
      *(long *)(__s + 8) = auVar80._0_8_;
      *(undefined4 *)(__s + 0x48) = *(undefined4 *)(param_1 + 0x9c);
      *(undefined4 *)(__s + 0x4c) = *(undefined4 *)(param_1 + 0xa0);
      *(undefined4 *)(__s + 0x50) = *(undefined4 *)(param_1 + 0xa4);
      *(undefined4 *)(__s + 0x54) = *(undefined4 *)(param_1 + 0xa8);
      *(undefined4 *)(__s + 0x58) = *(undefined4 *)(param_1 + 0xac);
      *(undefined4 *)(__s + 0x5c) = *(undefined4 *)(param_1 + 0xb0);
      uVar7 = *(uint *)(param_1 + 0x28);
      *(int *)(__s + 0x28) = iVar49;
      *(int *)(__s + 0x2c) = iVar55;
      *(uint *)(__s + 0x24) = uVar7;
      fVar79 = *(float *)(param_1 + 0xc0);
      *(uint *)(__s + 0x38) = uVar7;
      lVar51 = (long)iVar112;
      *(float *)(__s + 0x60) = 1.0 / fVar79;
      *(undefined8 *)(__s + 0x3c) = *(undefined8 *)(param_1 + 0xb4);
      uVar8 = *(undefined4 *)(param_1 + 0xbc);
      *(int *)(__s + 0x34) = iVar75;
      *(undefined4 *)(__s + 0x44) = uVar8;
      iVar49 = 0;
      if (param_1[200] != (dtNavMeshCreateParams)0x0) {
        iVar49 = uVar7 << 1;
      }
      *(int *)(__s + 0x30) = iVar49;
      uVar53 = *(uint *)(param_1 + 8);
      uVar52 = (ulong)uVar53;
      lVar32 = lVar51 + 100;
      lVar59 = (long)iVar114;
      lVar56 = (long)iVar115;
      if (0 < (int)uVar53) {
        lVar64 = *(long *)param_1;
        uVar61 = 0;
        while( true ) {
          uVar52 = uVar52 - 1;
          puVar2 = (ushort *)(lVar64 + (uVar61 & 0xffffffff) * 2);
          pfVar1 = (float *)(__s + (uVar61 & 0xffffffff) * 4 + 100);
          fVar77 = (float)NEON_ucvtf((uint)*puVar2);
          *pfVar1 = *(float *)(param_1 + 0x9c) + fVar79 * fVar77;
          fVar79 = (float)NEON_ucvtf((uint)puVar2[1]);
          pfVar1[1] = *(float *)(param_1 + 0xa0) + *(float *)(param_1 + 0xc4) * fVar79;
          fVar79 = (float)NEON_ucvtf((uint)puVar2[2]);
          pfVar1[2] = *(float *)(param_1 + 0xa4) + *(float *)(param_1 + 0xc0) * fVar79;
          if (uVar52 == 0) break;
          fVar79 = *(float *)(param_1 + 0xc0);
          uVar61 = uVar61 + 3;
        }
      }
      uVar70 = *(uint *)(param_1 + 0x88);
      lVar64 = lVar56 + lVar59 + lVar32;
      if (0 < (int)uVar70) {
        uVar52 = 0;
        lVar36 = 0;
        iVar49 = 0;
        pcVar42 = pcVar35;
        do {
          if (*pcVar42 == -1) {
            puVar6 = (undefined4 *)(*(long *)(param_1 + 0x58) + (uVar52 & 0xfffffffe) * 4);
            puVar3 = __s + (long)(int)((uVar53 + iVar49 * 2) * 3) * 4 + 100;
            iVar49 = iVar49 + 1;
            *(undefined4 *)puVar3 = *puVar6;
            *(undefined4 *)(puVar3 + 4) = puVar6[1];
            *(undefined4 *)(puVar3 + 8) = puVar6[2];
            *(undefined4 *)(puVar3 + 0xc) = puVar6[3];
            *(undefined4 *)(puVar3 + 0x10) = puVar6[4];
            *(undefined4 *)(puVar3 + 0x14) = puVar6[5];
          }
          lVar36 = lVar36 + 1;
          uVar52 = uVar52 + 6;
          pcVar42 = pcVar42 + 2;
        } while (lVar36 < (int)uVar70);
      }
      lVar36 = iVar113 + lVar64;
      if (0 < (int)uVar7) {
        lVar37 = *(long *)(param_1 + 0x10);
        uVar52 = 0;
        psVar43 = (short *)(__s + lVar51 + 0x68);
        do {
          lVar33 = uVar52 * 0x20 + lVar32;
          __s[lVar33 + 0x1e] = '\0';
          *(undefined2 *)(__s + lVar33 + 0x1c) =
               *(undefined2 *)(*(long *)(param_1 + 0x18) + uVar52 * 2);
          __s[lVar33 + 0x1f] = *(byte *)(*(long *)(param_1 + 0x20) + uVar52) & 0x3f;
          if (0 < (int)uVar12) {
            uVar61 = 0;
            psVar71 = psVar43;
            do {
              sVar74 = *(short *)(lVar37 + uVar61 * 2);
              if (sVar74 == -1) break;
              *psVar71 = sVar74;
              uVar57 = *(ushort *)(lVar37 + lVar72 * 2 + uVar61 * 2);
              if (-1 < (short)uVar57) {
                sVar74 = uVar57 + 1;
                goto switchD_0119d0e8_caseD_f;
              }
              sVar74 = 0;
              switch(uVar57 & 0xf) {
              case 0:
                sVar74 = -0x7ffc;
                break;
              case 1:
                sVar74 = -0x7ffe;
                break;
              case 2:
                sVar74 = -0x8000;
                break;
              case 3:
                sVar74 = -0x7ffa;
                break;
              default:
                goto switchD_0119d0e8_caseD_4;
              case 0xf:
                break;
              }
switchD_0119d0e8_caseD_f:
              psVar71[6] = sVar74;
switchD_0119d0e8_caseD_4:
              uVar61 = uVar61 + 1;
              psVar71 = psVar71 + 1;
              __s[lVar33 + 0x1e] = (uchar)uVar61;
            } while (uVar73 != uVar61);
          }
          uVar52 = uVar52 + 1;
          lVar37 = lVar37 + lVar72 * 4;
          psVar43 = psVar43 + 0x10;
        } while (uVar52 != uVar7);
      }
      puVar3 = __s + iVar104 + lVar36;
      if (0 < (int)uVar70) {
        uVar52 = 0;
        iVar49 = 0;
        pcVar42 = pcVar35;
        do {
          if (*pcVar42 == -1) {
            sVar74 = (short)uVar53 + (short)iVar49 * 2;
            lVar72 = ((long)(int)uVar7 + (long)iVar49) * 0x20 + lVar32;
            __s[lVar72 + 0x1e] = '\x02';
            *(short *)(__s + lVar72 + 4) = sVar74;
            *(short *)(__s + lVar72 + 6) = sVar74 + 1;
            iVar49 = iVar49 + 1;
            *(undefined2 *)(__s + lVar72 + 0x1c) =
                 *(undefined2 *)(*(long *)(param_1 + 0x68) + uVar52 * 2);
            __s[lVar72 + 0x1f] = *(byte *)(*(long *)(param_1 + 0x70) + uVar52) & 0x3f | 0x40;
          }
          uVar52 = uVar52 + 1;
          pcVar42 = pcVar42 + 2;
        } while (uVar70 != uVar52);
      }
      lVar72 = *(long *)(param_1 + 0x30);
      if (lVar72 == 0) {
        if (0 < (int)uVar7) {
          lVar56 = lVar59 + iVar104 + (long)iVar113 + lVar51 + lVar56;
          lVar72 = 0;
          iVar49 = 0;
          uVar53 = uVar7;
          do {
            bVar67 = __s[lVar72 * 0x20 + lVar32 + 0x1e];
            puVar45 = __s + lVar72 * 0xc + lVar64;
            puVar45[8] = '\0';
            puVar45[0] = '\0';
            puVar45[1] = '\0';
            puVar45[2] = '\0';
            puVar45[3] = '\0';
            *(int *)(puVar45 + 4) = iVar49;
            uVar39 = (uint)bVar67;
            uVar70 = uVar39 - 2;
            puVar45[9] = (uchar)uVar70;
            if (2 < uVar39) {
              uVar40 = (uint)bVar67;
              if (uVar70 < 0x10) {
LAB_0119d3a4:
                uVar53 = 2;
                iVar58 = iVar49;
LAB_0119d3ac:
                pbVar46 = __s + (long)(iVar58 << 2) + lVar56 + 0x67;
                do {
                  iVar75 = uVar53 - uVar40;
                  pbVar46[-2] = (byte)uVar53 - 1;
                  bVar67 = 4;
                  if (uVar53 == 2) {
                    bVar67 = 5;
                  }
                  pbVar46[-1] = (byte)uVar53;
                  uVar53 = uVar53 + 1;
                  bVar89 = bVar67 | 0x10;
                  if (iVar75 != -1) {
                    bVar89 = bVar67;
                  }
                  pbVar46[-3] = 0;
                  *pbVar46 = bVar89;
                  pbVar46 = pbVar46 + 4;
                } while (uVar53 != uVar40);
              }
              else {
                iVar75 = iVar49 << 2;
                lVar59 = (long)iVar75;
                lVar51 = ((ulong)uVar39 * 4 + 0x3fffffff4 & 0x3fffffffc) + lVar59;
                if ((__s + lVar59 + lVar56 + 100 < __s + lVar51 + lVar56 + 0x68) &&
                   (__s + lVar59 + lVar56 + 0x65 < __s + lVar51 + lVar56 + 0x65)) goto LAB_0119d3a4;
                iVar60 = uVar39 - 1;
                uVar39 = uVar70 & 0xfffffff0;
                uVar53 = uVar39 | 2;
                iVar58 = iVar49 + uVar39;
                uVar34 = 0x908070605040302;
                uVar129 = 0x11100f0e0d0c0b0a;
                uVar13 = uVar39;
                iVar112 = 10;
                iVar113 = 0xb;
                iVar114 = 0xc;
                iVar115 = 0xd;
                iVar104 = 2;
                iVar105 = 3;
                iVar106 = 4;
                iVar107 = 5;
                iVar116 = 0xe;
                iVar117 = 0xf;
                iVar118 = 0x10;
                iVar119 = 0x11;
                iVar108 = 6;
                iVar109 = 7;
                iVar110 = 8;
                iVar111 = 9;
                do {
                  bVar14 = iVar112 == iVar60;
                  bVar18 = iVar113 == iVar60;
                  bVar22 = iVar114 == iVar60;
                  bVar26 = iVar115 == iVar60;
                  bVar15 = iVar116 == iVar60;
                  bVar19 = iVar117 == iVar60;
                  bVar23 = iVar118 == iVar60;
                  bVar27 = iVar119 == iVar60;
                  bVar16 = iVar104 == iVar60;
                  bVar20 = iVar105 == iVar60;
                  bVar24 = iVar106 == iVar60;
                  bVar28 = iVar107 == iVar60;
                  bVar17 = iVar108 == iVar60;
                  bVar21 = iVar109 == iVar60;
                  bVar25 = iVar110 == iVar60;
                  bVar29 = iVar111 == iVar60;
                  uVar120 = (uchar)uVar34;
                  uVar121 = (uchar)((ulong)uVar34 >> 8);
                  uVar122 = (uchar)((ulong)uVar34 >> 0x10);
                  uVar123 = (uchar)((ulong)uVar34 >> 0x18);
                  uVar124 = (uchar)((ulong)uVar34 >> 0x20);
                  uVar125 = (uchar)((ulong)uVar34 >> 0x28);
                  uVar126 = (uchar)((ulong)uVar34 >> 0x30);
                  uVar127 = (uchar)((ulong)uVar34 >> 0x38);
                  uVar128 = (uchar)uVar129;
                  uVar130 = (uchar)((ulong)uVar129 >> 8);
                  uVar131 = (uchar)((ulong)uVar129 >> 0x10);
                  uVar132 = (uchar)((ulong)uVar129 >> 0x18);
                  uVar133 = (uchar)((ulong)uVar129 >> 0x20);
                  uVar134 = (uchar)((ulong)uVar129 >> 0x28);
                  uVar135 = (uchar)((ulong)uVar129 >> 0x30);
                  uVar136 = (uchar)((ulong)uVar129 >> 0x38);
                  bVar67 = -(iVar104 == 2) & 1U ^ 4;
                  bVar89 = -(iVar105 == 2) & 1U ^ 4;
                  bVar90 = -(iVar106 == 2) & 1U ^ 4;
                  bVar91 = -(iVar107 == 2) & 1U ^ 4;
                  bVar92 = -(iVar108 == 2) & 1U ^ 4;
                  bVar93 = -(iVar109 == 2) & 1U ^ 4;
                  bVar94 = -(iVar110 == 2) & 1U ^ 4;
                  bVar95 = -(iVar111 == 2) & 1U ^ 4;
                  bVar96 = -(iVar112 == 2) & 1U ^ 4;
                  bVar97 = -(iVar113 == 2) & 1U ^ 4;
                  bVar98 = -(iVar114 == 2) & 1U ^ 4;
                  bVar99 = -(iVar115 == 2) & 1U ^ 4;
                  bVar100 = -(iVar116 == 2) & 1U ^ 4;
                  bVar101 = -(iVar117 == 2) & 1U ^ 4;
                  bVar102 = -(iVar118 == 2) & 1U ^ 4;
                  bVar103 = -(iVar119 == 2) & 1U ^ 4;
                  puVar45 = puVar3 + iVar75;
                  iVar104 = iVar104 + 0x10;
                  iVar105 = iVar105 + 0x10;
                  iVar106 = iVar106 + 0x10;
                  iVar107 = iVar107 + 0x10;
                  iVar108 = iVar108 + 0x10;
                  iVar109 = iVar109 + 0x10;
                  iVar110 = iVar110 + 0x10;
                  iVar111 = iVar111 + 0x10;
                  iVar112 = iVar112 + 0x10;
                  iVar113 = iVar113 + 0x10;
                  iVar114 = iVar114 + 0x10;
                  iVar115 = iVar115 + 0x10;
                  iVar116 = iVar116 + 0x10;
                  iVar117 = iVar117 + 0x10;
                  iVar118 = iVar118 + 0x10;
                  iVar119 = iVar119 + 0x10;
                  uVar13 = uVar13 - 0x10;
                  uVar34 = CONCAT17(uVar127 + '\x10',
                                    CONCAT16(uVar126 + '\x10',
                                             CONCAT15(uVar125 + '\x10',
                                                      CONCAT14(uVar124 + '\x10',
                                                               CONCAT13(uVar123 + '\x10',
                                                                        CONCAT12(uVar122 + '\x10',
                                                                                 CONCAT11(uVar121 + 
                                                  '\x10',uVar120 + '\x10')))))));
                  uVar129 = CONCAT17(uVar136 + '\x10',
                                     CONCAT16(uVar135 + '\x10',
                                              CONCAT15(uVar134 + '\x10',
                                                       CONCAT14(uVar133 + '\x10',
                                                                CONCAT13(uVar132 + '\x10',
                                                                         CONCAT12(uVar131 + '\x10',
                                                                                  CONCAT11(uVar130 +
                                                                                           '\x10',
                                                  uVar128 + '\x10')))))));
                  iVar75 = iVar75 + 0x40;
                  *puVar45 = '\0';
                  puVar45[1] = uVar120 + 0xff;
                  puVar45[2] = uVar120;
                  puVar45[3] = bVar67 ^ (bVar67 ^ (bVar67 | 0x10)) & -bVar16;
                  puVar45[4] = '\0';
                  puVar45[5] = uVar121 + 0xff;
                  puVar45[6] = uVar121;
                  puVar45[7] = bVar89 ^ (bVar89 ^ (bVar89 | 0x10)) & -bVar20;
                  puVar45[8] = '\0';
                  puVar45[9] = uVar122 + 0xff;
                  puVar45[10] = uVar122;
                  puVar45[0xb] = bVar90 ^ (bVar90 ^ (bVar90 | 0x10)) & -bVar24;
                  puVar45[0xc] = '\0';
                  puVar45[0xd] = uVar123 + 0xff;
                  puVar45[0xe] = uVar123;
                  puVar45[0xf] = bVar91 ^ (bVar91 ^ (bVar91 | 0x10)) & -bVar28;
                  puVar45[0x10] = '\0';
                  puVar45[0x11] = uVar124 + 0xff;
                  puVar45[0x12] = uVar124;
                  puVar45[0x13] = bVar92 ^ (bVar92 ^ (bVar92 | 0x10)) & -bVar17;
                  puVar45[0x14] = '\0';
                  puVar45[0x15] = uVar125 + 0xff;
                  puVar45[0x16] = uVar125;
                  puVar45[0x17] = bVar93 ^ (bVar93 ^ (bVar93 | 0x10)) & -bVar21;
                  puVar45[0x18] = '\0';
                  puVar45[0x19] = uVar126 + 0xff;
                  puVar45[0x1a] = uVar126;
                  puVar45[0x1b] = bVar94 ^ (bVar94 ^ (bVar94 | 0x10)) & -bVar25;
                  puVar45[0x1c] = '\0';
                  puVar45[0x1d] = uVar127 + 0xff;
                  puVar45[0x1e] = uVar127;
                  puVar45[0x1f] = bVar95 ^ (bVar95 ^ (bVar95 | 0x10)) & -bVar29;
                  puVar45[0x20] = '\0';
                  puVar45[0x21] = uVar128 + 0xff;
                  puVar45[0x22] = uVar128;
                  puVar45[0x23] = bVar96 ^ (bVar96 ^ (bVar96 | 0x10)) & -bVar14;
                  puVar45[0x24] = '\0';
                  puVar45[0x25] = uVar130 + 0xff;
                  puVar45[0x26] = uVar130;
                  puVar45[0x27] = bVar97 ^ (bVar97 ^ (bVar97 | 0x10)) & -bVar18;
                  puVar45[0x28] = '\0';
                  puVar45[0x29] = uVar131 + 0xff;
                  puVar45[0x2a] = uVar131;
                  puVar45[0x2b] = bVar98 ^ (bVar98 ^ (bVar98 | 0x10)) & -bVar22;
                  puVar45[0x2c] = '\0';
                  puVar45[0x2d] = uVar132 + 0xff;
                  puVar45[0x2e] = uVar132;
                  puVar45[0x2f] = bVar99 ^ (bVar99 ^ (bVar99 | 0x10)) & -bVar26;
                  puVar45[0x30] = '\0';
                  puVar45[0x31] = uVar133 + 0xff;
                  puVar45[0x32] = uVar133;
                  puVar45[0x33] = bVar100 ^ (bVar100 ^ (bVar100 | 0x10)) & -bVar15;
                  puVar45[0x34] = '\0';
                  puVar45[0x35] = uVar134 + 0xff;
                  puVar45[0x36] = uVar134;
                  puVar45[0x37] = bVar101 ^ (bVar101 ^ (bVar101 | 0x10)) & -bVar19;
                  puVar45[0x38] = '\0';
                  puVar45[0x39] = uVar135 + 0xff;
                  puVar45[0x3a] = uVar135;
                  puVar45[0x3b] = bVar102 ^ (bVar102 ^ (bVar102 | 0x10)) & -bVar23;
                  puVar45[0x3c] = '\0';
                  puVar45[0x3d] = uVar136 + 0xff;
                  puVar45[0x3e] = uVar136;
                  puVar45[0x3f] = bVar103 ^ (bVar103 ^ (bVar103 | 0x10)) & -bVar27;
                } while (uVar13 != 0);
                if (uVar70 != uVar39) goto LAB_0119d3ac;
              }
              uVar53 = *(uint *)(param_1 + 0x28);
              iVar49 = iVar49 + uVar40 + -2;
            }
            lVar72 = lVar72 + 1;
          } while (lVar72 < (int)uVar53);
        }
      }
      else {
        if (0 < (int)uVar7) {
          uVar70 = 0;
          uVar53 = 3;
          pbVar46 = __s + lVar51 + 0x82;
          puVar45 = __s + lVar59 + lVar51 + lVar56 + 0x6d;
          lVar51 = 1;
          uVar39 = uVar7;
          while( true ) {
            bVar67 = *pbVar46;
            iVar49 = *(int *)(lVar72 + (ulong)(uVar53 - 3) * 4);
            lVar56 = (long)*(int *)(lVar72 + (ulong)(uVar53 - 2) * 4) - (ulong)bVar67;
            *(uint *)(puVar45 + -9) = uVar70 & 0xffff;
            puVar45[-1] = (uchar)lVar56;
            *(undefined4 *)(puVar45 + -5) = *(undefined4 *)(lVar72 + (ulong)(uVar53 - 1) * 4);
            *puVar45 = (uchar)*(undefined4 *)(lVar72 + (ulong)uVar53 * 4);
            if ((int)lVar56 != 0) {
              memcpy(__s + (ulong)((uVar70 & 0xffff) * 3) * 4 + lVar36,
                     (void *)(*(long *)(param_1 + 0x38) +
                             (long)(int)((iVar49 + (uint)bVar67) * 3) * 4),lVar56 * 0xc);
              uVar39 = *(uint *)(param_1 + 0x28);
              uVar70 = uVar70 + (int)lVar56;
            }
            if ((int)uVar39 <= lVar51) break;
            lVar72 = *(long *)(param_1 + 0x30);
            pbVar46 = pbVar46 + 0x20;
            lVar51 = lVar51 + 1;
            uVar53 = uVar53 + 4;
            puVar45 = puVar45 + 0xc;
          }
        }
        memcpy(puVar3,*(void **)(param_1 + 0x48),(long)*(int *)(param_1 + 0x50) << 2);
      }
      puVar3 = puVar3 + iVar55 * 4;
      if (param_1[200] != (dtNavMeshCreateParams)0x0) {
        uVar53 = *(uint *)(param_1 + 0x28);
        lVar51 = *(long *)param_1;
        lVar72 = *(long *)(param_1 + 0x10);
        fVar79 = *(float *)(param_1 + 0xc0);
        fVar77 = *(float *)(param_1 + 0xc4);
        pvVar38 = (void *)dtAlloc(uVar53 << 4,1);
        if (0 < (int)uVar53) {
          iVar49 = 0;
          uVar52 = 0;
          do {
            puVar2 = (ushort *)((long)pvVar38 + uVar52 * 0x10);
            uVar70 = uVar12 * 2 * (int)uVar52;
            *(int *)(puVar2 + 6) = (int)uVar52;
            uVar61 = -(ulong)(uVar70 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar70 << 1;
            uVar41 = *(ushort *)(lVar51 + (ulong)*(ushort *)(lVar72 + uVar61) * 6);
            puVar2[3] = uVar41;
            *puVar2 = uVar41;
            uVar57 = *(ushort *)(lVar51 + (ulong)*(ushort *)(lVar72 + uVar61) * 6 + 2);
            puVar65 = puVar2 + 4;
            *puVar65 = uVar57;
            puVar68 = puVar2 + 1;
            *puVar68 = uVar57;
            uVar76 = *(ushort *)(lVar51 + (ulong)*(ushort *)(lVar72 + uVar61) * 6 + 4);
            puVar2[5] = uVar76;
            puVar2[2] = uVar76;
            uVar48 = uVar57;
            if (1 < (int)uVar12) {
              puVar47 = (ushort *)(lVar72 + 2 + (long)iVar49 * 2);
              lVar56 = uVar73 - 1;
              uVar54 = uVar41;
              uVar44 = uVar76;
              do {
                uVar9 = *puVar47;
                if ((ulong)uVar9 == 0xffff) break;
                uVar10 = *(ushort *)(lVar51 + (ulong)uVar9 * 6);
                uVar11 = *(ushort *)(lVar51 + (ulong)((uint)uVar9 * 3 + 1) * 2);
                uVar9 = *(ushort *)(lVar51 + (ulong)((uint)uVar9 * 3 + 2) * 2);
                if (uVar10 < uVar41) {
                  *puVar2 = uVar10;
                  uVar41 = uVar10;
                }
                if (uVar11 < uVar48) {
                  *puVar68 = uVar11;
                  uVar48 = uVar11;
                }
                if (uVar9 < uVar76) {
                  puVar2[2] = uVar9;
                  uVar76 = uVar9;
                }
                if (uVar54 < uVar10) {
                  puVar2[3] = uVar10;
                  uVar54 = uVar10;
                }
                if (uVar57 < uVar11) {
                  *puVar65 = uVar11;
                  uVar57 = uVar11;
                }
                if (uVar44 < uVar9) {
                  puVar2[5] = uVar9;
                  uVar44 = uVar9;
                }
                lVar56 = lVar56 + -1;
                puVar47 = puVar47 + 1;
              } while (lVar56 != 0);
            }
            uVar52 = uVar52 + 1;
            iVar49 = iVar49 + uVar12 * 2;
            *puVar68 = (ushort)(int)((fVar77 * (float)uVar48) / fVar79);
            *puVar65 = (ushort)(int)((fVar77 * (float)uVar57) / fVar79);
          } while (uVar52 != uVar53);
        }
        local_7c = 0;
        FUN_0119e03c(pvVar38,0,uVar53,&local_7c,puVar3);
        dtFree(pvVar38);
      }
      iVar49 = *(int *)(param_1 + 0x88);
      if (0 < iVar49) {
        uVar52 = 0;
        lVar72 = 0;
        iVar75 = 0;
        puVar45 = (uchar *)(pcVar35 + 1);
        do {
          if (puVar45[-1] == 0xff) {
            puVar69 = puVar3 + (long)iVar75 * 0x24 + (long)iVar50;
            *(short *)(puVar69 + 0x1c) = (short)iVar75 + (short)uVar7;
            puVar6 = (undefined4 *)(*(long *)(param_1 + 0x58) + (uVar52 & 0xfffffffe) * 4);
            *(undefined4 *)puVar69 = *puVar6;
            *(undefined4 *)(puVar69 + 4) = puVar6[1];
            *(undefined4 *)(puVar69 + 8) = puVar6[2];
            *(undefined4 *)(puVar69 + 0xc) = puVar6[3];
            *(undefined4 *)(puVar69 + 0x10) = puVar6[4];
            *(undefined4 *)(puVar69 + 0x14) = puVar6[5];
            *(undefined4 *)(puVar69 + 0x18) =
                 *(undefined4 *)(*(long *)(param_1 + 0x60) + lVar72 * 4);
            puVar69[0x1e] = *(char *)(*(long *)(param_1 + 0x78) + lVar72) != '\0';
            puVar69[0x1f] = *puVar45;
            if (*(long *)(param_1 + 0x80) != 0) {
              *(undefined4 *)(puVar3 + (long)iVar75 * 0x24 + (long)iVar50 + 0x20) =
                   *(undefined4 *)(*(long *)(param_1 + 0x80) + lVar72 * 4);
            }
            iVar75 = iVar75 + 1;
          }
          lVar72 = lVar72 + 1;
          uVar52 = uVar52 + 6;
          puVar45 = puVar45 + 2;
        } while (lVar72 < iVar49);
      }
      dtFree(pcVar35);
      uVar34 = 1;
      *param_2 = __s;
      *param_3 = iVar4;
      goto LAB_0119c87c;
    }
    dtFree(pcVar35);
  }
LAB_0119c878:
  uVar34 = 0;
LAB_0119c87c:
  if (*(long *)(lVar30 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar34);
  }
  return;
}

