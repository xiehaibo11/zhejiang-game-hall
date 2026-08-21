
undefined8
FUN_00e1bda4(long *param_1,long *param_2,ulong param_3,long param_4,ulong param_5,char param_6,
            long *param_7,size_t *param_8)

{
  byte bVar1;
  long lVar2;
  ushort *puVar3;
  long lVar4;
  void *__s;
  byte *pbVar5;
  size_t sVar6;
  code *pcVar7;
  ulong uVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  ushort uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong *puVar18;
  ushort local_68 [2];
  byte local_64 [4];
  
  lVar13 = *param_1;
  if ((code *)param_2[5] == (code *)0x0) {
    if ((ulong)param_2[1] < param_3) {
      return 0x55;
    }
    param_2[2] = param_3;
    if ((ulong)param_2[1] <= param_3 + 1) {
      return 0x55;
    }
  }
  else {
    lVar2 = (*(code *)param_2[5])(param_2,param_3,0,0);
    if (lVar2 != 0) {
      return 0x55;
    }
    param_2[2] = param_3;
    if ((ulong)param_2[1] <= param_3 + 1) {
      return 0x55;
    }
  }
  puVar18 = (ulong *)(param_2 + 1);
  if ((code *)param_2[5] == (code *)0x0) {
    puVar3 = (ushort *)(*param_2 + param_3);
    uVar8 = param_3;
    if (puVar3 == (ushort *)0x0) {
      uVar11 = 0;
      lVar2 = param_3 + 2;
      param_2[2] = lVar2;
      goto LAB_00e1bec4;
    }
  }
  else {
    lVar2 = (*(code *)param_2[5])(param_2,param_3,local_68,2);
    if (lVar2 != 2) {
      return 0x55;
    }
    puVar3 = local_68;
    uVar8 = param_2[2];
  }
  uVar14 = *puVar3;
  bVar1 = *(byte *)((long)puVar3 + 1);
  lVar2 = uVar8 + 2;
  param_2[2] = lVar2;
  uVar11 = (int)(short)((ushort)(byte)uVar14 << 8) | (uint)bVar1;
  if (0xfee < (int)uVar11) {
    return 8;
  }
  if ((int)uVar11 < 0) {
    return 1;
  }
LAB_00e1bec4:
  iVar12 = -1;
  do {
    uVar8 = *puVar18;
    if (uVar8 <= lVar2 + 3U) {
      return 0x55;
    }
    if ((code *)param_2[5] == (code *)0x0) {
      pbVar5 = (byte *)(*param_2 + lVar2);
      if (pbVar5 != (byte *)0x0) goto LAB_00e1bf18;
      uVar16 = 0;
    }
    else {
      lVar2 = (*(code *)param_2[5])(param_2,lVar2,local_64,4);
      if (lVar2 != 4) {
        return 0x55;
      }
      uVar8 = param_2[1];
      lVar2 = param_2[2];
      pbVar5 = local_64;
LAB_00e1bf18:
      uVar16 = (ulong)*pbVar5 << 0x18 | (ulong)pbVar5[1] << 0x10 | (ulong)pbVar5[2] << 8 |
               (ulong)pbVar5[3];
    }
    lVar4 = lVar2 + 4;
    param_2[2] = lVar4;
    if (uVar8 <= lVar2 + 5U) {
      return 0x55;
    }
    if ((code *)param_2[5] == (code *)0x0) {
      puVar3 = (ushort *)(*param_2 + lVar4);
      if (puVar3 != (ushort *)0x0) goto LAB_00e1bf88;
      uVar14 = 0;
    }
    else {
      lVar2 = (*(code *)param_2[5])(param_2,lVar4,local_68,2);
      if (lVar2 != 2) {
        return 0x55;
      }
      uVar8 = param_2[1];
      lVar4 = param_2[2];
      puVar3 = local_68;
LAB_00e1bf88:
      uVar14 = *puVar3 >> 8 | *puVar3 << 8;
    }
    lVar2 = lVar4 + 2;
    param_2[2] = lVar2;
    if (uVar8 <= lVar4 + 3U) {
      return 0x55;
    }
    if ((code *)param_2[5] == (code *)0x0) {
      puVar3 = (ushort *)(*param_2 + lVar2);
      uVar8 = 0;
      if (puVar3 != (ushort *)0x0) goto LAB_00e1bfe0;
    }
    else {
      lVar2 = (*(code *)param_2[5])(param_2,lVar2,local_68,2);
      if (lVar2 != 2) {
        return 0x55;
      }
      lVar2 = param_2[2];
      puVar3 = local_68;
LAB_00e1bfe0:
      uVar8 = (long)(short)((ushort)(byte)*puVar3 << 8) | (ulong)*(byte *)((long)puVar3 + 1);
    }
    lVar2 = lVar2 + 2;
    param_2[2] = lVar2;
    if (uVar16 == param_5) {
      *param_8 = (long)(short)uVar14 + 1;
      if (0xaa6 < uVar14) {
        return 8;
      }
      uVar8 = uVar8 + param_3;
      if ((code *)param_2[5] == (code *)0x0) {
        if (*puVar18 < uVar8) {
          return 0x55;
        }
      }
      else {
        lVar2 = (*(code *)param_2[5])(param_2,uVar8,0,0);
        if (lVar2 != 0) {
          return 0x55;
        }
      }
      param_2[2] = uVar8;
      sVar6 = *param_8;
      if ((long)sVar6 < 0) {
        return 6;
      }
      if (sVar6 == 0) {
        puVar3 = (ushort *)0x0;
        sVar6 = *param_8;
      }
      else {
        if (0x7ffffff < (long)sVar6) {
          return 10;
        }
        puVar3 = (ushort *)(**(code **)(lVar13 + 8))(lVar13,sVar6 << 4);
        if (puVar3 == (ushort *)0x0) {
          return 0x40;
        }
        memset(puVar3,0,sVar6 << 4);
        sVar6 = *param_8;
      }
      if ((long)sVar6 < 1) goto LAB_00e1c2a0;
      uVar8 = param_2[2];
      lVar2 = 0;
      puVar10 = puVar3;
      break;
    }
    iVar12 = iVar12 + 1;
    if ((int)uVar11 <= iVar12) {
      return 1;
    }
  } while( true );
  do {
    if (*puVar18 <= uVar8 + 1) {
LAB_00e1c2e8:
      *puVar10 = 0;
LAB_00e1c2ec:
      uVar17 = 0x55;
      goto LAB_00e1c2f0;
    }
    if ((code *)param_2[5] == (code *)0x0) {
      puVar9 = (ushort *)(*param_2 + uVar8);
      pcVar7 = (code *)0x0;
      uVar14 = 0;
      if (puVar9 != (ushort *)0x0) goto LAB_00e1c170;
    }
    else {
      lVar4 = (*(code *)param_2[5])(param_2,uVar8,local_68,2);
      if (lVar4 != 2) goto LAB_00e1c2e8;
      uVar8 = param_2[2];
      pcVar7 = (code *)param_2[5];
      puVar9 = local_68;
LAB_00e1c170:
      uVar14 = *puVar9 >> 8 | *puVar9 << 8;
    }
    uVar16 = uVar8 + 4;
    param_2[2] = uVar8 + 2;
    *puVar10 = uVar14;
    if (pcVar7 != (code *)0x0) {
      lVar4 = (*pcVar7)(param_2,uVar16,0,0);
      if ((lVar4 == 0) && (param_2[2] = uVar16, uVar8 + 7 < *puVar18)) goto LAB_00e1c1dc;
      goto LAB_00e1c2ec;
    }
    if ((*puVar18 < uVar16) || (param_2[2] = uVar16, *puVar18 <= uVar8 + 7)) goto LAB_00e1c2ec;
LAB_00e1c1dc:
    if ((code *)param_2[5] != (code *)0x0) {
      lVar4 = (*(code *)param_2[5])(param_2,uVar16,local_64,4);
      if (lVar4 == 4) {
        uVar16 = param_2[2];
        pcVar7 = (code *)param_2[5];
        pbVar5 = local_64;
        goto LAB_00e1c220;
      }
      goto LAB_00e1c2ec;
    }
    pbVar5 = (byte *)(*param_2 + uVar16);
    if (pbVar5 == (byte *)0x0) {
      uVar15 = 0;
      lVar4 = uVar8 + 8;
      uVar8 = uVar8 + 0xc;
      param_2[2] = lVar4;
LAB_00e1c274:
      if (*puVar18 < uVar8) goto LAB_00e1c2ec;
    }
    else {
      pcVar7 = (code *)0x0;
LAB_00e1c220:
      uVar15 = (ulong)pbVar5[2] << 8 | (ulong)pbVar5[1] << 0x10 | (ulong)pbVar5[3];
      uVar8 = uVar16 + 8;
      param_2[2] = uVar16 + 4;
      if (pcVar7 == (code *)0x0) goto LAB_00e1c274;
      lVar4 = (*pcVar7)(param_2,uVar8,0,0);
      if (lVar4 != 0) goto LAB_00e1c2ec;
    }
    param_2[2] = uVar8;
    *(ulong *)(puVar10 + 4) = uVar15;
    sVar6 = *param_8;
    lVar2 = lVar2 + 1;
    puVar10 = puVar10 + 8;
  } while (lVar2 < (long)sVar6);
LAB_00e1c2a0:
  if (param_6 != '\0') {
    qsort(puVar3,sVar6,0x10,FUN_00e1c464);
    sVar6 = *param_8;
  }
  if ((long)sVar6 < 0) {
    uVar17 = 6;
    goto joined_r0x00e1c390;
  }
  if (sVar6 == 0) {
    __s = (void *)0x0;
    sVar6 = *param_8;
  }
  else {
    if (0xfffffff < (long)sVar6) {
      uVar17 = 10;
      goto joined_r0x00e1c390;
    }
    __s = (void *)(**(code **)(lVar13 + 8))(lVar13,sVar6 << 3);
    if (__s == (void *)0x0) {
      uVar17 = 0x40;
      goto joined_r0x00e1c390;
    }
    memset(__s,0,sVar6 << 3);
    sVar6 = *param_8;
  }
  if (0 < (long)sVar6) {
    lVar2 = 0;
    puVar10 = puVar3 + 4;
    do {
      *(long *)((long)__s + lVar2 * 8) = *(long *)puVar10 + param_4;
      lVar2 = lVar2 + 1;
      puVar10 = puVar10 + 8;
    } while (lVar2 < (long)*param_8);
  }
  uVar17 = 0;
  *param_7 = (long)__s;
joined_r0x00e1c390:
  if (puVar3 == (ushort *)0x0) {
    return uVar17;
  }
LAB_00e1c2f0:
  (**(code **)(lVar13 + 0x10))(lVar13,puVar3);
  return uVar17;
}

