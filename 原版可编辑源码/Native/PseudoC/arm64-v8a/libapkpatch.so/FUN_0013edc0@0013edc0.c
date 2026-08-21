
void FUN_0013edc0(long *param_1,int param_2,int param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((int)param_1[0xc] <= param_2) {
    pcVar4 = "curFileIndex<self->_fileEntryCount";
    goto LAB_0013eeb0;
  }
  if (*(int *)(param_1[0x11] + (long)param_2 * 4) != param_3) {
    *(int *)(param_1[0x11] + (long)param_2 * 4) = param_3;
    iVar2 = *(int *)(param_1[0x10] + (long)param_2 * 4);
    uVar6 = (ulong)(iVar2 + 0x12);
    uVar5 = (ulong)*(uint *)(param_1 + 0xb) - param_1[0x22];
    if (uVar6 < uVar5) {
      local_3c = param_3;
      if ((uVar5 < iVar2 + 0x16) && (uVar5 = FUN_0013ef14(param_1), (uVar5 & 1) == 0)) {
        pcVar4 = "_writeFlush(self)";
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x18))(*param_1,uVar6,&local_3c,&local_38);
        if (iVar2 != 0) goto LAB_0013eecc;
        FUN_0013fb24(&DAT_0016ba80,"self->_stream->write(self->_stream,backPos,data,data+len)",
                     DAT_0016ba88);
        pcVar4 = "_writeBack(self,compressedSizeOffset,buf,4)";
      }
LAB_0013eeb0:
      FUN_0013fb24(&DAT_0016ba80,pcVar4,DAT_0016ba88);
      uVar3 = 0;
      goto LAB_0013eed0;
    }
    *(int *)((param_1[0x21] + uVar6) - uVar5) = param_3;
  }
LAB_0013eecc:
  uVar3 = 1;
LAB_0013eed0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

