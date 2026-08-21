
int FUN_00139ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5
                ,undefined4 param_6)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  void *__ptr;
  char *pcVar8;
  void *__ptr_00;
  int iVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 auStack_6d0 [4];
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 local_658;
  char local_650;
  long local_4e0 [13];
  undefined1 auStack_478 [8];
  undefined4 local_470;
  long local_468;
  undefined4 local_460;
  undefined4 local_458;
  undefined4 local_450;
  undefined4 local_448;
  undefined4 local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 local_408;
  long local_400;
  long local_3f8;
  long local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  int local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined1 auStack_358 [80];
  long local_308;
  long local_2c0;
  uint local_2b8;
  undefined1 auStack_2b0 [304];
  undefined8 local_180;
  long local_178;
  undefined1 auStack_16c [260];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  __android_log_print(3,"apk_diff_native","start VirtualZipPatchWithStream ");
  FUN_0013ca10(auStack_358);
  FUN_0013da20(auStack_2b0);
  FUN_0013b594(auStack_478);
  FUN_001398d8(local_4e0);
  FUN_00138e64(&local_658);
  ppuVar10 = &PTR_FUN_0016b9b0;
  uStack_678 = 0;
  local_680 = 0;
  uStack_668 = 0;
  uStack_670 = 0;
  uStack_698 = 0;
  local_6a0 = 0;
  uStack_688 = 0;
  uStack_690 = 0;
  uStack_6a8 = 0;
  local_6b0 = 0;
  uVar6 = FUN_0013b5f0(param_2,&PTR_FUN_0016b9b0);
  if ((uVar6 & 1) == 0) {
    ppuVar10 = &PTR_FUN_0016b9d0;
    uVar6 = FUN_0013b5f0(param_2,&PTR_FUN_0016b9d0);
    if ((uVar6 & 1) != 0) goto LAB_00139eb8;
    ppuVar10 = &PTR_FUN_0016b9f0;
    uVar6 = FUN_0013b5f0(param_2,&PTR_FUN_0016b9f0);
    if ((uVar6 & 1) != 0) goto LAB_00139eb8;
    puts("ZipDiffData_isCanDecompress(zipDiffStream,decompressPlugin) PATCH_COMPRESSTYPE_ERROR!");
    __android_log_print(6,"apk_diff_native",
                        "ZipDiffData_isCanDecompress(zipDiffStream,decompressPlugin) PATCH_COMPRESSTYPE_ERROR!\n"
                       );
    pcVar8 = "ZipDiffData_isCanDecompress(zipDiffStream,decompressPlugin)";
LAB_0013a164:
    FUN_0013fb24(&DAT_0016ba72,pcVar8,"PATCH_COMPRESSTYPE_ERROR");
    __ptr_00 = (void *)0x0;
    bVar2 = false;
    __ptr = (void *)0x0;
    iVar9 = 7;
    iVar3 = 7;
    goto LAB_0013a214;
  }
