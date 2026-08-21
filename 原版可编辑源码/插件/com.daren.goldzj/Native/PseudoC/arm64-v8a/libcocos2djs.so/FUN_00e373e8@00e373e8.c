
uint FUN_00e373e8(long param_1,long param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  ushort *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ushort *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint local_94;
  undefined1 auStack_90 [16];
  long local_80;
  code *pcStack_78;
  long local_70;
  uint local_64;
  
  uVar12 = *(undefined8 *)(param_2 + 0x38);
  local_94 = 2;
  lVar13 = *(long *)(param_1 + 0x318);
  if (lVar13 != 0) {
    FUN_00e139fc(uVar12,*(undefined8 *)(lVar13 + 0x48));
    *(undefined8 *)(lVar13 + 0x48) = 0;
    *(undefined4 *)(lVar13 + 0x50) = 0;
    FUN_00e139fc(uVar12,*(undefined8 *)(lVar13 + 0x38));
    *(undefined8 *)(lVar13 + 0x38) = 0;
    *(undefined4 *)(lVar13 + 0x40) = 0;
    FUN_00e139fc(uVar12,lVar13);
    *(undefined8 *)(param_1 + 0x318) = 0;
  }
  lVar13 = FUN_00e1388c(uVar12,0x58,&local_94);
  if ((local_94 != 0) ||
     (local_94 = FUN_00e1d718(param_2,*(undefined8 *)(param_2 + 8)), local_94 != 0))
  goto LAB_00e377d8;
  uVar7 = *(undefined8 *)(param_1 + 0x2e8);
  uVar17 = *(undefined8 *)(param_1 + 0x2e0);
  uVar16 = *(undefined8 *)(param_1 + 0x2d8);
  *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)(param_1 + 0x2f0);
  *(undefined8 *)(lVar13 + 0x18) = uVar7;
  *(undefined8 *)(lVar13 + 0x10) = uVar17;
  *(undefined8 *)(lVar13 + 8) = uVar16;
  *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)(param_1 + 0x2f0);
  *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)(param_1 + 0x2e0);
  lVar14 = *(long *)(param_1 + 0x310);
  if (*(undefined8 **)(lVar14 + 0x48) == (undefined8 *)0x0) {
LAB_00e37768:
    uVar7 = *(undefined8 *)(lVar13 + 8);
    uVar17 = *(undefined8 *)(lVar13 + 0x20);
    uVar16 = *(undefined8 *)(lVar13 + 0x18);
    *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(lVar13 + 0x10);
    *(undefined8 *)(param_1 + 0x2d8) = uVar7;
    *(undefined8 *)(param_1 + 0x2f0) = uVar17;
    *(undefined8 *)(param_1 + 0x2e8) = uVar16;
    lVar14 = *(long *)(lVar13 + 8);
    *(long *)(param_1 + 0x70) = *(long *)(lVar13 + 0x10) >> 0x10;
    *(long *)(param_1 + 0x68) = lVar14 >> 0x10;
    lVar14 = *(long *)(lVar13 + 0x18);
    *(long *)(param_1 + 0x80) = *(long *)(lVar13 + 0x20) + 0xffff >> 0x10;
    *(long *)(param_1 + 0x78) = lVar14 + 0xffff >> 0x10;
    *(short *)(param_1 + 0x8a) = (short)((uint)(*(int *)(lVar13 + 0x28) + 0x8000) >> 0x10);
    *(short *)(param_1 + 0x8c) = (short)((uint)(*(int *)(lVar13 + 0x30) + 0x8000) >> 0x10);
    if (*(int *)(lVar13 + 0x50) != 0) {
      *(long *)(param_1 + 0x318) = lVar13;
      lVar13 = 0;
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x40;
    }
  }
  else {
    local_94 = (*(code *)**(undefined8 **)(lVar14 + 0x48))
                         (auStack_90,*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40)
                          ,*(undefined8 *)(param_2 + 0x48));
    if (local_94 == 0) {
      local_70 = param_1 + 0xf8;
      pcStack_78 = FUN_00e39410;
      local_80 = lVar13;
      local_94 = (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))(auStack_90);
      (**(code **)(*(long *)(lVar14 + 0x48) + 8))(auStack_90);
    }
    if (((((local_94 & 0xff) == 2) && (6 < *(ulong *)(param_2 + 8))) &&
        (lVar14 = *(long *)(param_2 + 0x40), *(byte *)(lVar14 + 1) < 4)) &&
       (((ulong)*(byte *)(lVar14 + 5) << 0x18 | (ulong)*(byte *)(lVar14 + 4) << 0x10 |
         (ulong)*(byte *)(lVar14 + 3) << 8 | (ulong)*(byte *)(lVar14 + 2)) ==
        *(ulong *)(param_2 + 8))) {
      puVar9 = *(ushort **)(param_2 + 0x48);
      uVar7 = *(undefined8 *)(param_2 + 0x38);
      local_64 = 0;
      if (puVar9 < (ushort *)(lVar14 + 0x65U)) goto LAB_00e37580;
      lVar11 = lVar14 + 99 + (ulong)*(ushort *)(lVar14 + 99);
      if (((puVar9 < (ushort *)(lVar11 + 0x24U)) || (*(ushort *)(lVar11 + 0x12) < 0x12)) ||
         (uVar10 = (ulong)*(byte *)(lVar11 + 0x23) << 0x18 | (ulong)*(byte *)(lVar11 + 0x22) << 0x10
                   | (ulong)*(byte *)(lVar11 + 0x21) << 8 | (ulong)*(byte *)(lVar11 + 0x20),
         uVar10 == 0)) goto LAB_00e3775c;
      puVar2 = (ushort *)(lVar14 + uVar10);
      puVar15 = puVar2 + 1;
      if (puVar9 < puVar15) {
LAB_00e37580:
        local_64 = 2;
      }
      else {
        uVar5 = *puVar2;
        *(uint *)(lVar13 + 0x50) = (uint)uVar5;
        if (puVar9 < puVar15 + (ulong)uVar5 * 2) goto LAB_00e37580;
        if (uVar5 == 0) {
LAB_00e3775c:
          local_94 = 0;
          goto LAB_00e37764;
        }
        puVar8 = (undefined4 *)FUN_00e13bcc(uVar7,0x10,0,(ulong)uVar5,0,&local_64);
        *(undefined4 **)(lVar13 + 0x48) = puVar8;
        if (local_64 == 0) {
          iVar4 = *(int *)(lVar13 + 0x50);
          lVar14 = *(long *)(param_1 + 0xa8);
          if (0 < *(int *)(param_1 + 0x48)) {
            lVar11 = 0;
            do {
              if (*(short *)(*(long *)(*(long *)(param_1 + 0x50) + lVar11 * 8) + 0xc) == 7) {
                local_64 = FT_Set_Charmap(param_1);
                if (local_64 != 0) goto LAB_00e37588;
                break;
              }
              lVar11 = lVar11 + 1;
            } while (lVar11 < *(int *)(param_1 + 0x48));
          }
          uVar3 = iVar4 << 2 | 2;
          if (uVar3 != 2) {
            do {
              uVar6 = FT_Get_Char_Index(param_1,(char)*puVar15);
              *puVar8 = uVar6;
              uVar6 = FT_Get_Char_Index(param_1,*(undefined1 *)((long)puVar15 + 1));
              puVar8[1] = uVar6;
              pbVar1 = (byte *)((long)puVar15 + 3);
              puVar9 = puVar15 + 1;
              puVar15 = puVar15 + 2;
              puVar8[2] = (int)(short)((ushort)*pbVar1 << 8) | (uint)(byte)*puVar9;
              puVar8[3] = 0;
              puVar8 = puVar8 + 4;
            } while (puVar15 < (ushort *)((long)puVar2 + (ulong)uVar3));
          }
          if (lVar14 != 0) {
            local_64 = FT_Set_Charmap(param_1,lVar14);
          }
          if ((local_64 == 0) &&
             (qsort(*(void **)(lVar13 + 0x48),(ulong)*(uint *)(lVar13 + 0x50),0x10,FUN_00e394ac),
             local_64 == 0)) goto LAB_00e3775c;
        }
      }
LAB_00e37588:
      FUN_00e139fc(uVar7,*(undefined8 *)(lVar13 + 0x48));
      *(undefined8 *)(lVar13 + 0x48) = 0;
      *(undefined4 *)(lVar13 + 0x50) = 0;
      local_94 = local_64;
    }
LAB_00e37764:
    if (local_94 == 0) goto LAB_00e37768;
  }
  FUN_00e1d90c(param_2);
LAB_00e377d8:
  if (lVar13 != 0) {
    FUN_00e139fc(uVar12,*(undefined8 *)(lVar13 + 0x48));
    *(undefined8 *)(lVar13 + 0x48) = 0;
    *(undefined4 *)(lVar13 + 0x50) = 0;
    FUN_00e139fc(uVar12,*(undefined8 *)(lVar13 + 0x38));
    *(undefined8 *)(lVar13 + 0x38) = 0;
    *(undefined4 *)(lVar13 + 0x40) = 0;
    FUN_00e139fc(uVar12,lVar13);
  }
  return local_94;
}

