
void png_compress_IDAT(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  long lVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  uint uVar15;
  char cVar16;
  int iVar17;
  long lVar18;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if (*(int *)(param_1 + 0x170) != 0x49444154) {
    plVar13 = *(long **)(param_1 + 0x1e8);
    if (plVar13 == (long *)0x0) {
      puVar9 = (undefined8 *)png_malloc(param_1,(ulong)*(uint *)(param_1 + 0x1f0) + 8);
      *(undefined8 **)(param_1 + 0x1e8) = puVar9;
      *puVar9 = 0;
    }
    else {
      plVar12 = (long *)*plVar13;
      if (plVar12 != (long *)0x0) {
        *plVar13 = 0;
        do {
          plVar12 = (long *)*plVar12;
          png_free(param_1);
        } while (plVar12 != (long *)0x0);
      }
    }
    uVar10 = FUN_00d7dc98(param_1);
    iVar7 = FUN_00d7da20(param_1,0x49444154,uVar10);
    if (iVar7 != 0) {
LAB_00d7da04:
                    /* WARNING: Subroutine does not return */
      png_error(param_1,*(undefined8 *)(param_1 + 0x1a8));
    }
    *(long *)(param_1 + 400) = *(long *)(param_1 + 0x1e8) + 8;
    *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x1f0);
  }
  *(undefined8 *)(param_1 + 0x178) = param_2;
  *(undefined4 *)(param_1 + 0x180) = 0;
