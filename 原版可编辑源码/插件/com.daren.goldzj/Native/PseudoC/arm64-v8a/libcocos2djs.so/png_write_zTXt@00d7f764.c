
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void png_write_zTXt(long param_1,undefined8 param_2,char *param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  long *plVar10;
  char *local_4d0;
  size_t sStack_4c8;
  uint local_4c0;
  undefined1 auStack_4bc [1032];
  undefined1 auStack_b4 [84];
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (param_4 == 0) {
    iVar5 = FUN_00d7e44c(param_1,param_2,auStack_b4);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"zTXt: invalid keyword");
    }
    auStack_b4[iVar5 + 1] = 0;
    iVar5 = iVar5 + 2;
    if (param_3 == (char *)0x0) {
      sStack_4c8 = 0;
    }
    else {
      sStack_4c8 = strlen(param_3);
    }
    local_4c0 = 0;
    local_4d0 = param_3;
    iVar6 = FUN_00d7e5c4(param_1,0x7a545874,&local_4d0,iVar5);
    if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,*(undefined8 *)(param_1 + 0x1a8));
    }
    if (param_1 == 0) {
      uVar7 = local_4c0;
      if (0x3ff < local_4c0) {
        uVar7 = 0x400;
      }
      plVar10 = (long *)_DAT_000001e8;
      for (uVar7 = local_4c0 - uVar7; (bVar4 = uVar7 == 0, plVar10 != (long *)0x0 && (uVar7 != 0));
          uVar7 = uVar7 - uVar9) {
        plVar10 = (long *)*plVar10;
        uVar9 = uVar7;
        if (_DAT_000001f0 <= uVar7) {
          uVar9 = _DAT_000001f0;
        }
      }
    }
    else {
      iVar6 = local_4c0 + iVar5;
      *(undefined4 *)(param_1 + 0x4e4) = 0x22;
      local_60 = (undefined1)((uint)iVar6 >> 0x18);
      local_5f = (undefined1)((uint)iVar6 >> 0x10);
      local_5e = (undefined1)((uint)iVar6 >> 8);
      local_5d = (undefined1)iVar6;
      local_5c = 0x7458547a;
      png_write_data(param_1,&local_60,8);
      *(undefined4 *)(param_1 + 0x250) = 0x7a545874;
      png_reset_crc(param_1);
      png_calculate_crc(param_1,&local_5c,4);
      *(undefined4 *)(param_1 + 0x4e4) = 0x42;
      if (iVar5 != 0) {
        png_write_data(param_1,auStack_b4,iVar5);
        png_calculate_crc(param_1,auStack_b4,iVar5);
      }
      plVar10 = (long *)(param_1 + 0x1e8);
      puVar8 = auStack_4bc;
      uVar7 = 0x400;
      uVar9 = local_4c0;
      while( true ) {
        plVar10 = (long *)*plVar10;
        uVar1 = uVar9;
        if (uVar7 <= uVar9) {
          uVar1 = uVar7;
        }
        if (uVar1 != 0) {
          png_write_data(param_1,puVar8,uVar1);
          png_calculate_crc(param_1,puVar8,uVar1);
        }
        uVar9 = uVar9 - uVar1;
        bVar4 = uVar9 == 0;
        if ((plVar10 == (long *)0x0) || (uVar9 == 0)) break;
        uVar7 = *(uint *)(param_1 + 0x1f0);
        puVar8 = (undefined1 *)(plVar10 + 1);
      }
    }
    if (!bVar4) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"error writing ancillary chunked compressed data");
    }
    if (param_1 != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x294);
      *(undefined4 *)(param_1 + 0x4e4) = 0x82;
      local_60 = (undefined1)((uint)uVar2 >> 0x18);
      local_5f = (undefined1)((uint)uVar2 >> 0x10);
      local_5e = (undefined1)((uint)uVar2 >> 8);
      local_5d = (undefined1)uVar2;
      png_write_data(param_1,&local_60,4);
    }
  }
  else {
    if (param_4 != -1) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"zTXt: invalid compression type");
    }
    png_write_tEXt(param_1,param_2,param_3);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

