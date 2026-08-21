
/* WARNING: Type propagation algorithm not settling */

int FUN_0110fe5c(undefined8 *param_1,ulong param_2,long *param_3)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined8 *puVar7;
  void *pvVar8;
  void *pvVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  char *pcVar15;
  uint uVar16;
  short *psVar17;
  double *pdVar18;
  ushort *puVar19;
  ulong uVar20;
  uint *puVar21;
  undefined4 *puVar22;
  char *pcVar23;
  ushort *puVar24;
  char *pcVar25;
  size_t sVar26;
  undefined8 *puVar27;
  undefined8 local_58;
  
  uVar13 = (uint)param_2;
  piVar6 = (int *)TIFFFindField(param_1,param_2,0);
  uVar16 = 0;
  if ((short)piVar6[6] != 0x41) {
    uVar16 = uVar13;
  }
  switch(uVar16) {
  case 0xfe:
    iVar4 = (int)param_3[3];
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar22 = (undefined4 *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar22 = (undefined4 *)*param_3;
      *param_3 = (long)(puVar22 + 2);
    }
    *(undefined4 *)(param_1 + 0xe) = *puVar22;
    break;
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
  case 0x111:
  case 0x113:
  case 0x114:
  case 0x117:
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
  case 0x144:
  case 0x145:
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
switchD_0110feb8_caseD_ff:
    if ((piVar6 == (int *)0x0) || ((short)piVar6[6] != 0x41)) {
      pcVar25 = "pseudo-";
      if (uVar13 >> 0x10 == 0) {
        pcVar25 = "";
      }
      if (piVar6 == (int *)0x0) {
        pcVar15 = "Unknown";
      }
      else {
        pcVar15 = *(char **)(piVar6 + 8);
      }
      TIFFErrorExt(param_1[0x77],"_TIFFVSetField",
                   "%s: Invalid %stag \"%s\" (not supported by codec)",*param_1,pcVar25,pcVar15);
      return 0;
                    /* try { // try from 01110e2c to 01210e2f has its CatchHandler @ 01110e50 */
    }
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 < 1) {
      puVar7 = (undefined8 *)param_1[0x29];
    }
    else {
      puVar7 = (undefined8 *)param_1[0x29];
      lVar11 = 0;
      puVar27 = puVar7;
      do {
        if (*(uint *)*puVar27 == uVar13) {
          if ((void *)puVar27[2] != (void *)0x0) {
            _TIFFfree((void *)puVar27[2]);
            puVar27[2] = 0;
          }
          goto LAB_01110e40;
        }
        lVar11 = lVar11 + 1;
        puVar27 = puVar27 + 3;
      } while (lVar11 < iVar4);
    }
    *(int *)(param_1 + 0x28) = iVar4 + 1;
    pvVar9 = _TIFFrealloc(puVar7,(long)(iVar4 + 1) * 0x18);
    if (pvVar9 == (void *)0x0) {
                    /* try { // try from 01110eec to 01210f2f has its CatchHandler @ 01110e98 */
      TIFFErrorExt(param_1[0x77],"_TIFFVSetField",
                   "%s: Failed to allocate space for list of custom values",*param_1);
      return 0;
    }
    iVar4 = *(int *)(param_1 + 0x28);
    param_1[0x29] = pvVar9;
    puVar27 = (undefined8 *)((long)pvVar9 + (long)iVar4 * 0x18 + -0x18);
    *puVar27 = piVar6;
    *(undefined8 *)((long)pvVar9 + (long)iVar4 * 0x18 + -8) = 0;
    *(undefined4 *)((long)pvVar9 + (long)iVar4 * 0x18 + -0x10) = 0;
LAB_01110e40:
    iVar4 = _TIFFDataSize(piVar6[2]);
    if (iVar4 == 0) {
      uVar10 = param_1[0x77];
      uVar12 = *param_1;
      uVar14 = (ulong)(uint)piVar6[2];
      pcVar25 = *(char **)(piVar6 + 8);
      pcVar15 = "%s: Bad field type %d for \"%s\"";
      goto LAB_01111280;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01110e2c with catch @ 01110e50
                        */
    if (piVar6[2] == 2) {
      iVar4 = (int)param_3[3];
      if (*(char *)((long)piVar6 + 0x1b) == '\0') {
        if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
          puVar7 = (undefined8 *)(param_3[1] + (long)iVar4);
        }
        else {
          puVar7 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar7 + 1);
        }
        pcVar25 = (char *)*puVar7;
        sVar26 = strlen(pcVar25);
        uVar16 = (int)sVar26 + 1;
      }
      else {
        if (iVar4 < 0) {
          iVar5 = iVar4 + 8;
          *(int *)(param_3 + 3) = iVar5;
          if (0 < iVar5) goto LAB_01110e7c;
          uVar16 = *(uint *)(param_3[1] + (long)iVar4);
          if ((iVar5 < 0) && (*(int *)(param_3 + 3) = iVar4 + 0x10, iVar4 + 0x10 < 1)) {
            pcVar25 = *(char **)(param_3[1] + (long)iVar5);
            goto LAB_01111324;
          }
        }
        else {
LAB_01110e7c:
          puVar21 = (uint *)*param_3;
          *param_3 = (long)(puVar21 + 2);
          uVar16 = *puVar21;
        }
        puVar7 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar7 + 1);
                    /* catch() { ... } // from try @ 01110eec with catch @ 01110e98 */
        pcVar25 = (char *)*puVar7;
      }
