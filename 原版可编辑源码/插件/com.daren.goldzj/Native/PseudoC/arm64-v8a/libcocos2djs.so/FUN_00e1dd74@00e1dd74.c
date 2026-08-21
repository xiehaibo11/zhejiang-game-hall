
/* WARNING: Type propagation algorithm not settling */

int FUN_00e1dd74(ulong *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  ushort *__src;
  ushort *puVar8;
  ulong uVar9;
  ushort *puVar10;
  ulong uVar11;
  code *pcVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  ulong *puVar16;
  
  if (param_2 == (byte *)0x0) {
    return 6;
  }
  if (param_1 == (ulong *)0x0) {
    return 0x28;
  }
  puVar16 = param_1 + 8;
  bVar7 = false;
  bVar5 = *param_2;
  __src = (ushort *)*puVar16;
  puVar8 = (ushort *)(param_2 + 2);
code_r0x00e1ddc8:
  switch(bVar5) {
  case 4:
    pcVar12 = (code *)param_1[5];
    uVar13 = (ulong)*puVar8;
    if (pcVar12 != (code *)0x0) {
      if (param_1[1] < uVar13) goto LAB_00e1e078;
      uVar11 = param_1[7];
      if (*puVar8 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = (**(code **)(uVar11 + 8))(uVar11,uVar13);
        if (uVar9 == 0) {
          iVar15 = 0x40;
          *param_1 = 0;
          goto joined_r0x00e1e094;
        }
        pcVar12 = (code *)param_1[5];
      }
      *param_1 = uVar9;
      uVar9 = (*pcVar12)(param_1,param_1[2],uVar9,uVar13);
      puVar10 = (ushort *)*param_1;
      if (uVar9 < uVar13) {
        if (puVar10 != (ushort *)0x0) {
          (**(code **)(uVar11 + 0x10))(uVar11,puVar10);
        }
        puVar10 = (ushort *)0x0;
        iVar15 = 0x55;
        *param_1 = 0;
      }
      else {
        iVar15 = 0;
      }
      param_1[8] = (ulong)puVar10;
      param_1[9] = (ulong)((long)puVar10 + uVar13);
      param_1[2] = param_1[2] + uVar9;
      if (iVar15 == 0) {
        bVar7 = true;
        goto LAB_00e1dffc;
      }
      goto joined_r0x00e1e094;
    }
    uVar11 = param_1[2];
    iVar15 = 0x55;
    if ((param_1[1] <= uVar11) || (param_1[1] - uVar11 < uVar13)) goto joined_r0x00e1e094;
    param_1[2] = uVar11 + uVar13;
    bVar7 = true;
    puVar10 = (ushort *)(*param_1 + uVar11);
    param_1[8] = (ulong)puVar10;
    param_1[9] = (ulong)((long)puVar10 + uVar13);
    goto LAB_00e1dffc;
  default:
    goto switchD_00e1ddd8_caseD_5;
  case 8:
  case 9:
    puVar10 = (ushort *)((long)__src + 1);
    uVar13 = (ulong)(byte)*__src;
    uVar14 = 0x18;
    break;
  case 0xc:
  case 0xd:
    puVar10 = __src + 1;
    uVar13 = (ulong)CONCAT11((byte)*__src,*(byte *)((long)__src + 1));
    uVar14 = 0x10;
    break;
  case 0xe:
  case 0xf:
    puVar10 = __src + 1;
    uVar13 = (ulong)*__src;
    uVar14 = 0x10;
    break;
  case 0x10:
  case 0x11:
    bVar2 = (byte)*__src;
    bVar4 = *(byte *)((long)__src + 1);
    bVar3 = (byte)__src[1];
    bVar1 = *(byte *)((long)__src + 3);
    goto LAB_00e1de4c;
  case 0x12:
  case 0x13:
    bVar2 = *(byte *)((long)__src + 3);
    bVar4 = (byte)__src[1];
    bVar3 = *(byte *)((long)__src + 1);
    bVar1 = (byte)*__src;
LAB_00e1de4c:
    uVar14 = 0;
    puVar10 = __src + 2;
    uVar13 = (ulong)bVar2 << 0x18 | (ulong)bVar4 << 0x10 | (ulong)bVar3 << 8 | (ulong)bVar1;
    break;
  case 0x14:
  case 0x15:
    bVar2 = (byte)*__src;
    bVar4 = *(byte *)((long)__src + 1);
    bVar3 = (byte)__src[1];
    goto LAB_00e1de88;
  case 0x16:
  case 0x17:
    bVar2 = (byte)__src[1];
    bVar4 = *(byte *)((long)__src + 1);
    bVar3 = (byte)*__src;
LAB_00e1de88:
    puVar10 = (ushort *)((long)__src + 3);
    uVar13 = (ulong)bVar2 << 0x10 | (ulong)bVar4 << 8 | (ulong)bVar3;
    uVar14 = 8;
    break;
  case 0x18:
  case 0x19:
    puVar10 = (ushort *)((long)__src + (ulong)*(byte *)((long)puVar8 + -1));
    if (puVar10 <= (ushort *)param_1[9]) {
      if (bVar5 == 0x18) {
        memcpy((void *)(param_3 + (ulong)*puVar8),__src,(ulong)*(byte *)((long)puVar8 + -1));
      }
      goto LAB_00e1dffc;
    }
LAB_00e1e078:
    iVar15 = 0x55;
    goto joined_r0x00e1e094;
  }
  if ((bVar5 & 1) != 0) {
    uVar13 = (ulong)(((int)uVar13 << (ulong)uVar14) >> uVar14);
  }
  cVar6 = *(char *)((long)puVar8 + -1);
  uVar11 = (ulong)*puVar8;
  if (cVar6 == '\x04') {
    *(int *)(param_3 + uVar11) = (int)uVar13;
  }
  else if (cVar6 == '\x02') {
    *(short *)(param_3 + uVar11) = (short)uVar13;
  }
  else if (cVar6 == '\x01') {
    *(char *)(param_3 + uVar11) = (char)uVar13;
  }
  else {
    *(ulong *)(param_3 + uVar11) = uVar13;
  }
LAB_00e1dffc:
  bVar5 = (byte)puVar8[1];
  __src = puVar10;
  puVar8 = puVar8 + 2;
  goto code_r0x00e1ddc8;
switchD_00e1ddd8_caseD_5:
  iVar15 = 0;
  *puVar16 = (ulong)__src;
joined_r0x00e1e094:
  if (bVar7) {
    if (param_1[5] != 0) {
      if (*param_1 != 0) {
        (**(code **)(param_1[7] + 0x10))();
      }
      *param_1 = 0;
    }
    *puVar16 = 0;
    param_1[9] = 0;
  }
  return iVar15;
}

