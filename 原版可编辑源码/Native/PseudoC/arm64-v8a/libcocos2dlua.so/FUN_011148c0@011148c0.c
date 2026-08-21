
/* WARNING: Removing unreachable block (ram,0x0111582c) */
/* WARNING: Removing unreachable block (ram,0x01114ebc) */
/* WARNING: Removing unreachable block (ram,0x0111609c) */
/* WARNING: Removing unreachable block (ram,0x011169e0) */
/* WARNING: Removing unreachable block (ram,0x011162dc) */
/* WARNING: Removing unreachable block (ram,0x01115ff0) */
/* WARNING: Removing unreachable block (ram,0x01115a58) */
/* WARNING: Removing unreachable block (ram,0x01116a2c) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_011148c0(long param_1,ushort *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong *puVar7;
  char *pcVar8;
  ushort uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  ulong *local_78;
  float local_6c;
  undefined8 local_68;
  
  iVar5 = *(int *)(param_1 + 0x3f8);
  uVar9 = *param_2;
  if (iVar5 != 0) {
    lVar11 = *(long *)(param_1 + 0x3f0);
    iVar15 = -1;
    do {
      iVar2 = iVar15 + iVar5;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      uVar4 = **(uint **)(lVar11 + (long)iVar2 * 8);
      if (uVar4 == uVar9) {
        iVar5 = -iVar2;
        uVar12 = (long)iVar2;
        goto LAB_01114944;
      }
      if (uVar9 <= uVar4) {
        iVar5 = iVar2;
        iVar2 = iVar15;
      }
      iVar15 = iVar2;
    } while (iVar15 + 1 != iVar5);
  }
LAB_01114968:
  TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFFetchNormalTag",
               "No definition found for tag %d");
  return 0;
LAB_01115350:
  _TIFFfree(puVar19);
  uVar4 = 4;
  if (lVar11 == 0) {
    uVar6 = FUN_01115230();
    return uVar6;
  }
  goto LAB_01115220;
  while (iVar5 = iVar5 + 1, uVar12 = uVar13 - 1,
        **(uint **)(lVar11 + (uVar13 - 1) * 8) == (uint)uVar9) {
LAB_01114944:
    uVar13 = uVar12;
    if (iVar5 == 0) {
      uVar13 = 0;
      goto LAB_011149b0;
    }
  }
  if (iVar5 == 2) goto LAB_01114968;
LAB_011149b0:
  lVar11 = *(long *)(lVar11 + (uVar13 & 0xffffffff) * 8);
  uVar3 = local_68._4_4_;
  switch(*(undefined4 *)(lVar11 + 0x10)) {
  case 1:
    uVar4 = FUN_01118178(param_1,param_2,&local_68);
    puVar19 = local_68;
    if (uVar4 != 0) goto switchD_01114c7c_caseD_5;
    uVar10 = *(uint *)(param_2 + 4);
    if (uVar10 == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = 0;
      do {
        if (*(char *)((long)local_68 + lVar14) == '\0') break;
        lVar14 = lVar14 + 1;
      } while ((uint)lVar14 < uVar10);
    }
    uVar1 = (int)lVar14 + 1;
    if (uVar1 < uVar10) {
      TIFFWarningExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFFetchNormalTag",
                     "ASCII value for tag \"%s\" contains null byte in value; value incorrectly truncated during reading due to implementation limitations"
                     ,*(undefined8 *)(lVar11 + 0x20));
      puVar7 = local_68;
    }
    else {
      puVar7 = local_68;
      if (uVar1 != uVar10) {
        TIFFWarningExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFFetchNormalTag",
                       "ASCII value for tag \"%s\" does not end in null byte",
                       *(undefined8 *)(lVar11 + 0x20));
        if (((*(long *)(param_2 + 4) + 1U & 0xffffffff00000000) != 0) ||
           (puVar19 = _TIFFmalloc(*(long *)(param_2 + 4) + 1U), puVar19 == (ulong *)0x0)) {
          if (local_68 == (ulong *)0x0) {
            return 0;
          }
                    /* catch() { ... } // from try @ 01115704 with catch @ 01115720 */
          _TIFFfree(local_68);
          return 0;
        }
        _TIFFmemcpy(puVar19,local_68,(ulong)*(uint *)(param_2 + 4));
        *(undefined1 *)((long)puVar19 + (ulong)*(uint *)(param_2 + 4)) = 0;
        puVar7 = puVar19;
        if (local_68 != (ulong *)0x0) {
          _TIFFfree(local_68);
        }
      }
    }
    local_68 = puVar7;
    iVar5 = TIFFSetField(param_1,*param_2,puVar19);
    if (puVar19 != (ulong *)0x0) {
      _TIFFfree(puVar19);
    }
    goto joined_r0x01115214;
  case 2:
    if (*(long *)(param_2 + 4) != 1) {
      uVar4 = 1;
      if (lVar11 != 0) goto LAB_01115220;
      goto code_r0x01115230;
    }
    uVar4 = 2;
    switch(param_2[1]) {
    case 1:
      uVar10 = (uint)(byte)param_2[8];
      goto LAB_01116014;
    default:
      goto switchD_01114a8c_caseD_2;
    case 3:
    case 8:
      uVar10 = (uint)param_2[8];
      local_68 = (ulong *)CONCAT62(local_68._2_6_,param_2[8]);
      if ((*(uint *)(param_1 + 0x10) >> 7 & 1) == 0) goto LAB_01115680;
      TIFFSwabShort(&local_68);
      uVar10 = (uint)local_68 & 0xffff;
      if (0xff < (ushort)local_68) goto LAB_01115688;
      break;
    case 4:
    case 9:
      uVar10 = *(uint *)(param_2 + 8);
      local_68 = (ulong *)CONCAT44(uVar3,uVar10);
      if (*(char *)(param_1 + 0x10) < '\0') {
        TIFFSwabLong(&local_68);
        uVar10 = (uint)local_68;
      }
LAB_01115680:
      if (0xff < uVar10) {
LAB_01115688:
        uVar4 = 4;
        if (lVar11 == 0) {
          uVar6 = FUN_01115230();
          return uVar6;
        }
        goto LAB_01115220;
      }
      break;
    case 6:
      uVar10 = (uint)(char)param_2[8];
      if ((char)param_2[8] < '\0') goto LAB_01115688;
      goto LAB_01116014;
    case 0x10:
    case 0x11:
      uVar4 = *(uint *)(param_1 + 0x10);
      if ((uVar4 >> 0x13 & 1) == 0) {
        local_78 = (ulong *)CONCAT44(local_78._4_4_,*(uint *)(param_2 + 8));
        uVar10 = *(uint *)(param_2 + 8);
        if ((uVar4 >> 7 & 1) != 0) {
          TIFFSwabLong(&local_78);
          uVar4 = *(uint *)(param_1 + 0x10);
          uVar10 = (uint)local_78;
        }
        uVar12 = (ulong)uVar10;
        if ((uVar4 >> 0xb & 1) == 0) {
                    /* try { // try from 011156c0 to 01215703 has its CatchHandler @ 011156c0
                       catch() { ... } // from try @ 011156c0 with catch @ 011156c0
                       catch() { ... } // from try @ 01115708 with catch @ 011156c0 */
          uVar13 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar12,0);
          if (uVar13 != uVar12) {
code_r0x01116004:
            uVar4 = 3;
            goto switchD_01114a8c_caseD_2;
          }
          lVar14 = (**(code **)(param_1 + 0x3c0))(*(undefined8 *)(param_1 + 0x3b8),&local_68,8);
          if (lVar14 != 8) {
            uVar6 = FUN_01116004();
            return uVar6;
          }
        }
        else {
          if (*(ulong *)(param_1 + 0x3a0) < uVar12 + 8) goto code_r0x01116004;
          _TIFFmemcpy(&local_68,(void *)(*(long *)(param_1 + 0x398) + uVar12),8);
        }
        uVar4 = *(uint *)(param_1 + 0x10);
      }
      else {
        local_68 = *(ulong **)(param_2 + 8);
      }
      if ((uVar4 >> 7 & 1) != 0) {
        TIFFSwabLong8(&local_68);
      }
      uVar10 = (uint)local_68;
      if ((ulong *)0xff < local_68) {
        uVar10 = 0;
      }
      uVar4 = 0;
      if ((ulong *)0xff < local_68) {
        uVar4 = 4;
      }
      if (uVar4 != 0) goto switchD_01114a8c_caseD_2;
    }
    uVar9 = *param_2;