LAB_01111324:
      *(uint *)(puVar27 + 1) = uVar16;
      if ((void *)puVar27[2] != (void *)0x0) {
        _TIFFfree((void *)puVar27[2]);
        puVar27[2] = 0;
      }
      if (pcVar25 != (char *)0x0) {
        sVar26 = (size_t)uVar16;
        pvVar9 = _TIFFmalloc(sVar26);
        puVar27[2] = pvVar9;
        goto joined_r0x01110dc8;
      }
      break;
    }
    sVar3 = *(short *)((long)piVar6 + 6);
    uVar16 = (uint)sVar3;
    if (*(char *)((long)piVar6 + 0x1b) == '\0') {
      if ((sVar3 != -3) && (sVar3 != -1)) {
        if (sVar3 == -2) {
          uVar16 = (uint)*(ushort *)((long)param_1 + 0x82);
        }
        goto LAB_01110f78;
      }
      uVar16 = 1;
      *(undefined4 *)(puVar27 + 1) = 1;
    }
    else {
      iVar5 = (int)param_3[3];
      if ((iVar5 < 0) && (*(int *)(param_3 + 3) = iVar5 + 8, iVar5 + 8 < 1)) {
        puVar21 = (uint *)(param_3[1] + (long)iVar5);
      }
      else {
        puVar21 = (uint *)*param_3;
        *param_3 = (long)(puVar21 + 2);
      }
      uVar16 = *puVar21;
LAB_01110f78:
      *(uint *)(puVar27 + 1) = uVar16;
      if (uVar16 == 0) {
                    /* try { // try from 01110f88 to 01210f9b has its CatchHandler @ 01110fc8 */
                    /* try { // try from 01110f9c to 01210fdf has its CatchHandler @ 01110f30 */
        TIFFErrorExt(param_1[0x77],"_TIFFVSetField",
                     "%s: Null count for \"%s\" (type %d, writecount %d, passcount %d)",*param_1,
                     *(undefined8 *)(piVar6 + 8),piVar6[2],(long)*(short *)((long)piVar6 + 6),
                     *(undefined1 *)((long)piVar6 + 0x1b));
        return 0;
      }
    }
    sVar26 = (size_t)iVar4;
    pvVar9 = (void *)_TIFFCheckMalloc(param_1,(long)(int)uVar16,sVar26,"custom tag binary object");
    puVar27[2] = pvVar9;
    if (pvVar9 == (void *)0x0) {
      return 0;
    }
                    /* try { // try from 01111438 to 0121155b has its CatchHandler @ 01111438
                       catch() { ... } // from try @ 01111438 with catch @ 01111438
                       catch() { ... } // from try @ 01111568 with catch @ 01111438 */
    if ((*piVar6 == 0x150) && (iVar5 = strcmp(*(char **)(piVar6 + 8),"DotRange"), iVar5 == 0)) {
      iVar4 = (int)param_3[3];
      if (iVar4 < 0) {
        iVar5 = iVar4 + 8;
        *(int *)(param_3 + 3) = iVar5;
        if (0 < iVar5) goto LAB_011114f0;
        local_58 = CONCAT62(local_58._2_6_,(short)*(undefined4 *)(param_3[1] + (long)iVar4));
        if ((-1 < iVar5) || (*(int *)(param_3 + 3) = iVar4 + 0x10, 0 < iVar4 + 0x10))
        goto LAB_01111504;
        puVar22 = (undefined4 *)(param_3[1] + (long)iVar5);
      }
      else {
LAB_011114f0:
        puVar22 = (undefined4 *)*param_3;
        *param_3 = (long)(puVar22 + 2);
        local_58 = CONCAT62(local_58._2_6_,(short)*puVar22);
LAB_01111504:
        puVar22 = (undefined4 *)*param_3;
        *param_3 = (long)(puVar22 + 2);
      }
      pcVar25 = (char *)&local_58;
      sVar26 = 4;
      local_58._0_4_ = CONCAT22((short)*puVar22,(undefined2)local_58);
      pvVar9 = (void *)puVar27[2];
      goto LAB_01111358;
    }
    if (((*(char *)((long)piVar6 + 0x1b) != '\0') || (0xfffc < *(ushort *)((long)piVar6 + 6))) ||
       (1 < *(int *)(puVar27 + 1))) {
      iVar5 = (int)param_3[3];
      if ((iVar5 < 0) && (*(int *)(param_3 + 3) = iVar5 + 8, iVar5 + 8 < 1)) {
        puVar7 = (undefined8 *)(param_3[1] + (long)iVar5);
      }
      else {
        puVar7 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar7 + 1);
      }
      pcVar25 = (char *)*puVar7;
      sVar26 = (long)*(int *)(puVar27 + 1) * (long)iVar4;
      goto LAB_01111358;
    }
                    /* try { // try from 0111155c to 01211567 has its CatchHandler @ 01111664 */
    switch(piVar6[2]) {
    case 1:
    case 6:
    case 7:
      iVar4 = (int)param_3[3];
                    /* try { // try from 01111568 to 012116ab has its CatchHandler @ 01111438 */
      if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
        puVar22 = (undefined4 *)(param_3[1] + (long)iVar4);
      }
      else {
        puVar22 = (undefined4 *)*param_3;
        *param_3 = (long)(puVar22 + 2);
      }
      local_58 = CONCAT71(local_58._1_7_,(char)*puVar22);
      break;
    default:
      _TIFFmemset(pvVar9,0,sVar26);
      return 0;
    case 3:
    case 8:
      iVar4 = (int)param_3[3];
      if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
        puVar22 = (undefined4 *)(param_3[1] + (long)iVar4);
      }
      else {
        puVar22 = (undefined4 *)*param_3;
                    /* catch() { ... } // from try @ 0111155c with catch @ 01111664 */
        *param_3 = (long)(puVar22 + 2);
      }
      local_58 = CONCAT62(local_58._2_6_,(short)*puVar22);
      break;
    case 4:
    case 9:
    case 0xd:
      iVar4 = (int)param_3[3];
      if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
        puVar22 = (undefined4 *)(param_3[1] + (long)iVar4);
      }
      else {
        puVar22 = (undefined4 *)*param_3;
        *param_3 = (long)(puVar22 + 2);
      }
      local_58 = CONCAT44(local_58._4_4_,*puVar22);
      break;
    case 5:
    case 10:
    case 0xb:
      iVar4 = *(int *)((long)param_3 + 0x1c);
      if ((iVar4 < 0) && (*(int *)((long)param_3 + 0x1c) = iVar4 + 0x10, iVar4 + 0x10 < 1)) {
        pdVar18 = (double *)(param_3[2] + (long)iVar4);
      }
      else {
        pdVar18 = (double *)*param_3;
        *param_3 = (long)(pdVar18 + 1);
      }
      local_58 = CONCAT44(local_58._4_4_,(float)*pdVar18);
      break;
    case 0xc:
      iVar4 = *(int *)((long)param_3 + 0x1c);
      if ((iVar4 < 0) && (*(int *)((long)param_3 + 0x1c) = iVar4 + 0x10, iVar4 + 0x10 < 1)) {
        puVar7 = (undefined8 *)(param_3[2] + (long)iVar4);
      }
      else {
LAB_011116a4:
        puVar7 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar7 + 1);
      }
      goto LAB_011116b0;
    case 0x10:
    case 0x11:
    case 0x12:
      iVar4 = (int)param_3[3];
      if ((-1 < iVar4) || (*(int *)(param_3 + 3) = iVar4 + 8, 0 < iVar4 + 8)) goto LAB_011116a4;
      puVar7 = (undefined8 *)(param_3[1] + (long)iVar4);
