
void pvmp3_mpeg2_get_scale_data
               (long param_1,int param_2,int param_3,long param_4,long param_5,long param_6,
               undefined8 param_7)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  ushort uVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  short sVar19;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  local_78 = 0;
  local_70 = 0;
  uVar4 = *(uint *)(param_1 + (long)param_3 * 0xa0 + (long)param_2 * 0x48 + 0x24);
  lVar8 = (long)param_3;
  lVar12 = (long)param_2;
  if ((param_3 == 1) && ((*(uint *)(param_4 + 0x20) & 1) != 0)) {
    uVar15 = uVar4 >> 1;
    if (uVar4 < 0x168) {
      uVar17 = uVar15 % 6;
      uVar18 = (ulong)(uVar4 & 0xffff) / 0x48;
      local_78 = CONCAT44((uVar15 % 0x24) / 6,(uVar4 & 0xffff) / 0x48);
      lVar14 = 3;
    }
    else if (uVar4 < 0x1e8) {
      uVar15 = uVar15 - 0xb4;
      uVar18 = NEON_ushl(CONCAT44(uVar15,uVar15),0xfffffffefffffffc,4);
      local_78 = uVar18 & 0x300000003;
      uVar17 = uVar15 & 3;
      uVar18 = (ulong)((uint)uVar18 & 3);
      lVar14 = 4;
    }
    else {
      if (0x1ff < uVar4) {
        uVar15 = 0;
        uVar7 = 0;
        uVar18 = 0;
        lVar14 = 0;
        goto LAB_00e9d2bc;
      }
      uVar15 = uVar15 - 0xf4;
      uVar18 = (ulong)uVar15 / 3;
      uVar17 = 0;
      local_78 = CONCAT44(uVar15 % 3,uVar15 / 3);
      lVar14 = 5;
    }
    uVar15 = 0;
    uVar7 = 0;
    local_70 = (ulong)uVar17;
  }
  else if (uVar4 < 400) {
    uVar18 = (ulong)(uVar4 & 0xffff) / 0x50;
    uVar7 = 0;
    lVar14 = 0;
    local_78 = CONCAT44((uVar4 >> 4 & 0xff) % 5,(uVar4 & 0xffff) / 0x50);
    local_70 = (ulong)(uVar4 >> 2 & 3);
    uVar15 = uVar4 & 3;
  }
  else if (uVar4 < 500) {
    uVar4 = uVar4 - 400;
    uVar18 = (ulong)(uVar4 & 0xff) / 0x14;
    uVar15 = 0;
    uVar7 = 0;
    local_78 = CONCAT44((uVar4 >> 2 & 0xff) % 5,(uVar4 & 0xff) / 0x14);
    local_70 = (ulong)(uVar4 & 3);
    lVar14 = 1;
  }
  else {
    if (0x1ff < uVar4) {
      uVar18 = 0;
      lVar14 = 0;
      goto LAB_00e9d2d4;
    }
    uVar17 = uVar4 + 0xc & 0xff;
    uVar18 = (ulong)uVar17 / 3;
    uVar15 = 0;
    uVar7 = 1;
    local_78 = CONCAT44(uVar4 + 0xc + (uVar17 / 3) * -3,uVar17 / 3) & 0xffffffffff;
    lVar14 = 2;
    local_70 = 0;
  }
LAB_00e9d2bc:
  local_70 = CONCAT44(uVar15,(undefined4)local_70);
  *(undefined4 *)(param_1 + lVar8 * 0xa0 + lVar12 * 0x48 + 0x54) = uVar7;