LAB_01116014:
    uVar6 = TIFFSetField(param_1,uVar9,uVar10 & 0xff);
    iVar5 = (int)uVar6;
    goto joined_r0x01116ab4;
  default:
    goto LAB_01114984;
  case 4:
    uVar4 = FUN_01116b5c(param_1,param_2,&local_68);
    if ((uVar4 == 0) &&
       (uVar6 = TIFFSetField(param_1,*param_2,(ulong)local_68 & 0xffff), (int)uVar6 == 0)) {
      return uVar6;
    }
    goto switchD_01114c7c_caseD_5;
  case 6:
    if (*(long *)(param_2 + 4) != 1) goto LAB_01114eb4;
    uVar4 = 2;
    switch(param_2[1]) {
    case 1:
      fVar20 = (float)(uint)(byte)param_2[8];
      break;
    default:
      goto switchD_01114c7c_caseD_5;
    case 3:
      local_68 = (ulong *)CONCAT62(local_68._2_6_,param_2[8]);
      fVar20 = (float)(uint)param_2[8];
      if ((*(uint *)(param_1 + 0x10) >> 7 & 1) != 0) {
        TIFFSwabShort(&local_68);
        fVar20 = (float)((uint)local_68 & 0xffff);
      }
      break;
    case 4:
      local_6c = *(float *)(param_2 + 8);
      fVar20 = local_6c;
      if (*(char *)(param_1 + 0x10) < '\0') {
        TIFFSwabLong(&local_6c);
        fVar20 = local_6c;
      }
      break;
    case 6:
      fVar20 = (float)(int)(char)param_2[8];
      if ((char)param_2[8] < '\0') {
LAB_01115a50:
        uVar4 = 4;
        goto switchD_01114a8c_caseD_2;
      }
      break;
    case 8:
      local_68 = (ulong *)CONCAT62(local_68._2_6_,param_2[8]);
      uVar9 = param_2[8];
      if ((*(uint *)(param_1 + 0x10) >> 7 & 1) != 0) {
        TIFFSwabShort(&local_68);
        uVar9 = (ushort)local_68;
      }
      fVar20 = (float)(int)(short)uVar9;
      if (-1 < (short)uVar9) break;
LAB_01115824:
      uVar4 = 4;
      goto switchD_01114c7c_caseD_5;
    case 9:
      uVar12 = (ulong)*(uint *)(param_2 + 8);
      local_68 = (ulong *)CONCAT44(uVar3,*(uint *)(param_2 + 8));
      if (*(char *)(param_1 + 0x10) < '\0') {
        TIFFSwabLong(&local_68);
        uVar12 = (ulong)local_68 & 0xffffffff;
      }
      uVar4 = (uint)(uVar12 >> 0x1d);
      fVar20 = (float)uVar12;
      if ((uVar4 >> 2 == 0) || (uVar4 = uVar4 & 4, fVar20 = local_6c, (uVar12 >> 0x1d & 4) == 0))
      break;
      goto switchD_01114c7c_caseD_5;
    case 0x10:
    case 0x11:
      uVar4 = *(uint *)(param_1 + 0x10);
      if ((uVar4 >> 0x13 & 1) == 0) {
        local_78 = (ulong *)CONCAT44(local_78._4_4_,*(uint *)(param_2 + 8));
        uVar10 = *(uint *)(param_2 + 8);
        if ((uVar4 >> 7 & 1) != 0) {
          TIFFSwabLong(&local_78);
          uVar4 = *(uint *)(param_1 + 0x10);
          uVar10 = (uint)local_78;
        }
        uVar12 = (ulong)uVar10;
        if ((uVar4 >> 0xb & 1) == 0) {
          uVar13 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar12,0);
          if ((uVar13 != uVar12) ||
             (lVar14 = (**(code **)(param_1 + 0x3c0))(*(undefined8 *)(param_1 + 0x3b8),&local_68,8),
             lVar14 != 8)) {
LAB_01115fe8:
            uVar4 = 3;
            goto switchD_01114c7c_caseD_5;
          }
        }
        else {
          if (*(ulong *)(param_1 + 0x3a0) < uVar12 + 8) goto LAB_01115fe8;
          _TIFFmemcpy(&local_68,(void *)(*(long *)(param_1 + 0x398) + uVar12),8);
        }
        uVar4 = *(uint *)(param_1 + 0x10);
      }
      else {
        local_68 = *(ulong **)(param_2 + 8);
      }
      if ((uVar4 >> 7 & 1) != 0) {
        TIFFSwabLong8(&local_68);
      }
      if ((ulong)local_68 >> 0x20 != 0) goto LAB_01115824;
      fVar20 = SUB84(local_68,0);
    }
    local_6c = fVar20;
    uVar6 = TIFFSetField(param_1,*param_2,local_6c);
    iVar5 = (int)uVar6;
joined_r0x01116ab4:
    if (iVar5 != 0) {
      return 1;
    }
    return uVar6;
  case 8:
    if (*(long *)(param_2 + 4) != 1) goto LAB_01114eb4;
    uVar4 = 2;
    switch(param_2[1]) {
    case 1:
      local_78 = (ulong *)(ulong)(byte)param_2[8];
      uVar6 = FUN_01115884();
      return uVar6;
    case 3:
      local_68 = (ulong *)CONCAT62(local_68._2_6_,param_2[8]);
      puVar19 = (ulong *)(ulong)param_2[8];
      if ((*(uint *)(param_1 + 0x10) >> 7 & 1) != 0) {
        TIFFSwabShort(&local_68);
        puVar19 = (ulong *)((ulong)local_68 & 0xffff);
      }
      goto code_r0x01115884;
    case 4:
      local_78 = (ulong *)(ulong)*(uint *)(param_2 + 8);
      local_68 = (ulong *)CONCAT44(uVar3,*(uint *)(param_2 + 8));
      if (*(char *)(param_1 + 0x10) < '\0') {
        TIFFSwabLong(&local_68);
        local_78 = (ulong *)((ulong)local_68 & 0xffffffff);
      }
      uVar6 = FUN_01115884();
      return uVar6;
    case 6:
      puVar19 = (ulong *)(long)(char)param_2[8];
      if ((long)(char)param_2[8] < 0) goto LAB_01115a50;
code_r0x01115884:
      local_78 = puVar19;
      uVar9 = *param_2;
      puVar19 = local_78;
LAB_0111588c:
      uVar6 = TIFFSetField(param_1,uVar9,puVar19);
      iVar5 = (int)uVar6;
      goto joined_r0x01116ab4;
    case 8:
      local_68 = (ulong *)CONCAT62(local_68._2_6_,param_2[8]);
      uVar9 = param_2[8];
      if ((*(uint *)(param_1 + 0x10) >> 7 & 1) != 0) {
        TIFFSwabShort(&local_68);
        uVar9 = (ushort)local_68;
      }
      if (-1 < (short)uVar9) {
        local_78 = (ulong *)(long)(short)uVar9;
        uVar6 = FUN_01115884();
        return uVar6;
      }
LAB_01116094:
      uVar4 = 4;
      break;
    case 9:
      uVar12 = (ulong)*(uint *)(param_2 + 8);
      local_68 = (ulong *)CONCAT44(uVar3,*(uint *)(param_2 + 8));
      if (*(char *)(param_1 + 0x10) < '\0') {
        TIFFSwabLong(&local_68);
        uVar12 = (ulong)local_68 & 0xffffffff;
      }
      uVar4 = (uint)(uVar12 >> 0x1d);
      if (uVar4 >> 2 == 0) {
        local_78 = (ulong *)(long)(int)uVar12;
        uVar6 = FUN_01115884();
        return uVar6;
      }
      uVar4 = uVar4 & 4;
      if ((uVar12 >> 0x1d & 4) == 0) {
        uVar6 = FUN_01115884();
        return uVar6;
      }
      break;
    case 0x10:
      uVar4 = *(uint *)(param_1 + 0x10);
      if ((uVar4 >> 0x13 & 1) != 0) {
        local_78 = *(ulong **)(param_2 + 8);
        if ((uVar4 >> 7 & 1) == 0) {
          uVar6 = FUN_01115884();
          return uVar6;
        }
LAB_011162b8:
        TIFFSwabLong8(&local_78);
        uVar6 = FUN_01115884();
        return uVar6;
      }
      local_68 = (ulong *)CONCAT44(uVar3,*(uint *)(param_2 + 8));
      uVar10 = *(uint *)(param_2 + 8);
      if ((uVar4 >> 7 & 1) != 0) {
        TIFFSwabLong(&local_68);
        uVar4 = *(uint *)(param_1 + 0x10);
        uVar10 = (uint)(float)local_68;
      }
      uVar12 = (ulong)uVar10;
      if ((uVar4 >> 0xb & 1) == 0) {
        uVar13 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar12,0);
        if ((uVar13 == uVar12) &&
           (lVar14 = (**(code **)(param_1 + 0x3c0))(*(undefined8 *)(param_1 + 0x3b8),&local_78,8),
           lVar14 == 8)) {
          uVar6 = FUN_011162b0();
          return uVar6;
        }
      }
      else if (uVar12 + 8 <= *(ulong *)(param_1 + 0x3a0)) {
        _TIFFmemcpy(&local_78,(void *)(*(long *)(param_1 + 0x398) + uVar12),8);
        puVar19 = local_78;
        if ((*(uint *)(param_1 + 0x10) >> 7 & 1) != 0) goto LAB_011162b8;
        goto code_r0x01115884;
      }
      goto LAB_011169d8;
    case 0x11:
      uVar4 = *(uint *)(param_1 + 0x10);
      if ((uVar4 >> 0x13 & 1) != 0) {
        local_68 = *(ulong **)(param_2 + 8);
        if ((uVar4 >> 7 & 1) != 0) {
          TIFFSwabLong8(&local_68);
        }
LAB_0111607c:
        if (-1 < (long)local_68) {
          local_78 = local_68;
          uVar6 = FUN_01115884();
          return uVar6;
        }
        goto LAB_01116094;
      }
      local_6c = *(float *)(param_2 + 8);
      if ((uVar4 >> 7 & 1) != 0) {
        TIFFSwabLong(&local_6c);
        uVar4 = *(uint *)(param_1 + 0x10);
      }
      uVar12 = (ulong)(uint)local_6c;
      if ((uVar4 >> 0xb & 1) == 0) {
        uVar13 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar12,0);
        if ((uVar13 == uVar12) &&
           (lVar14 = (**(code **)(param_1 + 0x3c0))(*(undefined8 *)(param_1 + 0x3b8),&local_68,8),
           lVar14 == 8)) {
          uVar6 = FUN_01116a54();
          return uVar6;
        }
      }
      else if (uVar12 + 8 <= *(ulong *)(param_1 + 0x3a0)) {
        _TIFFmemcpy(&local_68,(void *)(*(long *)(param_1 + 0x398) + uVar12),8);
        if ((*(uint *)(param_1 + 0x10) >> 7 & 1) != 0) {
          uVar6 = FUN_01116074();
          return uVar6;
        }
        goto LAB_0111607c;
      }
      uVar4 = 3;
    }
    goto switchD_01114c7c_caseD_5;
  case 10:
    if (*(long *)(param_2 + 4) != 1) goto LAB_01114eb4;
    uVar4 = 2;
    switch(param_2[1]) {
    case 1:
      local_6c = (float)NEON_ucvtf((uint)(byte)param_2[8]);
      break;
    default:
      goto switchD_01114c7c_caseD_5;
    case 3:
      uVar12 = (ulong)param_2[8];
      local_68 = (ulong *)CONCAT62(local_68._2_6_,param_2[8]);
      if ((*(uint *)(param_1 + 0x10) >> 7 & 1) != 0) {
        TIFFSwabShort(&local_68);
        uVar12 = (ulong)local_68 & 0xffff;
      }
      goto LAB_01115a98;
    case 4:
      uVar12 = (ulong)*(uint *)(param_2 + 8);
      local_68 = (ulong *)CONCAT44(uVar3,*(uint *)(param_2 + 8));
      if (*(char *)(param_1 + 0x10) < '\0') {
        TIFFSwabLong(&local_68);
        uVar12 = (ulong)local_68 & 0xffffffff;
      }
LAB_01115a98:
      local_6c = (float)uVar12;
      break;
    case 5:
      uVar4 = *(uint *)(param_1 + 0x10);
      if ((uVar4 >> 0x13 & 1) == 0) {
        local_78 = (ulong *)CONCAT44(local_78._4_4_,*(uint *)(param_2 + 8));
        uVar10 = *(uint *)(param_2 + 8);
        if ((uVar4 >> 7 & 1) != 0) {
          TIFFSwabLong(&local_78);
          uVar4 = *(uint *)(param_1 + 0x10);
          uVar10 = (uint)local_78;
        }
        uVar12 = (ulong)uVar10;
        if ((uVar4 >> 0xb & 1) == 0) {
          uVar13 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar12,0);
          if ((uVar13 == uVar12) &&
             (lVar14 = (**(code **)(param_1 + 0x3c0))(*(undefined8 *)(param_1 + 0x3b8),&local_68,8),
             lVar14 == 8)) {
LAB_0111688c:
            uVar4 = *(uint *)(param_1 + 0x10);
            goto joined_r0x01116890;
          }
        }
        else if (uVar12 + 8 <= *(ulong *)(param_1 + 0x3a0)) {
          _TIFFmemcpy(&local_68,(void *)(*(long *)(param_1 + 0x398) + uVar12),8);
          goto LAB_0111688c;
        }
LAB_011169d8:
        uVar4 = 3;
        goto switchD_01114a8c_caseD_2;
      }
      local_68 = *(ulong **)(param_2 + 8);