LAB_00d7d798:
  do {
    uVar11 = param_3;
    if (0xfffffffe < param_3) {
      uVar11 = 0xffffffff;
    }
    iVar7 = 0;
    if (param_3 - uVar11 == 0) {
      iVar7 = param_4;
    }
    *(int *)(param_1 + 0x180) = (int)uVar11;
    iVar8 = deflate(param_1 + 0x178,iVar7);
    uVar15 = *(uint *)(param_1 + 0x180);
    iVar7 = *(int *)(param_1 + 0x198);
    *(undefined4 *)(param_1 + 0x180) = 0;
    param_3 = (param_3 - uVar11) + (ulong)uVar15;
    if (iVar7 == 0) {
      lVar18 = *(long *)(param_1 + 0x1e8);
      iVar7 = *(int *)(param_1 + 0x1f0);
      pbVar1 = (byte *)(lVar18 + 8);
      if (((((*(byte *)(param_1 + 0x164) >> 2 & 1) == 0) && (*(char *)(param_1 + 0x490) == '\0')) &&
          (uVar11 = FUN_00d7dc98(param_1), uVar11 < 0x4001)) &&
         ((bVar4 = *pbVar1, (bVar4 & 0xf) == 8 && ((bVar4 & 0xf0) < 0x71)))) {
        bVar6 = bVar4 >> 4;
        uVar14 = (ulong)(uint)(0x80 << (ulong)bVar6);
        if (uVar11 <= uVar14) {
          cVar16 = (bVar4 & 0xf0) + 8;
          uVar15 = (uint)bVar6 << 0xc | 0x800;
          iVar17 = -(uint)bVar6;
          do {
            iVar17 = iVar17 + 1;
            uVar15 = uVar15 - 0x1000;
            cVar16 = cVar16 + -0x10;
            if (iVar17 == 0) break;
            uVar14 = uVar14 >> 1;
          } while (uVar11 <= uVar14);
          *(char *)(lVar18 + 8) = cVar16;
          uVar2 = *(byte *)(lVar18 + 9) & 0xe0;
          bVar4 = (byte)uVar2;
          *(byte *)(lVar18 + 9) = (bVar4 + (char)((uVar15 | uVar2) / 0x1f) * -0x1f | bVar4) ^ 0x1f;
        }
      }
      if (iVar7 < 0) goto LAB_00d7d9e4;
      *(undefined4 *)(param_1 + 0x4e4) = 0x22;
      local_70 = (undefined1)((uint)iVar7 >> 0x18);
      local_6f = (undefined1)((uint)iVar7 >> 0x10);
      local_6e = (undefined1)((uint)iVar7 >> 8);
      local_6d = (undefined1)iVar7;
      local_6c = 0x54414449;
      png_write_data(param_1,&local_70,8);
      *(undefined4 *)(param_1 + 0x250) = 0x49444154;
      png_reset_crc(param_1);
      png_calculate_crc(param_1,&local_6c,4);
      *(undefined4 *)(param_1 + 0x4e4) = 0x42;
      if (iVar7 != 0) {
        png_write_data(param_1,pbVar1,iVar7);
        png_calculate_crc(param_1,pbVar1,iVar7);
      }
      uVar3 = *(undefined4 *)(param_1 + 0x294);
      *(undefined4 *)(param_1 + 0x4e4) = 0x82;
      local_70 = (undefined1)((uint)uVar3 >> 0x18);
      local_6f = (undefined1)((uint)uVar3 >> 0x10);
      local_6e = (undefined1)((uint)uVar3 >> 8);
      local_6d = (undefined1)uVar3;
      png_write_data(param_1,&local_70,4);
      *(byte **)(param_1 + 400) = pbVar1;
      *(int *)(param_1 + 0x198) = iVar7;
      *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 4;
      if ((param_4 != 0) && (iVar8 == 0)) goto LAB_00d7d798;
    }
    if (iVar8 != 0) {
      if ((param_4 != 4) || (iVar8 != 1)) {
        png_zstream_error(param_1,iVar8);
        goto LAB_00d7da04;
      }
      lVar18 = *(long *)(param_1 + 0x1e8);
      pbVar1 = (byte *)(lVar18 + 8);
      iVar7 = *(int *)(param_1 + 0x1f0) - iVar7;
      if (((((*(byte *)(param_1 + 0x164) >> 2 & 1) != 0) || (*(char *)(param_1 + 0x490) != '\0')) ||
          (uVar11 = FUN_00d7dc98(param_1), 0x4000 < uVar11)) ||
         ((bVar4 = *pbVar1, (bVar4 & 0xf) != 8 || (0x70 < (bVar4 & 0xf0))))) goto LAB_00d7d8b4;
      bVar6 = bVar4 >> 4;
      uVar14 = (ulong)(uint)(0x80 << (ulong)bVar6);
      if (uVar14 < uVar11) goto LAB_00d7d8b4;
      cVar16 = (bVar4 & 0xf0) + 8;
      uVar15 = (uint)bVar6 << 0xc | 0x800;
      iVar8 = -(uint)bVar6;
      goto LAB_00d7d854;
    }
  } while (param_3 != 0);
  if (param_4 == 4) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"Z_OK on Z_FINISH with output space");
  }
  goto LAB_00d7d9b0;
  while (uVar14 = uVar14 >> 1, uVar11 <= uVar14) {
LAB_00d7d854:
    iVar8 = iVar8 + 1;
    uVar15 = uVar15 - 0x1000;
    cVar16 = cVar16 + -0x10;
    if (iVar8 == 0) break;
  }
  *(char *)(lVar18 + 8) = cVar16;
  uVar2 = *(byte *)(lVar18 + 9) & 0xe0;
  bVar4 = (byte)uVar2;
  *(byte *)(lVar18 + 9) = (bVar4 + (char)((uVar15 | uVar2) / 0x1f) * -0x1f | bVar4) ^ 0x1f;
LAB_00d7d8b4:
  if (iVar7 < 0) {
LAB_00d7d9e4:
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"length exceeds PNG maximum");
  }
  *(undefined4 *)(param_1 + 0x4e4) = 0x22;
  local_70 = (undefined1)((uint)iVar7 >> 0x18);
  local_6f = (undefined1)((uint)iVar7 >> 0x10);
  local_6e = (undefined1)((uint)iVar7 >> 8);
  local_6d = (undefined1)iVar7;
  local_6c = 0x54414449;
  png_write_data(param_1,&local_70,8);
  *(undefined4 *)(param_1 + 0x250) = 0x49444154;
  png_reset_crc(param_1);
  png_calculate_crc(param_1,&local_6c,4);
  *(undefined4 *)(param_1 + 0x4e4) = 0x42;
  if (iVar7 != 0) {
    png_write_data(param_1,pbVar1,iVar7);
    png_calculate_crc(param_1,pbVar1,iVar7);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x294);
  *(undefined4 *)(param_1 + 0x4e4) = 0x82;
  local_70 = (undefined1)((uint)uVar3 >> 0x18);
  local_6f = (undefined1)((uint)uVar3 >> 0x10);
  local_6e = (undefined1)((uint)uVar3 >> 8);
  local_6d = (undefined1)uVar3;
  png_write_data(param_1,&local_70,4);
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 0xc;
LAB_00d7d9b0:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

