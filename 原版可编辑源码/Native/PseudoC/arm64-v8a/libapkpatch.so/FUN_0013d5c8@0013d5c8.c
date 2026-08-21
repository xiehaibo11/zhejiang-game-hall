
undefined8
FUN_0013d5c8(long param_1,long param_2,ulong param_3,ulong param_4,long param_5,long param_6)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;
  
  if (param_3 < param_4) {
    lVar4 = *(long *)(param_1 + 0x88);
    do {
      uVar2 = param_4 - param_3;
      if (0x3fff < uVar2) {
        uVar2 = 0x4000;
      }
      iVar1 = (**(code **)(param_2 + 0x10))(param_2,param_3,lVar4,lVar4 + uVar2);
      pcVar3 = "dataStream->read(dataStream,data_begin,buf,buf+readLen)";
      if ((iVar1 == 0) ||
         (iVar1 = (**(code **)(param_5 + 0x18))(param_5,param_6,lVar4,lVar4 + uVar2),
         pcVar3 = "outStream->write(outStream,writeToPos,buf,buf+readLen)", iVar1 == 0)) {
        FUN_0013fb24(&DAT_0016ba80,pcVar3,DAT_0016ba88);
        return 0;
      }
      param_3 = uVar2 + param_3;
      param_6 = uVar2 + param_6;
    } while (param_3 < param_4);
  }
  return 1;
}

