
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void png_write_iTXt(long param_1,int param_2,undefined8 param_3,char *param_4,char *param_5,
                   char *param_6)

{
  int iVar1;
  char *__s;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  char *__s_00;
  char *__s_01;
  undefined4 uVar5;
  long lVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  size_t sVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint uVar14;
  long *plVar15;
  char *local_4e0;
  size_t local_4d8;
  uint local_4d0;
  undefined1 auStack_4cc [1032];
  undefined1 auStack_c4 [84];
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  iVar9 = FUN_010da8f4(param_1,param_3,auStack_c4);
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"iTXt: invalid keyword");
  }
  uVar12 = param_2 + 1;
  if (3 < uVar12) {
                    /* try { // try from 010dc274 to 011dc277 has its CatchHandler @ 010dc288 */
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"iTXt: invalid compression");
  }
  __s = "";
  __s_00 = __s;
  if (param_4 != (char *)0x0) {
    __s_00 = param_4;
  }
  iVar1 = iVar9 + 3;
  auStack_c4[iVar9 + 1] = (char)(0x1000100 >> (ulong)(uVar12 * 8 & 0x1f));
  auStack_c4[iVar9 + 2] = 0;
  sVar11 = strlen(__s_00);
  __s_01 = __s;
  if (param_5 != (char *)0x0) {
    __s_01 = param_5;
  }
  uVar2 = sVar11 + 1;
  sVar11 = strlen(__s_01);
  if (param_6 != (char *)0x0) {
    __s = param_6;
  }
  iVar10 = 0x7fffffff;
  if (uVar2 <= 0x7ffffffc - iVar9) {
    iVar10 = (int)uVar2 + iVar1;
  }
  uVar3 = sVar11 + 1;
  iVar9 = 0x7fffffff;
  if (uVar3 <= 0x7fffffff - iVar10) {
    iVar9 = (int)uVar3 + iVar10;
  }
  local_4d8 = strlen(__s);
  local_4d0 = 0;
  local_4e0 = __s;
  if ((uVar12 & 1) == 0) {
    if (0x7fffffff - iVar9 < local_4d8) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010dc2e4 with catch @ 010dc28c
                       catch(type#1 @ 00000000) { ... } // from try @ 010dc4b4 with catch @ 010dc28c
                        */
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"iTXt: uncompressed text too long");
    }
    local_4d0 = (uint)local_4d8;
    sVar11 = local_4d8;
  }
  else {
    iVar10 = FUN_010daa6c(param_1,0x69545874,&local_4e0,iVar9);
    if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010dc274 with catch @ 010dc288
                        */
      png_error(param_1,*(undefined8 *)(param_1 + 0x1a8));
    }
    sVar11 = (size_t)local_4d0;
  }
  if (param_1 == 0) {
    bVar7 = 0;
    sVar11 = local_4d8;
    uVar14 = local_4d0;
  }
  else {
    iVar9 = (int)sVar11 + iVar9;
    *(undefined4 *)(param_1 + 0x4e4) = 0x22;
    local_70 = (undefined1)((uint)iVar9 >> 0x18);
    local_6f = (undefined1)((uint)iVar9 >> 0x10);
    local_6e = (undefined1)((uint)iVar9 >> 8);
    local_6d = (undefined1)iVar9;
    local_6c = 0x74585469;
    png_write_data(param_1,&local_70,8);
    *(undefined4 *)(param_1 + 0x250) = 0x69545874;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,&local_6c,4);
    *(undefined4 *)(param_1 + 0x4e4) = 0x42;
    if (iVar1 != 0) {
      png_write_data(param_1,auStack_c4,iVar1);
      png_calculate_crc(param_1,auStack_c4,iVar1);
    }
    if ((uVar2 != 0) && (__s_00 != (char *)0x0)) {
      png_write_data(param_1,__s_00,uVar2);
      png_calculate_crc(param_1,__s_00,uVar2);
    }
    bVar7 = 1;
    sVar11 = local_4d8;
    uVar14 = local_4d0;
    if (uVar3 != 0) {
      if (__s_01 != (char *)0x0) {
        png_write_data(param_1,__s_01,uVar3);
        png_calculate_crc(param_1,__s_01,uVar3);
                    /* try { // try from 010dc0cc to 011dc16b has its CatchHandler @ 010dc0cc
                       catch() { ... } // from try @ 010dc0cc with catch @ 010dc0cc
                       catch() { ... } // from try @ 010dc194 with catch @ 010dc0cc */
      }
      bVar7 = 1;
      sVar11 = local_4d8;
      uVar14 = local_4d0;
    }
  }
  local_4d8 = sVar11;
  local_4d0 = uVar14;
  if ((uVar12 & 1) == 0) {
                    /* try { // try from 010dc16c to 011dc173 has its CatchHandler @ 010dc1d0 */
    if (((bool)(__s != (char *)0x0 & bVar7)) && (sVar11 != 0)) {
      png_write_data(param_1,__s,sVar11);
                    /* try { // try from 010dc18c to 011dc193 has its CatchHandler @ 010dc1d4 */
                    /* try { // try from 010dc194 to 011dc1e7 has its CatchHandler @ 010dc0cc */
      png_calculate_crc(param_1,__s,sVar11);
    }
  }
  else {
    plVar15 = (long *)(param_1 + 0x1e8);
    if (param_1 == 0) {
      uVar12 = uVar14;
      if (0x3ff < uVar14) {
        uVar12 = 0x400;
      }
      plVar15 = (long *)_DAT_000001e8;
      for (uVar14 = uVar14 - uVar12; (bVar8 = uVar14 == 0, plVar15 != (long *)0x0 && (uVar14 != 0));
          uVar14 = uVar14 - uVar12) {
        plVar15 = (long *)*plVar15;
        uVar12 = uVar14;
        if (_DAT_000001f0 <= uVar14) {
          uVar12 = _DAT_000001f0;
        }
                    /* catch() { ... } // from try @ 010dc16c with catch @ 010dc1d0 */
                    /* catch() { ... } // from try @ 010dc18c with catch @ 010dc1d4 */
      }
    }
    else {
      puVar13 = auStack_4cc;
      uVar12 = 0x400;
      while( true ) {
        plVar15 = (long *)*plVar15;
        uVar4 = uVar14;
        if (uVar12 <= uVar14) {
          uVar4 = uVar12;
        }
        if (uVar4 != 0) {
          png_write_data(param_1,puVar13,uVar4);
          png_calculate_crc(param_1,puVar13,uVar4);
        }
        uVar14 = uVar14 - uVar4;
        bVar8 = uVar14 == 0;
        if ((plVar15 == (long *)0x0) || (uVar14 == 0)) break;
        uVar12 = *(uint *)(param_1 + 0x1f0);
        puVar13 = (undefined1 *)(plVar15 + 1);
      }
    }
    if (!bVar8) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"error writing ancillary chunked compressed data");
    }
  }
  if (param_1 != 0) {
                    /* try { // try from 010dc1e8 to 011dc273 has its CatchHandler @ 010dc1e8
                       catch(type#1 @ 00000000) { ... } // from try @ 010dc1e8 with catch @ 010dc1e8
                        */
    uVar5 = *(undefined4 *)(param_1 + 0x294);
    *(undefined4 *)(param_1 + 0x4e4) = 0x82;
    local_70 = (undefined1)((uint)uVar5 >> 0x18);
    local_6f = (undefined1)((uint)uVar5 >> 0x10);
    local_6e = (undefined1)((uint)uVar5 >> 8);
    local_6d = (undefined1)uVar5;
    png_write_data(param_1,&local_70,4);
  }
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

