
undefined8 FUN_00e405c4(long param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (*(undefined8 **)(param_1 + 0x28) < puVar1 + 4) {
    return 0xa1;
  }
  pbVar3 = (byte *)*puVar1;
  lVar9 = *(long *)(param_1 + 0x38);
  pbVar6 = *(byte **)(param_1 + 0x10);
  bVar2 = *pbVar3;
  uVar7 = (ulong)bVar2;
  if (bVar2 == 0x1e) {
    lVar4 = FUN_00e41c10(pbVar3,pbVar6,0,0);
  }
  else if (bVar2 == 0x1d) {
    if (pbVar6 < pbVar3 + 5) goto LAB_00e406e4;
    uVar7 = (ulong)pbVar3[1] << 0x18 | (ulong)pbVar3[2] << 0x10 | (ulong)pbVar3[3] << 8 |
            (ulong)pbVar3[4];
    if (uVar7 < 0x8000) goto LAB_00e40708;
LAB_00e4068c:
    lVar4 = 0x7fffffff;
  }
  else if (bVar2 == 0x1c) {
    if (pbVar6 < pbVar3 + 3) goto LAB_00e406e4;
    uVar7 = (long)(short)((ushort)pbVar3[1] << 8) | (ulong)pbVar3[2];
LAB_00e40708:
    lVar4 = -0x7fffffff;
    if (-0x8000 < (long)uVar7) {
      lVar4 = uVar7 << 0x10;
    }
  }
  else {
    if (bVar2 < 0xf7) {
      lVar4 = (uVar7 - 0x8b) * 0x10000;
      goto LAB_00e4071c;
    }
    if (bVar2 < 0xfb) {
      if (pbVar3 + 2 <= pbVar6) {
        uVar7 = (uVar7 * 0x100 - 0xf700 | (ulong)pbVar3[1]) + 0x6c;
joined_r0x00e40704:
        if (0x7fff < (long)uVar7) goto LAB_00e4068c;
        goto LAB_00e40708;
      }
    }
    else if (pbVar3 + 2 <= pbVar6) {
      uVar7 = (uVar7 * -0x100 + 0xfa94) - (ulong)pbVar3[1];
      goto joined_r0x00e40704;
    }
LAB_00e406e4:
    lVar4 = 0;
  }
LAB_00e4071c:
  uVar5 = FT_RoundFix(lVar4);
  *(undefined8 *)(lVar9 + 0x88) = uVar5;
  pbVar3 = (byte *)puVar1[1];
  pbVar6 = *(byte **)(param_1 + 0x10);
  bVar2 = *pbVar3;
  uVar7 = (ulong)bVar2;
  if (bVar2 == 0x1e) {
    lVar4 = FUN_00e41c10(pbVar3,pbVar6,0,0);
  }
  else if (bVar2 == 0x1d) {
    if (pbVar6 < pbVar3 + 5) goto LAB_00e40808;
    uVar7 = (ulong)pbVar3[1] << 0x18 | (ulong)pbVar3[2] << 0x10 | (ulong)pbVar3[3] << 8 |
            (ulong)pbVar3[4];
    if (uVar7 < 0x8000) goto LAB_00e4082c;
LAB_00e407b0:
    lVar4 = 0x7fffffff;
  }
  else if (bVar2 == 0x1c) {
    if (pbVar6 < pbVar3 + 3) goto LAB_00e40808;
    uVar7 = (long)(short)((ushort)pbVar3[1] << 8) | (ulong)pbVar3[2];
LAB_00e4082c:
    lVar4 = -0x7fffffff;
    if (-0x8000 < (long)uVar7) {
      lVar4 = uVar7 << 0x10;
    }
  }
  else {
    if (bVar2 < 0xf7) {
      lVar4 = (uVar7 - 0x8b) * 0x10000;
      goto LAB_00e40840;
    }
    if (bVar2 < 0xfb) {
      if (pbVar3 + 2 <= pbVar6) {
        uVar7 = (uVar7 * 0x100 - 0xf700 | (ulong)pbVar3[1]) + 0x6c;
joined_r0x00e40828:
        if (0x7fff < (long)uVar7) goto LAB_00e407b0;
        goto LAB_00e4082c;
      }
    }
    else if (pbVar3 + 2 <= pbVar6) {
      uVar7 = (uVar7 * -0x100 + 0xfa94) - (ulong)pbVar3[1];
      goto joined_r0x00e40828;
    }
LAB_00e40808:
    lVar4 = 0;
  }
LAB_00e40840:
  uVar5 = FT_RoundFix(lVar4);
  *(undefined8 *)(lVar9 + 0x90) = uVar5;
  pbVar3 = (byte *)puVar1[2];
  pbVar6 = *(byte **)(param_1 + 0x10);
  bVar2 = *pbVar3;
  if (bVar2 == 0x1e) {
    uVar7 = FUN_00e41c10(pbVar3,pbVar6,0,0);
  }
  else if (bVar2 == 0x1d) {
    if (pbVar6 < pbVar3 + 5) goto LAB_00e4092c;
    uVar8 = (ulong)pbVar3[1] << 0x18 | (ulong)pbVar3[2] << 0x10 | (ulong)pbVar3[3] << 8 |
            (ulong)pbVar3[4];
    if (uVar8 < 0x8000) goto LAB_00e4094c;
LAB_00e408d4:
    uVar7 = 0x7fffffff;
  }
  else if (bVar2 == 0x1c) {
    if (pbVar6 < pbVar3 + 3) goto LAB_00e4092c;
    uVar8 = (long)(short)((ushort)pbVar3[1] << 8) | (ulong)pbVar3[2];
LAB_00e4094c:
    uVar7 = 0xffffffff80000001;
    if (-0x8000 < (long)uVar8) {
      uVar7 = uVar8 << 0x10;
    }
  }
  else {
    if (bVar2 < 0xf7) {
      uVar7 = -(ulong)(bVar2 - 0x8b >> 0x1f) & 0xffff000000000000 | (ulong)(bVar2 - 0x8b) << 0x10;
      goto LAB_00e40960;
    }
    if (bVar2 < 0xfb) {
      if (pbVar3 + 2 <= pbVar6) {
        uVar8 = ((ulong)bVar2 * 0x100 - 0xf700 | (ulong)pbVar3[1]) + 0x6c;
joined_r0x00e40948:
        if (0x7fff < (long)uVar8) goto LAB_00e408d4;
        goto LAB_00e4094c;
      }
    }
    else if (pbVar3 + 2 <= pbVar6) {
      uVar8 = ((ulong)bVar2 * -0x100 + 0xfa94) - (ulong)pbVar3[1];
      goto joined_r0x00e40948;
    }
LAB_00e4092c:
    uVar7 = 0;
  }
LAB_00e40960:
  uVar5 = FT_RoundFix(uVar7);
  *(undefined8 *)(lVar9 + 0x98) = uVar5;
  pbVar3 = (byte *)puVar1[3];
  pbVar6 = *(byte **)(param_1 + 0x10);
  bVar2 = *pbVar3;
  if (bVar2 == 0x1e) {
    uVar7 = FUN_00e41c10(pbVar3,pbVar6,0,0);
    goto LAB_00e40a80;
  }
  if (bVar2 == 0x1d) {
    if (pbVar6 < pbVar3 + 5) goto LAB_00e40a4c;
    uVar8 = (ulong)pbVar3[1] << 0x18 | (ulong)pbVar3[2] << 0x10 | (ulong)pbVar3[3] << 8 |
            (ulong)pbVar3[4];
    if (uVar8 < 0x8000) goto LAB_00e40a6c;
LAB_00e409f4:
    uVar7 = 0x7fffffff;
    goto LAB_00e40a80;
  }
  if (bVar2 == 0x1c) {
    if (pbVar6 < pbVar3 + 3) goto LAB_00e40a4c;
    uVar8 = (long)(short)((ushort)pbVar3[1] << 8) | (ulong)pbVar3[2];
LAB_00e40a6c:
    uVar7 = 0xffffffff80000001;
    if (-0x8000 < (long)uVar8) {
      uVar7 = uVar8 << 0x10;
    }
  }
  else {
    if (bVar2 < 0xf7) {
      uVar7 = -(ulong)(bVar2 - 0x8b >> 0x1f) & 0xffff000000000000 | (ulong)(bVar2 - 0x8b) << 0x10;
      goto LAB_00e40a80;
    }
    if (bVar2 < 0xfb) {
      if (pbVar3 + 2 <= pbVar6) {
        uVar8 = ((ulong)bVar2 * 0x100 - 0xf700 | (ulong)pbVar3[1]) + 0x6c;
joined_r0x00e40a68:
        if (0x7fff < (long)uVar8) goto LAB_00e409f4;
        goto LAB_00e40a6c;
      }
    }
    else if (pbVar3 + 2 <= pbVar6) {
      uVar8 = ((ulong)bVar2 * -0x100 + 0xfa94) - (ulong)pbVar3[1];
      goto joined_r0x00e40a68;
    }
LAB_00e40a4c:
    uVar7 = 0;
  }
LAB_00e40a80:
  uVar5 = FT_RoundFix(uVar7);
  *(undefined8 *)(lVar9 + 0xa0) = uVar5;
  return 0;
}

