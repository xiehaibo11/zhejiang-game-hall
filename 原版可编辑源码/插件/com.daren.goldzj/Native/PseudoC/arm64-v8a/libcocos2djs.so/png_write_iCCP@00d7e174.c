
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void png_write_iCCP(long param_1,undefined8 param_2,byte *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  long *plVar10;
  byte *local_4d0;
  ulong uStack_4c8;
  uint local_4c0;
  undefined1 auStack_4bc [1032];
  undefined1 auStack_b4 [84];
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (param_3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"No profile for iCCP chunk");
  }
  uVar7 = (uint)*param_3 << 0x18 | (uint)param_3[1] << 0x10 | (uint)param_3[2] << 8 |
          (uint)param_3[3];
  if (uVar7 < 0x84) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"ICC profile too short");
  }
  if (((param_3[3] & 3) != 0) && (3 < param_3[8])) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"ICC profile length invalid (not a multiple of 4)");
  }
  iVar6 = FUN_00d7e44c(param_1,param_2,auStack_b4);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"iCCP: invalid keyword");
  }
  iVar1 = iVar6 + 2;
  uStack_4c8 = (ulong)uVar7;
  auStack_b4[iVar6 + 1] = 0;
  local_4c0 = 0;
  local_4d0 = param_3;
  iVar6 = FUN_00d7e5c4(param_1,0x69434350,&local_4d0,iVar1);
  if (iVar6 == 0) {
    if (param_1 == 0) {
      uVar7 = local_4c0;
      if (0x3ff < local_4c0) {
        uVar7 = 0x400;
      }
      plVar10 = (long *)_DAT_000001e8;
      for (uVar7 = local_4c0 - uVar7; (bVar5 = uVar7 == 0, plVar10 != (long *)0x0 && (uVar7 != 0));
          uVar7 = uVar7 - uVar9) {
        plVar10 = (long *)*plVar10;
        uVar9 = uVar7;
        if (_DAT_000001f0 <= uVar7) {
          uVar9 = _DAT_000001f0;
        }
      }
    }
    else {
      iVar6 = local_4c0 + iVar1;
      *(undefined4 *)(param_1 + 0x4e4) = 0x22;
      local_60 = (undefined1)((uint)iVar6 >> 0x18);
      local_5f = (undefined1)((uint)iVar6 >> 0x10);
      local_5e = (undefined1)((uint)iVar6 >> 8);
      local_5d = (undefined1)iVar6;
      local_5c = 0x50434369;
      png_write_data(param_1,&local_60,8);
      *(undefined4 *)(param_1 + 0x250) = 0x69434350;
      png_reset_crc(param_1);
      png_calculate_crc(param_1,&local_5c,4);
      *(undefined4 *)(param_1 + 0x4e4) = 0x42;
      if (iVar1 != 0) {
        png_write_data(param_1,auStack_b4,iVar1);
        png_calculate_crc(param_1,auStack_b4,iVar1);
      }
      plVar10 = (long *)(param_1 + 0x1e8);
      puVar8 = auStack_4bc;
      uVar7 = 0x400;
      uVar9 = local_4c0;
      while( true ) {
        plVar10 = (long *)*plVar10;
        uVar2 = uVar9;
        if (uVar7 <= uVar9) {
          uVar2 = uVar7;
        }
        if (uVar2 != 0) {
          png_write_data(param_1,puVar8,uVar2);
          png_calculate_crc(param_1,puVar8,uVar2);
        }
        uVar9 = uVar9 - uVar2;
        bVar5 = uVar9 == 0;
        if ((plVar10 == (long *)0x0) || (uVar9 == 0)) break;
        uVar7 = *(uint *)(param_1 + 0x1f0);
        puVar8 = (undefined1 *)(plVar10 + 1);
      }
    }
    if (bVar5) {
      if (param_1 != 0) {
        uVar3 = *(undefined4 *)(param_1 + 0x294);
        *(undefined4 *)(param_1 + 0x4e4) = 0x82;
        local_60 = (undefined1)((uint)uVar3 >> 0x18);
        local_5f = (undefined1)((uint)uVar3 >> 0x10);
        local_5e = (undefined1)((uint)uVar3 >> 8);
        local_5d = (undefined1)uVar3;
        png_write_data(param_1,&local_60,4);
      }
      if (*(long *)(lVar4 + 0x28) == local_58) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"error writing ancillary chunked compressed data");
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,*(undefined8 *)(param_1 + 0x1a8));
}