LAB_00139eb8:
  uVar6 = FUN_0013b8d0(auStack_478,param_2,ppuVar10);
  if ((uVar6 & 1) == 0) {
    puts(
        "ZipDiffData_openRead(&zipDiffData,zipDiffStream,decompressPlugin) PATCH_ZIPDIFFINFO_ERROR!"
        );
    __android_log_print(6,"apk_diff_native",
                        "ZipDiffData_openRead(&zipDiffData,zipDiffStream,decompressPlugin) PATCH_ZIPDIFFINFO_ERROR!\n"
                       );
    FUN_0013fb24(&DAT_0016ba72,"ZipDiffData_openRead(&zipDiffData,zipDiffStream,decompressPlugin)",
                 "PATCH_ZIPDIFFINFO_ERROR");
    __ptr_00 = (void *)0x0;
    bVar2 = false;
    __ptr = (void *)0x0;
    iVar9 = 9;
    iVar3 = 9;
    goto LAB_0013a214;
  }
  __android_log_print(3,"apk_diff_native",
                      "VirtualZipPatchWithStream  zipDiffData.oldZipCESize   : %zu",local_3f0);
  uVar6 = FUN_0013caac(auStack_358,param_1,local_400 != 0,local_3f8 != 0);
  lVar7 = local_3f0;
  if ((uVar6 & 1) == 0) {
    puts(
        "UnZipper_openStream(&oldZip,oldZipStream,zipDiffData.oldZipIsDataNormalized!=0, zipDiffData.oldIsFileDataOffsetMatch!=0) PATCH_OPENREAD_ERROR!"
        );
    __android_log_print(6,"apk_diff_native",
                        "UnZipper_openStream(&oldZip,oldZipStream,zipDiffData.oldZipIsDataNormalized!=0, zipDiffData.oldIsFileDataOffsetMatch!=0) PATCH_OPENREAD_ERROR!\n"
                       );
    FUN_0013fb24(&DAT_0016ba72,
                 "UnZipper_openStream(&oldZip,oldZipStream,zipDiffData.oldZipIsDataNormalized!=0, zipDiffData.oldIsFileDataOffsetMatch!=0)"
                 ,"PATCH_OPENREAD_ERROR");
    __ptr_00 = (void *)0x0;
    bVar2 = false;
    __ptr = (void *)0x0;
    iVar9 = 1;
    iVar3 = 1;
    goto LAB_0013a214;
  }
  lVar12 = (local_2c0 + (ulong)local_2b8) - local_308;
  __android_log_print(4,"apk_diff_native",&DAT_0011ab75);
  __android_log_print(3,"apk_diff_native","| oldZipCE_Size     : %zu",lVar7);
  __android_log_print(3,"apk_diff_native","| unzipper_ce_size  : %zu",lVar12);
  __android_log_print(4,"apk_diff_native",&DAT_0011614c);
  __android_log_print(4,"apk_diff_native",&DAT_00116626);
  if (lVar7 != lVar12) {
    __android_log_print(3,"apk_diff_native",
                        "oldZipCESizeResult and  oldZipCESizeResult is not in equal.");
  }
  if (local_3f0 == (local_2c0 + (ulong)local_2b8) - local_308) {
    iVar3 = FUN_00139828(auStack_358,local_3e8,local_3e0);
    if (local_3d8 != iVar3) {
      puts(
          "zipDiffData.oldCrc==OldStream_getOldCrc(&oldZip,zipDiffData.oldRefList,zipDiffData.oldRefCount _VIRTUAL_IN(virtual_in)) PATCH_OLDDATA_ERROR!"
          );
      __android_log_print(6,"apk_diff_native",
                          "zipDiffData.oldCrc==OldStream_getOldCrc(&oldZip,zipDiffData.oldRefList,zipDiffData.oldRefCount _VIRTUAL_IN(virtual_in)) PATCH_OLDDATA_ERROR!\n"
                         );
      pcVar8 = 
      "zipDiffData.oldCrc==OldStream_getOldCrc(&oldZip,zipDiffData.oldRefList,zipDiffData.oldRefCount _VIRTUAL_IN(virtual_in))"
      ;
      goto LAB_0013a1f4;
    }
    iVar3 = FUN_00135ebc(&local_180,local_3d0);
    if (iVar3 == 0) {
      puts("getCompressedDiffInfo(&diffInfo,zipDiffData.hdiffzData) PATCH_HDIFFINFO_ERROR!");
      iVar9 = 6;
      __android_log_print(6,"apk_diff_native",
                          "getCompressedDiffInfo(&diffInfo,zipDiffData.hdiffzData) PATCH_HDIFFINFO_ERROR!\n"
                         );
      FUN_0013fb24(&DAT_0016ba72,"getCompressedDiffInfo(&diffInfo,zipDiffData.hdiffzData)",
                   "PATCH_HDIFFINFO_ERROR");
      __ptr_00 = (void *)0x0;
      bVar2 = false;
      __ptr = (void *)0x0;
      iVar3 = 6;
      goto LAB_0013a214;
    }
    lVar7 = __strlen_chk(auStack_16c,0x104);
    if ((lVar7 != 0) && (iVar3 = (*(code *)*ppuVar10)(auStack_16c), iVar3 == 0)) {
      puts("decompressPlugin->is_can_open(diffInfo.compressType) PATCH_COMPRESSTYPE_ERROR!");
      __android_log_print(6,"apk_diff_native",
                          "decompressPlugin->is_can_open(diffInfo.compressType) PATCH_COMPRESSTYPE_ERROR!\n"
                         );
      pcVar8 = "decompressPlugin->is_can_open(diffInfo.compressType)";
      goto LAB_0013a164;
    }
    uVar4 = FUN_00139700(auStack_358,local_3e8,local_3e0);
    uVar6 = (ulong)uVar4;
    bVar2 = param_4 < uVar6 && param_5 != 0;
    if (param_4 >= uVar6 || param_5 == 0) {
      __ptr_00 = malloc((ulong)(uVar4 + 1));
      if (__ptr_00 != (void *)0x0) {
        puVar11 = auStack_6d0;
        FUN_001357e0(auStack_6d0,__ptr_00,(long)__ptr_00 + uVar6);
        goto LAB_0013a40c;
      }
      puts("ref_cache!=0 PATCH_MEM_ERROR!");
      __android_log_print(6,"apk_diff_native","ref_cache!=0 PATCH_MEM_ERROR!\n");
      FUN_0013fb24(&DAT_0016ba72,"ref_cache!=0","PATCH_MEM_ERROR");
      bVar2 = false;
      __ptr = (void *)0x0;
LAB_0013a69c:
      iVar9 = 4;
      iVar3 = 4;
      goto LAB_0013a214;
    }
    iVar3 = FUN_0013548c(&local_6b0,param_5,uVar6);
    if (iVar3 == 0) {
      puts(
          "hpatch_TFileStreamOutput_open(&io_refFile,tempUncompressFileName,decompressSumSize) PATCH_OPENWRITE_ERROR!"
          );
      __android_log_print(6,"apk_diff_native",
                          "hpatch_TFileStreamOutput_open(&io_refFile,tempUncompressFileName,decompressSumSize) PATCH_OPENWRITE_ERROR!\n"
                         );
      FUN_0013fb24(&DAT_0016ba72,
                   "hpatch_TFileStreamOutput_open(&io_refFile,tempUncompressFileName,decompressSumSize)"
                   ,"PATCH_OPENWRITE_ERROR");
      __ptr_00 = (void *)0x0;
      bVar2 = true;
LAB_0013a648:
      __ptr = (void *)0x0;
      iVar9 = 2;
      iVar3 = 2;
      goto LAB_0013a214;
    }
    __ptr_00 = (void *)0x0;
    puVar11 = &local_6b0;
LAB_0013a40c:
    uVar6 = FUN_00139778(auStack_358,local_3e8,local_3e0,puVar11);
    if ((uVar6 & 1) == 0) {
      puts(
          "OldStream_getDecompressData(&oldZip,zipDiffData.oldRefList,zipDiffData.oldRefCount, output_ref _VIRTUAL_IN(virtual_in)) PATCH_OLDDECOMPRESS_ERROR!"
          );
      __android_log_print(6,"apk_diff_native",
                          "OldStream_getDecompressData(&oldZip,zipDiffData.oldRefList,zipDiffData.oldRefCount, output_ref _VIRTUAL_IN(virtual_in)) PATCH_OLDDECOMPRESS_ERROR!\n"
                         );
      FUN_0013fb24(&DAT_0016ba72,
                   "OldStream_getDecompressData(&oldZip,zipDiffData.oldRefList,zipDiffData.oldRefCount, output_ref _VIRTUAL_IN(virtual_in))"
                   ,"PATCH_OLDDECOMPRESS_ERROR");
      __ptr = (void *)0x0;
      iVar9 = 0xb;
      iVar3 = 0xb;
      goto LAB_0013a214;
    }
    __android_log_print(3,"apk_diff_native","check%d",0x7b);
    uVar6 = FUN_00139b2c(local_4e0,auStack_358,local_3e8,local_3e0,0,0,puVar11);
    if ((uVar6 & 1) == 0) {
      puts(
          "OldStream_open(&oldStream,&oldZip,zipDiffData.oldRefList,zipDiffData.oldRefCount, 0,0,input_ref _VIRTUAL_IN(virtual_in)) PATCH_OLDSTREAM_ERROR!"
          );
      __android_log_print(6,"apk_diff_native",
                          "OldStream_open(&oldStream,&oldZip,zipDiffData.oldRefList,zipDiffData.oldRefCount, 0,0,input_ref _VIRTUAL_IN(virtual_in)) PATCH_OLDSTREAM_ERROR!\n"
                         );
      FUN_0013fb24(&DAT_0016ba72,
                   "OldStream_open(&oldStream,&oldZip,zipDiffData.oldRefList,zipDiffData.oldRefCount, 0,0,input_ref _VIRTUAL_IN(virtual_in))"
                   ,"PATCH_OLDSTREAM_ERROR");
      __ptr = (void *)0x0;
      iVar9 = 0xc;
      iVar3 = 0xc;
      goto LAB_0013a214;
    }
    if (*(long *)(local_4e0[0] + 8) == local_178) {
      uVar6 = FUN_0013dc0c(auStack_2b0,param_3,local_470,local_460,local_458,local_450);
      if ((uVar6 & 1) != 0) {
        uVar6 = FUN_00138e88(&local_658,auStack_2b0,auStack_358,local_180,local_468 != 0,local_438,
                             local_3c8,local_430,local_428,uStack_420,local_418,local_448,local_440,
                             local_410,local_408,param_6);
        if ((uVar6 & 1) == 0) {
          puts(
              "NewStream_open(&newStream,&out_newZip,&oldZip, (size_t)diffInfo.newDataSize, zipDiffData.newZipIsDataNormalized!=0, zipDiffData.newZipCESize,zipDiffData.extraEdit, zipDiffData.samePairList,zipDiffData.samePairCount, zipDiffData.newRefOtherCompressedList,zipDiffData.newRefOtherCompressedCount, (int)zipDiffData.newOtherCompressLevel,(int)zipDiffData.newOtherCompressMemLevel, zipDiffData.newRefCompressedSizeList,zipDiffData.newRefCompressedSizeCount, threadNum _VIRTUAL_IN(virtual_in) _VIRTUAL_OUT(virtual_out)) PATCH_NEWSTREAM_ERROR!"
              );
          __android_log_print(6,"apk_diff_native",
                              "NewStream_open(&newStream,&out_newZip,&oldZip, (size_t)diffInfo.newDataSize, zipDiffData.newZipIsDataNormalized!=0, zipDiffData.newZipCESize,zipDiffData.extraEdit, zipDiffData.samePairList,zipDiffData.samePairCount, zipDiffData.newRefOtherCompressedList,zipDiffData.newRefOtherCompressedCount, (int)zipDiffData.newOtherCompressLevel,(int)zipDiffData.newOtherCompressMemLevel, zipDiffData.newRefCompressedSizeList,zipDiffData.newRefCompressedSizeCount, threadNum _VIRTUAL_IN(virtual_in) _VIRTUAL_OUT(virtual_out)) PATCH_NEWSTREAM_ERROR!\n"
                             );
          FUN_0013fb24(&DAT_0016ba72,
                       "NewStream_open(&newStream,&out_newZip,&oldZip, (size_t)diffInfo.newDataSize, zipDiffData.newZipIsDataNormalized!=0, zipDiffData.newZipCESize,zipDiffData.extraEdit, zipDiffData.samePairList,zipDiffData.samePairCount, zipDiffData.newRefOtherCompressedList,zipDiffData.newRefOtherCompressedCount, (int)zipDiffData.newOtherCompressLevel,(int)zipDiffData.newOtherCompressMemLevel, zipDiffData.newRefCompressedSizeList,zipDiffData.newRefCompressedSizeCount, threadNum _VIRTUAL_IN(virtual_in) _VIRTUAL_OUT(virtual_out))"
                       ,"PATCH_NEWSTREAM_ERROR");
          __ptr = (void *)0x0;
          iVar9 = 0xd;
          iVar3 = 0xd;
          goto LAB_0013a214;
        }
        __ptr = malloc(0x20000);
        if (__ptr != (void *)0x0) {
          iVar3 = FUN_00135fe0(local_658,local_4e0[0],local_3d0,ppuVar10,__ptr,(long)__ptr + 0x20000
                              );
          pcVar8 = "Failure";
          if (iVar3 != 0) {
            pcVar8 = "Success";
          }
          __android_log_print(6,"apk_diff_native","patch_decompress_with_cache_result : %s",pcVar8);
          if (iVar3 == 0) {
            puts("patch_decompress_with_cache_result PATCH_HPATCH_ERROR!");
            __android_log_print(6,"apk_diff_native",
                                "patch_decompress_with_cache_result PATCH_HPATCH_ERROR!\n");
            FUN_0013fb24(&DAT_0016ba72,"patch_decompress_with_cache_result","PATCH_HPATCH_ERROR");
            iVar9 = 5;
            iVar3 = 5;
          }
          else if (local_650 == '\0') {
            puts("newStream.isFinish PATCH_ZIPPATCH_ERROR!");
            __android_log_print(6,"apk_diff_native","newStream.isFinish PATCH_ZIPPATCH_ERROR!\n");
            FUN_0013fb24(&DAT_0016ba72,"newStream.isFinish","PATCH_ZIPPATCH_ERROR");
            iVar9 = 8;
            iVar3 = 8;
          }
          else {
            iVar3 = 0;
            iVar9 = 3;
          }
          goto LAB_0013a214;
        }
        puts("temp_cache != 0 PATCH_MEM_ERROR!");
        __android_log_print(6,"apk_diff_native","temp_cache != 0 PATCH_MEM_ERROR!\n");
        FUN_0013fb24(&DAT_0016ba72,"temp_cache != 0","PATCH_MEM_ERROR");
        goto LAB_0013a69c;
      }
      puts(
          "Zipper_openStream(&out_newZip,outNewZipStream,(int)zipDiffData.newZipFileCount, (int)zipDiffData.newZipAlignSize,(int)zipDiffData.newCompressLevel, (int)zipDiffData.newCompressMemLevel) PATCH_OPENWRITE_ERROR!"
          );
      __android_log_print(6,"apk_diff_native",
                          "Zipper_openStream(&out_newZip,outNewZipStream,(int)zipDiffData.newZipFileCount, (int)zipDiffData.newZipAlignSize,(int)zipDiffData.newCompressLevel, (int)zipDiffData.newCompressMemLevel) PATCH_OPENWRITE_ERROR!\n"
                         );
      FUN_0013fb24(&DAT_0016ba72,
                   "Zipper_openStream(&out_newZip,outNewZipStream,(int)zipDiffData.newZipFileCount, (int)zipDiffData.newZipAlignSize,(int)zipDiffData.newCompressLevel, (int)zipDiffData.newCompressMemLevel)"
                   ,"PATCH_OPENWRITE_ERROR");
      goto LAB_0013a648;
    }
    puts("oldStream.stream->streamSize==diffInfo.oldDataSize PATCH_OLDDATA_ERROR!");
    __android_log_print(6,"apk_diff_native",
                        "oldStream.stream->streamSize==diffInfo.oldDataSize PATCH_OLDDATA_ERROR!\n")
    ;
    FUN_0013fb24(&DAT_0016ba72,"oldStream.stream->streamSize==diffInfo.oldDataSize",
                 "PATCH_OLDDATA_ERROR");
  }
  else {
    puts("zipDiffData.oldZipCESize==UnZipper_CESize(&oldZip) PATCH_OLDDATA_ERROR!");
    __android_log_print(6,"apk_diff_native",
                        "zipDiffData.oldZipCESize==UnZipper_CESize(&oldZip) PATCH_OLDDATA_ERROR!\n")
    ;
    pcVar8 = "zipDiffData.oldZipCESize==UnZipper_CESize(&oldZip)";
LAB_0013a1f4:
    FUN_0013fb24(&DAT_0016ba72,pcVar8,"PATCH_OLDDATA_ERROR");
    __ptr_00 = (void *)0x0;
    bVar2 = false;
  }
  __ptr = (void *)0x0;
  iVar9 = 10;
  iVar3 = 10;