LAB_011116b0:
      local_58 = *puVar7;
    }
    pcVar25 = (char *)&local_58;
LAB_01111358:
    _TIFFmemcpy(pvVar9,pcVar25,sVar26);
    break;
  case 0x100:
    iVar4 = (int)param_3[3];
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar22 = (undefined4 *)(param_3[1] + (long)iVar4);
                    /* catch() { ... } // from try @ 01110f88 with catch @ 01110fc8 */
    }
    else {
      puVar22 = (undefined4 *)*param_3;
      *param_3 = (long)(puVar22 + 2);
    }
    *(undefined4 *)(param_1 + 0xb) = *puVar22;
    break;
  case 0x101:
    iVar4 = (int)param_3[3];
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar22 = (undefined4 *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar22 = (undefined4 *)*param_3;
      *param_3 = (long)(puVar22 + 2);
    }
    *(undefined4 *)((long)param_1 + 0x5c) = *puVar22;
    break;
  case 0x102:
    iVar4 = (int)param_3[3];
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar21 = (uint *)(param_3[1] + (long)iVar4);
                    /* catch() { ... } // from try @ 01111054 with catch @ 01110fe0 */
    }
    else {
      puVar21 = (uint *)*param_3;
      *param_3 = (long)(puVar21 + 2);
    }
    uVar16 = *puVar21;
    *(short *)((long)param_1 + 0x74) = (short)uVar16;
    if (*(char *)(param_1 + 2) < '\0') {
      uVar16 = uVar16 & 0xffff;
      iVar4 = 1;
      switch(uVar16) {
      case 8:
        param_1[0x7d] = _TIFFNoPostDecode;
        break;
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
        goto switchD_011100d0_caseD_9;
      case 0x10:
switchD_011100d0_caseD_10:
        param_1[0x7d] = _TIFFSwab16BitData;
        break;
      case 0x18:
                    /* catch() { ... } // from try @ 01111280 with catch @ 011112a0 */
        param_1[0x7d] = _TIFFSwab24BitData;
        break;
      case 0x20:
switchD_011100d0_caseD_20:
        param_1[0x7d] = _TIFFSwab32BitData;
        break;
      default:
        if ((uVar16 != 0x40) && (uVar16 != 0x80)) goto switchD_011100d0_caseD_9;
                    /* try { // try from 01110ed8 to 01210eeb has its CatchHandler @ 01110f18 */
        param_1[0x7d] = _TIFFSwab64BitData;
      }
    }
    break;
  case 0x103:
    iVar4 = (int)param_3[3];
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      psVar17 = (short *)(param_3[1] + (long)iVar4);
    }
    else {
      psVar17 = (short *)*param_3;
      *param_3 = (long)(psVar17 + 4);
    }
    sVar3 = *psVar17;
    if (*(char *)(param_1 + 7) < '\0') {
      if (*(short *)(param_1 + 0xf) == sVar3) break;
      (*(code *)param_1[0x67])(param_1);
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0xffffffdf;
    }
    iVar4 = TIFFSetCompressionScheme(param_1,sVar3);
    if (iVar4 == 0) {
      return 0;
    }
    *(short *)(param_1 + 0xf) = sVar3;
    goto switchD_011100d0_caseD_9;
  case 0x106:
    iVar4 = (int)param_3[3];
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar22 = (undefined4 *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar22 = (undefined4 *)*param_3;
                    /* try { // try from 01110174 to 012103a3 has its CatchHandler @ 01110174
                       catch() { ... } // from try @ 01110174 with catch @ 01110174
                       catch() { ... } // from try @ 01110474 with catch @ 01110174
                       catch() { ... } // from try @ 01110598 with catch @ 01110174 */
      *param_3 = (long)(puVar22 + 2);
    }
    *(short *)((long)param_1 + 0x7a) = (short)*puVar22;
    break;
  case 0x107:
    iVar4 = (int)param_3[3];
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar22 = (undefined4 *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar22 = (undefined4 *)*param_3;
      *param_3 = (long)(puVar22 + 2);
    }
    *(short *)((long)param_1 + 0x7c) = (short)*puVar22;
    break;
  case 0x10a:
    iVar4 = (int)param_3[3];
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar19 = (ushort *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar19 = (ushort *)*param_3;
      *param_3 = (long)(puVar19 + 4);
    }
    uVar2 = *puVar19;
    uVar14 = (ulong)uVar2;
    if (1 < uVar2 - 1) goto LAB_01111034;
    *(ushort *)((long)param_1 + 0x7e) = uVar2;
    break;
  case 0x112:
    iVar4 = (int)param_3[3];
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar19 = (ushort *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar19 = (ushort *)*param_3;
      *param_3 = (long)(puVar19 + 4);
    }
    uVar2 = *puVar19;
    uVar14 = (ulong)uVar2;
    if (7 < uVar2 - 1) goto LAB_01111034;
    *(ushort *)(param_1 + 0x10) = uVar2;
    break;
  case 0x115:
    iVar4 = (int)param_3[3];
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
                    /* try { // try from 01111028 to 0121102f has its CatchHandler @ 0111114c */
      sVar3 = *(short *)(param_3[1] + (long)iVar4);
    }
    else {
      psVar17 = (short *)*param_3;
      *param_3 = (long)(psVar17 + 4);
      sVar3 = *psVar17;
    }
    if (sVar3 == 0) {
      uVar14 = 0;
      goto LAB_01111034;
    }
    *(short *)((long)param_1 + 0x82) = sVar3;
    break;
  case 0x116:
    iVar4 = (int)param_3[3];
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      iVar4 = *(int *)(param_3[1] + (long)iVar4);
    }
    else {
      piVar6 = (int *)*param_3;
      *param_3 = (long)(piVar6 + 2);
      iVar4 = *piVar6;
    }
    if (iVar4 == 0) {
LAB_0111123c:
      uVar16 = 0;
LAB_01111240:
                    /* try { // try from 01111248 to 01211273 has its CatchHandler @ 01111248
                       catch() { ... } // from try @ 01111248 with catch @ 01111248
                       catch() { ... } // from try @ 01111284 with catch @ 01111248 */
      lVar11 = TIFFFieldWithTag(param_1,param_2 & 0xffffffff);
      uVar10 = param_1[0x77];
      uVar12 = *param_1;
      if (lVar11 == 0) {
        pcVar25 = "Unknown";
      }
      else {
        pcVar25 = *(char **)(lVar11 + 0x20);
      }
                    /* try { // try from 01111274 to 0121127b has its CatchHandler @ 011112b0 */
      pcVar15 = "%s: Bad value %u for \"%s\" tag";
      uVar14 = (ulong)uVar16;
      goto LAB_01111280;
    }
    *(int *)((long)param_1 + 0x84) = iVar4;
    if ((*(byte *)(param_1 + 7) >> 2 & 1) == 0) {
      *(undefined4 *)((long)param_1 + 100) = *(undefined4 *)(param_1 + 0xb);
      *(int *)(param_1 + 0xd) = iVar4;
    }
    break;
  case 0x118:
    iVar4 = (int)param_3[3];
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar22 = (undefined4 *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar22 = (undefined4 *)*param_3;
      *param_3 = (long)(puVar22 + 2);
    }
    *(short *)(param_1 + 0x11) = (short)*puVar22;
    break;
  case 0x119:
    iVar4 = (int)param_3[3];
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar22 = (undefined4 *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar22 = (undefined4 *)*param_3;
      *param_3 = (long)(puVar22 + 2);
    }
    *(short *)((long)param_1 + 0x8a) = (short)*puVar22;
    break;
  case 0x11a:
    iVar4 = *(int *)((long)param_3 + 0x1c);
    if ((iVar4 < 0) && (*(int *)((long)param_3 + 0x1c) = iVar4 + 0x10, iVar4 + 0x10 < 1)) {
      pdVar18 = (double *)(param_3[2] + (long)iVar4);
    }
    else {
      pdVar18 = (double *)*param_3;
      *param_3 = (long)(pdVar18 + 1);
    }
    *(float *)(param_1 + 0x14) = (float)*pdVar18;
    break;
  case 0x11b:
    iVar4 = *(int *)((long)param_3 + 0x1c);
    if ((iVar4 < 0) && (*(int *)((long)param_3 + 0x1c) = iVar4 + 0x10, iVar4 + 0x10 < 1)) {
      pdVar18 = (double *)(param_3[2] + (long)iVar4);
    }
    else {
      pdVar18 = (double *)*param_3;
      *param_3 = (long)(pdVar18 + 1);
    }
    *(float *)((long)param_1 + 0xa4) = (float)*pdVar18;
    break;
  case 0x11c:
    iVar4 = (int)param_3[3];
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar19 = (ushort *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar19 = (ushort *)*param_3;
      *param_3 = (long)(puVar19 + 4);
    }
    uVar2 = *puVar19;
    uVar14 = (ulong)uVar2;
    if (1 < uVar2 - 1) goto LAB_01111034;
    *(ushort *)((long)param_1 + 0xaa) = uVar2;
                    /* try { // try from 011103a4 to 01210473 has its CatchHandler @ 011105a4 */
    break;
  case 0x11e:
    iVar4 = *(int *)((long)param_3 + 0x1c);
    if ((iVar4 < 0) && (*(int *)((long)param_3 + 0x1c) = iVar4 + 0x10, iVar4 + 0x10 < 1)) {
      pdVar18 = (double *)(param_3[2] + (long)iVar4);
    }
    else {
      pdVar18 = (double *)*param_3;
      *param_3 = (long)(pdVar18 + 1);
    }
    *(float *)((long)param_1 + 0xac) = (float)*pdVar18;
    break;
  case 0x11f:
    iVar4 = *(int *)((long)param_3 + 0x1c);
    if ((iVar4 < 0) && (*(int *)((long)param_3 + 0x1c) = iVar4 + 0x10, iVar4 + 0x10 < 1)) {
      pdVar18 = (double *)(param_3[2] + (long)iVar4);
    }
    else {
      pdVar18 = (double *)*param_3;
      *param_3 = (long)(pdVar18 + 1);
    }
    *(float *)(param_1 + 0x16) = (float)*pdVar18;
    break;
  case 0x128:
    iVar4 = (int)param_3[3];
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar19 = (ushort *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar19 = (ushort *)*param_3;
      *param_3 = (long)(puVar19 + 4);
    }
    uVar2 = *puVar19;
    uVar14 = (ulong)uVar2;
    if (2 < uVar2 - 1) goto LAB_01111034;
    *(ushort *)(param_1 + 0x15) = uVar2;
    break;
  case 0x129:
    iVar4 = (int)param_3[3];
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar22 = (undefined4 *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar22 = (undefined4 *)*param_3;
      *param_3 = (long)(puVar22 + 2);
    }
                    /* try { // try from 01110474 to 01210513 has its CatchHandler @ 01110174 */
    *(short *)((long)param_1 + 0xb4) = (short)*puVar22;
    iVar4 = (int)param_3[3];
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar22 = (undefined4 *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar22 = (undefined4 *)*param_3;
      *param_3 = (long)(puVar22 + 2);
    }
    *(short *)((long)param_1 + 0xb6) = (short)*puVar22;
    break;
  case 0x12d:
    lVar11 = 3;
    puVar7 = param_1 + 0x22;
    if ((int)((uint)*(ushort *)((long)param_1 + 0x82) - (uint)*(ushort *)((long)param_1 + 0xd4)) < 2
       ) {
      lVar11 = 1;
    }
    do {
      iVar4 = (int)param_3[3];
      if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
        puVar27 = (undefined8 *)(param_3[1] + (long)iVar4);
      }
      else {
        puVar27 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar27 + 1);
      }
      pvVar9 = (void *)*puVar27;
      uVar2 = *(ushort *)((long)param_1 + 0x74);
      if ((void *)*puVar7 != (void *)0x0) {
        _TIFFfree((void *)*puVar7);
        *puVar7 = 0;
      }
                    /* try { // try from 01110514 to 01210533 has its CatchHandler @ 011105a0 */
      if (pvVar9 != (void *)0x0) {
        uVar14 = 2L << ((ulong)uVar2 & 0x3f) & 0x1fffffffe;
        pvVar8 = _TIFFmalloc(uVar14);
        *puVar7 = pvVar8;
        if (pvVar8 != (void *)0x0) {
          _TIFFmemcpy(pvVar8,pvVar9,uVar14);
        }
      }
      lVar11 = lVar11 + -1;
      puVar7 = puVar7 + 1;
    } while (lVar11 != 0);
    break;
  case 0x140:
    iVar4 = (int)param_3[3];
    uVar2 = *(ushort *)((long)param_1 + 0x74);
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar7 = (undefined8 *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar7 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar7 + 1);
    }
    pvVar9 = (void *)*puVar7;
    if ((void *)param_1[0x17] != (void *)0x0) {
      _TIFFfree((void *)param_1[0x17]);
      param_1[0x17] = 0;
    }
                    /* try { // try from 01110590 to 01210597 has its CatchHandler @ 0111059c */
    uVar14 = 1L << ((ulong)uVar2 & 0x3f) & 0xffffffff;
    if (pvVar9 != (void *)0x0) {
                    /* try { // try from 01110598 to 012105bf has its CatchHandler @ 01110174 */
                    /* catch() { ... } // from try @ 01110590 with catch @ 0111059c */
                    /* catch() { ... } // from try @ 01110514 with catch @ 011105a0 */
      pvVar8 = _TIFFmalloc(uVar14 << 1);
                    /* catch() { ... } // from try @ 011103a4 with catch @ 011105a4 */
      param_1[0x17] = pvVar8;
      if (pvVar8 != (void *)0x0) {
        _TIFFmemcpy(pvVar8,pvVar9,uVar14 << 1);
      }
    }
    iVar4 = (int)param_3[3];
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar7 = (undefined8 *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar7 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar7 + 1);
    }
    pvVar9 = (void *)*puVar7;
    if ((void *)param_1[0x18] != (void *)0x0) {
      _TIFFfree((void *)param_1[0x18]);
      param_1[0x18] = 0;
    }
    if (pvVar9 != (void *)0x0) {
      pvVar8 = _TIFFmalloc(uVar14 << 1);
      param_1[0x18] = pvVar8;
      if (pvVar8 != (void *)0x0) {
                    /* try { // try from 01110610 to 0121069b has its CatchHandler @ 01110610
                       catch() { ... } // from try @ 01110610 with catch @ 01110610
                       catch() { ... } // from try @ 01110744 with catch @ 01110610 */
        _TIFFmemcpy(pvVar8,pvVar9,uVar14 << 1);
      }
    }
    iVar4 = (int)param_3[3];
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar7 = (undefined8 *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar7 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar7 + 1);
    }
    pcVar25 = (char *)*puVar7;
    if ((void *)param_1[0x19] != (void *)0x0) {
      _TIFFfree((void *)param_1[0x19]);
      param_1[0x19] = 0;
    }
    if (pcVar25 != (char *)0x0) {
      sVar26 = uVar14 << 1;
      pvVar9 = _TIFFmalloc(sVar26);
      param_1[0x19] = pvVar9;
joined_r0x01110dc8:
      if (pvVar9 != (void *)0x0) goto LAB_01111358;
    }
    break;
  case 0x141:
    iVar4 = (int)param_3[3];
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
                    /* catch() { ... } // from try @ 01111050 with catch @ 0111112c */
      puVar22 = (undefined4 *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar22 = (undefined4 *)*param_3;
      *param_3 = (long)(puVar22 + 2);
    }
    *(short *)(param_1 + 0x1a) = (short)*puVar22;
    iVar4 = (int)param_3[3];
                    /* try { // try from 0111069c to 012106ab has its CatchHandler @ 01110790 */
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar22 = (undefined4 *)(param_3[1] + (long)iVar4);
                    /* catch() { ... } // from try @ 01111044 with catch @ 0111113c */
    }
    else {
      puVar22 = (undefined4 *)*param_3;
      *param_3 = (long)(puVar22 + 2);
    }
    *(short *)((long)param_1 + 0xd2) = (short)*puVar22;
    break;
  case 0x142:
    iVar4 = (int)param_3[3];
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar21 = (uint *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar21 = (uint *)*param_3;
                    /* try { // try from 011106e0 to 012106ff has its CatchHandler @ 01110794 */
      *param_3 = (long)(puVar21 + 2);
    }
    uVar16 = *puVar21;
    if ((uVar16 & 0xf) != 0) {
      if (*(int *)((long)param_1 + 0xc) != 0) goto LAB_01111240;
      TIFFWarningExt(param_1[0x77],*param_1,"Nonstandard tile width %d, convert file",uVar16);
    }
    uVar13 = *(uint *)(param_1 + 2);
    *(uint *)((long)param_1 + 100) = uVar16;
    goto LAB_01110778;
  case 0x143:
    iVar4 = (int)param_3[3];
                    /* try { // try from 01110730 to 01210733 has its CatchHandler @ 0111078c */
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
                    /* catch() { ... } // from try @ 01111028 with catch @ 0111114c */
      puVar21 = (uint *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar21 = (uint *)*param_3;
                    /* try { // try from 01110740 to 01210743 has its CatchHandler @ 01110788 */
      *param_3 = (long)(puVar21 + 2);
    }
                    /* try { // try from 01110744 to 01210797 has its CatchHandler @ 01110610 */
    uVar16 = *puVar21;
    if ((uVar16 & 0xf) != 0) {
      if (*(int *)((long)param_1 + 0xc) != 0) goto LAB_01111240;
      TIFFWarningExt(param_1[0x77],*param_1,"Nonstandard tile length %d, convert file",uVar16);
    }
    uVar13 = *(uint *)(param_1 + 2);
    *(uint *)(param_1 + 0xd) = uVar16;
