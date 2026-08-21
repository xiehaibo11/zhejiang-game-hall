
void FUN_0013caac(long *param_1,long param_2,byte param_3,byte param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined2 uVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  char *pcVar14;
  long lVar15;
  bool bVar16;
  uint uVar17;
  uint local_7c;
  int local_78;
  uint local_74 [2];
  int local_6c;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  __android_log_print(4,"apk_diff_native",&DAT_00116339);
  pcVar14 = " true";
  if ((param_3 & 1) == 0) {
    pcVar14 = "false";
  }
  __android_log_print(3,"apk_diff_native","| isDataNormalized      : %s",pcVar14);
  pcVar14 = " true";
  if ((param_4 & 1) == 0) {
    pcVar14 = "false";
  }
  __android_log_print(3,"apk_diff_native","| isFileDataOffsetMatch : %s",pcVar14);
  __android_log_print(4,"apk_diff_native",&DAT_00117869);
  uVar12 = FUN_0013ce0c(param_1);
  if ((uVar12 & 1) == 0) {
    pcVar14 = "_UnZipper_open_begin(self)";
  }
  else {
    *param_1 = param_2;
    local_7c = 0;
    local_78 = 0;
    uVar12 = FUN_0013ce68(param_1,&local_78);
    iVar11 = local_78;
    if ((uVar12 & 1) == 0) {
      pcVar14 = "_UnZipper_searchEndCentralDirectory(self,&endCentralDirectory_pos)";
    }
    else {
      iVar10 = (**(code **)(*param_1 + 0x10))(*param_1,local_78 + 8,local_74,&local_68);
      if (iVar10 == 0) {
        FUN_0013fb24(&DAT_0016ba80,
                     "self->stream->read(self->stream,endCentralDirectory_pos+8,buf,buf+readLen)",
                     DAT_0016ba88);
        pcVar14 = 
        "_UnZipper_searchCentralDirectory(self,endCentralDirectory_pos,&centralDirectory_pos,&fileCount)"
        ;
      }
      else {
        uVar7 = (undefined2)local_74[0];
        uVar12 = FUN_0013c5e0(*param_1,local_6c,&local_7c,0,(long)param_1 + 0x82);
        uVar4 = local_7c;
        if ((uVar12 & 1) == 0) {
          pcVar14 = 
          "UnZipper_searchApkV2Sign(self->stream,centralDirectory_pos,&v2sign_topPos,0,&self->_isHaveV3Sign)"
          ;
        }
        else {
          uVar2 = local_6c - local_7c;
          uVar3 = iVar11 - local_7c;
          uVar17 = 0;
          bVar9 = true;
          if (0xfff < local_7c) {
            uVar17 = local_7c - 0x1000;
          }
          do {
            bVar16 = bVar9;
            uVar12 = FUN_0013cf88(param_1,*(int *)(*param_1 + 8) - uVar17,uVar7);
            if ((uVar12 & 1) == 0) {
              pcVar14 = 
              "_UnZipper_open_fvce(self,(ZipFilePos_t)self->stream->streamSize-ripe_fileDataEndPos,fileCount)"
              ;
              goto LAB_0013cdd0;
            }
            lVar15 = param_1[0x13];
            lVar1 = lVar15 + (ulong)(uVar4 - uVar17);
            param_1[0x12] = lVar1;
            param_1[9] = lVar1 + (ulong)uVar3;
            param_1[10] = lVar1 + (ulong)uVar2;
            iVar11 = (**(code **)(*param_1 + 0x10))
                               (*param_1,uVar17,lVar15,lVar15 + (ulong)*(uint *)(param_1 + 0x14));
            if (iVar11 == 0) {
              pcVar14 = 
              "UnZipper_fileData_read(self,ripe_fileDataEndPos,self->_cache_fvce,self->_cache_fvce+self->_fvce_size)"
              ;
              goto LAB_0013cdd0;
            }
            uVar12 = FUN_0013d050(param_1,param_4 & 1,local_74);
            uVar8 = local_74[0];
            if ((uVar12 & 1) == 0) {
              pcVar14 = "_UnZipper_vce_normalized(self,isFileDataOffsetMatch,&fileDataEndPos)";
              goto LAB_0013cdd0;
            }
            uVar5 = local_74[0] - uVar17;
            if (uVar17 <= local_74[0]) {
              if (uVar5 != 0) {
                uVar4 = (int)param_1[0x14] - uVar5;
                param_1[0x12] = param_1[0x12] - (ulong)uVar5;
                param_1[9] = param_1[9] - (ulong)uVar5;
                param_1[10] = param_1[10] - (ulong)uVar5;
                *(uint *)(param_1 + 0x14) = uVar4;
                memmove((void *)param_1[0x13],(void *)(param_1[0x13] + (ulong)uVar5),(ulong)uVar4);
              }
              if (param_1[0x13] != 0) {
                uVar13 = 1;
                *(byte *)(param_1 + 0x10) = param_3 & 1;
                *(byte *)((long)param_1 + 0x81) = param_4 & 1;
                goto LAB_0013cdd8;
              }
              break;
            }
            if ((void *)param_1[0x13] != (void *)0x0) {
              free((void *)param_1[0x13]);
              param_1[0x13] = 0;
              *(undefined4 *)(param_1 + 0x14) = 0;
            }
            uVar17 = uVar8;
            bVar9 = false;
          } while (bVar16);
          pcVar14 = "self->_cache_fvce!=0";
        }
      }
    }
  }
LAB_0013cdd0:
  FUN_0013fb24(&DAT_0016ba80,pcVar14,DAT_0016ba88);
  uVar13 = 0;
LAB_0013cdd8:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar13);
  }
  return;
}

