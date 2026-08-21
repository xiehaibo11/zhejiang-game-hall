
void png_write_sPLT(long param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined2 *puVar11;
  char *pcVar12;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c6;
  undefined1 local_c5;
  undefined1 local_c4 [4];
  undefined4 local_c0;
  undefined1 auStack_b8 [80];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  pcVar12 = (char *)(param_2 + 1);
  iVar5 = *(int *)(param_2 + 3);
  lVar8 = 6;
  if (*pcVar12 != '\b') {
    lVar8 = 10;
  }
  iVar7 = FUN_010da8f4(param_1,*param_2,auStack_b8);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"sPLT: invalid keyword");
  }
  if (param_1 != 0) {
    lVar9 = (ulong)(iVar7 + 2) + lVar8 * iVar5;
    *(undefined4 *)(param_1 + 0x4e4) = 0x22;
    local_c4[0] = (undefined1)((ulong)lVar9 >> 0x18);
    local_c4[1] = (undefined1)((ulong)lVar9 >> 0x10);
    local_c4[2] = (undefined1)((ulong)lVar9 >> 8);
    local_c4[3] = (undefined1)lVar9;
    local_c0 = 0x544c5073;
    png_write_data(param_1,local_c4,8);
    *(undefined4 *)(param_1 + 0x250) = 0x73504c54;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,&local_c0,4);
    *(undefined4 *)(param_1 + 0x4e4) = 0x42;
    iVar7 = iVar7 + 1;
    if (iVar7 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010dac64 with catch @ 010dada0
                        */
      png_write_data(param_1,auStack_b8,iVar7);
      png_calculate_crc(param_1,auStack_b8,iVar7);
    }
  }
  if (param_1 != 0) {
    png_write_data(param_1,pcVar12,1);
    png_calculate_crc(param_1,pcVar12,1);
  }
  iVar5 = *(int *)(param_2 + 3);
  if (0 < iVar5) {
    lVar9 = param_2[2];
    if (param_1 == 0) {
      cVar3 = *pcVar12;
      puVar11 = (undefined2 *)(lVar9 + 4);
      do {
        uVar2 = local_c0;
        local_c4[1] = (undefined1)puVar11[-2];
        if (cVar3 == '\b') {
          lVar10 = 3;
          lVar8 = 4;
          local_c4[2] = *(undefined1 *)puVar11;
          uVar4 = puVar11[1];
          local_c4[0] = local_c4[1];
          local_c4[1] = *(undefined1 *)(puVar11 + -1);
        }
        else {
          local_c4[0] = (undefined1)((ushort)puVar11[-2] >> 8);
          lVar10 = 7;
          local_c4[2] = (undefined1)((ushort)puVar11[-1] >> 8);
          local_c4[3] = (undefined1)puVar11[-1];
          local_c0._0_2_ = CONCAT11((char)*puVar11,(char)((ushort)*puVar11 >> 8));
          uVar4 = puVar11[1];
          local_c0._3_1_ = SUB41(uVar2,3);
          local_c0._0_3_ = CONCAT12((char)((ushort)uVar4 >> 8),(undefined2)local_c0);
          lVar8 = 8;
        }
        local_c4[lVar10] = (char)uVar4;
        uVar4 = puVar11[2];
        puVar1 = puVar11 + 3;
        puVar11 = puVar11 + 5;
        local_c4[lVar8 + 1] = (char)uVar4;
        local_c4[lVar8] = (char)((ushort)uVar4 >> 8);
      } while (puVar1 < (undefined2 *)(lVar9 + (long)iVar5 * 10));
    }
    else {
      puVar11 = (undefined2 *)(lVar9 + 4);
      do {
        uVar2 = local_c0;
        local_c4[1] = (undefined1)puVar11[-2];
        if (*pcVar12 == '\b') {
          lVar10 = 3;
          lVar9 = 4;
          local_c4[2] = *(undefined1 *)puVar11;
          uVar4 = puVar11[1];
          local_c4[0] = local_c4[1];
          local_c4[1] = *(undefined1 *)(puVar11 + -1);
        }
        else {
          local_c4[0] = (undefined1)((ushort)puVar11[-2] >> 8);
          lVar10 = 7;
          local_c4[2] = (undefined1)((ushort)puVar11[-1] >> 8);
          local_c4[3] = (undefined1)puVar11[-1];
          local_c0._0_2_ = CONCAT11((char)*puVar11,(char)((ushort)*puVar11 >> 8));
          uVar4 = puVar11[1];
          local_c0._3_1_ = SUB41(uVar2,3);
          local_c0._0_3_ = CONCAT12((char)((ushort)uVar4 >> 8),(undefined2)local_c0);
          lVar9 = 8;
        }
        local_c4[lVar10] = (char)uVar4;
        uVar4 = puVar11[2];
        local_c4[lVar9] = (char)((ushort)uVar4 >> 8);
        local_c4[lVar9 + 1] = (char)uVar4;
        png_write_data(param_1,local_c4,lVar8);
        png_calculate_crc(param_1,local_c4,lVar8);
        puVar1 = puVar11 + 3;
        puVar11 = puVar11 + 5;
      } while (puVar1 < (undefined2 *)(param_2[2] + (long)*(int *)(param_2 + 3) * 10));
    }
  }
  if (param_1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x294);
    *(undefined4 *)(param_1 + 0x4e4) = 0x82;
    local_c8 = (undefined1)((uint)uVar2 >> 0x18);
    local_c7 = (undefined1)((uint)uVar2 >> 0x10);
    local_c6 = (undefined1)((uint)uVar2 >> 8);
    local_c5 = (undefined1)uVar2;
    png_write_data(param_1,&local_c8,4);
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

