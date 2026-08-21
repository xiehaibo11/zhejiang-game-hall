
void FUN_0013c820(long param_1,int param_2,uint param_3,int *param_4,int *param_5)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  int local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  *param_4 = 0;
  *param_5 = 0;
  if (param_3 == 0) {
    uVar4 = 1;
  }
  else {
    do {
      if (param_3 < 0xc) {
        pcVar5 = "8+4<=sumNodeSize";
LAB_0013c990:
        FUN_0013fb24(&DAT_0016ba80,pcVar5,DAT_0016ba88);
        uVar4 = 0;
        goto LAB_0013c9ac;
      }
      iVar3 = (**(code **)(param_1 + 0x10))(param_1,param_2,&local_70,&local_68);
      iVar1 = local_70;
      if (iVar3 == 0) {
        pcVar5 = "stream->read(stream,nodePos,buf,buf+8)";
        goto LAB_0013c990;
      }
      if (CONCAT44(uStack_6c,local_70) < 4) {
        pcVar5 = "4<=nodeSize";
        goto LAB_0013c990;
      }
      if ((ulong)param_3 < CONCAT44(uStack_6c,local_70) + 8) {
        pcVar5 = "8+nodeSize<=sumNodeSize";
        goto LAB_0013c990;
      }
      iVar3 = (**(code **)(param_1 + 0x10))(param_1,param_2 + 8,&local_70,&uStack_6c);
      if (iVar3 == 0) {
        pcVar5 = "stream->read(stream,nodePos+8,buf,buf+4)";
        goto LAB_0013c990;
      }
      if (local_70 == -0xfac9740) {
        *param_4 = param_2 + 8;
        *param_5 = iVar1;
        break;
      }
      iVar1 = iVar1 + 8;
      param_3 = param_3 - iVar1;
      param_2 = iVar1 + param_2;
    } while (param_3 != 0);
    uVar4 = 1;
  }
LAB_0013c9ac:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