joined_r0x01116890:
      if ((uVar4 >> 7 & 1) != 0) {
        TIFFSwabArrayOfLong(&local_68,2);
      }
      if ((float)local_68 == 0.0) goto LAB_01116108;
      dVar22 = (double)((ulong)local_68 & 0xffffffff);
LAB_011160f4:
      dVar21 = (double)NEON_ucvtf((ulong)local_68._4_4_);
      local_6c = (float)(dVar22 / dVar21);
      break;
    case 6:
      iVar5 = (int)(char)param_2[8];
      goto LAB_01115b54;
    case 8:
      local_68 = (ulong *)CONCAT62(local_68._2_6_,param_2[8]);
      uVar9 = param_2[8];
      if ((*(uint *)(param_1 + 0x10) >> 7 & 1) != 0) {
        TIFFSwabShort(&local_68);
        uVar9 = (ushort)local_68;
      }
      iVar5 = (int)(short)uVar9;
      goto LAB_01115b54;
    case 9:
      local_68 = (ulong *)CONCAT44(uVar3,*(int *)(param_2 + 8));
      iVar5 = *(int *)(param_2 + 8);
      if (*(char *)(param_1 + 0x10) < '\0') {
        TIFFSwabLong(&local_68);
        iVar5 = (int)(float)local_68;
      }
LAB_01115b54:
      local_6c = (float)iVar5;
      break;
    case 10:
      uVar4 = *(uint *)(param_1 + 0x10);
      if ((uVar4 >> 0x13 & 1) == 0) {
        local_78 = (ulong *)CONCAT44(local_78._4_4_,*(uint *)(param_2 + 8));
        uVar10 = *(uint *)(param_2 + 8);
        if ((uVar4 >> 7 & 1) != 0) {
          TIFFSwabLong(&local_78);
          uVar4 = *(uint *)(param_1 + 0x10);
          uVar10 = (uint)local_78;
        }
        uVar12 = (ulong)uVar10;
        if ((uVar4 >> 0xb & 1) == 0) {
          uVar13 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar12,0);
          if ((uVar13 == uVar12) &&
             (lVar14 = (**(code **)(param_1 + 0x3c0))(*(undefined8 *)(param_1 + 0x3b8),&local_68,8),
             lVar14 == 8)) {
LAB_011168bc:
            uVar4 = *(uint *)(param_1 + 0x10);
            goto joined_r0x011168c0;
          }
        }
        else if (uVar12 + 8 <= *(ulong *)(param_1 + 0x3a0)) {
          _TIFFmemcpy(&local_68,(void *)(*(long *)(param_1 + 0x398) + uVar12),8);
          goto LAB_011168bc;
        }
        goto LAB_011169d8;
      }
      local_68 = *(ulong **)(param_2 + 8);
joined_r0x011168c0:
      if ((uVar4 >> 7 & 1) != 0) {
        TIFFSwabArrayOfLong(&local_68,2);
      }
      if ((float)local_68 != 0.0) {
        dVar22 = (double)(int)(float)local_68;
        goto LAB_011160f4;
      }
LAB_01116108:
      local_6c = 0.0;
      break;
    case 0xb:
      local_6c = *(float *)(param_2 + 8);
      if ((*(uint *)(param_1 + 0x10) >> 7 & 1) != 0) {
        TIFFSwabLong(&local_6c);
      }
      break;
    case 0xc:
      uVar4 = *(uint *)(param_1 + 0x10);
      if ((uVar4 >> 0x13 & 1) == 0) {
        local_78 = (ulong *)CONCAT44(local_78._4_4_,*(uint *)(param_2 + 8));
        uVar10 = *(uint *)(param_2 + 8);
        if ((uVar4 >> 7 & 1) != 0) {
          TIFFSwabLong(&local_78);
          uVar4 = *(uint *)(param_1 + 0x10);
          uVar10 = (uint)local_78;
        }
        uVar12 = (ulong)uVar10;
        if ((uVar4 >> 0xb & 1) == 0) {
          uVar13 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar12,0);
          if (uVar13 != uVar12) {
code_r0x01116938:
            uVar4 = 3;
            goto switchD_01114c7c_caseD_5;
          }
          lVar11 = (**(code **)(param_1 + 0x3c0))(*(undefined8 *)(param_1 + 0x3b8),&local_68,8);
          if (lVar11 != 8) {
            uVar6 = FUN_01116938();
            return uVar6;
          }
        }
        else {
          if (*(ulong *)(param_1 + 0x3a0) < uVar12 + 8) goto code_r0x01116938;
          _TIFFmemcpy(&local_68,(void *)(*(long *)(param_1 + 0x398) + uVar12),8);
        }
        uVar4 = *(uint *)(param_1 + 0x10);
      }
      else {
        local_68 = *(ulong **)(param_2 + 8);
      }
      if ((uVar4 >> 7 & 1) != 0) {
        TIFFSwabLong8(&local_68);
      }
      local_6c = (float)(double)local_68;
      break;
    case 0x10:
      uVar4 = *(uint *)(param_1 + 0x10);
      if ((uVar4 >> 0x13 & 1) == 0) {
        local_78 = (ulong *)CONCAT44(local_78._4_4_,*(uint *)(param_2 + 8));
        uVar10 = *(uint *)(param_2 + 8);
        if ((uVar4 >> 7 & 1) != 0) {
          TIFFSwabLong(&local_78);
          uVar4 = *(uint *)(param_1 + 0x10);
          uVar10 = (uint)local_78;
        }
        uVar12 = (ulong)uVar10;
        if ((uVar4 >> 0xb & 1) == 0) {
          uVar13 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar12,0);
          if ((uVar13 == uVar12) &&
             (lVar14 = (**(code **)(param_1 + 0x3c0))(*(undefined8 *)(param_1 + 0x3b8),&local_68,8),
             lVar14 == 8)) {
LAB_0111691c:
            uVar4 = *(uint *)(param_1 + 0x10);
            goto joined_r0x01116920;
          }
        }
        else if (uVar12 + 8 <= *(ulong *)(param_1 + 0x3a0)) {
          _TIFFmemcpy(&local_68,(void *)(*(long *)(param_1 + 0x398) + uVar12),8);
          goto LAB_0111691c;
        }
        goto code_r0x01116938;
      }
      local_68 = *(ulong **)(param_2 + 8);