LAB_00e9d2d4:
  if (*(int *)(param_1 + lVar8 * 0xa0 + lVar12 * 0x48 + 0x2c) == 2) {
    lVar9 = 1;
    if (*(int *)(param_1 + lVar8 * 0xa0 + lVar12 * 0x48 + 0x30) != 0) {
      lVar9 = 2;
    }
  }
  else {
    lVar9 = 0;
  }
  lVar8 = 0;
  uVar13 = 0;
  do {
    uVar5 = *(ushort *)(&UNK_019987f0 + lVar8 * 4 + lVar9 * 0x10 + lVar14 * 0x30);
    iVar11 = (uint)uVar5 * 0x10000;
    if ((int)uVar18 == 0) {
      if (0 < iVar11) {
        uVar4 = (uint)uVar5;
        if (uVar5 < 2) {
          uVar4 = 1;
        }
        uVar15 = (uint)uVar5;
        if (uVar4 < 8) {
LAB_00e9d3d0:
          uVar17 = 0;
        }
        else {
          uVar17 = uVar15;
          if (uVar5 < 2) {
            uVar17 = 1;
          }
          if (((short)uVar17 < 1) || (uVar17 - 1 >> 0x10 != 0)) goto LAB_00e9d3d0;
          iVar11 = (int)uVar13;
          sVar19 = (short)uVar13;
          if ((short)(sVar19 + (short)(uVar17 - 1)) < sVar19) goto LAB_00e9d3d0;
          uVar17 = uVar15;
          if (uVar15 < 2) {
            uVar17 = 1;
          }
          uVar18 = -(uVar13 >> 0xf & 1) & 0xfffffffffffc0000 | (uVar13 & 0xffff) << 2;
          lVar12 = ((long)sVar19 + (ulong)(uVar17 - 1)) * 4;
          if ((param_5 + uVar18 < (ulong)(param_6 + 4 + lVar12)) &&
             (param_6 + uVar18 < (ulong)(param_5 + 4 + lVar12))) goto LAB_00e9d3d0;
          uVar17 = uVar4 & 0xfff8;
          uVar16 = 0;
          uVar13 = (ulong)(iVar11 + uVar17);
          do {
            uVar1 = iVar11 + uVar16;
            uVar16 = uVar16 + 8;
            uVar18 = -((ulong)(uVar1 >> 0xf) & 1) & 0xfffffffffffc0000 |
                     ((ulong)uVar1 & 0xffff) << 2;
            puVar2 = (undefined8 *)(param_5 + uVar18);
            puVar3 = (undefined8 *)(param_6 + uVar18);
            puVar2[1] = 0;
            *puVar2 = 0;
            puVar2[3] = 0;
            puVar2[2] = 0;
            puVar3[1] = 0;
            *puVar3 = 0;
            puVar3[3] = 0;
            puVar3[2] = 0;
          } while (uVar17 != uVar16);
          if (uVar4 == uVar17) goto LAB_00e9d3f8;
        }
        do {
          uVar17 = uVar17 + 1;
          uVar18 = -(uVar13 >> 0xf & 1) & 0xfffffffffffc0000 | (uVar13 & 0xffff) << 2;
          uVar13 = (ulong)((int)uVar13 + 1);
          *(undefined4 *)(param_5 + uVar18) = 0;
          *(undefined4 *)(param_6 + uVar18) = 0;
        } while ((int)(short)uVar17 < (int)uVar15);
      }
    }
    else if (0 < iVar11) {
      sVar19 = 0;
      do {
        uVar7 = getNbits(param_7,uVar18);
        sVar19 = sVar19 + 1;
        uVar10 = -(uVar13 >> 0xf & 1) & 0xfffffffffffc0000 | (uVar13 & 0xffff) << 2;
        uVar13 = (ulong)((int)uVar13 + 1);
        *(undefined4 *)(param_5 + uVar10) = uVar7;
        *(uint *)(param_6 + uVar10) = ~(uint)(-1L << (uVar18 & 0x3f));
      } while ((int)sVar19 < iVar11 >> 0x10);
    }
LAB_00e9d3f8:
    lVar8 = lVar8 + 1;
    if (lVar8 == 4) {
      if (*(long *)(lVar6 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar18 = (ulong)*(uint *)((long)&local_78 + lVar8 * 4);
  } while( true );
}

