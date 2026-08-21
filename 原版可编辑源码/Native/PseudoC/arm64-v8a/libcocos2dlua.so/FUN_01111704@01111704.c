
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01111704(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  ushort uVar8;
  undefined8 uVar9;
  ushort *puVar10;
  undefined2 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  double dVar16;
  double dVar17;
  
  uVar3 = (uint)param_2;
  piVar5 = (int *)TIFFFindField(param_1,param_2,0);
  uVar1 = 0;
  if ((short)piVar5[6] != 0x41) {
    uVar1 = uVar3;
  }
  switch(uVar1) {
  case 0xfe:
    iVar4 = (int)param_3[3];
    uVar2 = *(undefined4 *)(param_1 + 0xe);
    goto joined_r0x0111211c;
  case 0xff:
  case 0x104:
  case 0x105:
  case 0x108:
  case 0x109:
  case 0x10b:
  case 0x10c:
  case 0x10d:
  case 0x10e:
  case 0x10f:
  case 0x110:
  case 0x113:
  case 0x114:
  case 0x11d:
  case 0x120:
  case 0x121:
  case 0x122:
  case 0x123:
  case 0x124:
  case 0x125:
  case 0x126:
  case 0x127:
  case 0x12a:
  case 299:
  case 300:
  case 0x12e:
  case 0x12f:
  case 0x130:
  case 0x131:
  case 0x132:
  case 0x133:
  case 0x134:
  case 0x135:
  case 0x136:
  case 0x137:
  case 0x138:
  case 0x139:
  case 0x13a:
  case 0x13b:
  case 0x13c:
  case 0x13d:
  case 0x13e:
  case 0x13f:
  case 0x146:
  case 0x147:
  case 0x148:
  case 0x149:
  case 0x14b:
  case 0x14c:
  case 0x14e:
  case 0x14f:
  case 0x150:
  case 0x151:
  case 0x156:
  case 0x157:
  case 0x158:
  case 0x159:
  case 0x15a:
  case 0x15b:
  case 0x15c:
  case 0x15d:
  case 0x15e:
  case 0x15f:
  case 0x160:
  case 0x161:
  case 0x162:
  case 0x163:
  case 0x164:
  case 0x165:
  case 0x166:
  case 0x167:
  case 0x168:
  case 0x169:
  case 0x16a:
  case 0x16b:
  case 0x16c:
  case 0x16d:
  case 0x16e:
  case 0x16f:
  case 0x170:
  case 0x171:
  case 0x172:
  case 0x173:
  case 0x174:
  case 0x175:
  case 0x176:
  case 0x177:
  case 0x178:
  case 0x179:
  case 0x17a:
  case 0x17b:
  case 0x17c:
  case 0x17d:
  case 0x17e:
  case 0x17f:
  case 0x180:
  case 0x181:
  case 0x182:
  case 0x183:
  case 0x184:
  case 0x185:
  case 0x186:
  case 0x187:
  case 0x188:
  case 0x189:
  case 0x18a:
  case 0x18b:
  case 0x18c:
  case 0x18d:
  case 0x18e:
  case 399:
  case 400:
  case 0x191:
  case 0x192:
  case 0x193:
  case 0x194:
  case 0x195:
  case 0x196:
  case 0x197:
  case 0x198:
  case 0x199:
  case 0x19a:
  case 0x19b:
  case 0x19c:
  case 0x19d:
  case 0x19e:
  case 0x19f:
  case 0x1a0:
  case 0x1a1:
  case 0x1a2:
  case 0x1a3:
  case 0x1a4:
  case 0x1a5:
  case 0x1a6:
  case 0x1a7:
  case 0x1a8:
  case 0x1a9:
  case 0x1aa:
  case 0x1ab:
  case 0x1ac:
  case 0x1ad:
  case 0x1ae:
  case 0x1af:
  case 0x1b0:
  case 0x1b1:
  case 0x1b2:
  case 0x1b3:
  case 0x1b4:
  case 0x1b5:
  case 0x1b6:
  case 0x1b7:
  case 0x1b8:
  case 0x1b9:
  case 0x1ba:
  case 0x1bb:
  case 0x1bc:
  case 0x1bd:
  case 0x1be:
  case 0x1bf:
  case 0x1c0:
  case 0x1c1:
  case 0x1c2:
  case 0x1c3:
  case 0x1c4:
  case 0x1c5:
  case 0x1c6:
  case 0x1c7:
  case 0x1c8:
  case 0x1c9:
  case 0x1ca:
  case 0x1cb:
  case 0x1cc:
  case 0x1cd:
  case 0x1ce:
  case 0x1cf:
  case 0x1d0:
  case 0x1d1:
  case 0x1d2:
  case 0x1d3:
  case 0x1d4:
  case 0x1d5:
  case 0x1d6:
  case 0x1d7:
  case 0x1d8:
  case 0x1d9:
  case 0x1da:
  case 0x1db:
  case 0x1dc:
  case 0x1dd:
  case 0x1de:
  case 0x1df:
  case 0x1e0:
  case 0x1e1:
  case 0x1e2:
  case 0x1e3:
  case 0x1e4:
  case 0x1e5:
  case 0x1e6:
  case 0x1e7:
  case 0x1e8:
  case 0x1e9:
  case 0x1ea:
  case 0x1eb:
  case 0x1ec:
  case 0x1ed:
  case 0x1ee:
  case 0x1ef:
  case 0x1f0:
  case 0x1f1:
  case 0x1f2:
  case 499:
  case 500:
  case 0x1f5:
  case 0x1f6:
  case 0x1f7:
  case 0x1f8:
  case 0x1f9:
  case 0x1fa:
  case 0x1fb:
  case 0x1fc:
  case 0x1fd:
  case 0x1fe:
  case 0x1ff:
  case 0x200:
  case 0x201:
  case 0x202:
  case 0x203:
  case 0x204:
  case 0x205:
  case 0x206:
  case 0x207:
  case 0x208:
  case 0x209:
  case 0x20a:
  case 0x20b:
  case 0x20c:
  case 0x20d:
  case 0x20e:
  case 0x20f:
  case 0x210:
  case 0x211:
switchD_01111754_caseD_ff:
    if (piVar5 == (int *)0x0) {
                    /* catch() { ... } // from try @ 01111cf0 with catch @ 01111d2c */
      pcVar6 = "pseudo-";
                    /* catch() { ... } // from try @ 01111cc4 with catch @ 01111d3c */
      if (uVar3 >> 0x10 == 0) {
        pcVar6 = "";
      }
      pcVar7 = "Unknown";
LAB_01111e08:
      TIFFErrorExt(param_1[0x77],"_TIFFVGetField",
                   "%s: Invalid %stag \"%s\" (not supported by codec)",*param_1,pcVar6,pcVar7);
      return 0;
    }
                    /* try { // try from 011117d0 to 012118e7 has its CatchHandler @ 011117d0
                       catch() { ... } // from try @ 011117d0 with catch @ 011117d0
                       catch() { ... } // from try @ 0111197c with catch @ 011117d0 */
    if ((short)piVar5[6] != 0x41) {
      pcVar7 = *(char **)(piVar5 + 8);
      pcVar6 = "pseudo-";
      if (uVar3 >> 0x10 == 0) {
        pcVar6 = "";
      }
      goto LAB_01111e08;
    }
    if (*(int *)(param_1 + 0x28) < 1) {
      return 0;
    }
    lVar12 = 0;
    plVar15 = (long *)(param_1[0x29] + 0x10);
    while (*(uint *)plVar15[-2] != uVar3) {
      lVar12 = lVar12 + 1;
      plVar15 = plVar15 + 3;
      if (*(int *)(param_1 + 0x28) <= lVar12) {
        return 0;
      }
    }
    if (*(char *)((long)piVar5 + 0x1b) != '\0') {
      lVar12 = plVar15[-1];
      if ((short)piVar5[1] == -3) {
        iVar4 = (int)param_3[3];
        if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
          puVar14 = (undefined8 *)(param_3[1] + (long)iVar4);
        }
        else {
          puVar14 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar14 + 1);
        }
        *(int *)*puVar14 = (int)lVar12;
      }
      else {
        iVar4 = (int)param_3[3];
        if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
          puVar14 = (undefined8 *)(param_3[1] + (long)iVar4);
        }
        else {
          puVar14 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar14 + 1);
        }
        *(short *)*puVar14 = (short)(int)lVar12;
      }
      iVar4 = (int)param_3[3];
      lVar12 = *plVar15;
      if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar4);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      *(long *)*puVar14 = lVar12;
      return 1;
    }
    if ((*piVar5 != 0x150) || (iVar4 = strcmp(*(char **)(piVar5 + 8),"DotRange"), iVar4 != 0)) {
      iVar4 = piVar5[2];
      if ((iVar4 == 2) || ((0xfffc < *(ushort *)(piVar5 + 1) || (1 < (int)plVar15[-1])))) {
        iVar4 = (int)param_3[3];
        lVar12 = *plVar15;
      }
      else {
        if (0x11 < iVar4 - 1U) {
          return 0;
        }
        puVar10 = (ushort *)*plVar15;
        switch(iVar4) {
        case 1:
        case 6:
        case 7:
          iVar4 = (int)param_3[3];
          uVar8 = *puVar10;
                    /* try { // try from 01112148 to 012121c7 has its CatchHandler @ 01112148
                       catch() { ... } // from try @ 01112148 with catch @ 01112148
                       catch() { ... } // from try @ 011121d0 with catch @ 01112148 */
          if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
            puVar14 = (undefined8 *)(param_3[1] + (long)iVar4);
          }
          else {
            puVar14 = (undefined8 *)*param_3;
            *param_3 = (long)(puVar14 + 1);
          }
          *(char *)*puVar14 = (char)uVar8;
          return 1;
        case 2:
        case 0xe:
        case 0xf:
          return 0;
        case 3:
        case 8:
          iVar4 = (int)param_3[3];
          uVar8 = *puVar10;
          goto joined_r0x01111da0;
        default:
          iVar4 = (int)param_3[3];
          uVar2 = *(undefined4 *)puVar10;
          goto joined_r0x0111211c;
        case 0xc:
        case 0x10:
        case 0x11:
        case 0x12:
          iVar4 = (int)param_3[3];
          lVar12 = *(long *)puVar10;
        }
      }
      goto joined_r0x01111c78;
    }
    iVar4 = (int)param_3[3];
    uVar11 = *(undefined2 *)*plVar15;
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    *(undefined2 *)*puVar14 = uVar11;
    iVar4 = (int)param_3[3];
    uVar8 = *(ushort *)(*plVar15 + 2);
    break;
  case 0x100:
    iVar4 = (int)param_3[3];
    uVar2 = *(undefined4 *)(param_1 + 0xb);
    goto joined_r0x0111211c;
  case 0x101:
    iVar4 = (int)param_3[3];
    uVar2 = *(undefined4 *)((long)param_1 + 0x5c);
    goto joined_r0x0111211c;
  case 0x102:
    iVar4 = (int)param_3[3];
    uVar8 = *(ushort *)((long)param_1 + 0x74);
    break;
  case 0x103:
    iVar4 = (int)param_3[3];
    uVar8 = *(ushort *)(param_1 + 0xf);
    break;
  case 0x106:
    iVar4 = (int)param_3[3];
    uVar8 = *(ushort *)((long)param_1 + 0x7a);
    break;
  case 0x107:
    iVar4 = (int)param_3[3];
    uVar8 = *(ushort *)((long)param_1 + 0x7c);
    break;
  case 0x10a:
    iVar4 = (int)param_3[3];
    uVar8 = *(ushort *)((long)param_1 + 0x7e);
    break;
  case 0x111:
  case 0x144:
    _TIFFFillStriles(param_1);
    iVar4 = (int)param_3[3];
    lVar12 = param_1[0x1d];
    goto joined_r0x01111c78;
  case 0x112:
    iVar4 = (int)param_3[3];
    uVar8 = *(ushort *)(param_1 + 0x10);
    break;
  case 0x115:
    iVar4 = (int)param_3[3];
    uVar8 = *(ushort *)((long)param_1 + 0x82);
    break;
  case 0x116:
    iVar4 = (int)param_3[3];
    uVar2 = *(undefined4 *)((long)param_1 + 0x84);
    goto joined_r0x0111211c;
  case 0x117:
  case 0x145:
    _TIFFFillStriles(param_1);
    iVar4 = (int)param_3[3];
    lVar12 = param_1[0x1e];
    goto joined_r0x01111c78;
  case 0x118:
    iVar4 = (int)param_3[3];
    uVar8 = *(ushort *)(param_1 + 0x11);
    break;
  case 0x119:
    iVar4 = (int)param_3[3];
    uVar8 = *(ushort *)((long)param_1 + 0x8a);
    break;
  case 0x11a:
                    /* try { // try from 011118e8 to 012118ff has its CatchHandler @ 011119e4 */
    iVar4 = (int)param_3[3];
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    goto joined_r0x0111211c;
  case 0x11b:
    iVar4 = (int)param_3[3];
    uVar2 = *(undefined4 *)((long)param_1 + 0xa4);
    goto joined_r0x0111211c;
  case 0x11c:
    iVar4 = (int)param_3[3];
    uVar8 = *(ushort *)((long)param_1 + 0xaa);
    break;
  case 0x11e:
    iVar4 = (int)param_3[3];
    uVar2 = *(undefined4 *)((long)param_1 + 0xac);
    goto joined_r0x0111211c;
  case 0x11f:
    iVar4 = (int)param_3[3];
    uVar2 = *(undefined4 *)(param_1 + 0x16);
    goto joined_r0x0111211c;
  case 0x128:
    iVar4 = (int)param_3[3];
    uVar8 = *(ushort *)(param_1 + 0x15);
    break;
  case 0x129:
    iVar4 = (int)param_3[3];
    uVar11 = *(undefined2 *)((long)param_1 + 0xb4);
                    /* try { // try from 0111195c to 0121195f has its CatchHandler @ 011119e4 */
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
                    /* try { // try from 01111970 to 0121197b has its CatchHandler @ 011119d8 */
    *(undefined2 *)*puVar14 = uVar11;
    iVar4 = (int)param_3[3];
                    /* try { // try from 0111197c to 012119f7 has its CatchHandler @ 011117d0 */
    uVar8 = *(ushort *)((long)param_1 + 0xb6);
    break;
  case 0x12d:
    iVar4 = (int)param_3[3];
    uVar9 = param_1[0x22];
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    *(undefined8 *)*puVar14 = uVar9;
    if ((int)((uint)*(ushort *)((long)param_1 + 0x82) - (uint)*(ushort *)((long)param_1 + 0xd4)) < 2
       ) {
      return 1;
    }
    iVar4 = (int)param_3[3];
    uVar9 = param_1[0x23];
                    /* catch() { ... } // from try @ 01111970 with catch @ 011119d8 */
                    /* catch() { ... } // from try @ 01111944 with catch @ 011119dc */
                    /* catch() { ... } // from try @ 01111914 with catch @ 011119e0 */
                    /* catch() { ... } // from try @ 011118e8 with catch @ 011119e4
                       catch() { ... } // from try @ 0111195c with catch @ 011119e4 */
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    *(undefined8 *)*puVar14 = uVar9;
    iVar4 = (int)param_3[3];
    lVar12 = param_1[0x24];
    goto joined_r0x01111c78;
  case 0x140:
    iVar4 = (int)param_3[3];
    uVar9 = param_1[0x17];
                    /* try { // try from 01111a18 to 01211a7f has its CatchHandler @ 01111a18
                       catch() { ... } // from try @ 01111a18 with catch @ 01111a18
                       catch() { ... } // from try @ 01111cfc with catch @ 01111a18 */
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    *(undefined8 *)*puVar14 = uVar9;
    iVar4 = (int)param_3[3];
    uVar9 = param_1[0x18];
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    *(undefined8 *)*puVar14 = uVar9;
    iVar4 = (int)param_3[3];
    lVar12 = param_1[0x19];
    goto joined_r0x01111c78;
  case 0x141:
    iVar4 = (int)param_3[3];
                    /* try { // try from 01111a80 to 01211a83 has its CatchHandler @ 01111d98 */
    uVar11 = *(undefined2 *)(param_1 + 0x1a);
                    /* try { // try from 01111a94 to 01211aa7 has its CatchHandler @ 01111da0 */
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    *(undefined2 *)*puVar14 = uVar11;
    iVar4 = (int)param_3[3];
    uVar8 = *(ushort *)((long)param_1 + 0xd2);
    break;
  case 0x142:
    iVar4 = (int)param_3[3];
    uVar2 = *(undefined4 *)((long)param_1 + 100);
    goto joined_r0x0111211c;
  case 0x143:
    iVar4 = (int)param_3[3];
    uVar2 = *(undefined4 *)(param_1 + 0xd);
    goto joined_r0x0111211c;
  case 0x14a:
    iVar4 = (int)param_3[3];
                    /* try { // try from 01111ae0 to 01211ae7 has its CatchHandler @ 01111d84 */
    uVar11 = *(undefined2 *)((long)param_1 + 0xfc);
                    /* try { // try from 01111ae8 to 01211af3 has its CatchHandler @ 01111d70 */
                    /* try { // try from 01111af4 to 01211aff has its CatchHandler @ 01111d60 */
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    *(undefined2 *)*puVar14 = uVar11;
    iVar4 = (int)param_3[3];
    lVar12 = param_1[0x20];
    goto joined_r0x01111c78;
  case 0x14d:
    iVar4 = (int)param_3[3];
    lVar12 = param_1[0x27];
    goto joined_r0x01111c78;
  case 0x152:
    iVar4 = (int)param_3[3];
    uVar11 = *(undefined2 *)((long)param_1 + 0xd4);
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    *(undefined2 *)*puVar14 = uVar11;
    iVar4 = (int)param_3[3];
    lVar12 = param_1[0x1b];
    goto joined_r0x01111c78;
  case 0x153:
    iVar4 = (int)param_3[3];
    uVar8 = *(ushort *)((long)param_1 + 0x76);
    break;
  case 0x154:
    if ((*(byte *)((long)param_1 + 0x12) >> 6 & 1) == 0) {
      dVar16 = *(double *)param_1[0x12];
      if (1 < (ulong)*(ushort *)((long)param_1 + 0x82)) {
        uVar13 = 1;
        dVar17 = dVar16;
        do {
          dVar16 = ((double *)param_1[0x12])[uVar13];
          uVar13 = uVar13 + 1;
          if (dVar17 <= dVar16) {
            dVar16 = dVar17;
          }
          dVar17 = dVar16;
        } while (uVar13 < *(ushort *)((long)param_1 + 0x82));
      }
LAB_01111bf0:
      iVar4 = (int)param_3[3];
      if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar4);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      *(double *)*puVar14 = dVar16;
      return 1;
    }
    iVar4 = (int)param_3[3];
                    /* catch() { ... } // from try @ 01111c98 with catch @ 01111d4c */
    lVar12 = param_1[0x12];
    goto joined_r0x01111c78;
  case 0x155:
    if ((*(byte *)((long)param_1 + 0x12) >> 6 & 1) == 0) {
                    /* try { // try from 01111bc0 to 01211c53 has its CatchHandler @ 01111da8 */
      dVar16 = *(double *)param_1[0x13];
      if (1 < (ulong)*(ushort *)((long)param_1 + 0x82)) {
        uVar13 = 1;
        dVar17 = dVar16;
        do {
          dVar16 = ((double *)param_1[0x13])[uVar13];
          uVar13 = uVar13 + 1;
          if (dVar16 <= dVar17) {
            dVar16 = dVar17;
          }
          dVar17 = dVar16;
        } while (uVar13 < *(ushort *)((long)param_1 + 0x82));
      }
      goto LAB_01111bf0;
    }
    iVar4 = (int)param_3[3];
    lVar12 = param_1[0x13];
                    /* catch() { ... } // from try @ 01111af4 with catch @ 01111d60 */
    goto joined_r0x01111c78;
  case 0x212:
    iVar4 = (int)param_3[3];
    uVar11 = *(undefined2 *)(param_1 + 0x21);
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    *(undefined2 *)*puVar14 = uVar11;
    iVar4 = (int)param_3[3];
    uVar8 = *(ushort *)((long)param_1 + 0x10a);
    break;
  case 0x213:
    iVar4 = (int)param_3[3];
    uVar8 = *(ushort *)((long)param_1 + 0x10c);
    break;
  case 0x214:
    iVar4 = (int)param_3[3];
    lVar12 = param_1[0x25];
