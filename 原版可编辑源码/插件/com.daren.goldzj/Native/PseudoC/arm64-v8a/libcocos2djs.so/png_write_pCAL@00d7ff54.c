
void png_write_pCAL(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                   int param_5,uint param_6,char *param_7,long *param_8)

{
  undefined4 uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  size_t *psVar6;
  size_t sVar7;
  long *plVar8;
  long lVar9;
  size_t *psVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c6;
  undefined1 local_c5;
  undefined1 auStack_c4 [80];
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined4 local_70;
  undefined1 local_6c;
  undefined1 local_6b;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (3 < param_5) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"Unrecognized equation type for pCAL chunk");
  }
  iVar4 = FUN_00d7e44c(param_1,param_2,auStack_c4);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"pCAL: invalid keyword");
  }
  uVar12 = (ulong)(iVar4 + 1U);
  sVar5 = strlen(param_7);
  if (param_6 != 0) {
    sVar5 = sVar5 + 1;
  }
  lVar9 = uVar12 + sVar5 + 10;
  uVar1 = (undefined4)lVar9;
  psVar6 = (size_t *)
           png_malloc(param_1,-(ulong)(param_6 >> 0x1f) & 0xfffffff800000000 | (ulong)param_6 << 3);
  uVar13 = (ulong)(param_6 - 1);
  if (0 < (int)param_6) {
    uVar11 = (ulong)param_6;
    plVar8 = param_8;
    psVar10 = psVar6;
    do {
      sVar7 = strlen((char *)*plVar8);
      if (uVar13 != 0) {
        sVar7 = sVar7 + 1;
      }
      uVar11 = uVar11 - 1;
      *psVar10 = sVar7;
      lVar9 = sVar7 + lVar9;
      uVar1 = (undefined4)lVar9;
      uVar13 = uVar13 - 1;
      plVar8 = plVar8 + 1;
      psVar10 = psVar10 + 1;
    } while (uVar11 != 0);
  }
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    local_74 = (undefined1)((uint)uVar1 >> 0x18);
    local_73 = (undefined1)((uint)uVar1 >> 0x10);
    local_72 = (undefined1)((uint)uVar1 >> 8);
    *(undefined4 *)(param_1 + 0x4e4) = 0x22;
    local_71 = (undefined1)uVar1;
    local_70 = 0x4c414370;
    png_write_data(param_1,&local_74,8);
    *(undefined4 *)(param_1 + 0x250) = 0x7043414c;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,&local_70,4);
    *(undefined4 *)(param_1 + 0x4e4) = 0x42;
    if (iVar4 + 1U != 0) {
      png_write_data(param_1,auStack_c4,uVar12);
      png_calculate_crc(param_1,auStack_c4,uVar12);
    }
    bVar3 = true;
  }
  png_save_int_32(&local_74,param_3);
  png_save_int_32(&local_70,param_4);
  local_6b = (undefined1)param_6;
  local_6c = (char)param_5;
  if (bVar3) {
    png_write_data(param_1,&local_74,10);
    png_calculate_crc(param_1,&local_74,10);
    if ((sVar5 != 0) && (param_7 != (char *)0x0)) {
      png_write_data(param_1,param_7,sVar5);
      png_calculate_crc(param_1,param_7,sVar5);
    }
  }
  if ((bool)(0 < (int)param_6 & bVar3)) {
    uVar12 = (ulong)param_6;
    psVar10 = psVar6;
    do {
      lVar9 = *param_8;
      if ((lVar9 != 0) && (sVar5 = *psVar10, sVar5 != 0)) {
        png_write_data(param_1,lVar9,sVar5);
        png_calculate_crc(param_1,lVar9,sVar5);
      }
      param_8 = param_8 + 1;
      uVar12 = uVar12 - 1;
      psVar10 = psVar10 + 1;
    } while (uVar12 != 0);
  }
  png_free(param_1,psVar6);
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x294);
    *(undefined4 *)(param_1 + 0x4e4) = 0x82;
    local_c8 = (undefined1)((uint)uVar1 >> 0x18);
    local_c7 = (undefined1)((uint)uVar1 >> 0x10);
    local_c6 = (undefined1)((uint)uVar1 >> 8);
    local_c5 = (undefined1)uVar1;
    png_write_data(param_1,&local_c8,4);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

