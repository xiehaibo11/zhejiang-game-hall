
undefined8 FUN_00e74238(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    if (*(uint *)(lVar1 + 8) <
        (uint)(*(short *)(lVar1 + 0x1a) + param_2 + (int)*(short *)(lVar1 + 0x62))) {
      uVar2 = FUN_00e13cd0(lVar1,param_2,0);
      return uVar2;
    }
  }
  return 0;
}

