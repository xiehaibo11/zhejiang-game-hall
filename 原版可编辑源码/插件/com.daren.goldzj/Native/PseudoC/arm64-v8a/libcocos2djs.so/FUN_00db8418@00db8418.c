
/* WARNING: Removing unreachable block (ram,0x00db95b0) */
/* WARNING: Removing unreachable block (ram,0x00db9b48) */
/* WARNING: Removing unreachable block (ram,0x00db9e34) */
/* WARNING: Removing unreachable block (ram,0x00dba538) */
/* WARNING: Removing unreachable block (ram,0x00db9bf4) */
/* WARNING: Removing unreachable block (ram,0x00db8a14) */
/* WARNING: Removing unreachable block (ram,0x00db9384) */
/* WARNING: Removing unreachable block (ram,0x00dba584) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00db8418(long param_1,ushort *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong *puVar8;
  char *pcVar9;
  ushort uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
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
  uVar10 = *param_2;
  if (iVar5 != 0) {
    lVar12 = *(long *)(param_1 + 0x3f0);
    iVar16 = -1;
    do {
      iVar2 = iVar16 + iVar5;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      uVar4 = **(uint **)(lVar12 + (long)iVar2 * 8);
      if (uVar4 == uVar10) {
        iVar5 = -iVar2;
        uVar13 = (long)iVar2;
        goto LAB_00db849c;
      }
      if (uVar10 <= uVar4) {
        iVar5 = iVar2;
        iVar2 = iVar16;
      }
      iVar16 = iVar2;
    } while (iVar16 + 1 != iVar5);
  }
LAB_00db84c0:
  TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFFetchNormalTag",
               "No definition found for tag %d");
  return 0;
LAB_00dba588:
  _TIFFfree(puVar19);
  puVar19 = puVar7;
  goto LAB_00db8eac;
LAB_00dba3b4:
  _TIFFfree(puVar8);
  puVar19 = puVar7;
LAB_00db8eac:
  _TIFFfree(puVar19);
  uVar4 = 4;
  goto joined_r0x00db95a0;
  while (iVar5 = iVar5 + 1, uVar13 = uVar14 - 1,
        **(uint **)(lVar12 + (uVar14 - 1) * 8) == (uint)uVar10) {
LAB_00db849c:
    uVar14 = uVar13;
    if (iVar5 == 0) {
      uVar14 = 0;
      goto LAB_00db8508;
    }
  }
  if (iVar5 == 2) goto LAB_00db84c0;
LAB_00db8508:
  lVar12 = *(long *)(lVar12 + (uVar14 & 0xffffffff) * 8);
  uVar3 = local_68._4_4_;
  switch(*(undefined4 *)(lVar12 + 0x10)) {
  case 1:
    uVar4 = FUN_00dbbcd0(param_1,param_2,&local_68);
    puVar19 = local_68;
    if (uVar4 != 0) goto switchD_00db87d4_caseD_5;
    uVar11 = *(uint *)(param_2 + 4);
    if (uVar11 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      do {
        if (*(char *)((long)local_68 + lVar15) == '\0') break;
        lVar15 = lVar15 + 1;
      } while ((uint)lVar15 < uVar11);
    }
    uVar1 = (int)lVar15 + 1;
    if (uVar1 < uVar11) {
      TIFFWarningExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFFetchNormalTag",
                     "ASCII value for tag \"%s\" contains null byte in value; value incorrectly truncated during reading due to implementation limitations"
                     ,*(undefined8 *)(lVar12 + 0x20));
      puVar7 = local_68;
    }
    else {
      puVar7 = local_68;
      if (uVar1 != uVar11) {
        TIFFWarningExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFFetchNormalTag",
                       "ASCII value for tag \"%s\" does not end in null byte",
                       *(undefined8 *)(lVar12 + 0x20));
        if (((*(long *)(param_2 + 4) + 1U & 0xffffffff00000000) != 0) ||
           (puVar19 = _TIFFmalloc(*(long *)(param_2 + 4) + 1U), puVar19 == (ulong *)0x0)) {
          if (local_68 == (ulong *)0x0) {
            return 0;
          }
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
    goto joined_r0x00db8d6c;
  case 2:
    if (*(long *)(param_2 + 4) != 1) {
      uVar4 = 1;
      goto joined_r0x00db95a0;
    }
    uVar4 = 2;
    switch(param_2[1]) {
    case 1:
      uVar11 = (uint)(byte)param_2[8];
      break;
    default:
      goto switchD_00db85e4_caseD_2;
    case 3:
    case 8:
      uVar11 = (uint)param_2[8];
      local_68 = (ulong *)CONCAT62(local_68._2_6_,param_2[8]);
      if ((*(uint *)(param_1 + 0x10) >> 7 & 1) == 0) goto LAB_00db91d8;
      TIFFSwabShort(&local_68);
      uVar11 = (uint)local_68 & 0xffff;
      if (0xff < (ushort)local_68) goto LAB_00db91e0;
      goto LAB_00db9b68;
    case 4:
    case 9:
      uVar11 = *(uint *)(param_2 + 8);
      local_68 = (ulong *)CONCAT44(uVar3,uVar11);
      if (*(char *)(param_1 + 0x10) < '\0') {
        TIFFSwabLong(&local_68);
        uVar11 = (uint)local_68;
      }
LAB_00db91d8:
      if (0xff < uVar11) {
LAB_00db91e0:
        uVar4 = 4;
        goto joined_r0x00db95a0;
      }
LAB_00db9b68:
      uVar10 = *param_2;
      break;
    case 6:
      uVar11 = (uint)(char)param_2[8];
      if ((char)param_2[8] < '\0') goto LAB_00db91e0;
      break;
    case 0x10:
    case 0x11:
      uVar4 = *(uint *)(param_1 + 0x10);
      if ((uVar4 >> 0x13 & 1) == 0) {
        local_78 = (ulong *)CONCAT44(local_78._4_4_,*(uint *)(param_2 + 8));
        uVar11 = *(uint *)(param_2 + 8);
        if ((uVar4 >> 7 & 1) != 0) {
          TIFFSwabLong(&local_78);
          uVar4 = *(uint *)(param_1 + 0x10);
          uVar11 = (uint)local_78;
        }
        uVar13 = (ulong)uVar11;
        if ((uVar4 >> 0xb & 1) == 0) {
          uVar14 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar13,0);
          if ((uVar14 == uVar13) &&
             (lVar15 = (**(code **)(param_1 + 0x3c0))(*(undefined8 *)(param_1 + 0x3b8),&local_68,8),
             lVar15 == 8)) {
LAB_00db9e6c:
            uVar4 = *(uint *)(param_1 + 0x10);
            goto joined_r0x00db953c;
          }
        }
        else if (uVar13 + 8 <= *(ulong *)(param_1 + 0x3a0)) {
          _TIFFmemcpy(&local_68,(void *)(*(long *)(param_1 + 0x398) + uVar13),8);
          goto LAB_00db9e6c;
        }
        uVar4 = 3;
      }
      else {
        local_68 = *(ulong **)(param_2 + 8);
joined_r0x00db953c:
        if ((uVar4 >> 7 & 1) != 0) {
          TIFFSwabLong8(&local_68);
        }
        uVar11 = (uint)local_68;
        if ((ulong *)0xff < local_68) {
          uVar11 = 0;
        }
        uVar4 = 0;
        if ((ulong *)0xff < local_68) {
          uVar4 = 4;
        }
        if (uVar4 == 0) goto LAB_00db9b68;
      }
      goto switchD_00db85e4_caseD_2;
    }
    uVar6 = TIFFSetField(param_1,uVar10,uVar11 & 0xff);
    iVar5 = (int)uVar6;
    goto joined_r0x00dba60c;
  default:
    goto LAB_00db84dc;
  case 4:
    uVar4 = FUN_00dba6b4(param_1,param_2,&local_68);
    if ((uVar4 == 0) &&
       (uVar6 = TIFFSetField(param_1,*param_2,(ulong)local_68 & 0xffff), (int)uVar6 == 0)) {
      return uVar6;
    }
    goto switchD_00db87d4_caseD_5;
  case 6:
    if (*(long *)(param_2 + 4) != 1) goto LAB_00db8a0c;
    uVar4 = 2;
    switch(param_2[1]) {
    case 1:
      fVar20 = (float)(uint)(byte)param_2[8];
      break;
    default:
      goto switchD_00db87d4_caseD_5;
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
LAB_00db95a8:
        uVar4 = 4;
        goto switchD_00db85e4_caseD_2;
      }
      break;
    case 8:
      local_68 = (ulong *)CONCAT62(local_68._2_6_,param_2[8]);
      uVar10 = param_2[8];
      if ((*(uint *)(param_1 + 0x10) >> 7 & 1) != 0) {
        TIFFSwabShort(&local_68);
        uVar10 = (ushort)local_68;
      }
      fVar20 = (float)(int)(short)uVar10;
      if (-1 < (short)uVar10) break;
LAB_00db937c:
      uVar4 = 4;
      goto switchD_00db87d4_caseD_5;
    case 9:
      uVar13 = (ulong)*(uint *)(param_2 + 8);
      local_68 = (ulong *)CONCAT44(uVar3,*(uint *)(param_2 + 8));
      if (*(char *)(param_1 + 0x10) < '\0') {
        TIFFSwabLong(&local_68);
        uVar13 = (ulong)local_68 & 0xffffffff;
      }
      uVar4 = (uint)(uVar13 >> 0x1d);
      fVar20 = (float)uVar13;
      if ((uVar4 >> 2 == 0) || (uVar4 = uVar4 & 4, fVar20 = local_6c, (uVar13 >> 0x1d & 4) == 0))
      break;
      goto switchD_00db87d4_caseD_5;
    case 0x10:
    case 0x11:
      uVar4 = *(uint *)(param_1 + 0x10);
      if ((uVar4 >> 0x13 & 1) == 0) {
        local_78 = (ulong *)CONCAT44(local_78._4_4_,*(uint *)(param_2 + 8));
        uVar11 = *(uint *)(param_2 + 8);
        if ((uVar4 >> 7 & 1) != 0) {
          TIFFSwabLong(&local_78);
          uVar4 = *(uint *)(param_1 + 0x10);
          uVar11 = (uint)local_78;
        }
        uVar13 = (ulong)uVar11;
        if ((uVar4 >> 0xb & 1) == 0) {
          uVar14 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar13,0);
          if ((uVar14 != uVar13) ||
             (lVar15 = (**(code **)(param_1 + 0x3c0))(*(undefined8 *)(param_1 + 0x3b8),&local_68,8),
             lVar15 != 8)) {
LAB_00db9b40:
            uVar4 = 3;
            goto switchD_00db87d4_caseD_5;
          }
        }
        else {
          if (*(ulong *)(param_1 + 0x3a0) < uVar13 + 8) goto LAB_00db9b40;
          _TIFFmemcpy(&local_68,(void *)(*(long *)(param_1 + 0x398) + uVar13),8);
        }
        uVar4 = *(uint *)(param_1 + 0x10);
      }
      else {
        local_68 = *(ulong **)(param_2 + 8);
      }
      if ((uVar4 >> 7 & 1) != 0) {
        TIFFSwabLong8(&local_68);
      }
      if ((ulong)local_68 >> 0x20 != 0) goto LAB_00db937c;
      fVar20 = SUB84(local_68,0);
    }
    local_6c = fVar20;
    uVar6 = TIFFSetField(param_1,*param_2,local_6c);
    iVar5 = (int)uVar6;
joined_r0x00dba60c:
    if (iVar5 != 0) {
      return 1;
    }
    return uVar6;
  case 8:
    if (*(long *)(param_2 + 4) != 1) goto LAB_00db8a0c;
    uVar4 = 2;
    switch(param_2[1]) {
    case 1:
      puVar19 = (ulong *)(ulong)(byte)param_2[8];
      break;
    default:
      goto switchD_00db87d4_caseD_5;
    case 3:
      local_68 = (ulong *)CONCAT62(local_68._2_6_,param_2[8]);
      puVar19 = (ulong *)(ulong)param_2[8];
      if ((*(uint *)(param_1 + 0x10) >> 7 & 1) != 0) {
        TIFFSwabShort(&local_68);
        puVar19 = (ulong *)((ulong)local_68 & 0xffff);
      }
      break;
    case 4:
      local_68 = (ulong *)CONCAT44(uVar3,*(uint *)(param_2 + 8));
      puVar19 = (ulong *)(ulong)*(uint *)(param_2 + 8);
      if (*(char *)(param_1 + 0x10) < '\0') {
        TIFFSwabLong(&local_68);
        puVar19 = (ulong *)((ulong)local_68 & 0xffffffff);
      }
      break;
    case 6:
      puVar19 = (ulong *)(long)(char)param_2[8];
      if ((long)(char)param_2[8] < 0) goto LAB_00db95a8;
      break;
    case 8:
      local_68 = (ulong *)CONCAT62(local_68._2_6_,param_2[8]);
      uVar10 = param_2[8];
      if ((*(uint *)(param_1 + 0x10) >> 7 & 1) != 0) {
        TIFFSwabShort(&local_68);
        uVar10 = (ushort)local_68;
      }
      if (-1 < (short)uVar10) {
        puVar19 = (ulong *)(long)(short)uVar10;
        break;
      }
LAB_00db9bec:
      uVar4 = 4;
      goto switchD_00db87d4_caseD_5;
    case 9:
      uVar13 = (ulong)*(uint *)(param_2 + 8);
      local_68 = (ulong *)CONCAT44(uVar3,*(uint *)(param_2 + 8));
      if (*(char *)(param_1 + 0x10) < '\0') {
        TIFFSwabLong(&local_68);
        uVar13 = (ulong)local_68 & 0xffffffff;
      }
      uVar4 = (uint)(uVar13 >> 0x1d);
      if (uVar4 >> 2 == 0) {
        puVar19 = (ulong *)(long)(int)uVar13;
      }
      else {
        uVar4 = uVar4 & 4;
        puVar19 = local_78;
        if ((uVar13 >> 0x1d & 4) != 0) goto switchD_00db87d4_caseD_5;
      }
      break;
    case 0x10:
      uVar4 = *(uint *)(param_1 + 0x10);
      if ((uVar4 >> 0x13 & 1) == 0) {
        local_68 = (ulong *)CONCAT44(uVar3,*(uint *)(param_2 + 8));
        uVar11 = *(uint *)(param_2 + 8);
        if ((uVar4 >> 7 & 1) != 0) {
          TIFFSwabLong(&local_68);
          uVar4 = *(uint *)(param_1 + 0x10);
          uVar11 = (uint)(float)local_68;
        }
        uVar13 = (ulong)uVar11;
        if ((uVar4 >> 0xb & 1) == 0) {
          uVar14 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar13,0);
          if ((uVar14 != uVar13) ||
             (lVar15 = (**(code **)(param_1 + 0x3c0))(*(undefined8 *)(param_1 + 0x3b8),&local_78,8),
             lVar15 != 8)) {
LAB_00dba530:
            uVar4 = 3;
            goto switchD_00db85e4_caseD_2;
          }
        }
        else {
          if (*(ulong *)(param_1 + 0x3a0) < uVar13 + 8) goto LAB_00dba530;
          _TIFFmemcpy(&local_78,(void *)(*(long *)(param_1 + 0x398) + uVar13),8);
        }
        uVar4 = *(uint *)(param_1 + 0x10);
      }
      else {
        local_78 = *(ulong **)(param_2 + 8);
      }
      puVar19 = local_78;
      if ((uVar4 >> 7 & 1) != 0) {
        TIFFSwabLong8(&local_78);
        puVar19 = local_78;
      }
      break;
    case 0x11:
      uVar4 = *(uint *)(param_1 + 0x10);
      if ((uVar4 >> 0x13 & 1) == 0) {
        local_6c = *(float *)(param_2 + 8);
        if ((uVar4 >> 7 & 1) != 0) {
          TIFFSwabLong(&local_6c);
          uVar4 = *(uint *)(param_1 + 0x10);
        }
        uVar13 = (ulong)(uint)local_6c;
        if ((uVar4 >> 0xb & 1) == 0) {
          uVar14 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar13,0);
          if ((uVar14 != uVar13) ||
             (lVar15 = (**(code **)(param_1 + 0x3c0))(*(undefined8 *)(param_1 + 0x3b8),&local_68,8),
             lVar15 != 8)) {
LAB_00db9e2c:
            uVar4 = 3;
            goto switchD_00db87d4_caseD_5;
          }
        }
        else {
          if (*(ulong *)(param_1 + 0x3a0) < uVar13 + 8) goto LAB_00db9e2c;
          _TIFFmemcpy(&local_68,(void *)(*(long *)(param_1 + 0x398) + uVar13),8);
        }
        uVar4 = *(uint *)(param_1 + 0x10);
      }
      else {
        local_68 = *(ulong **)(param_2 + 8);
      }
      if ((uVar4 >> 7 & 1) != 0) {
        TIFFSwabLong8(&local_68);
      }
      puVar19 = local_68;
      if ((long)local_68 < 0) goto LAB_00db9bec;
    }
    local_78 = puVar19;
    uVar10 = *param_2;
    puVar19 = local_78;
LAB_00db93e4:
    uVar6 = TIFFSetField(param_1,uVar10,puVar19);
    iVar5 = (int)uVar6;
    goto joined_r0x00dba60c;
  case 10:
    if (*(long *)(param_2 + 4) != 1) goto LAB_00db8a0c;
    uVar4 = 2;
    switch(param_2[1]) {
    case 1:
      local_6c = (float)NEON_ucvtf((uint)(byte)param_2[8]);
      break;
    default:
      goto switchD_00db87d4_caseD_5;
    case 3:
      uVar13 = (ulong)param_2[8];
      local_68 = (ulong *)CONCAT62(local_68._2_6_,param_2[8]);
      if ((*(uint *)(param_1 + 0x10) >> 7 & 1) != 0) {
        TIFFSwabShort(&local_68);
        uVar13 = (ulong)local_68 & 0xffff;
      }
      goto LAB_00db95f0;
    case 4:
      uVar13 = (ulong)*(uint *)(param_2 + 8);
      local_68 = (ulong *)CONCAT44(uVar3,*(uint *)(param_2 + 8));
      if (*(char *)(param_1 + 0x10) < '\0') {
        TIFFSwabLong(&local_68);
        uVar13 = (ulong)local_68 & 0xffffffff;
      }
LAB_00db95f0:
      local_6c = (float)uVar13;
      break;
    case 5:
      uVar4 = *(uint *)(param_1 + 0x10);
      if ((uVar4 >> 0x13 & 1) == 0) {
        local_78 = (ulong *)CONCAT44(local_78._4_4_,*(uint *)(param_2 + 8));
        uVar11 = *(uint *)(param_2 + 8);
        if ((uVar4 >> 7 & 1) != 0) {
          TIFFSwabLong(&local_78);
          uVar4 = *(uint *)(param_1 + 0x10);
          uVar11 = (uint)local_78;
        }
        uVar13 = (ulong)uVar11;
        if ((uVar4 >> 0xb & 1) == 0) {
          uVar14 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar13,0);
          if ((uVar14 == uVar13) &&
             (lVar15 = (**(code **)(param_1 + 0x3c0))(*(undefined8 *)(param_1 + 0x3b8),&local_68,8),
             lVar15 == 8)) {
LAB_00dba3e4:
            uVar4 = *(uint *)(param_1 + 0x10);
            goto joined_r0x00dba3e8;
          }
        }
        else if (uVar13 + 8 <= *(ulong *)(param_1 + 0x3a0)) {
          _TIFFmemcpy(&local_68,(void *)(*(long *)(param_1 + 0x398) + uVar13),8);
          goto LAB_00dba3e4;
        }
        goto LAB_00dba530;
      }
      local_68 = *(ulong **)(param_2 + 8);
joined_r0x00dba3e8:
      if ((uVar4 >> 7 & 1) != 0) {
        TIFFSwabArrayOfLong(&local_68,2);
      }
      if ((float)local_68 != 0.0) {
        dVar22 = (double)((ulong)local_68 & 0xffffffff);
        goto LAB_00db9c4c;
      }
LAB_00db9c60:
      local_6c = 0.0;
      break;
    case 6:
      iVar5 = (int)(char)param_2[8];
      goto LAB_00db96ac;
    case 8:
      local_68 = (ulong *)CONCAT62(local_68._2_6_,param_2[8]);
      uVar10 = param_2[8];
      if ((*(uint *)(param_1 + 0x10) >> 7 & 1) != 0) {
        TIFFSwabShort(&local_68);
        uVar10 = (ushort)local_68;
      }
      iVar5 = (int)(short)uVar10;
      goto LAB_00db96ac;
    case 9:
      local_68 = (ulong *)CONCAT44(uVar3,*(int *)(param_2 + 8));
      iVar5 = *(int *)(param_2 + 8);
      if (*(char *)(param_1 + 0x10) < '\0') {
        TIFFSwabLong(&local_68);
        iVar5 = (int)(float)local_68;
      }
LAB_00db96ac:
      local_6c = (float)iVar5;
      break;
    case 10:
      uVar4 = *(uint *)(param_1 + 0x10);
      if ((uVar4 >> 0x13 & 1) == 0) {
        local_78 = (ulong *)CONCAT44(local_78._4_4_,*(uint *)(param_2 + 8));
        uVar11 = *(uint *)(param_2 + 8);
        if ((uVar4 >> 7 & 1) != 0) {
          TIFFSwabLong(&local_78);
          uVar4 = *(uint *)(param_1 + 0x10);
          uVar11 = (uint)local_78;
        }
        uVar13 = (ulong)uVar11;
        if ((uVar4 >> 0xb & 1) == 0) {
          uVar14 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar13,0);
          if ((uVar14 == uVar13) &&
             (lVar15 = (**(code **)(param_1 + 0x3c0))(*(undefined8 *)(param_1 + 0x3b8),&local_68,8),
             lVar15 == 8)) {
LAB_00dba414:
            uVar4 = *(uint *)(param_1 + 0x10);
            goto joined_r0x00dba418;
          }
        }
        else if (uVar13 + 8 <= *(ulong *)(param_1 + 0x3a0)) {
          _TIFFmemcpy(&local_68,(void *)(*(long *)(param_1 + 0x398) + uVar13),8);
          goto LAB_00dba414;
        }
        goto LAB_00dba530;
      }
      local_68 = *(ulong **)(param_2 + 8);
joined_r0x00dba418:
      if ((uVar4 >> 7 & 1) != 0) {
        TIFFSwabArrayOfLong(&local_68,2);
      }
      if ((float)local_68 == 0.0) goto LAB_00db9c60;
      dVar22 = (double)(int)(float)local_68;
LAB_00db9c4c:
      dVar21 = (double)NEON_ucvtf((ulong)local_68._4_4_);
      local_6c = (float)(dVar22 / dVar21);
      break;
    case 0xb:
      local_6c = *(float *)(param_2 + 8);
      if ((*(uint *)(param_1 + 0x10) >> 7 & 1) != 0) {
        TIFFSwabLong(&local_6c);
      }
      break;
    case 0xc:
      uVar4 = *(uint *)(param_1 + 0x10);
      if ((uVar4 >> 0x13 & 1) != 0) {
        local_68 = *(ulong **)(param_2 + 8);
joined_r0x00db9c74:
        if ((uVar4 >> 7 & 1) != 0) {
          TIFFSwabLong8(&local_68);
        }
        local_6c = (float)(double)local_68;
        break;
      }
      local_78 = (ulong *)CONCAT44(local_78._4_4_,*(uint *)(param_2 + 8));
      uVar11 = *(uint *)(param_2 + 8);
      if ((uVar4 >> 7 & 1) != 0) {
        TIFFSwabLong(&local_78);
        uVar4 = *(uint *)(param_1 + 0x10);
        uVar11 = (uint)local_78;
      }
      uVar13 = (ulong)uVar11;
      if ((uVar4 >> 0xb & 1) == 0) {
        uVar14 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar13,0);
        if ((uVar14 == uVar13) &&
           (lVar15 = (**(code **)(param_1 + 0x3c0))(*(undefined8 *)(param_1 + 0x3b8),&local_68,8),
           lVar15 == 8)) {
LAB_00dba444:
          uVar4 = *(uint *)(param_1 + 0x10);
          goto joined_r0x00db9c74;
        }
      }
      else if (uVar13 + 8 <= *(ulong *)(param_1 + 0x3a0)) {
        _TIFFmemcpy(&local_68,(void *)(*(long *)(param_1 + 0x398) + uVar13),8);
        goto LAB_00dba444;
      }
LAB_00dba490:
      uVar4 = 3;
      goto switchD_00db87d4_caseD_5;
    case 0x10:
      uVar4 = *(uint *)(param_1 + 0x10);
      if ((uVar4 >> 0x13 & 1) == 0) {
        local_78 = (ulong *)CONCAT44(local_78._4_4_,*(uint *)(param_2 + 8));
        uVar11 = *(uint *)(param_2 + 8);
        if ((uVar4 >> 7 & 1) != 0) {
          TIFFSwabLong(&local_78);
          uVar4 = *(uint *)(param_1 + 0x10);
          uVar11 = (uint)local_78;
        }
        uVar13 = (ulong)uVar11;
        if ((uVar4 >> 0xb & 1) == 0) {
          uVar14 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar13,0);
          if ((uVar14 == uVar13) &&
             (lVar15 = (**(code **)(param_1 + 0x3c0))(*(undefined8 *)(param_1 + 0x3b8),&local_68,8),
             lVar15 == 8)) {
LAB_00dba474:
            uVar4 = *(uint *)(param_1 + 0x10);
            goto joined_r0x00dba478;
          }
        }
        else if (uVar13 + 8 <= *(ulong *)(param_1 + 0x3a0)) {
          _TIFFmemcpy(&local_68,(void *)(*(long *)(param_1 + 0x398) + uVar13),8);
          goto LAB_00dba474;
        }
        goto LAB_00dba490;
      }
      local_68 = *(ulong **)(param_2 + 8);
joined_r0x00dba478:
      if ((uVar4 >> 7 & 1) != 0) {
        TIFFSwabLong8(&local_68);
      }
      local_6c = (float)local_68;
      break;
    case 0x11:
      uVar4 = *(uint *)(param_1 + 0x10);
      if ((uVar4 >> 0x13 & 1) == 0) {
        local_78 = (ulong *)CONCAT44(local_78._4_4_,*(uint *)(param_2 + 8));
        uVar11 = *(uint *)(param_2 + 8);
        if ((uVar4 >> 7 & 1) != 0) {
          TIFFSwabLong(&local_78);
          uVar4 = *(uint *)(param_1 + 0x10);
          uVar11 = (uint)local_78;
        }
        uVar13 = (ulong)uVar11;
        if ((uVar4 >> 0xb & 1) == 0) {
          uVar14 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar13,0);
          if ((uVar14 == uVar13) &&
             (lVar15 = (**(code **)(param_1 + 0x3c0))(*(undefined8 *)(param_1 + 0x3b8),&local_68,8),
             lVar15 == 8)) {
LAB_00dba5cc:
            uVar4 = *(uint *)(param_1 + 0x10);
            goto joined_r0x00dba5d0;
          }
        }
        else if (uVar13 + 8 <= *(ulong *)(param_1 + 0x3a0)) {
          _TIFFmemcpy(&local_68,(void *)(*(long *)(param_1 + 0x398) + uVar13),8);
          goto LAB_00dba5cc;
        }
        goto LAB_00dba490;
      }
      local_68 = *(ulong **)(param_2 + 8);
joined_r0x00dba5d0:
      if ((uVar4 >> 7 & 1) != 0) {
        TIFFSwabLong8(&local_68);
      }
      local_6c = (float)(long)local_68;
    }
    uVar6 = TIFFSetField((double)local_6c,param_1,*param_2);
    iVar5 = (int)uVar6;
    goto joined_r0x00dba60c;
  case 0xb:
    if (*(long *)(param_2 + 4) != 1) goto LAB_00db8a0c;
    uVar4 = 2;
    switch(param_2[1]) {
    case 1:
      local_78 = (ulong *)NEON_ucvtf((ulong)(byte)param_2[8]);
      break;
    default:
      goto switchD_00db87d4_caseD_5;
    case 3:
      uVar13 = (ulong)param_2[8];
      local_68 = (ulong *)CONCAT62(local_68._2_6_,param_2[8]);
      if ((*(uint *)(param_1 + 0x10) >> 7 & 1) != 0) {
        TIFFSwabShort(&local_68);
        uVar13 = (ulong)local_68 & 0xffff;
      }
      goto LAB_00db98b0;
    case 4:
      uVar13 = (ulong)*(uint *)(param_2 + 8);
      local_68 = (ulong *)CONCAT44(uVar3,*(uint *)(param_2 + 8));
      if (*(char *)(param_1 + 0x10) < '\0') {
        TIFFSwabLong(&local_68);
        uVar13 = (ulong)local_68 & 0xffffffff;
      }
LAB_00db98b0:
      local_78 = (ulong *)(double)uVar13;
      break;
    case 5:
      uVar4 = *(uint *)(param_1 + 0x10);
      if ((uVar4 >> 0x13 & 1) != 0) {
        local_68 = *(ulong **)(param_2 + 8);
joined_r0x00db9cf8:
        if ((uVar4 >> 7 & 1) != 0) {
          TIFFSwabArrayOfLong(&local_68,2);
        }
        if ((float)local_68 != 0.0) {
          dVar22 = (double)((ulong)local_68 & 0xffffffff);
          goto LAB_00db9d44;
        }
LAB_00db9d50:
        local_78 = (ulong *)0x0;
        break;
      }
      local_6c = *(float *)(param_2 + 8);
      if ((uVar4 >> 7 & 1) != 0) {
        TIFFSwabLong(&local_6c);
        uVar4 = *(uint *)(param_1 + 0x10);
      }
      uVar13 = (ulong)(uint)local_6c;
      if ((uVar4 >> 0xb & 1) == 0) {
        uVar14 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar13,0);
        if ((uVar14 == uVar13) &&
           (lVar15 = (**(code **)(param_1 + 0x3c0))(*(undefined8 *)(param_1 + 0x3b8),&local_68,8),
           lVar15 == 8)) {
LAB_00dba4e4:
          uVar4 = *(uint *)(param_1 + 0x10);
          goto joined_r0x00db9cf8;
        }
      }
      else if (uVar13 + 8 <= *(ulong *)(param_1 + 0x3a0)) {
        _TIFFmemcpy(&local_68,(void *)(*(long *)(param_1 + 0x398) + uVar13),8);
        goto LAB_00dba4e4;
      }
LAB_00dba57c:
      uVar4 = 3;
      goto switchD_00db87d4_caseD_5;
    case 6:
      iVar5 = (int)(char)param_2[8];
      goto LAB_00db996c;
    case 8:
      local_68 = (ulong *)CONCAT62(local_68._2_6_,param_2[8]);
      uVar10 = param_2[8];
      if ((*(uint *)(param_1 + 0x10) >> 7 & 1) != 0) {
        TIFFSwabShort(&local_68);
        uVar10 = (ushort)local_68;
      }
      iVar5 = (int)(short)uVar10;
      goto LAB_00db996c;
    case 9:
      local_68 = (ulong *)CONCAT44(uVar3,*(int *)(param_2 + 8));
      iVar5 = *(int *)(param_2 + 8);
      if (*(char *)(param_1 + 0x10) < '\0') {
        TIFFSwabLong(&local_68);
        iVar5 = (int)(float)local_68;
      }
LAB_00db996c:
      local_78 = (ulong *)(double)iVar5;
      break;
    case 10:
      uVar4 = *(uint *)(param_1 + 0x10);
      if ((uVar4 >> 0x13 & 1) == 0) {
        local_6c = *(float *)(param_2 + 8);
        if ((uVar4 >> 7 & 1) != 0) {
          TIFFSwabLong(&local_6c);
          uVar4 = *(uint *)(param_1 + 0x10);
        }
        uVar13 = (ulong)(uint)local_6c;
        if ((uVar4 >> 0xb & 1) == 0) {
          uVar14 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar13,0);
          if ((uVar14 == uVar13) &&
             (lVar15 = (**(code **)(param_1 + 0x3c0))(*(undefined8 *)(param_1 + 0x3b8),&local_68,8),
             lVar15 == 8)) {
LAB_00dba514:
            uVar4 = *(uint *)(param_1 + 0x10);
            goto joined_r0x00dba518;
          }
        }
        else if (uVar13 + 8 <= *(ulong *)(param_1 + 0x3a0)) {
          _TIFFmemcpy(&local_68,(void *)(*(long *)(param_1 + 0x398) + uVar13),8);
          goto LAB_00dba514;
        }
        goto LAB_00dba57c;
      }
      local_68 = *(ulong **)(param_2 + 8);
joined_r0x00dba518:
      if ((uVar4 >> 7 & 1) != 0) {
        TIFFSwabArrayOfLong(&local_68,2);
      }
      if ((float)local_68 == 0.0) goto LAB_00db9d50;
      dVar22 = (double)(int)(float)local_68;
LAB_00db9d44:
      dVar21 = (double)NEON_ucvtf((ulong)local_68._4_4_);
      local_78 = (ulong *)(dVar22 / dVar21);
      break;
    case 0xb:
      fVar20 = *(float *)(param_2 + 8);
      local_68 = (ulong *)CONCAT44(uVar3,fVar20);
      if ((*(uint *)(param_1 + 0x10) >> 7 & 1) != 0) {
        TIFFSwabLong(&local_68);
        fVar20 = (float)local_68;
      }
      local_78 = (ulong *)(double)fVar20;
      break;
    case 0xc:
      uVar4 = *(uint *)(param_1 + 0x10);
      if ((uVar4 >> 0x13 & 1) == 0) {
        local_68 = (ulong *)CONCAT44(uVar3,*(uint *)(param_2 + 8));
        uVar11 = *(uint *)(param_2 + 8);
        if ((uVar4 >> 7 & 1) != 0) {
          TIFFSwabLong(&local_68);
          uVar4 = *(uint *)(param_1 + 0x10);
          uVar11 = (uint)(float)local_68;
        }
        uVar13 = (ulong)uVar11;
        if ((uVar4 >> 0xb & 1) == 0) {
          uVar14 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar13,0);
          if ((uVar14 == uVar13) &&
             (lVar15 = (**(code **)(param_1 + 0x3c0))(*(undefined8 *)(param_1 + 0x3b8),&local_78,8),
             lVar15 == 8)) {
LAB_00dba5ec:
            uVar4 = *(uint *)(param_1 + 0x10);
            goto joined_r0x00dba5f0;
          }
        }
        else if (uVar13 + 8 <= *(ulong *)(param_1 + 0x3a0)) {
          _TIFFmemcpy(&local_78,(void *)(*(long *)(param_1 + 0x398) + uVar13),8);
          goto LAB_00dba5ec;
        }
        goto LAB_00dba530;
      }
      local_78 = *(ulong **)(param_2 + 8);
joined_r0x00dba5f0:
      if ((uVar4 >> 7 & 1) != 0) {
        TIFFSwabLong8(&local_78);
      }
      break;
    case 0x10:
      uVar4 = *(uint *)(param_1 + 0x10);
      if ((uVar4 >> 0x13 & 1) == 0) {
        local_6c = *(float *)(param_2 + 8);
        if ((uVar4 >> 7 & 1) != 0) {
          TIFFSwabLong(&local_6c);
          uVar4 = *(uint *)(param_1 + 0x10);
        }
        uVar13 = (ulong)(uint)local_6c;
        if ((uVar4 >> 0xb & 1) == 0) {
          uVar14 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar13,0);
          if ((uVar14 == uVar13) &&
             (lVar15 = (**(code **)(param_1 + 0x3c0))(*(undefined8 *)(param_1 + 0x3b8),&local_68,8),
             lVar15 == 8)) {
LAB_00dba560:
            uVar4 = *(uint *)(param_1 + 0x10);
            goto joined_r0x00dba564;
          }
        }
        else if (uVar13 + 8 <= *(ulong *)(param_1 + 0x3a0)) {
          _TIFFmemcpy(&local_68,(void *)(*(long *)(param_1 + 0x398) + uVar13),8);
          goto LAB_00dba560;
        }
        goto LAB_00dba57c;
      }
      local_68 = *(ulong **)(param_2 + 8);
joined_r0x00dba564:
      if ((uVar4 >> 7 & 1) != 0) {
        TIFFSwabLong8(&local_68);
      }
      local_78 = (ulong *)NEON_ucvtf(local_68);
      break;
    case 0x11:
      uVar4 = *(uint *)(param_1 + 0x10);
      if ((uVar4 >> 0x13 & 1) == 0) {
        local_6c = *(float *)(param_2 + 8);
        if ((uVar4 >> 7 & 1) != 0) {
          TIFFSwabLong(&local_6c);
          uVar4 = *(uint *)(param_1 + 0x10);
        }
        uVar13 = (ulong)(uint)local_6c;
        if ((uVar4 >> 0xb & 1) == 0) {
          uVar14 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar13,0);
          if ((uVar14 == uVar13) &&
             (lVar15 = (**(code **)(param_1 + 0x3c0))(*(undefined8 *)(param_1 + 0x3b8),&local_68,8),
             lVar15 == 8)) {
LAB_00dba630:
            uVar4 = *(uint *)(param_1 + 0x10);
            goto joined_r0x00dba634;
          }
        }
        else if (uVar13 + 8 <= *(ulong *)(param_1 + 0x3a0)) {
          _TIFFmemcpy(&local_68,(void *)(*(long *)(param_1 + 0x398) + uVar13),8);
          goto LAB_00dba630;
        }
        goto LAB_00dba57c;
      }
      local_68 = *(ulong **)(param_2 + 8);
joined_r0x00dba634:
      if ((uVar4 >> 7 & 1) != 0) {
        TIFFSwabLong8(&local_68);
      }
      local_78 = (ulong *)(double)(long)local_68;
    }
    uVar6 = TIFFSetField(local_78,param_1,*param_2);
    iVar5 = (int)uVar6;
    goto joined_r0x00dba60c;
  case 0xc:
    if (*(long *)(param_2 + 4) != 1) goto LAB_00db8a0c;
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
      goto switchD_00db87d4_caseD_5;
    case 0x10:
    case 0x12:
      uVar4 = *(uint *)(param_1 + 0x10);
      if ((uVar4 >> 0x13 & 1) == 0) {
        local_78 = (ulong *)CONCAT44(local_78._4_4_,*(uint *)(param_2 + 8));
        uVar11 = *(uint *)(param_2 + 8);
        if ((uVar4 >> 7 & 1) != 0) {
          TIFFSwabLong(&local_78);
          uVar4 = *(uint *)(param_1 + 0x10);
          uVar11 = (uint)local_78;
        }
        uVar13 = (ulong)uVar11;
        if ((uVar4 >> 0xb & 1) == 0) {
          uVar14 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar13,0);
          if ((uVar14 == uVar13) &&
             (lVar15 = (**(code **)(param_1 + 0x3c0))(*(undefined8 *)(param_1 + 0x3b8),&local_68,8),
             lVar15 == 8)) {
LAB_00db9588:
            uVar4 = *(uint *)(param_1 + 0x10);
            goto joined_r0x00db958c;
          }
        }
        else if (uVar13 + 8 <= *(ulong *)(param_1 + 0x3a0)) {
          _TIFFmemcpy(&local_68,(void *)(*(long *)(param_1 + 0x398) + uVar13),8);
          goto LAB_00db9588;
        }
        goto LAB_00dba530;
      }
      local_68 = *(ulong **)(param_2 + 8);
joined_r0x00db958c:
      if ((uVar4 >> 7 & 1) != 0) {
        TIFFSwabLong8(&local_68);
      }
    }
    uVar10 = *param_2;
    puVar19 = local_68;
    goto LAB_00db93e4;
  case 0xe:
    if (*(long *)(param_2 + 4) != 2) {
      TIFFWarningExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFFetchNormalTag",
                     "incorrect count for field \"%s\", expected 2, got %d",
                     *(undefined8 *)(lVar12 + 0x20));
      return 0;
    }
    uVar4 = FUN_00dbaf38(param_1,param_2,&local_68);
    puVar19 = local_68;
    if (uVar4 == 0) {
      iVar5 = TIFFSetField(param_1,*param_2,(short)*local_68,*(undefined2 *)((long)local_68 + 2));
      _TIFFfree(puVar19);
      goto joined_r0x00db8d6c;
    }
    goto switchD_00db87d4_caseD_5;
  case 0x10:
    if (*(long *)(param_2 + 4) != (long)*(short *)(lVar12 + 4)) {
      TIFFWarningExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFFetchNormalTag",
                     "incorrect count for field \"%s\", expected %d, got %d",
                     *(undefined8 *)(lVar12 + 0x20));
      return 0;
    }
    uVar4 = FUN_00dbbcd0(param_1,param_2,&local_68);
    puVar19 = local_68;
    if (uVar4 != 0) goto switchD_00db87d4_caseD_5;
    iVar5 = TIFFSetField(param_1,*param_2,local_68);
    goto joined_r0x00db8d60;
  case 0x12:
    if (*(long *)(param_2 + 4) != (long)*(short *)(lVar12 + 4)) {
      return 1;
    }
    uVar4 = FUN_00dbaf38(param_1,param_2,&local_68);
    if (uVar4 != 0) goto switchD_00db87d4_caseD_5;
    goto LAB_00db8918;
  case 0x14:
    if (*(long *)(param_2 + 4) != (long)*(short *)(lVar12 + 4)) {
      return 1;
    }
    uVar4 = FUN_00dbbfa0(param_1,param_2,&local_68);
    goto joined_r0x00db8914;
  case 0x18:
    if (*(long *)(param_2 + 4) != (long)*(short *)(lVar12 + 4)) {
      return 1;
    }
    uVar4 = FUN_00dbc274(param_1,param_2,&local_68);
joined_r0x00db8914:
    if (uVar4 == 0) {
LAB_00db8918:
      iVar5 = TIFFSetField(param_1,*param_2,local_68);
joined_r0x00db8e20:
      if (local_68 != (ulong *)0x0) {
        _TIFFfree(local_68);
      }
joined_r0x00dba3a8:
      if (iVar5 == 0) {
        return 0;
      }
      return 1;
    }
    goto switchD_00db87d4_caseD_5;
  case 0x1b:
  case 0x1c:
    if (*(ulong *)(param_2 + 4) >> 0x10 != 0) goto LAB_00db8a0c;
    uVar4 = FUN_00dbbcd0(param_1,param_2,&local_68);
    if (uVar4 != 0) goto switchD_00db87d4_caseD_5;
LAB_00db8e04:
    iVar5 = TIFFSetField(param_1,*param_2,param_2[4],local_68);
    goto joined_r0x00db8e20;
  case 0x1e:
    if (*(ulong *)(param_2 + 4) >> 0x10 != 0) goto LAB_00db8a0c;
    uVar4 = FUN_00dbaf38(param_1,param_2,&local_68);
joined_r0x00db8e00:
    if (uVar4 == 0) goto LAB_00db8e04;
    goto switchD_00db87d4_caseD_5;
  case 0x20:
    if (*(ulong *)(param_2 + 4) >> 0x10 == 0) {
      uVar4 = FUN_00dbbfa0(param_1,param_2,&local_68);
      goto joined_r0x00db8e00;
    }
    goto LAB_00db8a0c;
  case 0x22:
    if (*(ulong *)(param_2 + 4) >> 0x10 == 0) {
      uVar4 = FUN_00dbc6b0(param_1,param_2,&local_68);
      goto joined_r0x00db8e00;
    }
    goto LAB_00db8a0c;
  case 0x24:
    if (*(ulong *)(param_2 + 4) >> 0x10 == 0) {
      uVar4 = FUN_00dbc274(param_1,param_2,&local_68);
      goto joined_r0x00db8e00;
    }
    goto LAB_00db8a0c;
  case 0x25:
    if (*(ulong *)(param_2 + 4) >> 0x10 == 0) {
      uVar4 = FUN_00dba9c4(param_1,param_2,&local_68);
      goto joined_r0x00db8e00;
    }
    goto LAB_00db8a0c;
  case 0x26:
    if (*(ulong *)(param_2 + 4) >> 0x10 == 0) {
      uVar4 = FUN_00dbc97c(param_1,param_2,&local_68);
      goto joined_r0x00db8e00;
    }
LAB_00db8a0c:
    uVar4 = 1;
    goto switchD_00db85e4_caseD_2;
  case 0x27:
  case 0x28:
    uVar4 = FUN_00dbbcd0(param_1,param_2,&local_68);
    puVar19 = local_68;
    break;
  case 0x29:
    uVar4 = 2;
    if ((param_2[1] < 0x12) && ((1 << (ulong)(param_2[1] & 0x1f) & 0x303daU) != 0)) {
      uVar4 = FUN_00dbbafc(param_1,param_2,&local_78,1,&local_68);
      puVar19 = local_68;
      if ((uVar4 != 0) || (local_68 == (ulong *)0x0)) goto LAB_00db8ce8;
      uVar10 = param_2[1];
      uVar4 = (uint)local_78;
      if (uVar10 != 7) {
        if (uVar10 == 6) goto LAB_00dba384;
        if (uVar10 != 1) {
          puVar7 = _TIFFmalloc((ulong)local_78 & 0xffffffff);
          if (puVar7 == (ulong *)0x0) goto LAB_00db91a8;
          switch(param_2[1]) {
          case 3:
            if (uVar4 != 0) {
              uVar4 = 0;
              puVar18 = puVar7;
              do {
                if (*(char *)(param_1 + 0x10) < '\0') {
                  TIFFSwabShort(puVar19);
                }
                puVar8 = local_68;
                if (0x7f < (ushort)*puVar19) goto LAB_00dba3b4;
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
                puVar8 = local_68;
                if (0x7f < (uint)*puVar19) goto LAB_00dba3b4;
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
                puVar8 = local_68;
                if (0xff < (ushort)((short)*puVar19 + 0x80U)) goto LAB_00dba3b4;
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
                puVar8 = local_68;
                if (0xff < (uint)*puVar19 + 0x80) goto LAB_00dba3b4;
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
                puVar8 = local_68;
                if (0x7f < *puVar19) goto LAB_00dba3b4;
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
                puVar8 = local_68;
                if (0xff < *puVar19 + 0x80) goto LAB_00dba3b4;
                *(char *)puVar18 = (char)*puVar19;
                uVar4 = uVar4 + 1;
                puVar19 = puVar19 + 1;
                puVar18 = (ulong *)((long)puVar18 + 1);
              } while (uVar4 < (uint)local_78);
            }
          }
          goto LAB_00dba380;
        }
      }
      if ((uint)local_78 != 0) {
        lVar15 = 0;
        do {
          if (*(char *)((long)local_68 + lVar15) < '\0') goto LAB_00db8eac;
          lVar15 = lVar15 + 1;
        } while ((uint)lVar15 < (uint)local_78);
      }
LAB_00dba384:
      iVar5 = TIFFSetField(param_1,*param_2,*(undefined4 *)(param_2 + 4),puVar19);
joined_r0x00dba12c:
      if (puVar19 != (ulong *)0x0) {
        _TIFFfree(puVar19);
      }
      goto joined_r0x00dba3a8;
    }
    goto switchD_00db85e4_caseD_2;
  case 0x2a:
    uVar4 = FUN_00dbaf38(param_1,param_2,&local_68);
    puVar19 = local_68;
    break;
  case 0x2b:
    uVar4 = 2;
    if ((param_2[1] < 0x12) && ((1 << (ulong)(param_2[1] & 0x1f) & 0x3035aU) != 0)) {
      uVar4 = FUN_00dbbafc(param_1,param_2,&local_78,2,&local_68);
      puVar19 = local_68;
      puVar18 = local_78;
      if ((uVar4 != 0) || (local_68 == (ulong *)0x0)) goto LAB_00db8ce8;
      uVar4 = (uint)local_78;
      if (param_2[1] == 8) {
        if (*(char *)(param_1 + 0x10) < '\0') {
          TIFFSwabArrayOfShort(local_68,(ulong)local_78 & 0xffffffff);
        }
      }
      else if (param_2[1] == 3) {
        if ((uint)local_78 != 0) {
          uVar11 = 0;
          puVar7 = local_68;
          do {
            if (*(char *)(param_1 + 0x10) < '\0') {
              TIFFSwabShort(puVar7);
            }
            if ((short)*puVar7 < 0) goto LAB_00db8eac;
            uVar11 = uVar11 + 1;
            puVar7 = (ulong *)((long)puVar7 + 2);
          } while (uVar11 < uVar4);
        }
      }
      else {
        puVar7 = _TIFFmalloc((ulong)((uint)local_78 << 1));
        if (puVar7 == (ulong *)0x0) goto LAB_00db91a8;
        puVar8 = puVar19;
        switch(param_2[1]) {
        case 1:
          if (uVar4 != 0) {
            uVar13 = (ulong)(uVar4 - 1);
            puVar8 = puVar7;
            puVar17 = puVar19;
            if (uVar13 + 1 < 0x10) {
LAB_00db8f54:
              lVar12 = 0;
            }
            else {
              lVar12 = (uVar13 + 1) - (ulong)(uVar4 & 0xf);
              if (lVar12 != 0) {
                if ((puVar7 < (ulong *)((long)puVar19 + uVar13 + 1)) &&
                   (puVar19 < (ulong *)((long)puVar7 + uVar13 * 2 + 2))) goto LAB_00db8f54;
                puVar8 = puVar19 + 1;
                puVar17 = puVar7 + 2;
                lVar15 = lVar12;
                do {
                  uVar13 = puVar8[-1];
                  uVar14 = *puVar8;
                  puVar8 = puVar8 + 2;
                  lVar15 = lVar15 + -0x10;
                  puVar17[-1] = (ulong)CONCAT16((char)(uVar13 >> 0x38),
                                                (uint6)CONCAT14((char)(uVar13 >> 0x30),
                                                                (uint)CONCAT12((char)(uVar13 >> 0x28
                                                                                     ),(ushort)(byte
                                                  )(uVar13 >> 0x20))));
                  puVar17[-2] = (ulong)CONCAT16((char)(uVar13 >> 0x18),
                                                (uint6)CONCAT14((char)(uVar13 >> 0x10),
                                                                (uint)(CONCAT12((char)(uVar13 >> 8),
                                                                                (short)uVar13) &
                                                                      0xff00ff)));
                  puVar17[1] = (ulong)CONCAT16((char)(uVar14 >> 0x38),
                                               (uint6)CONCAT14((char)(uVar14 >> 0x30),
                                                               (uint)CONCAT12((char)(uVar14 >> 0x28)
                                                                              ,(ushort)(byte)(uVar14
                                                                                             >> 0x20
                                                  ))));
                  *puVar17 = (ulong)CONCAT16((char)(uVar14 >> 0x18),
                                             (uint6)CONCAT14((char)(uVar14 >> 0x10),
                                                             (uint)(CONCAT12((char)(uVar14 >> 8),
                                                                             (short)uVar14) &
                                                                   0xff00ff)));
                  puVar17 = puVar17 + 4;
                } while (lVar15 != 0);
                puVar8 = (ulong *)((long)puVar7 + lVar12 * 2);
                puVar17 = (ulong *)((long)puVar19 + lVar12);
                if (((ulong)puVar18 & 0xf) == 0) break;
              }
            }
            iVar5 = uVar4 - (int)lVar12;
            do {
              iVar5 = iVar5 + -1;
              *(ushort *)puVar8 = (ushort)(byte)*puVar17;
              puVar8 = (ulong *)((long)puVar8 + 2);
              puVar17 = (ulong *)((long)puVar17 + 1);
            } while (iVar5 != 0);
          }
          break;
        case 4:
          if (uVar4 != 0) {
            uVar11 = 0;
            puVar18 = puVar19;
            puVar17 = puVar7;
            do {
              if (*(char *)(param_1 + 0x10) < '\0') {
                TIFFSwabLong(puVar18);
              }
              uVar13 = *puVar18;
              if ((uint)uVar13 >> 0xf != 0) goto LAB_00dba3b4;
              uVar11 = uVar11 + 1;
              puVar18 = (ulong *)((long)puVar18 + 4);
              *(short *)puVar17 = (short)(uint)uVar13;
              puVar17 = (ulong *)((long)puVar17 + 2);
            } while (uVar11 < uVar4);
          }
          break;
        case 6:
          if (uVar4 != 0) {
            uVar13 = (ulong)(uVar4 - 1);
            puVar8 = puVar7;
            puVar17 = puVar19;
            if (uVar13 + 1 < 0x10) {
LAB_00db9efc:
              lVar12 = 0;
            }
            else {
              lVar12 = (uVar13 + 1) - (ulong)(uVar4 & 0xf);
              if (lVar12 != 0) {
                if ((puVar7 < (ulong *)((long)puVar19 + uVar13 + 1)) &&
                   (puVar19 < (ulong *)((long)puVar7 + uVar13 * 2 + 2))) goto LAB_00db9efc;
                puVar8 = puVar19 + 1;
                puVar17 = puVar7 + 2;
                lVar15 = lVar12;
                do {
                  uVar13 = puVar8[-1];
                  uVar14 = *puVar8;
                  puVar8 = puVar8 + 2;
                  lVar15 = lVar15 + -0x10;
                  puVar17[-1] = CONCAT26((short)(char)(uVar13 >> 0x38),
                                         CONCAT24((short)(char)(uVar13 >> 0x30),
                                                  CONCAT22((short)(char)(uVar13 >> 0x28),
                                                           (short)(char)(uVar13 >> 0x20))));
                  puVar17[-2] = CONCAT26((short)(char)(uVar13 >> 0x18),
                                         CONCAT24((short)(char)(uVar13 >> 0x10),
                                                  CONCAT22((short)(char)(uVar13 >> 8),
                                                           (short)(char)uVar13)));
                  puVar17[1] = CONCAT26((short)(char)(uVar14 >> 0x38),
                                        CONCAT24((short)(char)(uVar14 >> 0x30),
                                                 CONCAT22((short)(char)(uVar14 >> 0x28),
                                                          (short)(char)(uVar14 >> 0x20))));
                  *puVar17 = CONCAT26((short)(char)(uVar14 >> 0x18),
                                      CONCAT24((short)(char)(uVar14 >> 0x10),
                                               CONCAT22((short)(char)(uVar14 >> 8),
                                                        (short)(char)uVar14)));
                  puVar17 = puVar17 + 4;
                } while (lVar15 != 0);
                puVar8 = (ulong *)((long)puVar7 + lVar12 * 2);
                puVar17 = (ulong *)((long)puVar19 + lVar12);
                if (((ulong)puVar18 & 0xf) == 0) break;
              }
            }
            iVar5 = uVar4 - (int)lVar12;
            do {
              iVar5 = iVar5 + -1;
              *(short *)puVar8 = (short)(char)*puVar17;
              puVar8 = (ulong *)((long)puVar8 + 2);
              puVar17 = (ulong *)((long)puVar17 + 1);
            } while (iVar5 != 0);
          }
          break;
        case 9:
          if (uVar4 != 0) {
            uVar11 = 0;
            puVar18 = puVar19;
            puVar17 = puVar7;
            do {
              if (*(char *)(param_1 + 0x10) < '\0') {
                TIFFSwabLong(puVar18);
              }
              uVar13 = *puVar18;
              if ((uint)uVar13 + 0x8000 >> 0x10 != 0) goto LAB_00dba3b4;
              uVar11 = uVar11 + 1;
              puVar18 = (ulong *)((long)puVar18 + 4);
              *(short *)puVar17 = (short)(uint)uVar13;
              puVar17 = (ulong *)((long)puVar17 + 2);
            } while (uVar11 < uVar4);
          }
          break;
        case 0x10:
          if (uVar4 != 0) {
            uVar11 = 0;
            puVar18 = puVar19;
            puVar17 = puVar7;
            do {
              if (*(char *)(param_1 + 0x10) < '\0') {
                TIFFSwabLong8(puVar18);
              }
              uVar13 = *puVar18;
              if (uVar13 >> 0xf != 0) goto LAB_00dba3b4;
              uVar11 = uVar11 + 1;
              puVar18 = puVar18 + 1;
              *(short *)puVar17 = (short)uVar13;
              puVar17 = (ulong *)((long)puVar17 + 2);
            } while (uVar11 < uVar4);
          }
          break;
        case 0x11:
          if (uVar4 != 0) {
            uVar11 = 0;
            puVar18 = puVar19;
            puVar17 = puVar7;
            do {
              if (*(char *)(param_1 + 0x10) < '\0') {
                TIFFSwabLong8(puVar18);
              }
              uVar13 = *puVar18;
              if (uVar13 + 0x8000 >> 0x10 != 0) goto LAB_00dba3b4;
              uVar11 = uVar11 + 1;
              puVar18 = puVar18 + 1;
              *(short *)puVar17 = (short)uVar13;
              puVar17 = (ulong *)((long)puVar17 + 2);
            } while (uVar11 < uVar4);
          }
        }
switchD_00db9044_caseD_2:
        local_68 = puVar19;
LAB_00dba380:
        _TIFFfree(local_68);
        puVar19 = puVar7;
      }
      goto LAB_00dba384;
    }
    goto switchD_00db85e4_caseD_2;
  case 0x2c:
    uVar4 = FUN_00dbbfa0(param_1,param_2,&local_68);
    puVar19 = local_68;
    break;
  case 0x2d:
    uVar4 = 2;
    if ((param_2[1] < 0x12) && ((1 << (ulong)(param_2[1] & 0x1f) & 0x3035aU) != 0)) {
      uVar4 = FUN_00dbbafc(param_1,param_2,&local_78,4,&local_68);
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
            uVar11 = 0;
            puVar7 = local_68;
            do {
              if (*(char *)(param_1 + 0x10) < '\0') {
                TIFFSwabLong(puVar7);
              }
              if ((int)(uint)*puVar7 < 0) {
                uVar4 = (uint)*puVar7 >> 0x1d & 4;
                _TIFFfree(puVar19);
                goto joined_r0x00db95a0;
              }
              uVar11 = uVar11 + 1;
              puVar7 = (ulong *)((long)puVar7 + 4);
            } while (uVar11 < uVar4);
          }
        }
        else {
          puVar7 = _TIFFmalloc((ulong)((uint)local_78 << 2));
          if (puVar7 == (ulong *)0x0) goto LAB_00db91a8;
          switch(param_2[1]) {
          case 1:
            puVar18 = puVar7;
            puVar8 = puVar19;
            for (; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(uint *)puVar18 = (uint)(byte)*puVar8;
              puVar18 = (ulong *)((long)puVar18 + 4);
              puVar8 = (ulong *)((long)puVar8 + 1);
            }
            break;
          case 3:
            puVar18 = puVar7;
            puVar8 = puVar19;
            for (; uVar4 != 0; uVar4 = uVar4 - 1) {
              if (*(char *)(param_1 + 0x10) < '\0') {
                TIFFSwabShort(puVar8);
              }
              *(uint *)puVar18 = (uint)(ushort)*puVar8;
              puVar18 = (ulong *)((long)puVar18 + 4);
              puVar8 = (ulong *)((long)puVar8 + 2);
            }
            break;
          case 6:
            puVar18 = puVar7;
            puVar8 = puVar19;
            for (; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(int *)puVar18 = (int)(char)*puVar8;
              puVar18 = (ulong *)((long)puVar18 + 4);
              puVar8 = (ulong *)((long)puVar8 + 1);
            }
            break;
          case 8:
            puVar18 = puVar7;
            puVar8 = puVar19;
            for (; uVar4 != 0; uVar4 = uVar4 - 1) {
              if (*(char *)(param_1 + 0x10) < '\0') {
                TIFFSwabShort(puVar8);
              }
              *(int *)puVar18 = (int)(short)*puVar8;
              puVar18 = (ulong *)((long)puVar18 + 4);
              puVar8 = (ulong *)((long)puVar8 + 2);
            }
            break;
          case 0x10:
            if (uVar4 != 0) {
              uVar11 = 0;
              puVar8 = puVar7;
              puVar18 = puVar19;
              do {
                if (*(char *)(param_1 + 0x10) < '\0') {
                  TIFFSwabLong8(puVar18);
                }
                uVar13 = *puVar18;
                if (uVar13 >> 0x1f != 0) goto LAB_00dba588;
                uVar11 = uVar11 + 1;
                puVar18 = puVar18 + 1;
                *(uint *)puVar8 = (uint)uVar13;
                puVar8 = (ulong *)((long)puVar8 + 4);
              } while (uVar11 < uVar4);
            }
            break;
          case 0x11:
            if (uVar4 != 0) {
              uVar11 = 0;
              puVar8 = puVar7;
              puVar18 = puVar19;
              do {
                if (*(char *)(param_1 + 0x10) < '\0') {
                  TIFFSwabLong8(puVar18);
                }
                uVar13 = *puVar18;
                if (uVar13 + 0x80000000 >> 0x20 != 0) goto LAB_00dba588;
                uVar11 = uVar11 + 1;
                puVar18 = puVar18 + 1;
                *(uint *)puVar8 = (uint)uVar13;
                puVar8 = (ulong *)((long)puVar8 + 4);
              } while (uVar11 < uVar4);
            }
          }
          _TIFFfree(puVar19);
          puVar19 = puVar7;
        }
      }
      else {
        if (uVar4 != 0) goto switchD_00db85e4_caseD_2;
        puVar19 = (ulong *)0x0;
      }
      iVar5 = TIFFSetField(param_1,*param_2,*(undefined4 *)(param_2 + 4),puVar19);
      goto joined_r0x00dba12c;
    }
    goto switchD_00db85e4_caseD_2;
  case 0x2e:
    uVar4 = FUN_00dbc6b0(param_1,param_2,&local_68);
    puVar19 = local_68;
    break;
  case 0x2f:
    uVar4 = 2;
    if ((param_2[1] < 0x12) && ((1 << (ulong)(param_2[1] & 0x1f) & 0x3035aU) != 0)) {
      uVar4 = FUN_00dbbafc(param_1,param_2,&local_78,8,&local_68);
      puVar19 = local_68;
      if ((uVar4 == 0) && (local_68 != (ulong *)0x0)) {
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
              switch(param_2[1]) {
              case 1:
                puVar18 = puVar7;
                puVar8 = puVar19;
                for (; uVar4 != 0; uVar4 = uVar4 - 1) {
                  *puVar18 = (ulong)(byte)*puVar8;
                  puVar18 = puVar18 + 1;
                  puVar8 = (ulong *)((long)puVar8 + 1);
                }
                break;
              case 3:
                puVar18 = puVar7;
                puVar8 = puVar19;
                for (; uVar4 != 0; uVar4 = uVar4 - 1) {
                  if (*(char *)(param_1 + 0x10) < '\0') {
                    TIFFSwabShort(puVar8);
                  }
                  *puVar18 = (ulong)(ushort)*puVar8;
                  puVar18 = puVar18 + 1;
                  puVar8 = (ulong *)((long)puVar8 + 2);
                }
                break;
              case 4:
                puVar18 = puVar7;
                puVar8 = puVar19;
                for (; uVar4 != 0; uVar4 = uVar4 - 1) {
                  if (*(char *)(param_1 + 0x10) < '\0') {
                    TIFFSwabLong(puVar8);
                  }
                  *puVar18 = (ulong)(uint)*puVar8;
                  puVar18 = puVar18 + 1;
                  puVar8 = (ulong *)((long)puVar8 + 4);
                }
                break;
              case 6:
                puVar18 = puVar7;
                puVar8 = puVar19;
                for (; uVar4 != 0; uVar4 = uVar4 - 1) {
                  *puVar18 = (long)(char)*puVar8;
                  puVar18 = puVar18 + 1;
                  puVar8 = (ulong *)((long)puVar8 + 1);
                }
                break;
              case 8:
                puVar18 = puVar7;
                puVar8 = puVar19;
                for (; uVar4 != 0; uVar4 = uVar4 - 1) {
                  if (*(char *)(param_1 + 0x10) < '\0') {
                    TIFFSwabShort(puVar8);
                  }
                  *puVar18 = (long)(short)*puVar8;
                  puVar18 = puVar18 + 1;
                  puVar8 = (ulong *)((long)puVar8 + 2);
                }
                break;
              case 9:
                puVar18 = puVar7;
                puVar8 = puVar19;
                for (; uVar4 != 0; uVar4 = uVar4 - 1) {
                  if (*(char *)(param_1 + 0x10) < '\0') {
                    TIFFSwabLong(puVar8);
                  }
                  *puVar18 = (long)(int)(uint)*puVar8;
                  puVar18 = puVar18 + 1;
                  puVar8 = (ulong *)((long)puVar8 + 4);
                }
              }
              goto switchD_00db9044_caseD_2;
            }
LAB_00db91a8:
            _TIFFfree(puVar19);
            uVar4 = 7;
            goto joined_r0x00db95a0;
          }
          if ((uint)local_78 != 0) {
            uVar11 = 0;
            puVar7 = local_68;
            do {
              if (*(char *)(param_1 + 0x10) < '\0') {
                TIFFSwabLong8(puVar7);
              }
              if ((long)*puVar7 < 0) goto LAB_00db8eac;
              uVar11 = uVar11 + 1;
              puVar7 = puVar7 + 1;
            } while (uVar11 < uVar4);
          }
        }
        goto LAB_00dba384;
      }
LAB_00db8ce8:
      if (uVar4 == 0) {
        puVar19 = (ulong *)0x0;
        goto LAB_00dba384;
      }
    }
    goto switchD_00db85e4_caseD_2;
  case 0x30:
    uVar4 = FUN_00dbc274(param_1,param_2,&local_68);
    puVar19 = local_68;
    break;
  case 0x31:
    uVar4 = FUN_00dba9c4(param_1,param_2,&local_68);
    puVar19 = local_68;
    break;
  case 0x32:
    uVar4 = FUN_00dbc97c(param_1,param_2,&local_68);
    puVar19 = local_68;
  }
  local_68 = puVar19;
  if (uVar4 == 0) {
    iVar5 = TIFFSetField(param_1,*param_2,*(undefined4 *)(param_2 + 4),puVar19);
joined_r0x00db8d60:
    if (puVar19 != (ulong *)0x0) {
      _TIFFfree(puVar19);
    }
joined_r0x00db8d6c:
    if (iVar5 == 0) {
      return 0;
    }
  }
switchD_00db87d4_caseD_5:
  if (uVar4 == 0) {
LAB_00db84dc:
    return 1;
  }
switchD_00db85e4_caseD_2:
joined_r0x00db95a0:
  if (lVar12 == 0) {
    pcVar9 = "unknown tagname";
  }
  else {
    pcVar9 = *(char **)(lVar12 + 0x20);
  }
  FUN_00dba884(param_1,uVar4,"TIFFFetchNormalTag",pcVar9,param_3);
  return 0;
}

