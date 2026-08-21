
int FUN_0013a8b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined4 param_6)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  __android_log_print(3,"apk_diff_native","invoke ZipPatch by VirtualZipPatch");
  __android_log_print(3,"apk_diff_native","start invoke VirtualZipPatch-L225");
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  __android_log_print(3,"apk_diff_native","hpatch_TFileStreamInput_init: the  [fileError] is  : %s",
                      "false");
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  __android_log_print(3,"apk_diff_native","hpatch_TFileStreamInput_init: the  [fileError] is  : %s",
                      "false");
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  __android_log_print(3,"apk_diff_native",
                      "start  hpatch_TFileStreamInput_open----oldZipStream---step 1");
  iVar2 = FUN_001352bc(&local_b0,param_1);
  if (iVar2 == 0) {
    puts("openReadOldZipResult PATCH_OPENREAD_OLD_APK_ERROR!");
    __android_log_print(6,"apk_diff_native","openReadOldZipResult PATCH_OPENREAD_OLD_APK_ERROR!\n");
    FUN_0013fb24(&DAT_0016ba72,"openReadOldZipResult","PATCH_OPENREAD_OLD_APK_ERROR");
    iVar2 = 0xe;
  }
  else {
    __android_log_print(3,"apk_diff_native","openReadOldZipResult : %s "," success");
    __android_log_print(3,"apk_diff_native",
                        "start  hpatch_TFileStreamInput_open----zipDiffStream---step 2");
    iVar2 = FUN_001352bc(&local_f0,param_2);
    if (iVar2 == 0) {
      puts("openReadZipDiffResult PATCH_OPENREAD_DIFF_FILE_ERROR!");
      __android_log_print(6,"apk_diff_native",
                          "openReadZipDiffResult PATCH_OPENREAD_DIFF_FILE_ERROR!\n");
      FUN_0013fb24(&DAT_0016ba72,"openReadZipDiffResult","PATCH_OPENREAD_DIFF_FILE_ERROR");
      iVar2 = 0xf;
    }
    else {
      __android_log_print(3,"apk_diff_native","openReadZipDiffResult : %s "," success");
      __android_log_print(3,"apk_diff_native",
                          "start  hpatch_TFileStreamOutput_open-------------------step 3");
      iVar2 = FUN_0013548c(&local_140,param_3,0xffffffffffffffff);
      if (iVar2 == 0) {
        puts(
            "hpatch_TFileStreamOutput_open(&outNewZipStream,outNewZipPath,(hpatch_StreamPos_t)(-1)) PATCH_OPENWRITE_ERROR!"
            );
        __android_log_print(6,"apk_diff_native",
                            "hpatch_TFileStreamOutput_open(&outNewZipStream,outNewZipPath,(hpatch_StreamPos_t)(-1)) PATCH_OPENWRITE_ERROR!\n"
                           );
        FUN_0013fb24(&DAT_0016ba72,
                     "hpatch_TFileStreamOutput_open(&outNewZipStream,outNewZipPath,(hpatch_StreamPos_t)(-1))"
                     ,"PATCH_OPENWRITE_ERROR");
        iVar2 = 2;
      }
      else {
        uStack_108 = CONCAT44(1,(undefined4)uStack_108);
        __android_log_print(3,"apk_diff_native",
                            "start  VirtualZipPatchWithStream-----------------------step 4");
        iVar2 = FUN_00139ddc(&local_b0,&local_f0,&local_140,param_4,param_5,param_6);
      }
    }
  }
  iVar3 = FUN_001356d0(&local_140);
  iVar4 = iVar2;
  if (iVar3 == 0) {
    puts("hpatch_TFileStreamOutput_close(&outNewZipStream) PATCH_CLOSEFILE_ERROR!");
    __android_log_print(6,"apk_diff_native",
                        "hpatch_TFileStreamOutput_close(&outNewZipStream) PATCH_CLOSEFILE_ERROR!\n")
    ;
    FUN_0013fb24(&DAT_0016ba72,"hpatch_TFileStreamOutput_close(&outNewZipStream)",
                 "PATCH_CLOSEFILE_ERROR");
    iVar4 = 3;
    if (iVar2 != 0) {
      iVar4 = iVar2;
    }
  }
  iVar3 = FUN_00135458(&local_b0);
  iVar2 = iVar4;
  if (iVar3 == 0) {
    puts("hpatch_TFileStreamInput_close(&oldZipStream) PATCH_CLOSEFILE_ERROR!");
    __android_log_print(6,"apk_diff_native",
                        "hpatch_TFileStreamInput_close(&oldZipStream) PATCH_CLOSEFILE_ERROR!\n");
    FUN_0013fb24(&DAT_0016ba72,"hpatch_TFileStreamInput_close(&oldZipStream)",
                 "PATCH_CLOSEFILE_ERROR");
    iVar2 = 3;
    if (iVar4 != 0) {
      iVar2 = iVar4;
    }
  }
  iVar3 = FUN_00135458(&local_f0);
  iVar4 = iVar2;
  if (iVar3 == 0) {
    puts("hpatch_TFileStreamInput_close(&zipDiffStream) PATCH_CLOSEFILE_ERROR!");
    __android_log_print(6,"apk_diff_native",
                        "hpatch_TFileStreamInput_close(&zipDiffStream) PATCH_CLOSEFILE_ERROR!\n");
    FUN_0013fb24(&DAT_0016ba72,"hpatch_TFileStreamInput_close(&zipDiffStream)",
                 "PATCH_CLOSEFILE_ERROR");
    iVar4 = 3;
    if (iVar2 != 0) {
      iVar4 = iVar2;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}