LAB_01110778:
    *(uint *)(param_1 + 2) = uVar13 | 0x400;
    break;
  case 0x14a:
                    /* catch() { ... } // from try @ 01110740 with catch @ 01110788 */
    if ((*(byte *)((long)param_1 + 0x11) >> 5 & 1) != 0) {
      TIFFErrorExt(param_1[0x77],"_TIFFVSetField","%s: Sorry, cannot nest SubIFDs",*param_1);
      return 0;
    }
                    /* catch() { ... } // from try @ 01110730 with catch @ 0111078c */
    iVar4 = (int)param_3[3];
                    /* catch() { ... } // from try @ 0111069c with catch @ 01110790 */
                    /* catch() { ... } // from try @ 011106e0 with catch @ 01110794 */
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
                    /* catch() { ... } // from try @ 01111274 with catch @ 011112b0 */
      puVar22 = (undefined4 *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar22 = (undefined4 *)*param_3;
      *param_3 = (long)(puVar22 + 2);
    }
    *(short *)((long)param_1 + 0xfc) = (short)*puVar22;
    iVar4 = (int)param_3[3];
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar7 = (undefined8 *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar7 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar7 + 1);
    }
    pcVar25 = (char *)*puVar7;
    uVar2 = *(ushort *)((long)param_1 + 0xfc);
    if ((void *)param_1[0x20] != (void *)0x0) {
      _TIFFfree((void *)param_1[0x20]);
      param_1[0x20] = 0;
    }
    if (pcVar25 != (char *)0x0) {
      sVar26 = (ulong)uVar2 << 3;
      pvVar9 = _TIFFmalloc(sVar26);
      param_1[0x20] = pvVar9;
      goto joined_r0x01110dc8;
    }
    break;
  case 0x14d:
    iVar4 = (int)param_3[3];
    if (iVar4 < 0) {
      iVar5 = iVar4 + 8;
      *(int *)(param_3 + 3) = iVar5;
      if (0 < iVar5) goto LAB_01110828;
      uVar2 = *(ushort *)(param_3[1] + (long)iVar4);
      uVar14 = (ulong)uVar2;
      if ((-1 < iVar5) || (*(int *)(param_3 + 3) = iVar4 + 0x10, 0 < iVar4 + 0x10))
      goto LAB_01110838;
      puVar7 = (undefined8 *)(param_3[1] + (long)iVar5);
      uVar13 = (uint)*(ushort *)((long)param_1 + 0x82);
      uVar16 = uVar13;
      if (uVar2 == 0) goto LAB_01111188;
    }
    else {
LAB_01110828:
      puVar19 = (ushort *)*param_3;
                    /* try { // try from 01110830 to 01210917 has its CatchHandler @ 01110830
                       catch() { ... } // from try @ 01110830 with catch @ 01110830
                       catch() { ... } // from try @ 011109d0 with catch @ 01110830 */
      *param_3 = (long)(puVar19 + 4);
      uVar14 = (ulong)*puVar19;
LAB_01110838:
      puVar7 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar7 + 1);
      uVar13 = (uint)*(ushort *)((long)param_1 + 0x82);
      uVar16 = uVar13;
      if ((int)uVar14 == 0) {
LAB_01111188:
        TIFFErrorExt(param_1[0x77],"TIFFSetField",
                     "%s: Invalid InkNames value; expecting %d names, found %d",*param_1,uVar13,
                     uVar13 - (uVar16 & 0xffff));
        return 0;
      }
    }
    pcVar15 = (char *)*puVar7;
    pcVar25 = pcVar15;
    if (uVar13 != 0) {
      pcVar23 = pcVar15;
      uVar16 = uVar13;
      do {
        if (pcVar15 + uVar14 <= pcVar23) goto LAB_01111188;
        pcVar25 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar25;
      } while ((cVar1 != '\0') || (uVar16 = uVar16 - 1, (uVar16 & 0xffff) != 0));
    }
    iVar4 = (int)((long)pcVar25 - (long)pcVar15);
    if (iVar4 == 0) {
      return 0;
    }
    if ((void *)param_1[0x27] != (void *)0x0) {
      _TIFFfree((void *)param_1[0x27]);
      param_1[0x27] = 0;
    }
    if (pcVar15 != (char *)0x0) {
      uVar14 = (long)pcVar25 - (long)pcVar15 & 0xffffffff;
      pvVar9 = _TIFFmalloc(uVar14);
      param_1[0x27] = pvVar9;
      if (pvVar9 != (void *)0x0) {
        _TIFFmemcpy(pvVar9,pcVar15,uVar14);
      }
    }
    *(int *)(param_1 + 0x26) = iVar4;
    break;
  case 0x152:
    iVar5 = (int)param_3[3];
    puVar19 = (ushort *)*param_3;
    iVar4 = iVar5;
    if ((iVar5 < 0) && (iVar4 = iVar5 + 8, iVar4 < 1)) {
      puVar24 = (ushort *)(param_3[1] + (long)iVar5);
    }
    else {
      puVar24 = puVar19;
      puVar19 = puVar19 + 4;
    }
    uVar2 = *puVar24;
    uVar14 = (ulong)uVar2;
    if (uVar2 <= *(ushort *)((long)param_1 + 0x82)) {
      puVar24 = (ushort *)(param_3[1] + (long)iVar4);
      if (0 < iVar4 + 8 || -1 < iVar4) {
        puVar24 = puVar19;
      }
      pcVar25 = *(char **)puVar24;
      if ((uVar2 == 0) || (pcVar25 != (char *)0x0)) {
        if (uVar2 != 0) {
                    /* try { // try from 01110918 to 0121092b has its CatchHandler @ 01110a20 */
          uVar20 = 0;
          do {
            if (2 < *(ushort *)(pcVar25 + uVar20 * 2)) {
              if (*(ushort *)(pcVar25 + uVar20 * 2) != 999) goto LAB_01111034;
              (pcVar25 + uVar20 * 2)[0] = '\x02';
              (pcVar25 + uVar20 * 2)[1] = '\0';
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 < uVar14);
        }
        *(ushort *)((long)param_1 + 0xd4) = uVar2;
        if ((void *)param_1[0x1b] != (void *)0x0) {
          _TIFFfree((void *)param_1[0x1b]);
          param_1[0x1b] = 0;
        }
        if (pcVar25 != (char *)0x0) {
          sVar26 = (ulong)uVar2 << 1;
          pvVar9 = _TIFFmalloc(sVar26);
          param_1[0x1b] = pvVar9;
                    /* try { // try from 0111096c to 0121098b has its CatchHandler @ 01110a24 */
          goto joined_r0x01110dc8;
        }
        break;
      }
    }
LAB_01111034:
    lVar11 = TIFFFieldWithTag(param_1,param_2 & 0xffffffff);
    uVar10 = param_1[0x77];
                    /* try { // try from 01111044 to 0121104b has its CatchHandler @ 0111113c */
    uVar12 = *param_1;
    if (lVar11 == 0) {
                    /* try { // try from 01111054 to 01211167 has its CatchHandler @ 01110fe0 */
      pcVar25 = "Unknown";
    }
    else {
      pcVar25 = *(char **)(lVar11 + 0x20);
                    /* try { // try from 01111050 to 01211053 has its CatchHandler @ 0111112c */
    }
    pcVar15 = "%s: Bad value %u for \"%s\" tag";
LAB_01111280:
                    /* try { // try from 01111280 to 01211283 has its CatchHandler @ 011112a0 */
    TIFFErrorExt(uVar10,"_TIFFVSetField",pcVar15,uVar12,uVar14,pcVar25);
    return 0;
                    /* try { // try from 01111284 to 012112c3 has its CatchHandler @ 01111248 */
  case 0x153:
    iVar4 = (int)param_3[3];
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar19 = (ushort *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar19 = (ushort *)*param_3;
      *param_3 = (long)(puVar19 + 4);
    }
    uVar2 = *puVar19;
    uVar14 = (ulong)uVar2;
    uVar16 = (uint)uVar2;
    if (5 < uVar16 - 1) goto LAB_01111034;
    *(ushort *)((long)param_1 + 0x76) = uVar2;
                    /* try { // try from 011109bc to 012109bf has its CatchHandler @ 01110a1c */
                    /* try { // try from 011109cc to 012109cf has its CatchHandler @ 01110a18 */
                    /* try { // try from 011109d0 to 01210a27 has its CatchHandler @ 01110830 */
    if (((uVar16 == 5) && (*(short *)((long)param_1 + 0x74) == 0x20)) &&
       ((code *)param_1[0x7d] == _TIFFSwab32BitData)) goto switchD_011100d0_caseD_10;
    if (((uVar16 - 5 < 2) && (*(short *)((long)param_1 + 0x74) == 0x40)) &&
       ((code *)param_1[0x7d] == _TIFFSwab64BitData)) goto switchD_011100d0_caseD_20;
    break;
  case 0x154:
                    /* catch() { ... } // from try @ 011109cc with catch @ 01110a18 */
    if ((*(byte *)((long)param_1 + 0x12) >> 6 & 1) == 0) {
                    /* catch() { ... } // from try @ 011109bc with catch @ 01110a1c */
      iVar4 = *(int *)((long)param_3 + 0x1c);
                    /* catch() { ... } // from try @ 01110918 with catch @ 01110a20 */
                    /* catch() { ... } // from try @ 0111096c with catch @ 01110a24 */
      if ((iVar4 < 0) && (*(int *)((long)param_3 + 0x1c) = iVar4 + 0x10, iVar4 + 0x10 < 1)) {
        puVar7 = (undefined8 *)(param_3[2] + (long)iVar4);
      }
      else {
        puVar7 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar7 + 1);
      }
      uVar10 = *puVar7;
      uVar2 = *(ushort *)((long)param_1 + 0x82);
      uVar14 = (ulong)uVar2;
      if ((void *)param_1[0x12] != (void *)0x0) {
        _TIFFfree((void *)param_1[0x12]);
      }
      pvVar9 = _TIFFmalloc(uVar14 << 3);
      iVar4 = 1;
      param_1[0x12] = pvVar9;
      if ((uVar2 == 0) || (pvVar9 == (void *)0x0)) goto switchD_011100d0_caseD_9;
      if (3 < uVar2) {
        uVar20 = uVar14 & 3;
        lVar11 = uVar14 - uVar20;
        if (lVar11 != 0) {
          puVar7 = (undefined8 *)((long)pvVar9 + uVar14 * 8 + -0x10);
          do {
            puVar7[-1] = uVar10;
            puVar7[-2] = uVar10;
            puVar7[1] = uVar10;
            *puVar7 = uVar10;
            lVar11 = lVar11 + -4;
            puVar7 = puVar7 + -4;
          } while (lVar11 != 0);
          uVar14 = uVar20;
          if ((int)uVar20 == 0) break;
        }
      }
      lVar11 = uVar14 - 1;
      iVar4 = 1;
      do {
        *(undefined8 *)((long)pvVar9 + lVar11 * 8) = uVar10;
        lVar11 = lVar11 + -1;
                    /* catch() { ... } // from try @ 01110ed8 with catch @ 01110f18 */
      } while (lVar11 != -1);
      goto switchD_011100d0_caseD_9;
    }
    iVar4 = (int)param_3[3];
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar7 = (undefined8 *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar7 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar7 + 1);
    }
    pcVar25 = (char *)*puVar7;
    uVar2 = *(ushort *)((long)param_1 + 0x82);
    if ((void *)param_1[0x12] != (void *)0x0) {
      _TIFFfree((void *)param_1[0x12]);
      param_1[0x12] = 0;
    }
    if (pcVar25 != (char *)0x0) {
      sVar26 = (ulong)uVar2 << 3;
      pvVar9 = _TIFFmalloc(sVar26);
      param_1[0x12] = pvVar9;
      goto joined_r0x01110dc8;
    }
    break;
  case 0x155:
    if ((*(byte *)((long)param_1 + 0x12) >> 6 & 1) == 0) {
      iVar4 = *(int *)((long)param_3 + 0x1c);
      if ((iVar4 < 0) && (*(int *)((long)param_3 + 0x1c) = iVar4 + 0x10, iVar4 + 0x10 < 1)) {
        puVar7 = (undefined8 *)(param_3[2] + (long)iVar4);
      }
      else {
        puVar7 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar7 + 1);
      }
      uVar10 = *puVar7;
      uVar2 = *(ushort *)((long)param_1 + 0x82);
      uVar14 = (ulong)uVar2;
      if ((void *)param_1[0x13] != (void *)0x0) {
        _TIFFfree((void *)param_1[0x13]);
      }
      pvVar9 = _TIFFmalloc(uVar14 << 3);
      iVar4 = 1;
      param_1[0x13] = pvVar9;
      if ((uVar2 == 0) || (pvVar9 == (void *)0x0)) goto switchD_011100d0_caseD_9;
      if (3 < uVar2) {
        uVar20 = uVar14 & 3;
        lVar11 = uVar14 - uVar20;
        if (lVar11 != 0) {
          puVar7 = (undefined8 *)((long)pvVar9 + uVar14 * 8 + -0x10);
          do {
            puVar7[-1] = uVar10;
            puVar7[-2] = uVar10;
            puVar7[1] = uVar10;
            *puVar7 = uVar10;
            lVar11 = lVar11 + -4;
            puVar7 = puVar7 + -4;
          } while (lVar11 != 0);
          uVar14 = uVar20;
          if ((int)uVar20 == 0) break;
        }
      }
      lVar11 = uVar14 - 1;
      iVar4 = 1;
      do {
                    /* try { // try from 01110f30 to 01210f87 has its CatchHandler @ 01110f30
                       catch() { ... } // from try @ 01110f30 with catch @ 01110f30
                       catch() { ... } // from try @ 01110f9c with catch @ 01110f30 */
        *(undefined8 *)((long)pvVar9 + lVar11 * 8) = uVar10;
        lVar11 = lVar11 + -1;
      } while (lVar11 != -1);
      goto switchD_011100d0_caseD_9;
    }
    iVar4 = (int)param_3[3];
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar7 = (undefined8 *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar7 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar7 + 1);
    }
    pcVar25 = (char *)*puVar7;
    uVar2 = *(ushort *)((long)param_1 + 0x82);
    if ((void *)param_1[0x13] != (void *)0x0) {
      _TIFFfree((void *)param_1[0x13]);
      param_1[0x13] = 0;
    }
    if (pcVar25 != (char *)0x0) {
      sVar26 = (ulong)uVar2 << 3;
      pvVar9 = _TIFFmalloc(sVar26);
      param_1[0x13] = pvVar9;
      goto joined_r0x01110dc8;
    }
    break;
  case 0x212:
    iVar4 = (int)param_3[3];
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar22 = (undefined4 *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar22 = (undefined4 *)*param_3;
      *param_3 = (long)(puVar22 + 2);
    }
    *(short *)(param_1 + 0x21) = (short)*puVar22;
    iVar4 = (int)param_3[3];
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar22 = (undefined4 *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar22 = (undefined4 *)*param_3;
      *param_3 = (long)(puVar22 + 2);
    }
    *(short *)((long)param_1 + 0x10a) = (short)*puVar22;
    break;
  case 0x213:
    iVar4 = (int)param_3[3];
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar22 = (undefined4 *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar22 = (undefined4 *)*param_3;
      *param_3 = (long)(puVar22 + 2);
    }
    *(short *)((long)param_1 + 0x10c) = (short)*puVar22;
    break;
  case 0x214:
    iVar4 = (int)param_3[3];
    if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
      puVar7 = (undefined8 *)(param_3[1] + (long)iVar4);
    }
    else {
      puVar7 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar7 + 1);
    }
    pcVar25 = (char *)*puVar7;
    if ((void *)param_1[0x25] != (void *)0x0) {
      _TIFFfree((void *)param_1[0x25]);
      param_1[0x25] = 0;
    }
    if (pcVar25 != (char *)0x0) {
      pvVar9 = _TIFFmalloc(0x18);
      param_1[0x25] = pvVar9;
      if (pvVar9 != (void *)0x0) {
        sVar26 = 0x18;
        goto LAB_01111358;
      }
    }
    break;
  default:
    switch(uVar16) {
    case 0x80e3:
      iVar4 = (int)param_3[3];
      if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
        psVar17 = (short *)(param_3[1] + (long)iVar4);
      }
      else {
        psVar17 = (short *)*param_3;
        *param_3 = (long)(psVar17 + 4);
      }
      sVar3 = *psVar17;
      iVar4 = 1;
      *(ushort *)((long)param_1 + 0xd4) = (ushort)(sVar3 != 0);
      if (sVar3 == 0) goto switchD_011100d0_caseD_9;
      local_58 = CONCAT62(local_58._2_6_,1);
      if ((void *)param_1[0x1b] != (void *)0x0) {
        _TIFFfree((void *)param_1[0x1b]);
        param_1[0x1b] = 0;
      }
      pvVar9 = _TIFFmalloc(2);
      param_1[0x1b] = pvVar9;
      if (pvVar9 != (void *)0x0) {
        pcVar25 = (char *)&local_58;
        sVar26 = 2;
        goto LAB_01111358;
      }
      break;
    case 0x80e4:
      iVar4 = (int)param_3[3];
      if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
        puVar21 = (uint *)(param_3[1] + (long)iVar4);
      }
      else {
        puVar21 = (uint *)*param_3;
        *param_3 = (long)(puVar21 + 2);
      }
      uVar16 = *puVar21 & 0xffff;
      uVar14 = (ulong)uVar16;
      if (3 < uVar16) goto LAB_01111034;
      *(short *)((long)param_1 + 0x76) =
           (short)(0x3000100020004 >> ((ulong)((*puVar21 & 0xffff) << 4) & 0x3f));
      break;
    case 0x80e5:
      iVar4 = (int)param_3[3];
      if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
        puVar22 = (undefined4 *)(param_3[1] + (long)iVar4);
      }
      else {
        puVar22 = (undefined4 *)*param_3;
        *param_3 = (long)(puVar22 + 2);
      }
      *(undefined4 *)(param_1 + 0xc) = *puVar22;
      break;
    case 0x80e6:
      iVar4 = (int)param_3[3];
      if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
        iVar4 = *(int *)(param_3[1] + (long)iVar4);
      }
      else {
        piVar6 = (int *)*param_3;
        *param_3 = (long)(piVar6 + 2);
        iVar4 = *piVar6;
      }
      if (iVar4 == 0) goto LAB_0111123c;
      *(int *)((long)param_1 + 0x6c) = iVar4;
      break;
    default:
      if (uVar16 != 0x1001b) goto switchD_0110feb8_caseD_ff;
      iVar4 = (int)param_3[3];
      if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
        psVar17 = (short *)(param_3[1] + (long)iVar4);
      }
      else {
        psVar17 = (short *)*param_3;
        *param_3 = (long)(psVar17 + 4);
      }
      uVar16 = *(uint *)(param_1 + 2) | 0x400000;
      if (*psVar17 != 1) {
        uVar16 = *(uint *)(param_1 + 2) & 0xffbfffff;
      }
      *(uint *)(param_1 + 2) = uVar16;
    }
  }
  iVar4 = 1;
switchD_011100d0_caseD_9:
  lVar11 = TIFFFieldWithTag(param_1,param_2 & 0xffffffff);
  if (lVar11 != 0) {
    uVar2 = *(ushort *)(lVar11 + 0x18) >> 5;
    param_1[(ulong)uVar2 + 7] =
         1L << ((ulong)*(ushort *)(lVar11 + 0x18) & 0x1f) | param_1[(ulong)uVar2 + 7];
  }
  *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 8;
  return iVar4;
}

