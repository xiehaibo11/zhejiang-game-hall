
void FUN_0013c5e0(long param_1,ulong param_2,int *param_3,int *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int local_80;
  undefined1 auStack_7c [4];
  long local_78;
  long lStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  iVar7 = (int)param_2;
  *param_3 = iVar7;
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  if (param_2 < 0x10) goto LAB_0013c68c;
  iVar3 = (**(code **)(param_1 + 0x10))(param_1,iVar7 + -0x10,&local_78,&local_68);
  if (iVar3 == 0) {
    pcVar6 = "stream->read(stream,APKSigningBlockTagPos,buf,buf+APKSigningTagLen)";
    goto LAB_0013c7e4;
  }
  if (local_78 != 0x20676953204b5041 || lStack_70 != 0x3234206b636f6c42) goto LAB_0013c68c;
  if (iVar7 - 0x10U < 8) {
    pcVar6 = "8<=APKSigningBlockTagPos";
LAB_0013c7e4:
    FUN_0013fb24(&DAT_0016ba80,pcVar6,DAT_0016ba88);
  }
  else {
    iVar3 = (**(code **)(param_1 + 0x10))(param_1,iVar7 + -0x18,&local_78,&lStack_70);
    lVar2 = local_78;
    if (iVar3 == 0) {
      pcVar6 = "stream->read(stream,blockSizeBottomPos,buf,buf+8)";
      goto LAB_0013c7e4;
    }
    if (param_2 < local_78 + 8U) {
      pcVar6 = "blockSize+8<=centralDirectory_pos";
      goto LAB_0013c7e4;
    }
    iVar8 = (int)local_78;
    iVar7 = iVar7 - iVar8;
    iVar3 = (**(code **)(param_1 + 0x10))(param_1,iVar7 + -8,&local_78,&lStack_70);
    if (iVar3 == 0) {
      pcVar6 = "stream->read(stream,blockTopSizePos,buf,buf+8)";
      goto LAB_0013c7e4;
    }
    if (lVar2 != local_78) {
      pcVar6 = "blockSize==readUInt64(buf)";
      goto LAB_0013c7e4;
    }
    *param_3 = iVar7 + -8;
    if (param_4 != (int *)0x0) {
      *param_4 = iVar8;
    }
    if (param_5 == 0) {
LAB_0013c68c:
      uVar4 = 1;
      goto LAB_0013c7ec;
    }
    uVar5 = FUN_0013c820(param_1,iVar7,iVar8 + -0x18,auStack_7c,&local_80);
    if ((uVar5 & 1) != 0) {
      *(bool *)param_5 = local_80 != 0;
      goto LAB_0013c68c;
    }
  }
  uVar4 = 0;
LAB_0013c7ec:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

