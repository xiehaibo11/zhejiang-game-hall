
undefined1  [16] FUN_01166104(undefined4 *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_50 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  
  if ((((*(long *)(param_2 + 0x60) == 0) || (*(long *)(param_2 + 0x60) != *(long *)(param_1 + 6)))
      && ((*(ulong *)(param_2 + 0x68) & *(ulong *)(param_1 + 8) >> 0x20) != 0)) &&
     (((*(ulong *)(param_1 + 8) & *(ulong *)(param_2 + 0x68) >> 0x20) != 0 &&
      (cVar1 = cpShapeSegmentQuery(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_2,
                                   auStack_50), cVar1 != '\0')))) {
    (**(code **)(param_1 + 10))(local_48,uStack_44,local_40,local_3c,uStack_38,param_2,param_3);
  }
  return ZEXT816(0x3f800000);
}

