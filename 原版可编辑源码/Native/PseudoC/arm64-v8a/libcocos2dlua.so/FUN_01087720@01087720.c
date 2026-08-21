
/* WARNING: Removing unreachable block (ram,0x01088004) */

int FUN_01087720(long param_1,byte *param_2,byte *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  byte *pbVar7;
  long lVar8;
  byte *pbVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 *puVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  
  iVar6 = 0;
  lVar1 = param_1 + 0x20;
  *(byte **)(param_1 + 8) = param_2;
  *(byte **)(param_1 + 0x10) = param_3;
  *(byte **)(param_1 + 0x18) = param_2;
  *(long *)(param_1 + 0x328) = lVar1;
  do {
    if (param_3 <= param_2) {
      return iVar6;
    }
    bVar4 = *param_2;
    uVar14 = (uint)bVar4;
    if ((0x1a < bVar4) && (bVar4 != 0x1f)) {
      puVar12 = *(undefined8 **)(param_1 + 0x328);
      if (0x2f8 < (long)puVar12 - lVar1) {
        iVar11 = 1;
        goto LAB_01088038;
      }
      *(undefined8 **)(param_1 + 0x328) = puVar12 + 1;
      *puVar12 = param_2;
      if (uVar14 == 0x1c) {
        param_2 = param_2 + 2;
      }
      else if (uVar14 == 0x1d) {
        param_2 = param_2 + 4;
      }
      else if (uVar14 == 0x1e) {
        do {
          param_2 = param_2 + 1;
          if (param_3 <= param_2) goto LAB_01087b78;
        } while (((*param_2 & 0xf0) != 0xf0) && ((*param_2 & 0xf) != 0xf));
      }
      else if (0xf6 < uVar14) {
        param_2 = param_2 + 1;
      }
      goto LAB_01087ff4;
    }
    puVar12 = *(undefined8 **)(param_1 + 0x328);
    *puVar12 = param_2;
    if (bVar4 == 0xc) {
      param_2 = param_2 + 1;
      if (param_3 <= param_2) {
        iVar11 = 2;
        goto LAB_01088038;
      }
      uVar14 = *param_2 | 0x100;
    }
    uVar14 = *(uint *)(param_1 + 0x330) | uVar14;
    iVar11 = 4;
    puVar17 = &UNK_01729140;
    switch(uVar14) {
    case 0x1000:
      break;
    case 0x1001:
      puVar17 = &UNK_01729160;
      iVar11 = 4;
      break;
    case 0x1002:
      puVar17 = &UNK_017291a0;
      iVar11 = 4;
      break;
    case 0x1003:
      puVar17 = &UNK_017291c0;
      iVar11 = 4;
      break;
    case 0x1004:
      puVar17 = &UNK_017291e0;
      iVar11 = 4;
      break;
    case 0x1005:
      puVar17 = &UNK_01729300;
      iVar11 = 7;
      break;
    case 0x1006:
    case 0x1007:
    case 0x1008:
    case 0x1009:
    case 0x100a:
    case 0x100b:
    case 0x100c:
    case 0x100e:
    case 0x1013:
    case 0x1014:
    case 0x1015:
    case 0x1016:
    case 0x1017:
    case 0x1018:
    case 0x1019:
    case 0x101a:
    case 0x101b:
    case 0x101c:
    case 0x101d:
    case 0x101e:
    case 0x101f:
    case 0x1020:
    case 0x1021:
    case 0x1022:
    case 0x1023:
    case 0x1024:
    case 0x1025:
    case 0x1026:
    case 0x1027:
    case 0x1028:
    case 0x1029:
    case 0x102a:
    case 0x102b:
    case 0x102c:
    case 0x102d:
    case 0x102e:
    case 0x102f:
    case 0x1030:
    case 0x1031:
    case 0x1032:
    case 0x1033:
    case 0x1034:
    case 0x1035:
    case 0x1036:
    case 0x1037:
    case 0x1038:
    case 0x1039:
    case 0x103a:
    case 0x103b:
    case 0x103c:
    case 0x103d:
    case 0x103e:
    case 0x103f:
    case 0x1040:
    case 0x1041:
    case 0x1042:
    case 0x1043:
    case 0x1044:
    case 0x1045:
    case 0x1046:
    case 0x1047:
    case 0x1048:
    case 0x1049:
    case 0x104a:
    case 0x104b:
    case 0x104c:
    case 0x104d:
    case 0x104e:
    case 0x104f:
    case 0x1050:
    case 0x1051:
    case 0x1052:
    case 0x1053:
    case 0x1054:
    case 0x1055:
    case 0x1056:
    case 0x1057:
    case 0x1058:
    case 0x1059:
    case 0x105a:
    case 0x105b:
    case 0x105c:
    case 0x105d:
    case 0x105e:
    case 0x105f:
    case 0x1060:
    case 0x1061:
    case 0x1062:
    case 0x1063:
    case 0x1064:
    case 0x1065:
    case 0x1066:
    case 0x1067:
    case 0x1068:
    case 0x1069:
    case 0x106a:
    case 0x106b:
    case 0x106c:
    case 0x106d:
    case 0x106e:
    case 0x106f:
    case 0x1070:
    case 0x1071:
    case 0x1072:
    case 0x1073:
    case 0x1074:
    case 0x1075:
    case 0x1076:
    case 0x1077:
    case 0x1078:
    case 0x1079:
    case 0x107a:
    case 0x107b:
    case 0x107c:
    case 0x107d:
    case 0x107e:
    case 0x107f:
    case 0x1080:
    case 0x1081:
    case 0x1082:
    case 0x1083:
    case 0x1084:
    case 0x1085:
    case 0x1086:
    case 0x1087:
    case 0x1088:
    case 0x1089:
    case 0x108a:
    case 0x108b:
    case 0x108c:
    case 0x108d:
    case 0x108e:
    case 0x108f:
    case 0x1090:
    case 0x1091:
    case 0x1092:
    case 0x1093:
    case 0x1094:
    case 0x1095:
    case 0x1096:
    case 0x1097:
    case 0x1098:
    case 0x1099:
    case 0x109a:
    case 0x109b:
    case 0x109c:
    case 0x109d:
    case 0x109e:
    case 0x109f:
    case 0x10a0:
    case 0x10a1:
    case 0x10a2:
    case 0x10a3:
    case 0x10a4:
    case 0x10a5:
    case 0x10a6:
    case 0x10a7:
    case 0x10a8:
    case 0x10a9:
    case 0x10aa:
    case 0x10ab:
    case 0x10ac:
    case 0x10ad:
    case 0x10ae:
    case 0x10af:
    case 0x10b0:
    case 0x10b1:
    case 0x10b2:
    case 0x10b3:
    case 0x10b4:
    case 0x10b5:
    case 0x10b6:
    case 0x10b7:
    case 0x10b8:
    case 0x10b9:
    case 0x10ba:
    case 0x10bb:
    case 0x10bc:
    case 0x10bd:
    case 0x10be:
    case 0x10bf:
    case 0x10c0:
    case 0x10c1:
    case 0x10c2:
    case 0x10c3:
    case 0x10c4:
    case 0x10c5:
    case 0x10c6:
    case 0x10c7:
    case 0x10c8:
    case 0x10c9:
    case 0x10ca:
    case 0x10cb:
    case 0x10cc:
    case 0x10cd:
    case 0x10ce:
    case 0x10cf:
    case 0x10d0:
    case 0x10d1:
    case 0x10d2:
    case 0x10d3:
    case 0x10d4:
    case 0x10d5:
    case 0x10d6:
    case 0x10d7:
    case 0x10d8:
    case 0x10d9:
    case 0x10da:
    case 0x10db:
    case 0x10dc:
    case 0x10dd:
    case 0x10de:
    case 0x10df:
    case 0x10e0:
    case 0x10e1:
    case 0x10e2:
    case 0x10e3:
    case 0x10e4:
    case 0x10e5:
    case 0x10e6:
    case 0x10e7:
    case 0x10e8:
    case 0x10e9:
    case 0x10ea:
    case 0x10eb:
    case 0x10ec:
    case 0x10ed:
    case 0x10ee:
    case 0x10ef:
    case 0x10f0:
    case 0x10f1:
    case 0x10f2:
    case 0x10f3:
    case 0x10f4:
    case 0x10f5:
    case 0x10f6:
    case 0x10f7:
    case 0x10f8:
    case 0x10f9:
    case 0x10fa:
    case 0x10fb:
    case 0x10fc:
    case 0x10fd:
    case 0x10fe:
    case 0x10ff:
    case 0x1109:
    case 0x110a:
    case 0x110b:
    case 0x110c:
    case 0x110d:
    case 0x110e:
    case 0x110f:
    case 0x1110:
    case 0x1111:
    case 0x1112:
    case 0x1113:
    case 0x1116:
    case 0x1117:
    case 0x1118:
    case 0x1119:
    case 0x111a:
    case 0x111b:
    case 0x111c:
    case 0x111d:
      goto switchD_010877fc_caseD_1006;
    case 0x100d:
      puVar17 = &UNK_017292e0;
      goto LAB_01087ab8;
    case 0x100f:
      puVar17 = &UNK_01729340;
      goto LAB_01087ab8;
    case 0x1010:
      puVar17 = &UNK_01729360;
      goto LAB_01087ab8;
    case 0x1011:
      puVar17 = &UNK_01729380;
      goto LAB_01087ab8;
    case 0x1012:
      puVar17 = &UNK_017293a0;
      iVar11 = 7;
      break;
    case 0x1100:
      puVar17 = &UNK_01729180;
      iVar11 = 4;
      break;
    case 0x1101:
      puVar17 = &UNK_01729200;
      iVar11 = 5;
      break;
    case 0x1102:
      puVar17 = &UNK_01729220;
      iVar11 = 2;
      break;
    case 0x1103:
      puVar17 = &UNK_01729240;
      iVar11 = 2;
      break;
    case 0x1104:
      puVar17 = &UNK_01729260;
      iVar11 = 2;
      break;
    case 0x1105:
      puVar17 = &UNK_01729280;
      goto LAB_01087ab8;
    case 0x1106:
      puVar17 = &UNK_017292a0;
      goto LAB_01087ab8;
    case 0x1107:
      puVar17 = &UNK_017292c0;
      iVar11 = 7;
      break;
    case 0x1108:
      puVar17 = &UNK_01729320;
      goto LAB_01087ab8;
    case 0x1114:
      puVar17 = &UNK_017293c0;
      goto LAB_01087ab8;
    case 0x1115:
      puVar17 = &UNK_017293e0;
      iVar11 = 4;
      break;
    case 0x111e:
      puVar17 = &UNK_01729400;
      iVar11 = 7;
      break;
    case 0x111f:
      puVar17 = &UNK_01729420;
      goto LAB_01087ab8;
    case 0x1120:
      puVar17 = &UNK_01729440;
      goto LAB_01087ab8;
    case 0x1121:
      puVar17 = &UNK_01729460;
      goto LAB_01087ab8;
    case 0x1122:
      puVar17 = &UNK_01729480;
      goto LAB_01087ab8;
    case 0x1123:
      puVar17 = &UNK_017294a0;
      goto LAB_01087ab8;
    case 0x1124:
      puVar17 = &UNK_017294c0;
      goto LAB_01087ab8;
    case 0x1125:
      puVar17 = &UNK_017294e0;
LAB_01087ab8:
      iVar11 = 1;
      break;
    case 0x1126:
      puVar17 = &UNK_01729500;
      iVar11 = 4;
      break;
    default:
      switch(uVar14) {
      case 0x2109:
        puVar17 = &UNK_017295a0;
        iVar11 = 3;
        break;
      case 0x210a:
        puVar17 = &UNK_017295c0;
        goto LAB_01087ab8;
      case 0x210b:
        puVar17 = &UNK_017295e0;
        goto LAB_01087ab8;
      case 0x210c:
        puVar17 = &UNK_01729640;
        iVar11 = 6;
        break;
      case 0x210d:
        puVar17 = &UNK_01729660;
        iVar11 = 6;
        break;
      case 0x210e:
        puVar17 = &UNK_01729680;
        iVar11 = 5;
        break;
      case 0x210f:
        puVar17 = &UNK_017296a0;
        iVar11 = 2;
        break;
      case 0x2110:
        puVar17 = &UNK_017296c0;
        goto LAB_01087ab8;
      case 0x2111:
        puVar17 = &UNK_017296e0;
        goto LAB_01087ab8;
      case 0x2112:
        puVar17 = &UNK_01729700;
        iVar11 = 2;
        break;
      case 0x2113:
        puVar17 = &UNK_01729720;
        goto LAB_01087ab8;
      default:
        switch(uVar14) {
        case 0x2006:
          puVar17 = &UNK_01729520;
          iVar11 = 6;
          goto switchD_010877fc_caseD_1000;
        case 0x2007:
          puVar17 = &UNK_01729540;
          iVar11 = 6;
          goto switchD_010877fc_caseD_1000;
        case 0x2008:
          puVar17 = &UNK_01729560;
          iVar11 = 6;
          goto switchD_010877fc_caseD_1000;
        case 0x2009:
          puVar17 = &UNK_01729580;
          iVar11 = 6;
          goto switchD_010877fc_caseD_1000;
        case 0x200a:
          puVar17 = &UNK_01729600;
          break;
        case 0x200b:
          puVar17 = &UNK_01729620;
          break;
        default:
          goto switchD_010877fc_caseD_1006;
        case 0x2013:
          puVar17 = &UNK_01729740;
          break;
        case 0x2014:
          puVar17 = &UNK_01729760;
          break;
        case 0x2015:
          puVar17 = &UNK_01729780;
        }
        goto LAB_01087ab8;
      }
    }
switchD_010877fc_caseD_1000:
    uVar14 = (uint)((ulong)((long)puVar12 - lVar1) >> 3);
    if ((uVar14 == 0) && (iVar11 != 6)) {
      iVar11 = 3;
LAB_01088038:
      if (2 < iVar11 - 1U) {
        return iVar6;
      }
      return 6;
    }
    if (iVar11 - 1U < 6) {
      puVar18 = (ulong *)(*(long *)(param_1 + 0x338) + (ulong)*(uint *)(puVar17 + 8));
      switch(iVar11) {
      default:
        pbVar7 = *(byte **)(param_1 + 0x20);
        pbVar9 = *(byte **)(param_1 + 0x28);
        bVar4 = *pbVar7;
        if (bVar4 == 0x1e) {
          lVar8 = FUN_01089320(pbVar7,pbVar9,0,0);
          uVar13 = lVar8 >> 0x10;
        }
        else if (bVar4 == 0x1d) {
          if (pbVar9 < pbVar7 + 5) goto LAB_01087e94;
          uVar13 = (ulong)pbVar7[1] << 0x18 | (ulong)pbVar7[2] << 0x10 | (ulong)pbVar7[3] << 8 |
                   (ulong)pbVar7[4];
        }
        else if (bVar4 == 0x1c) {
          if (pbVar9 < pbVar7 + 3) goto LAB_01087e94;
          uVar13 = (long)CONCAT11(pbVar7[1],pbVar7[2]);
        }
        else if (bVar4 < 0xf7) {
          uVar13 = (ulong)bVar4 - 0x8b;
        }
        else if (bVar4 < 0xfb) {
          if (pbVar9 < pbVar7 + 2) {
LAB_01087e94:
            uVar13 = 0;
          }
          else {
            uVar13 = (long)(int)(((uint)bVar4 * 0x100 - 0xf700 | (uint)pbVar7[1]) + 0x6c);
          }
        }
        else {
          if (pbVar9 < pbVar7 + 2) goto LAB_01087e94;
          uVar14 = 0xfb - bVar4;
          uVar13 = ((-(ulong)(uVar14 >> 0x1f) & 0xffffff0000000000 | (ulong)uVar14 << 8) - 0x6c) -
                   (ulong)pbVar7[1];
        }
        break;
      case 2:
        pbVar7 = *(byte **)(param_1 + 0x20);
        pbVar9 = *(byte **)(param_1 + 0x28);
        bVar4 = *pbVar7;
        if (bVar4 == 0x1e) {
          uVar10 = 0;
LAB_01087bb4:
          uVar13 = FUN_01089320(pbVar7,pbVar9,uVar10,0);
        }
        else {
          if (bVar4 == 0x1d) {
            if (pbVar9 < pbVar7 + 5) goto LAB_01087f4c;
            uVar16 = (ulong)pbVar7[1] << 0x18 | (ulong)pbVar7[2] << 0x10 | (ulong)pbVar7[3] << 8 |
                     (ulong)pbVar7[4];
            if (0x7fff < uVar16) goto LAB_01087f98;
          }
          else {
            if (bVar4 != 0x1c) {
              if (bVar4 < 0xf7) {
                uVar16 = (ulong)bVar4 - 0x8b;
                goto LAB_01087f50;
              }
              if (0xfa < bVar4) {
                if (pbVar9 < pbVar7 + 2) goto LAB_01087f4c;
                uVar14 = 0xfb - bVar4;
                uVar16 = ((-(ulong)(uVar14 >> 0x1f) & 0xffffff0000000000 | (ulong)uVar14 << 8) -
                         0x6c) - (ulong)pbVar7[1];
                if (0x7fff < (long)uVar16) goto LAB_01087f98;
                goto LAB_01087f50;
              }
              if (pbVar9 < pbVar7 + 2) {
LAB_01087f4c:
                uVar16 = 0;
                goto LAB_01087f50;
              }
              uVar16 = (ulong)(int)(((uint)bVar4 * 0x100 - 0xf700 | (uint)pbVar7[1]) + 0x6c);
              if ((long)uVar16 < 0x8000) goto LAB_01087f50;
LAB_01087f98:
              uVar13 = 0x7fffffff;
              break;
            }
            if (pbVar9 < pbVar7 + 3) goto LAB_01087f4c;
            uVar16 = (ulong)CONCAT11(pbVar7[1],pbVar7[2]);
          }
LAB_01087f50:
          uVar13 = 0xffffffff80000001;
          if (-0x8000 < (long)uVar16) {
            uVar13 = uVar16 << 0x10;
          }
        }
        break;
      case 3:
        pbVar7 = *(byte **)(param_1 + 0x20);
        pbVar9 = *(byte **)(param_1 + 0x28);
        bVar4 = *pbVar7;
        if (bVar4 == 0x1e) {
          uVar10 = 3;
          goto LAB_01087bb4;
        }
        if (bVar4 == 0x1d) {
          if (pbVar9 < pbVar7 + 5) goto LAB_01087e70;
          uVar16 = (ulong)pbVar7[1] << 0x18 | (ulong)pbVar7[2] << 0x10 | (ulong)pbVar7[3] << 8 |
                   (ulong)pbVar7[4];
LAB_01087f88:
          lVar8 = uVar16 * 1000;
          if (0x7fff < lVar8) goto LAB_01087f98;
        }
        else {
          if (bVar4 == 0x1c) {
            if (pbVar9 < pbVar7 + 3) goto LAB_01087e70;
            uVar16 = (ulong)CONCAT11(pbVar7[1],pbVar7[2]);
            goto LAB_01087f88;
          }
          if (bVar4 < 0xf7) {
            uVar16 = (ulong)bVar4 - 0x8b;
            goto LAB_01087f88;
          }
          if (bVar4 < 0xfb) {
            if (pbVar7 + 2 <= pbVar9) {
              uVar16 = (ulong)(int)(((uint)bVar4 * 0x100 - 0xf700 | (uint)pbVar7[1]) + 0x6c);
              goto LAB_01087f88;
            }
          }
          else if (pbVar7 + 2 <= pbVar9) {
            uVar14 = 0xfb - bVar4;
            uVar16 = ((-(ulong)(uVar14 >> 0x1f) & 0xffffff0000000000 | (ulong)uVar14 << 8) - 0x6c) -
                     (ulong)pbVar7[1];
            goto LAB_01087f88;
          }
LAB_01087e70:
          lVar8 = 0;
          uVar16 = 0;
        }
        uVar13 = 0xffffffff80000001;
        if (-0x8000 < lVar8) {
          uVar13 = uVar16 * 0x3e80000;
        }
        break;
      case 6:
        uVar3 = *(uint *)(puVar17 + 0x18);
        uVar2 = uVar3;
        if (uVar14 <= uVar3) {
          uVar2 = uVar14;
        }
        *(char *)(*(long *)(param_1 + 0x338) + (ulong)*(uint *)(puVar17 + 0x1c)) = (char)uVar2;
        if (uVar2 != 0) {
          uVar14 = ~uVar14;
          if (uVar14 < ~uVar3) {
            uVar14 = ~uVar3;
          }
          uVar16 = 0;
          iVar11 = uVar14 + 1;
          puVar19 = (ulong *)(param_1 + 0x28);
          do {
            pbVar7 = (byte *)puVar19[-1];
            pbVar9 = (byte *)*puVar19;
            bVar4 = *pbVar7;
            uVar14 = (uint)bVar4;
            if (uVar14 == 0x1e) {
              lVar8 = FUN_01089320(pbVar7,pbVar9,0,0);
              uVar13 = lVar8 >> 0x10;
            }
            else if (uVar14 == 0x1d) {
              if (pbVar9 < pbVar7 + 5) goto LAB_01087cac;
              uVar13 = (ulong)pbVar7[1] << 0x18 | (ulong)pbVar7[2] << 0x10 | (ulong)pbVar7[3] << 8 |
                       (ulong)pbVar7[4];
            }
            else if (uVar14 == 0x1c) {
              if (pbVar9 < pbVar7 + 3) goto LAB_01087cac;
              uVar13 = (ulong)CONCAT11(pbVar7[1],pbVar7[2]);
            }
            else if (uVar14 < 0xf7) {
              uVar13 = (ulong)bVar4 - 0x8b;
            }
            else if (uVar14 < 0xfb) {
              if (pbVar9 < pbVar7 + 2) {
LAB_01087cac:
                uVar13 = 0;
              }
              else {
                uVar13 = (ulong)(int)(((uint)bVar4 * 0x100 - 0xf700 | (uint)pbVar7[1]) + 0x6c);
              }
            }
            else {
              if (pbVar9 < pbVar7 + 2) goto LAB_01087cac;
              uVar13 = ((-(ulong)(0xfb - uVar14 >> 0x1f) & 0xffffff0000000000 |
                        (ulong)(0xfb - uVar14) << 8) - 0x6c) - (ulong)pbVar7[1];
            }
            bVar4 = puVar17[0xc];
            uVar15 = (ulong)bVar4;
            uVar16 = uVar13 + uVar16;
            if (bVar4 == 4) {
              *(int *)puVar18 = (int)uVar16;
              uVar15 = 4;
            }
            else if (bVar4 == 2) {
              *(short *)puVar18 = (short)uVar16;
              uVar15 = 2;
            }
            else if (bVar4 == 1) {
              *(char *)puVar18 = (char)uVar16;
              uVar15 = (ulong)(byte)puVar17[0xc];
            }
            else {
              *puVar18 = uVar16;
            }
            puVar18 = (ulong *)((long)puVar18 + uVar15);
            iVar11 = iVar11 + 1;
            puVar19 = puVar19 + 1;
          } while (iVar11 != 0);
        }
        goto switchD_010877fc_caseD_1006;
      }
      cVar5 = puVar17[0xc];
      if (cVar5 == '\x04') {
        *(int *)puVar18 = (int)uVar13;
      }
      else if (cVar5 == '\x02') {
        *(short *)puVar18 = (short)uVar13;
      }
      else if (cVar5 == '\x01') {
        *(char *)puVar18 = (char)uVar13;
      }
      else {
        *puVar18 = uVar13;
      }
    }
    else {
      iVar6 = (**(code **)(puVar17 + 0x10))(param_1);
      if (iVar6 != 0) {
LAB_01087b78:
        iVar11 = -0x3fffffff;
        goto LAB_01088038;
      }
    }
switchD_010877fc_caseD_1006:
    *(long *)(param_1 + 0x328) = lVar1;
LAB_01087ff4:
    param_2 = param_2 + 1;
  } while( true );
}

