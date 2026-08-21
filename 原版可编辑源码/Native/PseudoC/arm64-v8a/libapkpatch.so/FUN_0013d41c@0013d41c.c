
uint FUN_0013d41c(long *param_1,byte param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  undefined4 local_54;
  uint local_50;
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_4c = 0;
  local_50 = 0;
  lVar6 = *(long *)(*param_1 + 8);
  uVar3 = FUN_0013ce68(param_1,&local_4c);
  if ((uVar3 & 1) == 0) {
    pcVar4 = "_UnZipper_searchEndCentralDirectory(self,&endCentralDirectory_pos)";
  }
  else {
    uVar5 = lVar6 - param_3;
    uVar3 = FUN_0013c5e0(*param_1,uVar5 & 0xffffffff,&local_50,0,(long)param_1 + 0x82);
    if ((uVar3 & 1) != 0) {
      lVar6 = param_1[0x13] + (ulong)local_50;
      param_1[0x12] = lVar6;
      local_54 = 0;
      param_1[9] = lVar6 + (ulong)(local_4c - local_50);
      param_1[10] = lVar6 + (ulong)((int)uVar5 - local_50);
      *(byte *)(param_1 + 0x10) = param_2 & 1;
      uVar2 = FUN_0013d050(param_1,1,&local_54);
      if ((uVar2 & 1) == 0) {
        FUN_0013fb24(&DAT_0016ba80,
                     "_UnZipper_vce_normalized(self,isFileDataOffsetMatch,&fileDataEndPos)",
                     DAT_0016ba88);
      }
      goto LAB_0013d530;
    }
    pcVar4 = 
    "UnZipper_searchApkV2Sign(self->stream,centralDirectory_pos,&v2sign_topPos,0,&self->_isHaveV3Sign)"
    ;
  }
  FUN_0013fb24(&DAT_0016ba80,pcVar4,DAT_0016ba88);
  uVar2 = 0;
LAB_0013d530:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

