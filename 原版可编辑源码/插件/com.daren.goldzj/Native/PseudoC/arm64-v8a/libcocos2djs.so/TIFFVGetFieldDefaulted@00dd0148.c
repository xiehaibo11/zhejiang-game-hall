
undefined8 TIFFVGetFieldDefaulted(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  void *pvVar6;
  ushort uVar7;
  short sVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  size_t __size;
  long lVar14;
  long lVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  long local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  
  lStack_68 = param_3[3];
  local_70 = param_3[2];
  uVar9 = (undefined4)param_2;
  lStack_78 = param_3[1];
  local_80 = *param_3;
  uVar3 = TIFFVGetField(param_1,param_2,&local_80);
  if ((int)uVar3 != 0) goto LAB_00dd0614;
  switch(uVar9) {
  case 0xfe:
    iVar2 = (int)param_3[3];
    uVar9 = *(undefined4 *)(param_1 + 0xe);
    if (iVar2 < 0) {
LAB_00dd0510:
      *(int *)(param_3 + 3) = iVar2 + 8;
      if (0 < iVar2 + 8) goto LAB_00dd0520;
      puVar11 = (undefined8 *)(param_3[1] + (long)iVar2);
    }
    else {
LAB_00dd0520:
      puVar11 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar11 + 1);
    }
    *(undefined4 *)*puVar11 = uVar9;
    goto LAB_00dd0614;
  case 0xff:
  case 0x100:
  case 0x101:
  case 0x103:
  case 0x104:
  case 0x105:
  case 0x106:
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
  case 0x11a:
  case 0x11b:
  case 0x11d:
  case 0x11e:
  case 0x11f:
  case 0x120:
  case 0x121:
  case 0x122:
  case 0x123:
  case 0x124:
  case 0x125:
  case 0x126:
  case 0x127:
  case 0x129:
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
  case 0x13f:
  case 0x140:
  case 0x141:
  case 0x142:
  case 0x143:
  case 0x144:
  case 0x145:
  case 0x146:
  case 0x147:
  case 0x148:
  case 0x149:
  case 0x14a:
  case 0x14b:
  case 0x14d:
  case 0x14f:
  case 0x151:
    goto switchD_00dd01ac_caseD_ff;
  case 0x102:
    iVar2 = (int)param_3[3];
    uVar7 = *(ushort *)((long)param_1 + 0x74);
    break;
  case 0x107:
    iVar2 = (int)param_3[3];
    uVar7 = *(ushort *)((long)param_1 + 0x7c);
    break;
  case 0x10a:
    iVar2 = (int)param_3[3];
    uVar7 = *(ushort *)((long)param_1 + 0x7e);
    break;
  case 0x112:
    iVar2 = (int)param_3[3];
    uVar7 = *(ushort *)(param_1 + 0x10);
    break;
  case 0x115:
    iVar2 = (int)param_3[3];
    uVar7 = *(ushort *)((long)param_1 + 0x82);
    break;
  case 0x116:
    iVar2 = (int)param_3[3];
    uVar9 = *(undefined4 *)((long)param_1 + 0x84);
    goto joined_r0x00dd050c;
  case 0x118:
    iVar2 = (int)param_3[3];
    uVar7 = *(ushort *)(param_1 + 0x11);
    break;
  case 0x119:
    iVar2 = (int)param_3[3];
    uVar7 = *(ushort *)((long)param_1 + 0x8a);
    break;
  case 0x11c:
    iVar2 = (int)param_3[3];
    uVar7 = *(ushort *)((long)param_1 + 0xaa);
    break;
  case 0x128:
    iVar2 = (int)param_3[3];
    uVar7 = *(ushort *)(param_1 + 0x15);
    break;
  case 0x12d:
    puVar4 = (undefined2 *)param_1[0x22];
    if (puVar4 == (undefined2 *)0x0) {
      param_1[0x23] = 0;
      param_1[0x24] = 0;
      param_1[0x22] = 0;
      if (0x3d < (ulong)*(ushort *)((long)param_1 + 0x74)) goto LAB_00dd0850;
      lVar14 = 1L << ((ulong)*(ushort *)((long)param_1 + 0x74) & 0x3f);
      __size = lVar14 << 1;
      puVar11 = param_1 + 0x22;
      puVar4 = _TIFFmalloc(__size);
      *puVar11 = puVar4;
      if (puVar4 == (undefined2 *)0x0) goto LAB_00dd0850;
      *puVar4 = 0;
      if (1 < lVar14) {
        lVar15 = 1;
        do {
          dVar17 = pow((double)lVar15 / ((double)lVar14 + -1.0),2.2);
          puVar4 = (undefined2 *)*puVar11;
          puVar4[lVar15] = (short)(int)(dVar17 * 65535.0 + 0.5);
          lVar15 = lVar15 + 1;
        } while (lVar14 != lVar15);
      }
      if ((int)((uint)*(ushort *)((long)param_1 + 0x82) - (uint)*(ushort *)((long)param_1 + 0xd4)) <
          2) goto LAB_00dd0304;
      pvVar6 = _TIFFmalloc(__size);
      param_1[0x23] = pvVar6;
      if (pvVar6 != (void *)0x0) {
        _TIFFmemcpy(pvVar6,(void *)param_1[0x22],__size);
        pvVar6 = _TIFFmalloc(__size);
        param_1[0x24] = pvVar6;
        if (pvVar6 != (void *)0x0) {
          _TIFFmemcpy(pvVar6,(void *)param_1[0x22],__size);
          puVar4 = (undefined2 *)param_1[0x22];
          iVar2 = (int)param_3[3];
          if (iVar2 < 0) goto LAB_00dd030c;
          goto LAB_00dd031c;
        }
      }
      if ((void *)*puVar11 != (void *)0x0) {
        _TIFFfree((void *)*puVar11);
      }
      if ((void *)param_1[0x23] != (void *)0x0) {
        _TIFFfree((void *)param_1[0x23]);
      }
      if ((void *)param_1[0x24] != (void *)0x0) {
        _TIFFfree((void *)param_1[0x24]);
      }
      param_1[0x23] = 0;
      param_1[0x24] = 0;
      *puVar11 = 0;
LAB_00dd0850:
      TIFFErrorExt(param_1[0x77],*param_1,"No space for \"TransferFunction\" tag");
      return 0;
    }
LAB_00dd0304:
    iVar2 = (int)param_3[3];
    if (iVar2 < 0) {
LAB_00dd030c:
      *(int *)(param_3 + 3) = iVar2 + 8;
      if (0 < iVar2 + 8) goto LAB_00dd031c;
      puVar11 = (undefined8 *)(param_3[1] + (long)iVar2);
    }
    else {
LAB_00dd031c:
      puVar11 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar11 + 1);
    }
    *(undefined2 **)*puVar11 = puVar4;
    if (1 < (int)((uint)*(ushort *)((long)param_1 + 0x82) - (uint)*(ushort *)((long)param_1 + 0xd4))
       ) {
      iVar2 = (int)param_3[3];
      uVar3 = param_1[0x23];
      if ((iVar2 < 0) && (*(int *)(param_3 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
        puVar11 = (undefined8 *)(param_3[1] + (long)iVar2);
      }
      else {
        puVar11 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar11 + 1);
      }
      *(undefined8 *)*puVar11 = uVar3;
      iVar2 = (int)param_3[3];
      puVar11 = (undefined8 *)param_1[0x24];
      goto joined_r0x00dd04a0;
    }
    goto LAB_00dd0614;
  case 0x13d:
    iVar2 = (int)param_3[3];
    uVar7 = (ushort)*(undefined4 *)param_1[0x6a];
    break;
  case 0x13e:
    puVar11 = &DAT_01d3e8b0;
    DAT_01d3e8b0 = 0x3eb7953c3eb10516;
    iVar2 = (int)param_3[3];
    if (iVar2 < 0) goto LAB_00dd04a4;
LAB_00dd04b4:
    puVar10 = (undefined8 *)*param_3;
    *param_3 = (long)(puVar10 + 1);
    goto LAB_00dd04c0;
  case 0x14c:
    iVar2 = (int)param_3[3];
    if ((iVar2 < 0) && (*(int *)(param_3 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
      puVar11 = (undefined8 *)(param_3[1] + (long)iVar2);
    }
    else {
      puVar11 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar11 + 1);
    }
    *(undefined2 *)*puVar11 = 1;
    return 1;
  case 0x14e:
    iVar2 = (int)param_3[3];
    if ((iVar2 < 0) && (*(int *)(param_3 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
      puVar11 = (undefined8 *)(param_3[1] + (long)iVar2);
    }
    else {
      puVar11 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar11 + 1);
    }
    *(undefined2 *)*puVar11 = 4;
    goto LAB_00dd0614;
  case 0x150:
    iVar2 = (int)param_3[3];
    if ((iVar2 < 0) && (*(int *)(param_3 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
      puVar11 = (undefined8 *)(param_3[1] + (long)iVar2);
    }
    else {
      puVar11 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar11 + 1);
    }
    *(undefined2 *)*puVar11 = 0;
    iVar2 = (int)param_3[3];
    sVar8 = (short)(1 << (ulong)(*(ushort *)((long)param_1 + 0x74) & 0x1f));
LAB_00dd04e4:
    uVar7 = sVar8 - 1;
    break;
  case 0x152:
    iVar2 = (int)param_3[3];
    uVar1 = *(undefined2 *)((long)param_1 + 0xd4);
    if ((iVar2 < 0) && (*(int *)(param_3 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
      puVar11 = (undefined8 *)(param_3[1] + (long)iVar2);
    }
    else {
      puVar11 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar11 + 1);
    }
    *(undefined2 *)*puVar11 = uVar1;
    iVar2 = (int)param_3[3];
    puVar11 = (undefined8 *)param_1[0x1b];
joined_r0x00dd04a0:
    if (-1 < iVar2) goto LAB_00dd04b4;
LAB_00dd04a4:
    *(int *)(param_3 + 3) = iVar2 + 8;
    if (0 < iVar2 + 8) goto LAB_00dd04b4;
    puVar10 = (undefined8 *)(param_3[1] + (long)iVar2);
LAB_00dd04c0:
    *(undefined8 **)*puVar10 = puVar11;
    goto LAB_00dd0614;
  case 0x153:
    iVar2 = (int)param_3[3];
    uVar7 = *(ushort *)((long)param_1 + 0x76);
    break;
  default:
    switch(uVar9) {
    case 0x211:
      iVar2 = (int)param_3[3];
      if ((iVar2 < 0) && (*(int *)(param_3 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
        puVar11 = (undefined8 *)(param_3[1] + (long)iVar2);
      }
      else {
        puVar11 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar11 + 1);
      }
      *(undefined **)*puVar11 = &DAT_01d2b530;
      break;
    case 0x212:
      iVar2 = (int)param_3[3];
      uVar1 = *(undefined2 *)(param_1 + 0x21);
      if ((iVar2 < 0) && (*(int *)(param_3 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
        puVar11 = (undefined8 *)(param_3[1] + (long)iVar2);
      }
      else {
        puVar11 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar11 + 1);
      }
      *(undefined2 *)*puVar11 = uVar1;
      iVar2 = (int)param_3[3];
      uVar7 = *(ushort *)((long)param_1 + 0x10a);
      goto joined_r0x00dd05ec;
    case 0x213:
      iVar2 = (int)param_3[3];
      uVar7 = *(ushort *)((long)param_1 + 0x10c);
      goto joined_r0x00dd05ec;
    case 0x214:
      puVar5 = (undefined4 *)param_1[0x25];
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = _TIFFmalloc(0x18);
        param_1[0x25] = puVar5;
        if (puVar5 == (undefined4 *)0x0) {
          return 0;
        }
        if (*(short *)((long)param_1 + 0x7a) == 6) {
          fVar19 = 128.0;
          fVar16 = 255.0;
          lVar14 = 8;
          lVar15 = 4;
          lVar12 = 0xc;
          lVar13 = 0x14;
          fVar20 = fVar19;
          fVar18 = fVar16;
        }
        else {
          fVar18 = 0.0;
          lVar14 = 0x14;
          fVar16 = (float)((1L << ((ulong)*(ushort *)((long)param_1 + 0x74) & 0x3f)) + -1);
          lVar15 = 0xc;
          lVar12 = 8;
          lVar13 = 4;
          fVar19 = 0.0;
          fVar20 = fVar16;
        }
        *puVar5 = 0;
        *(float *)((long)puVar5 + lVar13) = fVar16;
        *(float *)((long)puVar5 + lVar12) = fVar18;
        *(float *)((long)puVar5 + lVar15) = fVar16;
        puVar5[4] = fVar19;
        *(float *)((long)puVar5 + lVar14) = fVar20;
      }
      iVar2 = (int)param_3[3];
      if ((iVar2 < 0) && (*(int *)(param_3 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
        puVar11 = (undefined8 *)(param_3[1] + (long)iVar2);
      }
      else {
        puVar11 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar11 + 1);
      }
      *(undefined4 **)*puVar11 = puVar5;
      break;
    default:
      switch(uVar9) {
      case 0x80e3:
        if (*(short *)((long)param_1 + 0xd4) == 1) {
          uVar7 = (ushort)(*(short *)param_1[0x1b] == 1);
        }
        else {
          uVar7 = 0;
        }
        iVar2 = (int)param_3[3];
        goto joined_r0x00dd05ec;
      case 0x80e4:
        sVar8 = *(short *)((long)param_1 + 0x76);
        iVar2 = (int)param_3[3];
        goto LAB_00dd04e4;
      case 0x80e5:
        iVar2 = (int)param_3[3];
        uVar9 = *(undefined4 *)(param_1 + 0xc);
        break;
      case 0x80e6:
        iVar2 = (int)param_3[3];
        uVar9 = *(undefined4 *)((long)param_1 + 0x6c);
        break;
      default:
        goto switchD_00dd01ac_caseD_ff;
      }
joined_r0x00dd050c:
      if (iVar2 < 0) goto LAB_00dd0510;
      goto LAB_00dd0520;
    }
    goto LAB_00dd0614;
  }
joined_r0x00dd05ec:
  if (iVar2 < 0) {
    *(int *)(param_3 + 3) = iVar2 + 8;
    if (0 < iVar2 + 8) goto LAB_00dd0600;
    puVar11 = (undefined8 *)(param_3[1] + (long)iVar2);
  }
  else {
LAB_00dd0600:
    puVar11 = (undefined8 *)*param_3;
    *param_3 = (long)(puVar11 + 1);
  }
  *(ushort *)*puVar11 = uVar7;
LAB_00dd0614:
  uVar3 = 1;
switchD_00dd01ac_caseD_ff:
  return uVar3;
}

