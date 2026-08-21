
undefined8 FUN_0013ef14(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1[0x22];
  if (lVar2 != 0) {
    param_1[0x22] = 0;
    iVar1 = (**(code **)(*param_1 + 0x18))
                      (*param_1,(ulong)*(uint *)(param_1 + 0xb) - lVar2,param_1[0x21],
                       param_1[0x21] + lVar2);
    if (iVar1 == 0) {
      FUN_0013fb24(&DAT_0016ba80,
                   "self->_stream->write(self->_stream,self->_curFilePos-curBufLen,self->_buf,self->_buf+curBufLen)"
                   ,DAT_0016ba88);
      return 0;
    }
  }
  return 1;
}