joined_r0x01116920:
      if ((uVar4 >> 7 & 1) != 0) {
        TIFFSwabLong8(&local_68);
      }
      local_6c = (float)local_68;
      break;
    case 0x11:
      uVar4 = *(uint *)(param_1 + 0x10);
      if ((uVar4 >> 0x13 & 1) == 0) {
        local_78 = (ulong *)CONCAT44(local_78._4_4_,*(uint *)(param_2 + 8));
        uVar10 = *(uint *)(param_2 + 8);
        if ((uVar4 >> 7 & 1) != 0) {
          TIFFSwabLong(&local_78);
          uVar4 = *(uint *)(param_1 + 0x10);
          uVar10 = (uint)local_78;
        }
        uVar12 = (ulong)uVar10;
        if ((uVar4 >> 0xb & 1) == 0) {
          uVar13 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar12,0);
          if ((uVar13 == uVar12) &&
             (lVar14 = (**(code **)(param_1 + 0x3c0))(*(undefined8 *)(param_1 + 0x3b8),&local_68,8),
             lVar14 == 8)) {
LAB_01116a74:
            uVar4 = *(uint *)(param_1 + 0x10);
            goto joined_r0x01116a78;
          }
        }
        else if (uVar12 + 8 <= *(ulong *)(param_1 + 0x3a0)) {
                    /* try { // try from 01116a68 to 01216a6b has its CatchHandler @ 01116afc */
          _TIFFmemcpy(&local_68,(void *)(*(long *)(param_1 + 0x398) + uVar12),8);
          goto LAB_01116a74;
        }
        goto code_r0x01116938;
      }
      local_68 = *(ulong **)(param_2 + 8);
joined_r0x01116a78:
      if ((uVar4 >> 7 & 1) != 0) {
        TIFFSwabLong8(&local_68);
      }
      local_6c = (float)(long)local_68;
    }
    uVar6 = TIFFSetField((double)local_6c,param_1,*param_2);
    iVar5 = (int)uVar6;
    goto joined_r0x01116ab4;
  case 0xb:
    if (*(long *)(param_2 + 4) != 1) goto LAB_01114eb4;
    uVar4 = 2;
    switch(param_2[1]) {
    case 1:
      local_78 = (ulong *)NEON_ucvtf((ulong)(byte)param_2[8]);
      uVar6 = FUN_01116aa4();
      return uVar6;
    default:
      goto switchD_01114c7c_caseD_5;
    case 3:
      uVar12 = (ulong)param_2[8];
      local_68 = (ulong *)CONCAT62(local_68._2_6_,param_2[8]);
      if ((*(uint *)(param_1 + 0x10) >> 7 & 1) != 0) {
        TIFFSwabShort(&local_68);
        uVar12 = (ulong)local_68 & 0xffff;
      }
      goto LAB_01115d58;
    case 4:
      uVar12 = (ulong)*(uint *)(param_2 + 8);
      local_68 = (ulong *)CONCAT44(uVar3,*(uint *)(param_2 + 8));
      if (*(char *)(param_1 + 0x10) < '\0') {
        TIFFSwabLong(&local_68);
        uVar12 = (ulong)local_68 & 0xffffffff;
      }
LAB_01115d58:
      local_78 = (ulong *)(double)uVar12;
      uVar6 = FUN_01116aa4();
      return uVar6;
    case 5:
      uVar4 = *(uint *)(param_1 + 0x10);
      if ((uVar4 >> 0x13 & 1) != 0) {
        local_68 = *(ulong **)(param_2 + 8);
joined_r0x011161a0:
        if ((uVar4 >> 7 & 1) != 0) {
          TIFFSwabArrayOfLong(&local_68,2);
        }
        if ((float)local_68 != 0.0) {
          dVar22 = (double)((ulong)local_68 & 0xffffffff);
LAB_011161ec:
          dVar21 = (double)NEON_ucvtf((ulong)local_68._4_4_);
          local_78 = (ulong *)(dVar22 / dVar21);
          goto LAB_011161fc;
        }
        goto LAB_011161f8;
      }
      local_6c = *(float *)(param_2 + 8);
      if ((uVar4 >> 7 & 1) != 0) {
        TIFFSwabLong(&local_6c);
        uVar4 = *(uint *)(param_1 + 0x10);
      }
      uVar12 = (ulong)(uint)local_6c;
      if ((uVar4 >> 0xb & 1) == 0) {
        uVar13 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar12,0);
        if ((uVar13 == uVar12) &&
           (lVar14 = (**(code **)(param_1 + 0x3c0))(*(undefined8 *)(param_1 + 0x3b8),&local_68,8),
           lVar14 == 8)) {
LAB_0111698c:
          uVar4 = *(uint *)(param_1 + 0x10);
          goto joined_r0x011161a0;
        }
      }
      else if (uVar12 + 8 <= *(ulong *)(param_1 + 0x3a0)) {
                    /* catch() { ... } // from try @ 011169b4 with catch @ 01116984 */
        _TIFFmemcpy(&local_68,(void *)(*(long *)(param_1 + 0x398) + uVar12),8);
        goto LAB_0111698c;
      }
LAB_01116a24:
      uVar4 = 3;
      goto switchD_01114c7c_caseD_5;
    case 6:
      iVar5 = (int)(char)param_2[8];
      break;
    case 8:
      local_68 = (ulong *)CONCAT62(local_68._2_6_,param_2[8]);
      uVar9 = param_2[8];
      if ((*(uint *)(param_1 + 0x10) >> 7 & 1) != 0) {
        TIFFSwabShort(&local_68);
        uVar9 = (ushort)local_68;
      }
      iVar5 = (int)(short)uVar9;
      break;
    case 9:
      local_68 = (ulong *)CONCAT44(uVar3,*(int *)(param_2 + 8));
      iVar5 = *(int *)(param_2 + 8);
      if (*(char *)(param_1 + 0x10) < '\0') {
        TIFFSwabLong(&local_68);
        iVar5 = (int)(float)local_68;
      }
      break;
    case 10:
      uVar4 = *(uint *)(param_1 + 0x10);
      if ((uVar4 >> 0x13 & 1) == 0) {
        local_6c = *(float *)(param_2 + 8);
        if ((uVar4 >> 7 & 1) != 0) {
          TIFFSwabLong(&local_6c);
          uVar4 = *(uint *)(param_1 + 0x10);
        }
        uVar12 = (ulong)(uint)local_6c;
        if ((uVar4 >> 0xb & 1) == 0) {
          uVar13 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar12,0);
          if ((uVar13 == uVar12) &&
             (lVar14 = (**(code **)(param_1 + 0x3c0))(*(undefined8 *)(param_1 + 0x3b8),&local_68,8),
             lVar14 == 8)) {
LAB_011169bc:
            if ((*(uint *)(param_1 + 0x10) >> 7 & 1) != 0) {
              uVar6 = FUN_011161d0();
              return uVar6;
            }
            goto LAB_011161dc;
          }
        }
        else if (uVar12 + 8 <= *(ulong *)(param_1 + 0x3a0)) {
                    /* try { // try from 011169ac to 012169b3 has its CatchHandler @ 01116a14 */
                    /* try { // try from 011169b4 to 01216a2f has its CatchHandler @ 01116984 */
          _TIFFmemcpy(&local_68,(void *)(*(long *)(param_1 + 0x398) + uVar12),8);
          goto LAB_011169bc;
        }
        goto LAB_01116a24;
      }
      local_68 = *(ulong **)(param_2 + 8);
      if ((uVar4 >> 7 & 1) != 0) {
        TIFFSwabArrayOfLong(&local_68,2);
      }
LAB_011161dc:
      if ((float)local_68 != 0.0) {
        dVar22 = (double)(int)(float)local_68;
        goto LAB_011161ec;
      }
LAB_011161f8:
      local_78 = (ulong *)0x0;