joined_r0x01111c78:
    if (iVar4 < 0) {
      *(int *)(param_3 + 3) = iVar4 + 8;
                    /* catch() { ... } // from try @ 01111ae8 with catch @ 01111d70 */
      if (iVar4 + 8 < 1) {
                    /* catch() { ... } // from try @ 01111ac8 with catch @ 01111d90 */
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar4);
        goto LAB_01111d80;
      }
    }
    puVar14 = (undefined8 *)*param_3;
    *param_3 = (long)(puVar14 + 1);
LAB_01111d80:
                    /* catch() { ... } // from try @ 01111ae0 with catch @ 01111d84 */
    *(long *)*puVar14 = lVar12;
    return 1;
  default:
    switch(uVar1) {
    case 0x80e3:
      if (*(short *)((long)param_1 + 0xd4) == 1) {
        uVar8 = (ushort)(*(short *)param_1[0x1b] == 1);
      }
      else {
                    /* catch() { ... } // from try @ 01111a80 with catch @ 01111d98 */
        uVar8 = 0;
      }
      iVar4 = (int)param_3[3];
      goto joined_r0x01111da0;
    case 0x80e4:
                    /* try { // try from 01111c98 to 01211ca3 has its CatchHandler @ 01111d4c */
      switch(*(undefined2 *)((long)param_1 + 0x76)) {
      case 1:
        iVar4 = (int)param_3[3];
        if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
          puVar14 = (undefined8 *)(param_3[1] + (long)iVar4);
          uVar11 = 2;
        }
        else {
          puVar14 = (undefined8 *)*param_3;
                    /* try { // try from 01111cc4 to 01211ccf has its CatchHandler @ 01111d3c */
          *param_3 = (long)(puVar14 + 1);
          uVar11 = 2;
        }
        break;
      case 2:
        iVar4 = (int)param_3[3];
        if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
          puVar14 = (undefined8 *)(param_3[1] + (long)iVar4);
          uVar11 = 1;
        }
        else {
          puVar14 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar14 + 1);
          uVar11 = 1;
        }
        break;
      case 3:
        iVar4 = (int)param_3[3];
        if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
          puVar14 = (undefined8 *)(param_3[1] + (long)iVar4);
          uVar11 = 3;
        }
        else {
          puVar14 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar14 + 1);
          uVar11 = 3;
        }
        break;
      case 4:
        iVar4 = (int)param_3[3];
        if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
          uVar11 = 0;
          puVar14 = (undefined8 *)(param_3[1] + (long)iVar4);
        }
        else {
          puVar14 = (undefined8 *)*param_3;
          uVar11 = 0;
          *param_3 = (long)(puVar14 + 1);
        }
        break;
      default:
        return 1;
      }
      *(undefined2 *)*puVar14 = uVar11;
      return 1;
    case 0x80e5:
      iVar4 = (int)param_3[3];
      uVar2 = *(undefined4 *)(param_1 + 0xc);
      break;
    case 0x80e6:
      iVar4 = (int)param_3[3];
      uVar2 = *(undefined4 *)((long)param_1 + 0x6c);
      break;
    default:
      goto switchD_01111754_caseD_ff;
    }
joined_r0x0111211c:
    if (iVar4 < 0) {
                    /* try { // try from 01111cf0 to 01211cfb has its CatchHandler @ 01111d2c */
      *(int *)(param_3 + 3) = iVar4 + 8;
      if (iVar4 + 8 < 1) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar4);
        goto LAB_01111d08;
      }
    }
                    /* try { // try from 01111cfc to 01211dc3 has its CatchHandler @ 01111a18 */
    puVar14 = (undefined8 *)*param_3;
    *param_3 = (long)(puVar14 + 1);
LAB_01111d08:
    *(undefined4 *)*puVar14 = uVar2;
    return 1;
  }
joined_r0x01111da0:
                    /* catch() { ... } // from try @ 01111a94 with catch @ 01111da0 */
  if (iVar4 < 0) {
                    /* catch() { ... } // from try @ 01111bc0 with catch @ 01111da8 */
    *(int *)(param_3 + 3) = iVar4 + 8;
    if (iVar4 + 8 < 1) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar4);
      goto LAB_01111dc0;
    }
  }
  puVar14 = (undefined8 *)*param_3;
  *param_3 = (long)(puVar14 + 1);
LAB_01111dc0:
  *(ushort *)*puVar14 = uVar8;
  return 1;
}

