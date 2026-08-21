
undefined8 FUN_0013e3d8(long *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = param_1[0x22];
  if ((param_3 << 1 < 0x4001 || lVar5 != 0) && (lVar5 + param_3 < 0x4001)) {
    memcpy((void *)(param_1[0x21] + lVar5),param_2,param_3);
    param_1[0x22] = lVar5 + param_3;
LAB_0013e468:
    uVar3 = 1;
    *(int *)(param_1 + 0xb) = (int)param_1[0xb] + (int)param_3;
  }
  else {
    lVar6 = 0;
    if (lVar5 == 0) {
LAB_0013e448:
      iVar1 = (**(code **)(*param_1 + 0x18))
                        (*param_1,(ulong)*(uint *)(param_1 + 0xb) - lVar6,param_2,
                         (long)param_2 + param_3);
      if (iVar1 != 0) goto LAB_0013e468;
      pcVar4 = 
      "self->_stream->write(self->_stream,self->_curFilePos-self->_curBufLen,data,data+len)";
    }
    else {
      uVar2 = FUN_0013ef14(param_1);
      if ((uVar2 & 1) != 0) {
        lVar6 = param_1[0x22];
        goto LAB_0013e448;
      }
      pcVar4 = "_writeFlush(self)";
    }
    FUN_0013fb24(&DAT_0016ba80,pcVar4,DAT_0016ba88);
    uVar3 = 0;
  }
  return uVar3;
}