LAB_011161fc:
      uVar6 = FUN_01116aa4();
      return uVar6;
    case 0xb:
      fVar20 = *(float *)(param_2 + 8);
      local_68 = (ulong *)CONCAT44(uVar3,fVar20);
      if ((*(uint *)(param_1 + 0x10) >> 7 & 1) != 0) {
        TIFFSwabLong(&local_68);
        fVar20 = (float)local_68;
      }
      local_78 = (ulong *)(double)fVar20;
      uVar6 = FUN_01116aa4();
      return uVar6;
    case 0xc:
      uVar4 = *(uint *)(param_1 + 0x10);
      if ((uVar4 >> 0x13 & 1) != 0) {
        local_78 = *(ulong **)(param_2 + 8);
joined_r0x01116a98:
        if ((uVar4 >> 7 & 1) != 0) {
          TIFFSwabLong8(&local_78);
        }
        uVar6 = TIFFSetField(local_78,param_1,*param_2);
        iVar5 = (int)uVar6;
        goto joined_r0x01116ab4;
      }
      local_68 = (ulong *)CONCAT44(uVar3,*(uint *)(param_2 + 8));
      uVar10 = *(uint *)(param_2 + 8);
      if ((uVar4 >> 7 & 1) != 0) {
        TIFFSwabLong(&local_68);
        uVar4 = *(uint *)(param_1 + 0x10);
        uVar10 = (uint)(float)local_68;
      }
      uVar12 = (ulong)uVar10;
      if ((uVar4 >> 0xb & 1) == 0) {
        uVar13 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar12,0);
        if ((uVar13 == uVar12) &&
           (lVar14 = (**(code **)(param_1 + 0x3c0))(*(undefined8 *)(param_1 + 0x3b8),&local_78,8),
           lVar14 == 8)) {
LAB_01116a94:
          uVar4 = *(uint *)(param_1 + 0x10);
          goto joined_r0x01116a98;
        }
      }
      else if (uVar12 + 8 <= *(ulong *)(param_1 + 0x3a0)) {
        _TIFFmemcpy(&local_78,(void *)(*(long *)(param_1 + 0x398) + uVar12),8);
        goto LAB_01116a94;
      }
      goto LAB_011169d8;
    case 0x10:
      uVar4 = *(uint *)(param_1 + 0x10);
      if ((uVar4 >> 0x13 & 1) != 0) {
        local_68 = *(ulong **)(param_2 + 8);
        goto joined_r0x0111623c;
      }
      local_6c = *(float *)(param_2 + 8);
      if ((uVar4 >> 7 & 1) != 0) {
        TIFFSwabLong(&local_6c);
        uVar4 = *(uint *)(param_1 + 0x10);
      }
      uVar12 = (ulong)(uint)local_6c;
      if ((uVar4 >> 0xb & 1) == 0) {
        uVar13 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar12,0);
        if ((uVar13 == uVar12) &&
           (lVar14 = (**(code **)(param_1 + 0x3c0))(*(undefined8 *)(param_1 + 0x3b8),&local_68,8),
           lVar14 == 8)) {
LAB_01116a08:
          uVar4 = *(uint *)(param_1 + 0x10);
joined_r0x0111623c:
          if ((uVar4 >> 7 & 1) != 0) {
            TIFFSwabLong8(&local_68);
          }
          local_78 = (ulong *)NEON_ucvtf(local_68);
          uVar6 = FUN_01116aa4();
          return uVar6;
        }
      }
      else if (uVar12 + 8 <= *(ulong *)(param_1 + 0x3a0)) {
        _TIFFmemcpy(&local_68,(void *)(*(long *)(param_1 + 0x398) + uVar12),8);
        goto LAB_01116a08;
      }
      goto LAB_01116a24;
    case 0x11:
      uVar4 = *(uint *)(param_1 + 0x10);
      if ((uVar4 >> 0x13 & 1) != 0) {
        local_68 = *(ulong **)(param_2 + 8);
        if ((uVar4 >> 7 & 1) != 0) {
          TIFFSwabLong8(&local_68);
        }
        goto LAB_01116274;
      }
      local_6c = *(float *)(param_2 + 8);
      if ((uVar4 >> 7 & 1) != 0) {
        TIFFSwabLong(&local_6c);
        uVar4 = *(uint *)(param_1 + 0x10);
      }
      uVar12 = (ulong)(uint)local_6c;
      if ((uVar4 >> 0xb & 1) == 0) {
        uVar13 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar12,0);
        if ((uVar13 == uVar12) &&
           (lVar14 = (**(code **)(param_1 + 0x3c0))(*(undefined8 *)(param_1 + 0x3b8),&local_68,8),
           lVar14 == 8)) {
LAB_01116ad8:
          if ((*(uint *)(param_1 + 0x10) >> 7 & 1) != 0) {
            uVar6 = FUN_0111626c();
            return uVar6;
          }
LAB_01116274:
          local_78 = (ulong *)(double)(long)local_68;
          uVar6 = FUN_01116aa4();
          return uVar6;
        }
      }
      else {
                    /* catch() { ... } // from try @ 011169ac with catch @ 01116a14 */
        if (uVar12 + 8 <= *(ulong *)(param_1 + 0x3a0)) {
          _TIFFmemcpy(&local_68,(void *)(*(long *)(param_1 + 0x398) + uVar12),8);
          goto LAB_01116ad8;
        }
      }
      goto LAB_01116a24;
    }
    local_78 = (ulong *)(double)iVar5;
    uVar6 = FUN_01116aa4();
    return uVar6;
  case 0xc:
    if (*(long *)(param_2 + 4) != 1) goto LAB_01114eb4;
    uVar4 = 2;
    switch(param_2[1]) {
    case 4:
    case 0xd:
      local_68 = (ulong *)(ulong)*(uint *)(param_2 + 8);
      local_78 = (ulong *)CONCAT44(local_78._4_4_,*(uint *)(param_2 + 8));
      if (*(char *)(param_1 + 0x10) < '\0') {
        TIFFSwabLong(&local_78);
        local_68 = (ulong *)((ulong)local_78 & 0xffffffff);
      }
      break;
    default:
      goto switchD_01114c7c_caseD_5;
    case 0x10:
    case 0x12:
      uVar4 = *(uint *)(param_1 + 0x10);
      if ((uVar4 >> 0x13 & 1) == 0) {
        local_78 = (ulong *)CONCAT44(local_78._4_4_,*(uint *)(param_2 + 8));
        uVar10 = *(uint *)(param_2 + 8);
        if ((uVar4 >> 7 & 1) != 0) {
          TIFFSwabLong(&local_78);
          uVar4 = *(uint *)(param_1 + 0x10);
          uVar10 = (uint)local_78;
        }
        uVar12 = (ulong)uVar10;
        if ((uVar4 >> 0xb & 1) == 0) {
          uVar13 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar12,0);
          if ((uVar13 == uVar12) &&
             (lVar14 = (**(code **)(param_1 + 0x3c0))(*(undefined8 *)(param_1 + 0x3b8),&local_68,8),
             lVar14 == 8)) {
LAB_01115a30:
            uVar4 = *(uint *)(param_1 + 0x10);
            goto joined_r0x01115a34;
          }
        }
        else if (uVar12 + 8 <= *(ulong *)(param_1 + 0x3a0)) {
          _TIFFmemcpy(&local_68,(void *)(*(long *)(param_1 + 0x398) + uVar12),8);
          goto LAB_01115a30;
        }
        goto LAB_011169d8;
      }
      local_68 = *(ulong **)(param_2 + 8);
                    /* try { // try from 01115704 to 01215707 has its CatchHandler @ 01115720 */
joined_r0x01115a34:
      if ((uVar4 >> 7 & 1) != 0) {
                    /* try { // try from 01115708 to 01215733 has its CatchHandler @ 011156c0 */
        TIFFSwabLong8(&local_68);
      }
    }
    uVar9 = *param_2;
    puVar19 = local_68;
    goto LAB_0111588c;
  case 0xe:
    if (*(long *)(param_2 + 4) != 2) {
      TIFFWarningExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFFetchNormalTag",
                     "incorrect count for field \"%s\", expected 2, got %d",
                     *(undefined8 *)(lVar11 + 0x20));
      return 0;
    }
    uVar4 = FUN_011173e0(param_1,param_2,&local_68);
    puVar19 = local_68;
    if (uVar4 == 0) {
      iVar5 = TIFFSetField(param_1,*param_2,(short)*local_68,*(undefined2 *)((long)local_68 + 2));
      _TIFFfree(puVar19);
      goto joined_r0x01115214;
    }
    goto switchD_01114c7c_caseD_5;
  case 0x10:
    if (*(long *)(param_2 + 4) != (long)*(short *)(lVar11 + 4)) {
      TIFFWarningExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFFetchNormalTag",
                     "incorrect count for field \"%s\", expected %d, got %d",
                     *(undefined8 *)(lVar11 + 0x20));
      return 0;
    }
    uVar4 = FUN_01118178(param_1,param_2,&local_68);
    puVar19 = local_68;
    if (uVar4 != 0) goto switchD_01114c7c_caseD_5;
    iVar5 = TIFFSetField(param_1,*param_2,local_68);
    goto joined_r0x01115208;
  case 0x12:
    if (*(long *)(param_2 + 4) != (long)*(short *)(lVar11 + 4)) {
      return 1;
    }
    uVar4 = FUN_011173e0(param_1,param_2,&local_68);
    if (uVar4 != 0) goto switchD_01114c7c_caseD_5;
    goto LAB_01114dc0;
  case 0x14:
    if (*(long *)(param_2 + 4) != (long)*(short *)(lVar11 + 4)) {
      return 1;
    }
    uVar4 = FUN_01118448(param_1,param_2,&local_68);
    goto joined_r0x01114dbc;
  case 0x18:
    if (*(long *)(param_2 + 4) != (long)*(short *)(lVar11 + 4)) {
      return 1;
    }
    uVar4 = FUN_0111871c(param_1,param_2,&local_68);
joined_r0x01114dbc:
    if (uVar4 == 0) {
LAB_01114dc0:
      iVar5 = TIFFSetField(param_1,*param_2,local_68);
joined_r0x011152c8:
      if (local_68 != (ulong *)0x0) {
        _TIFFfree(local_68);
      }
joined_r0x01116850:
      if (iVar5 == 0) {
        return 0;
      }
      return 1;
    }
    goto switchD_01114c7c_caseD_5;
  case 0x1b:
  case 0x1c:
    if (*(ulong *)(param_2 + 4) >> 0x10 != 0) goto LAB_01114eb4;
    uVar4 = FUN_01118178(param_1,param_2,&local_68);
    if (uVar4 != 0) goto switchD_01114c7c_caseD_5;
LAB_011152ac:
    iVar5 = TIFFSetField(param_1,*param_2,param_2[4],local_68);
    goto joined_r0x011152c8;
  case 0x1e:
    if (*(ulong *)(param_2 + 4) >> 0x10 != 0) goto LAB_01114eb4;
    uVar4 = FUN_011173e0(param_1,param_2,&local_68);
joined_r0x011152a8:
    if (uVar4 == 0) goto LAB_011152ac;
    goto switchD_01114c7c_caseD_5;
  case 0x20:
    if (*(ulong *)(param_2 + 4) >> 0x10 == 0) {
      uVar4 = FUN_01118448(param_1,param_2,&local_68);
      goto joined_r0x011152a8;
    }
    goto LAB_01114eb4;
  case 0x22:
    if (*(ulong *)(param_2 + 4) >> 0x10 == 0) {
      uVar4 = FUN_01118b58(param_1,param_2,&local_68);
      goto joined_r0x011152a8;
    }
    goto LAB_01114eb4;
  case 0x24:
    if (*(ulong *)(param_2 + 4) >> 0x10 == 0) {
      uVar4 = FUN_0111871c(param_1,param_2,&local_68);
      goto joined_r0x011152a8;
    }
    goto LAB_01114eb4;
  case 0x25:
    if (*(ulong *)(param_2 + 4) >> 0x10 == 0) {
      uVar4 = FUN_01116e6c(param_1,param_2,&local_68);
      goto joined_r0x011152a8;
    }
    goto LAB_01114eb4;
  case 0x26:
    if (*(ulong *)(param_2 + 4) >> 0x10 == 0) {
      uVar4 = FUN_01118e24(param_1,param_2,&local_68);
      goto joined_r0x011152a8;
    }