LAB_0013a214:
  uVar6 = FUN_0013da3c(auStack_2b0);
  if ((uVar6 & 1) == 0) {
    puts("Zipper_close(&out_newZip) PATCH_CLOSEFILE_ERROR!");
    __android_log_print(6,"apk_diff_native","Zipper_close(&out_newZip) PATCH_CLOSEFILE_ERROR!\n");
    FUN_0013fb24(&DAT_0016ba72,"Zipper_close(&out_newZip)","PATCH_CLOSEFILE_ERROR");
    iVar3 = iVar9;
  }
  FUN_00138e80(&local_658);
  FUN_001398f0(local_4e0);
  uVar6 = FUN_0013ca2c(auStack_358);
  iVar9 = iVar3;
  if ((uVar6 & 1) == 0) {
    puts("UnZipper_close(&oldZip) PATCH_CLOSEFILE_ERROR!");
    __android_log_print(6,"apk_diff_native","UnZipper_close(&oldZip) PATCH_CLOSEFILE_ERROR!\n");
    FUN_0013fb24(&DAT_0016ba72,"UnZipper_close(&oldZip)","PATCH_CLOSEFILE_ERROR");
    iVar9 = 3;
    if (iVar3 != 0) {
      iVar9 = iVar3;
    }
  }
  FUN_0013b5c4(auStack_478);
  iVar5 = FUN_001356d0(&local_6b0);
  iVar3 = iVar9;
  if (iVar5 == 0) {
    puts("hpatch_TFileStreamOutput_close(&io_refFile) PATCH_CLOSEFILE_ERROR!");
    __android_log_print(6,"apk_diff_native",
                        "hpatch_TFileStreamOutput_close(&io_refFile) PATCH_CLOSEFILE_ERROR!\n");
    FUN_0013fb24(&DAT_0016ba72,"hpatch_TFileStreamOutput_close(&io_refFile)","PATCH_CLOSEFILE_ERROR"
                );
    iVar3 = 3;
    if (iVar9 != 0) {
      iVar3 = iVar9;
    }
  }
  if (bVar2) {
    FUN_00134e78(param_5);
  }
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  if (__ptr_00 != (void *)0x0) {
    free(__ptr_00);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

