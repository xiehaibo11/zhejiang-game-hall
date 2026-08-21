
void png_handle_sPLT(long param_1,undefined8 param_2,uint param_3)

{
  ushort *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ushort uVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  char *pcVar13;
  byte *pbVar15;
  char *local_70;
  char local_68;
  long local_60;
  uint local_58;
  char *pcVar14;
  
  uVar11 = (ulong)param_3;
  if (*(int *)(param_1 + 0x49c) != 0) {
    iVar6 = *(int *)(param_1 + 0x49c) + -1;
    if (iVar6 == 0) {
LAB_00d7385c:
      png_crc_finish(param_1,uVar11);
      return;
    }
    *(int *)(param_1 + 0x49c) = iVar6;
    if (iVar6 == 1) {
      png_warning(param_1,"No space in chunk cache for sPLT");
      goto LAB_00d7385c;
    }
  }
  if ((*(uint *)(param_1 + 0x164) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((*(uint *)(param_1 + 0x164) >> 2 & 1) == 0) {
    pcVar10 = *(char **)(param_1 + 0x4d0);
    uVar12 = (ulong)(param_3 + 1);
    if (pcVar10 == (char *)0x0) {
LAB_00d738a4:
      pcVar10 = (char *)png_malloc_base(param_1,uVar12);
      if (pcVar10 == (char *)0x0) {
        png_crc_finish(param_1,uVar11);
        pcVar10 = "out of memory";
        goto LAB_00d7394c;
      }
      *(char **)(param_1 + 0x4d0) = pcVar10;
      *(ulong *)(param_1 + 0x4d8) = uVar12;
    }
    else if (*(ulong *)(param_1 + 0x4d8) < uVar12) {
      *(undefined8 *)(param_1 + 0x4d0) = 0;
      *(undefined8 *)(param_1 + 0x4d8) = 0;
      png_free(param_1,pcVar10);
      goto LAB_00d738a4;
    }
    png_read_data(param_1,pcVar10,uVar11);
    png_calculate_crc(param_1,pcVar10,uVar11);
    iVar6 = png_crc_finish(param_1,0);
    if (iVar6 == 0) {
      pcVar10[uVar11] = '\0';
      pcVar13 = pcVar10;
      do {
        pcVar14 = pcVar13;
        pcVar13 = pcVar14 + 1;
      } while (*pcVar14 != '\0');
      if (pcVar10 + uVar11 + -2 < pcVar13) {
        pcVar10 = "malformed sPLT chunk";
      }
      else {
        pbVar15 = (byte *)(pcVar14 + 2);
        cVar4 = *pcVar13;
        uVar3 = 6;
        if (cVar4 != '\b') {
          uVar3 = 10;
        }
        param_3 = param_3 - ((int)pbVar15 - (int)pcVar10);
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = param_3 / uVar3;
        }
        local_68 = cVar4;
        if (param_3 == uVar5 * uVar3) {
          local_58 = uVar5;
          local_60 = png_malloc_warn(param_1,(ulong)uVar5 * 10);
          if (local_60 != 0) {
            if (uVar3 <= param_3) {
              lVar7 = 0;
              lVar8 = 1;
              while( true ) {
                if (cVar4 == '\b') {
                  puVar1 = (ushort *)(local_60 + lVar7);
                  *puVar1 = (ushort)*pbVar15;
                  puVar1[1] = (ushort)pbVar15[1];
                  puVar1[2] = (ushort)pbVar15[2];
                  uVar9 = (ushort)pbVar15[3];
                  pbVar15 = pbVar15 + 4;
                }
                else {
                  puVar2 = (undefined2 *)(local_60 + lVar7);
                  *puVar2 = CONCAT11(*pbVar15,pbVar15[1]);
                  puVar2[1] = CONCAT11(pbVar15[2],pbVar15[3]);
                  puVar2[2] = CONCAT11(pbVar15[4],pbVar15[5]);
                  uVar9 = CONCAT11(pbVar15[6],pbVar15[7]);
                  pbVar15 = pbVar15 + 8;
                }
                *(ushort *)(local_60 + lVar7 + 6) = uVar9;
                *(ushort *)(local_60 + lVar7 + 8) = CONCAT11(*pbVar15,pbVar15[1]);
                if ((int)local_58 <= lVar8) break;
                pbVar15 = pbVar15 + 2;
                lVar7 = lVar7 + 10;
                lVar8 = lVar8 + 1;
                cVar4 = local_68;
              }
            }
            local_70 = pcVar10;
            png_set_sPLT(param_1,param_2,&local_70,1);
            png_free(param_1,local_60);
            return;
          }
          pcVar10 = "sPLT chunk requires too much memory";
          local_60 = 0;
        }
        else {
          pcVar10 = "sPLT chunk has bad length";
        }
      }
      png_warning(param_1,pcVar10);
    }
  }
  else {
    png_crc_finish(param_1,uVar11);
    pcVar10 = "out of place";
LAB_00d7394c:
    png_chunk_benign_error(param_1,pcVar10);
  }
  return;
}