LAB_01114eb4:
    uVar4 = 1;
    goto switchD_01114a8c_caseD_2;
  case 0x27:
  case 0x28:
    uVar4 = FUN_01118178(param_1,param_2,&local_68);
    puVar19 = local_68;
    break;
  case 0x29:
    uVar4 = 2;
    if ((param_2[1] < 0x12) && ((1 << (ulong)(param_2[1] & 0x1f) & 0x303daU) != 0)) {
      uVar4 = FUN_01117fa4(param_1,param_2,&local_78,1,&local_68);
      puVar19 = local_68;
      if ((uVar4 == 0) && (local_68 != (ulong *)0x0)) {
        uVar9 = param_2[1];
        uVar4 = (uint)local_78;
        if (uVar9 == 7) {
LAB_01114f2c:
          if ((uint)local_78 != 0) {
            lVar14 = 0;
            do {
              if (*(char *)((long)local_68 + lVar14) < '\0') goto LAB_01115350;
              lVar14 = lVar14 + 1;
            } while ((uint)lVar14 < (uint)local_78);
          }
        }
        else if (uVar9 != 6) {
          if (uVar9 == 1) goto LAB_01114f2c;
          puVar7 = _TIFFmalloc((ulong)local_78 & 0xffffffff);
          if (puVar7 == (ulong *)0x0) goto LAB_01115650;
          switch(param_2[1]) {
          case 3:
            if (uVar4 != 0) {
              uVar4 = 0;
              puVar18 = puVar7;
              do {
                if (*(char *)(param_1 + 0x10) < '\0') {
                  TIFFSwabShort(puVar19);
                }
                if (0x7f < (ushort)*puVar19) goto LAB_0111685c;
                *(char *)puVar18 = (char)(ushort)*puVar19;
                uVar4 = uVar4 + 1;
                puVar19 = (ulong *)((long)puVar19 + 2);
                puVar18 = (ulong *)((long)puVar18 + 1);
              } while (uVar4 < (uint)local_78);
            }
            break;
          case 4:
            if (uVar4 != 0) {
              uVar4 = 0;
              puVar18 = puVar7;
              do {
                if (*(char *)(param_1 + 0x10) < '\0') {
                  TIFFSwabLong(puVar19);
                }
                if (0x7f < (uint)*puVar19) goto LAB_0111685c;
                *(char *)puVar18 = (char)(uint)*puVar19;
                uVar4 = uVar4 + 1;
                puVar19 = (ulong *)((long)puVar19 + 4);
                puVar18 = (ulong *)((long)puVar18 + 1);
              } while (uVar4 < (uint)local_78);
            }
            break;
          case 8:
            if (uVar4 != 0) {
              uVar4 = 0;
              puVar18 = puVar7;
              do {
                if (*(char *)(param_1 + 0x10) < '\0') {
                  TIFFSwabShort(puVar19);
                }
                if (0xff < (ushort)((short)*puVar19 + 0x80U)) goto LAB_0111685c;
                *(char *)puVar18 = (char)(short)*puVar19;
                uVar4 = uVar4 + 1;
                puVar19 = (ulong *)((long)puVar19 + 2);
                puVar18 = (ulong *)((long)puVar18 + 1);
              } while (uVar4 < (uint)local_78);
            }
            break;
          case 9:
            if (uVar4 != 0) {
              uVar4 = 0;
              puVar18 = puVar7;
              do {
                if (*(char *)(param_1 + 0x10) < '\0') {
                  TIFFSwabLong(puVar19);
                }
                if (0xff < (uint)*puVar19 + 0x80) goto LAB_0111685c;
                *(char *)puVar18 = (char)(uint)*puVar19;
                uVar4 = uVar4 + 1;
                puVar19 = (ulong *)((long)puVar19 + 4);
                puVar18 = (ulong *)((long)puVar18 + 1);
              } while (uVar4 < (uint)local_78);
            }
            break;
          case 0x10:
            if (uVar4 != 0) {
              uVar4 = 0;
              puVar18 = puVar7;
              do {
                if (*(char *)(param_1 + 0x10) < '\0') {
                  TIFFSwabLong8(puVar19);
                }
                if (0x7f < *puVar19) goto LAB_0111685c;
                *(char *)puVar18 = (char)*puVar19;
                uVar4 = uVar4 + 1;
                puVar19 = puVar19 + 1;
                puVar18 = (ulong *)((long)puVar18 + 1);
              } while (uVar4 < (uint)local_78);
            }
            break;
          case 0x11:
            if (uVar4 != 0) {
              uVar4 = 0;
              puVar18 = puVar7;
              do {
                if (*(char *)(param_1 + 0x10) < '\0') {
                  TIFFSwabLong8(puVar19);
                }
                if (0xff < *puVar19 + 0x80) goto LAB_0111685c;
                *(char *)puVar18 = (char)*puVar19;
                uVar4 = uVar4 + 1;
                puVar19 = puVar19 + 1;
                puVar18 = (ulong *)((long)puVar18 + 1);
              } while (uVar4 < (uint)local_78);
            }
          }
LAB_01116828:
          _TIFFfree(local_68);
          puVar19 = puVar7;
        }
        goto LAB_0111682c;
      }
LAB_01115190:
      if (uVar4 == 0) {
        puVar19 = (ulong *)0x0;
        goto LAB_0111682c;
      }
    }
    goto switchD_01114a8c_caseD_2;
  case 0x2a:
    uVar4 = FUN_011173e0(param_1,param_2,&local_68);
    puVar19 = local_68;
    break;
  case 0x2b:
    uVar4 = 2;
    if ((param_2[1] < 0x12) && ((1 << (ulong)(param_2[1] & 0x1f) & 0x3035aU) != 0)) {
      uVar4 = FUN_01117fa4(param_1,param_2,&local_78,2,&local_68);
      puVar19 = local_68;
      puVar18 = local_78;
      if ((uVar4 != 0) || (local_68 == (ulong *)0x0)) goto LAB_01115190;
      uVar4 = (uint)local_78;
      if (param_2[1] == 8) {
        if (*(char *)(param_1 + 0x10) < '\0') {
          TIFFSwabArrayOfShort(local_68,(ulong)local_78 & 0xffffffff);
        }
      }
      else {
        if (param_2[1] != 3) {
          puVar7 = _TIFFmalloc((ulong)((uint)local_78 << 1));
          if (puVar7 != (ulong *)0x0) {
            local_68 = puVar19;
            switch(param_2[1]) {
            case 1:
              if (uVar4 != 0) {
                uVar12 = (ulong)(uVar4 - 1);
                if (0xf < uVar12 + 1) {
                  lVar11 = (uVar12 + 1) - (ulong)(uVar4 & 0xf);
                  if (lVar11 == 0) goto LAB_01115408;
                  if (((ulong *)((long)puVar19 + uVar12 + 1) <= puVar7) ||
                     ((ulong *)((long)puVar7 + uVar12 * 2 + 2) <= puVar19)) {
                    puVar16 = puVar19 + 1;
                    puVar17 = puVar7 + 2;
                    lVar14 = lVar11;
                    do {
                      uVar12 = puVar16[-1];
                      uVar13 = *puVar16;
                      puVar16 = puVar16 + 2;
                      lVar14 = lVar14 + -0x10;
                      puVar17[-1] = (ulong)CONCAT16((char)(uVar12 >> 0x38),
                                                    (uint6)CONCAT14((char)(uVar12 >> 0x30),
                                                                    (uint)CONCAT12((char)(uVar12 >>
                                                                                         0x28),
                                                                                   (ushort)(byte)(
                                                  uVar12 >> 0x20))));
                      puVar17[-2] = (ulong)CONCAT16((char)(uVar12 >> 0x18),
                                                    (uint6)CONCAT14((char)(uVar12 >> 0x10),
                                                                    (uint)(CONCAT12((char)(uVar12 >>
                                                                                          8),(short)
                                                  uVar12) & 0xff00ff)));
                      puVar17[1] = (ulong)CONCAT16((char)(uVar13 >> 0x38),
                                                   (uint6)CONCAT14((char)(uVar13 >> 0x30),
                                                                   (uint)CONCAT12((char)(uVar13 >>
                                                                                        0x28),
                                                                                  (ushort)(byte)(
                                                  uVar13 >> 0x20))));
                      *puVar17 = (ulong)CONCAT16((char)(uVar13 >> 0x18),
                                                 (uint6)CONCAT14((char)(uVar13 >> 0x10),
                                                                 (uint)(CONCAT12((char)(uVar13 >> 8)
                                                                                 ,(short)uVar13) &
                                                                       0xff00ff)));
                      puVar17 = puVar17 + 4;
                    } while (lVar14 != 0);
                    puVar7 = (ulong *)((long)puVar7 + lVar11 * 2);
                    puVar19 = (ulong *)((long)puVar19 + lVar11);
                    if (((ulong)puVar18 & 0xf) == 0) {
                      uVar6 = switchD_011154ec::caseD_2();
                      return uVar6;
                    }
                    goto LAB_01115408;
                  }
                }
                lVar11 = 0;
LAB_01115408:
                iVar5 = uVar4 - (int)lVar11;
                do {
                  iVar5 = iVar5 + -1;
                  *(ushort *)puVar7 = (ushort)(byte)*puVar19;
                  puVar7 = (ulong *)((long)puVar7 + 2);
                  puVar19 = (ulong *)((long)puVar19 + 1);
                } while (iVar5 != 0);
                uVar6 = switchD_011154ec::caseD_2();
                return uVar6;
              }
              break;
            case 4:
              if (uVar4 != 0) {
                uVar10 = 0;
                puVar18 = puVar7;
                while( true ) {
                  if (*(char *)(param_1 + 0x10) < '\0') {
                    TIFFSwabLong(puVar19);
                  }
                  uVar12 = *puVar19;
                  if ((uint)uVar12 >> 0xf != 0) break;
                  uVar10 = uVar10 + 1;
                  puVar19 = (ulong *)((long)puVar19 + 4);
                  *(short *)puVar18 = (short)(uint)uVar12;
                  puVar18 = (ulong *)((long)puVar18 + 2);
                  if (uVar4 <= uVar10) {
                    uVar6 = switchD_011154ec::caseD_2();
                    return uVar6;
                  }
                }
LAB_0111685c:
                _TIFFfree(local_68);
                uVar6 = FUN_01115354(puVar7);
                return uVar6;
              }
              break;
            case 6:
              if (uVar4 != 0) {
                uVar12 = (ulong)(uVar4 - 1);
                if (0xf < uVar12 + 1) {
                  lVar11 = (uVar12 + 1) - (ulong)(uVar4 & 0xf);
                  if (lVar11 == 0) goto LAB_011163b0;
                  if (((ulong *)((long)puVar19 + uVar12 + 1) <= puVar7) ||
                     ((ulong *)((long)puVar7 + uVar12 * 2 + 2) <= puVar19)) {
                    puVar16 = puVar19 + 1;
                    puVar17 = puVar7 + 2;
                    lVar14 = lVar11;
                    do {
                      uVar12 = puVar16[-1];
                      uVar13 = *puVar16;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01116a68 with catch @ 01116afc
                        */
                      puVar16 = puVar16 + 2;
                    /* try { // try from 01116b00 to 01216b07 has its CatchHandler @ 01116b10 */
                      lVar14 = lVar14 + -0x10;
                    /* try { // try from 01116b08 to 01216b13 has its CatchHandler @ 01116a30 */
                      puVar17[-1] = CONCAT26((short)(char)(uVar12 >> 0x38),
                                             CONCAT24((short)(char)(uVar12 >> 0x30),
                                                      CONCAT22((short)(char)(uVar12 >> 0x28),
                                                               (short)(char)(uVar12 >> 0x20))));
                      puVar17[-2] = CONCAT26((short)(char)(uVar12 >> 0x18),
                                             CONCAT24((short)(char)(uVar12 >> 0x10),
                                                      CONCAT22((short)(char)(uVar12 >> 8),
                                                               (short)(char)uVar12)));
                      puVar17[1] = CONCAT26((short)(char)(uVar13 >> 0x38),
                                            CONCAT24((short)(char)(uVar13 >> 0x30),
                                                     CONCAT22((short)(char)(uVar13 >> 0x28),
                                                              (short)(char)(uVar13 >> 0x20))));
                      *puVar17 = CONCAT26((short)(char)(uVar13 >> 0x18),
                                          CONCAT24((short)(char)(uVar13 >> 0x10),
                                                   CONCAT22((short)(char)(uVar13 >> 8),
                                                            (short)(char)uVar13)));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01116b00 with catch @ 01116b10
                        */
                      puVar17 = puVar17 + 4;
                    } while (lVar14 != 0);
                    puVar7 = (ulong *)((long)puVar7 + lVar11 * 2);
                    puVar19 = (ulong *)((long)puVar19 + lVar11);
                    if (((ulong)puVar18 & 0xf) == 0) {
                      uVar6 = switchD_011154ec::caseD_2();
                      return uVar6;
                    }
                    goto LAB_011163b0;
                  }
                }
                lVar11 = 0;
LAB_011163b0:
                iVar5 = uVar4 - (int)lVar11;
                do {
                  iVar5 = iVar5 + -1;
                  *(short *)puVar7 = (short)(char)*puVar19;
                  puVar7 = (ulong *)((long)puVar7 + 2);
                  puVar19 = (ulong *)((long)puVar19 + 1);
                } while (iVar5 != 0);
                uVar6 = switchD_011154ec::caseD_2();
                return uVar6;
              }
              break;
            case 9:
              if (uVar4 != 0) {
                uVar10 = 0;
                puVar18 = puVar7;
                while( true ) {
                  if (*(char *)(param_1 + 0x10) < '\0') {
                    TIFFSwabLong(puVar19);
                  }
                  uVar12 = *puVar19;
                  if ((uint)uVar12 + 0x8000 >> 0x10 != 0) break;
                  uVar10 = uVar10 + 1;
                  puVar19 = (ulong *)((long)puVar19 + 4);
                  *(short *)puVar18 = (short)(uint)uVar12;
                  puVar18 = (ulong *)((long)puVar18 + 2);
                  if (uVar4 <= uVar10) {
                    uVar6 = switchD_011154ec::caseD_2();
                    return uVar6;
                  }
                }
                goto LAB_0111685c;
              }
              break;
            case 0x10:
              if (uVar4 != 0) {
                uVar10 = 0;
                puVar18 = puVar7;
                while( true ) {
                  if (*(char *)(param_1 + 0x10) < '\0') {
                    TIFFSwabLong8(puVar19);
                  }
                  uVar12 = *puVar19;
                  if (uVar12 >> 0xf != 0) break;
                  uVar10 = uVar10 + 1;
                  puVar19 = puVar19 + 1;
                  *(short *)puVar18 = (short)uVar12;
                  puVar18 = (ulong *)((long)puVar18 + 2);
                  if (uVar4 <= uVar10) {
                    uVar6 = switchD_011154ec::caseD_2();
                    return uVar6;
                  }
                }
                goto LAB_0111685c;
              }
              break;
            case 0x11:
              if (uVar4 != 0) {
                uVar10 = 0;
                puVar18 = puVar7;
                while( true ) {
                  if (*(char *)(param_1 + 0x10) < '\0') {
                    TIFFSwabLong8(puVar19);
                  }
                  uVar12 = *puVar19;
                  if (uVar12 + 0x8000 >> 0x10 != 0) break;
                  uVar10 = uVar10 + 1;
                  puVar19 = puVar19 + 1;
                  *(short *)puVar18 = (short)uVar12;
                  puVar18 = (ulong *)((long)puVar18 + 2);
                  if (uVar4 <= uVar10) {
                    uVar6 = switchD_011154ec::caseD_2();
                    return uVar6;
                  }
                }
                goto LAB_0111685c;
              }
            }
code_r0x011166bc:
            goto LAB_01116828;
          }
LAB_01115650:
          _TIFFfree(puVar19);
          uVar4 = 7;
          if (lVar11 == 0) {
            uVar6 = FUN_01115230();
            return uVar6;
          }
          goto LAB_01115220;
        }
        if ((uint)local_78 != 0) {
          uVar10 = 0;
          puVar7 = local_68;
          do {
            if (*(char *)(param_1 + 0x10) < '\0') {
              TIFFSwabShort(puVar7);
            }
            if ((short)*puVar7 < 0) goto LAB_01115350;
            uVar10 = uVar10 + 1;
            puVar7 = (ulong *)((long)puVar7 + 2);
          } while (uVar10 < uVar4);
        }
      }
LAB_0111682c:
      iVar5 = TIFFSetField(param_1,*param_2,*(undefined4 *)(param_2 + 4),puVar19);
joined_r0x011165d4:
      if (puVar19 != (ulong *)0x0) {
        _TIFFfree(puVar19);
      }
      goto joined_r0x01116850;
    }
    goto switchD_01114a8c_caseD_2;
  case 0x2c:
    uVar4 = FUN_01118448(param_1,param_2,&local_68);
    puVar19 = local_68;
    break;
  case 0x2d:
    uVar4 = 2;
    if ((param_2[1] < 0x12) && ((1 << (ulong)(param_2[1] & 0x1f) & 0x3035aU) != 0)) {
      uVar4 = FUN_01117fa4(param_1,param_2,&local_78,4,&local_68);
      puVar19 = local_68;
      if ((uVar4 == 0) && (local_68 != (ulong *)0x0)) {
        uVar4 = (uint)local_78;
        if (param_2[1] == 9) {
          if (*(char *)(param_1 + 0x10) < '\0') {
            TIFFSwabArrayOfLong(local_68,(ulong)local_78 & 0xffffffff);
          }
        }
        else if (param_2[1] == 4) {
          if ((uint)local_78 != 0) {
            uVar10 = 0;
            puVar7 = local_68;
            do {
              if (*(char *)(param_1 + 0x10) < '\0') {
                TIFFSwabLong(puVar7);
              }
              if ((int)(uint)*puVar7 < 0) {
                uVar4 = (uint)*puVar7 >> 0x1d & 4;
                _TIFFfree(puVar19);
                if (lVar11 == 0) {
                  uVar6 = FUN_01115230();
                  return uVar6;
                }
                goto LAB_01115220;
              }
              uVar10 = uVar10 + 1;
              puVar7 = (ulong *)((long)puVar7 + 4);
            } while (uVar10 < uVar4);
          }
        }
        else {
          puVar7 = _TIFFmalloc((ulong)((uint)local_78 << 2));
          if (puVar7 == (ulong *)0x0) goto LAB_01115650;
          switch(param_2[1]) {
          case 1:
            puVar18 = puVar7;
            puVar16 = puVar19;
            for (; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(uint *)puVar18 = (uint)(byte)*puVar16;
              puVar18 = (ulong *)((long)puVar18 + 4);
              puVar16 = (ulong *)((long)puVar16 + 1);
            }
            break;
          case 3:
            puVar18 = puVar7;
            puVar16 = puVar19;
            for (; uVar4 != 0; uVar4 = uVar4 - 1) {
              if (*(char *)(param_1 + 0x10) < '\0') {
                TIFFSwabShort(puVar16);
              }
              *(uint *)puVar18 = (uint)(ushort)*puVar16;
              puVar18 = (ulong *)((long)puVar18 + 4);
              puVar16 = (ulong *)((long)puVar16 + 2);
            }
            break;
          case 6:
            puVar18 = puVar7;
            puVar16 = puVar19;
            for (; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(int *)puVar18 = (int)(char)*puVar16;
              puVar18 = (ulong *)((long)puVar18 + 4);
              puVar16 = (ulong *)((long)puVar16 + 1);
            }
            break;
          case 8:
            puVar18 = puVar7;
            puVar16 = puVar19;
            for (; uVar4 != 0; uVar4 = uVar4 - 1) {
              if (*(char *)(param_1 + 0x10) < '\0') {
                TIFFSwabShort(puVar16);
              }
              *(int *)puVar18 = (int)(short)*puVar16;
              puVar18 = (ulong *)((long)puVar18 + 4);
              puVar16 = (ulong *)((long)puVar16 + 2);
            }
            break;
          case 0x10:
            if (uVar4 != 0) {
              uVar10 = 0;
              puVar16 = puVar7;
              puVar18 = puVar19;
              do {
                if (*(char *)(param_1 + 0x10) < '\0') {
                  TIFFSwabLong8(puVar18);
                }
                uVar12 = *puVar18;
                if (uVar12 >> 0x1f != 0) {
LAB_01116a30:
                    /* try { // try from 01116a30 to 01216a67 has its CatchHandler @ 01116a30
                       catch(type#1 @ 00000000) { ... } // from try @ 01116a30 with catch @ 01116a30
                       catch(type#1 @ 00000000) { ... } // from try @ 01116b08 with catch @ 01116a30
                        */
                  _TIFFfree(puVar19);
                  uVar6 = FUN_01115354(puVar7);
                  return uVar6;
                }
                uVar10 = uVar10 + 1;
                puVar18 = puVar18 + 1;
                *(uint *)puVar16 = (uint)uVar12;
                puVar16 = (ulong *)((long)puVar16 + 4);
              } while (uVar10 < uVar4);
            }
            break;
          case 0x11:
            if (uVar4 != 0) {
              uVar10 = 0;
              puVar16 = puVar7;
              puVar18 = puVar19;
              do {
                if (*(char *)(param_1 + 0x10) < '\0') {
                  TIFFSwabLong8(puVar18);
                }
                uVar12 = *puVar18;
                if (uVar12 + 0x80000000 >> 0x20 != 0) goto LAB_01116a30;
                uVar10 = uVar10 + 1;
                puVar18 = puVar18 + 1;
                *(uint *)puVar16 = (uint)uVar12;
                puVar16 = (ulong *)((long)puVar16 + 4);
              } while (uVar10 < uVar4);
            }
          }
          _TIFFfree(puVar19);
          puVar19 = puVar7;
        }
      }
      else {
        if (uVar4 != 0) goto switchD_01114a8c_caseD_2;
        puVar19 = (ulong *)0x0;
      }
      iVar5 = TIFFSetField(param_1,*param_2,*(undefined4 *)(param_2 + 4),puVar19);
      goto joined_r0x011165d4;
    }
    goto switchD_01114a8c_caseD_2;
  case 0x2e:
    uVar4 = FUN_01118b58(param_1,param_2,&local_68);
    puVar19 = local_68;
    break;
  case 0x2f:
    uVar4 = 2;
    if ((param_2[1] < 0x12) && ((1 << (ulong)(param_2[1] & 0x1f) & 0x3035aU) != 0)) {
      uVar4 = FUN_01117fa4(param_1,param_2,&local_78,8,&local_68);
      puVar19 = local_68;
      if ((uVar4 != 0) || (local_68 == (ulong *)0x0)) goto LAB_01115190;
      uVar4 = (uint)local_78;
      if (param_2[1] == 0x11) {
        if (*(char *)(param_1 + 0x10) < '\0') {
          TIFFSwabArrayOfLong8(local_68,(ulong)local_78 & 0xffffffff);
        }
      }
      else {
        if (param_2[1] != 0x10) {
          puVar7 = _TIFFmalloc((ulong)((uint)local_78 << 3));
          if (puVar7 != (ulong *)0x0) {
            local_68 = puVar19;
            switch(param_2[1]) {
            case 1:
              if (uVar4 != 0) {
                do {
                  uVar4 = uVar4 - 1;
                  *puVar7 = (ulong)(byte)*puVar19;
                  puVar7 = puVar7 + 1;
                  puVar19 = (ulong *)((long)puVar19 + 1);
                } while (uVar4 != 0);
                uVar6 = switchD_011154ec::caseD_2();
                return uVar6;
              }
              break;
            case 3:
              if (uVar4 != 0) {
                do {
                  if (*(char *)(param_1 + 0x10) < '\0') {
                    TIFFSwabShort(puVar19);
                  }
                  uVar4 = uVar4 - 1;
                  *puVar7 = (ulong)(ushort)*puVar19;
                  puVar19 = (ulong *)((long)puVar19 + 2);
                  puVar7 = puVar7 + 1;
                } while (uVar4 != 0);
                uVar6 = switchD_011154ec::caseD_2();
                return uVar6;
              }
              break;
            case 4:
              if (uVar4 != 0) {
                do {
                  if (*(char *)(param_1 + 0x10) < '\0') {
                    TIFFSwabLong(puVar19);
                  }
                  uVar4 = uVar4 - 1;
                  *puVar7 = (ulong)(uint)*puVar19;
                  puVar19 = (ulong *)((long)puVar19 + 4);
                  puVar7 = puVar7 + 1;
                } while (uVar4 != 0);
                uVar6 = switchD_011154ec::caseD_2();
                return uVar6;
              }
              break;
            case 6:
              if (uVar4 != 0) {
                do {
                  uVar4 = uVar4 - 1;
                  *puVar7 = (long)(char)*puVar19;
                  puVar7 = puVar7 + 1;
                  puVar19 = (ulong *)((long)puVar19 + 1);
                } while (uVar4 != 0);
                uVar6 = switchD_011154ec::caseD_2();
                return uVar6;
              }
              break;
            case 8:
              if (uVar4 != 0) {
                do {
                  if (*(char *)(param_1 + 0x10) < '\0') {
                    TIFFSwabShort(puVar19);
                  }
                  uVar4 = uVar4 - 1;
                  *puVar7 = (long)(short)*puVar19;
                  puVar19 = (ulong *)((long)puVar19 + 2);
                  puVar7 = puVar7 + 1;
                } while (uVar4 != 0);
                uVar6 = switchD_011154ec::caseD_2();
                return uVar6;
              }
              break;
            case 9:
              puVar18 = puVar7;
              for (; uVar4 != 0; uVar4 = uVar4 - 1) {
                if (*(char *)(param_1 + 0x10) < '\0') {
                  TIFFSwabLong(puVar19);
                }
                *puVar18 = (long)(int)(uint)*puVar19;
                puVar18 = puVar18 + 1;
                puVar19 = (ulong *)((long)puVar19 + 4);
              }
            }
            goto code_r0x011166bc;
          }
          goto LAB_01115650;
        }
        if ((uint)local_78 != 0) {
          uVar10 = 0;
          puVar7 = local_68;
          do {
            if (*(char *)(param_1 + 0x10) < '\0') {
              TIFFSwabLong8(puVar7);
            }
            if ((long)*puVar7 < 0) goto LAB_01115350;
            uVar10 = uVar10 + 1;
            puVar7 = puVar7 + 1;
          } while (uVar10 < uVar4);
        }
      }
      goto LAB_0111682c;
    }
    goto switchD_01114a8c_caseD_2;
  case 0x30:
    uVar4 = FUN_0111871c(param_1,param_2,&local_68);
    puVar19 = local_68;
    break;
  case 0x31:
    uVar4 = FUN_01116e6c(param_1,param_2,&local_68);
    puVar19 = local_68;
    break;
  case 0x32:
    uVar4 = FUN_01118e24(param_1,param_2,&local_68);
    puVar19 = local_68;
  }
  local_68 = puVar19;
  if (uVar4 == 0) {
    iVar5 = TIFFSetField(param_1,*param_2,*(undefined4 *)(param_2 + 4),puVar19);
joined_r0x01115208:
    if (puVar19 != (ulong *)0x0) {
      _TIFFfree(puVar19);
    }
joined_r0x01115214:
    if (iVar5 == 0) {
      return 0;
    }
  }
switchD_01114c7c_caseD_5:
  if (uVar4 == 0) {
LAB_01114984:
    return 1;
  }
switchD_01114a8c_caseD_2:
  if (lVar11 == 0) {
code_r0x01115230:
    pcVar8 = "unknown tagname";
  }
  else {
LAB_01115220:
    pcVar8 = *(char **)(lVar11 + 0x20);
  }
  FUN_01116d2c(param_1,uVar4,"TIFFFetchNormalTag",pcVar8,param_3);
  return 0;
}

