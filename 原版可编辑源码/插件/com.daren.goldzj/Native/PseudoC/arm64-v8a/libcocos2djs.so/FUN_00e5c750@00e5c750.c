
uint FUN_00e5c750(long param_1)

{
  ulong uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ushort *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  ushort *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long local_70;
  uint local_64;
  
  lVar12 = *(long *)(param_1 + 0xc0);
  iVar4 = (**(code **)(param_1 + 0x340))(param_1,0x706f7374,lVar12,&local_70);
  if (iVar4 != 0) {
    return iVar4;
  }
  lVar6 = FUN_00e1d4a0(lVar12);
  lVar13 = *(long *)(param_1 + 0x2f0);
  iVar4 = FUN_00e1bc6c(lVar12,0x20);
  if (iVar4 != 0) {
    return iVar4;
  }
  if (lVar13 != 0x25000) {
    if (lVar13 != 0x20000) {
      local_64 = 3;
      goto LAB_00e5c9c4;
    }
    uVar14 = *(undefined8 *)(lVar12 + 0x38);
    uVar2 = FUN_00e1bcf8(lVar12,&local_64);
    if (local_64 != 0) goto LAB_00e5c9c4;
    if (*(ushort *)(param_1 + 0x1d0) < uVar2) goto LAB_00e5c8f8;
    uVar15 = (ulong)uVar2;
    puVar7 = (ushort *)FUN_00e13bcc(uVar14,2,0,uVar15,0,&local_64);
    lVar13 = 0;
    if (local_64 == 0) {
      local_64 = FUN_00e1d718(lVar12,uVar15 << 1);
      if (local_64 == 0) {
        puVar11 = puVar7;
        uVar17 = uVar15;
        if (uVar2 == 0) {
          FUN_00e1d90c(lVar12);
          uVar17 = 0;
        }
        else {
          do {
            uVar3 = FUN_00e1d970(lVar12);
            uVar17 = uVar17 - 1;
            *puVar11 = uVar3;
            puVar11 = puVar11 + 1;
          } while (uVar17 != 0);
          FUN_00e1d90c(lVar12);
          uVar17 = 0;
          puVar11 = puVar7;
          do {
            if (0x101 < *puVar11) {
              uVar5 = *puVar11 - 0x101;
              if ((int)uVar5 <= (int)((uint)uVar17 & 0xffff)) {
                uVar5 = (uint)uVar17;
              }
              uVar17 = (ulong)uVar5;
            }
            uVar15 = uVar15 - 1;
            puVar11 = puVar11 + 1;
          } while (uVar15 != 0);
        }
        uVar15 = uVar17 & 0xffff;
        lVar13 = FUN_00e13bcc(uVar14,8,0,uVar15,0,&local_64);
        if (local_64 == 0) {
          if ((uVar17 & 0xffff) != 0) {
            uVar16 = 0;
            uVar1 = local_70 + lVar6;
            do {
              uVar8 = FUN_00e1d4a0(lVar12);
              if (uVar1 <= uVar8) {
                if (((uint)uVar16 & 0xffff) < ((uint)uVar17 & 0xffff)) goto LAB_00e5cad0;
                break;
              }
              uVar5 = FUN_00e1dabc(lVar12,&local_64);
              if (local_64 != 0) goto LAB_00e5cb24;
              uVar5 = uVar5 & 0xff;
              if ((uVar1 < uVar5) || (uVar8 = FUN_00e1d4a0(lVar12), uVar1 - uVar5 < uVar8)) {
                iVar4 = FUN_00e1d4a0(lVar12);
                uVar5 = (int)uVar1 - iVar4;
                uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
              }
              uVar9 = FUN_00e13bcc(uVar14,1,0,uVar5 + 1,0,&local_64);
              *(undefined8 *)(lVar13 + uVar16 * 8) = uVar9;
              if (local_64 != 0) goto LAB_00e5cb24;
              local_64 = FUN_00e1bbd0(lVar12,uVar9,(ulong)uVar5);
              if (local_64 != 0) goto LAB_00e5cb24;
              lVar6 = uVar16 * 8;
              uVar16 = uVar16 + 1;
              *(undefined1 *)(*(long *)(lVar13 + lVar6) + (ulong)uVar5) = 0;
            } while (uVar16 < uVar15);
          }
          goto LAB_00e5cb0c;
        }
      }
      else {
        lVar13 = 0;
      }
    }
    goto LAB_00e5c9a8;
  }
  uVar14 = *(undefined8 *)(lVar12 + 0x38);
  uVar2 = FUN_00e1bcf8(lVar12,&local_64);
  if (local_64 != 0) goto LAB_00e5c9c4;
  if ((0x102 < uVar2) || (*(ushort *)(param_1 + 0x1d0) <= (ushort)(uVar2 - 1))) {
LAB_00e5c8f8:
    local_64 = 3;
    goto LAB_00e5c9c4;
  }
  uVar15 = (ulong)uVar2;
  puVar7 = (ushort *)FUN_00e13bcc(uVar14,1,0,uVar15,0,&local_64);
  if ((local_64 == 0) && (local_64 = FUN_00e1bbd0(lVar12,puVar7,uVar15), local_64 == 0)) {
    uVar17 = 0;
    do {
      if (uVar15 < uVar17 + (long)*(char *)((long)puVar7 + uVar17)) {
        local_64 = 3;
        goto LAB_00e5c9bc;
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < uVar15);
    local_64 = 0;
    *(ushort *)(param_1 + 0x400) = uVar2;
    *(ushort **)(param_1 + 0x408) = puVar7;
    goto LAB_00e5c9c4;
  }
LAB_00e5c9bc:
  FUN_00e139fc(uVar14,puVar7);
LAB_00e5c9c4:
  *(undefined1 *)(param_1 + 0x3f8) = 1;
  return local_64;
  while( true ) {
    uVar16 = uVar16 + 1;
    *puVar10 = 0;
    if (uVar15 <= uVar16) break;
LAB_00e5cad0:
    puVar10 = (undefined1 *)FUN_00e13bcc(uVar14,1,0,1,0,&local_64);
    *(undefined1 **)(lVar13 + uVar16 * 8) = puVar10;
    if (local_64 != 0) goto LAB_00e5cb24;
  }
LAB_00e5cb0c:
  local_64 = 0;
  *(ushort *)(param_1 + 0x400) = uVar2;
  *(short *)(param_1 + 0x402) = (short)uVar17;
  *(ushort **)(param_1 + 0x408) = puVar7;
  *(long *)(param_1 + 0x410) = lVar13;
  goto LAB_00e5c9c4;
LAB_00e5cb24:
  uVar17 = 0;
  do {
    lVar12 = uVar17 * 8;
    FUN_00e139fc(uVar14,*(undefined8 *)(lVar13 + lVar12));
    uVar17 = uVar17 + 1;
    *(undefined8 *)(lVar13 + lVar12) = 0;
  } while (uVar15 != uVar17);
LAB_00e5c9a8:
  FUN_00e139fc(uVar14,lVar13);
  goto LAB_00e5c9bc;
}

