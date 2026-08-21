
undefined8 FUN_00aa26a8(long param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00ab3f44(param_1,0x12,0,param_2);
  if (iVar1 < 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x303) != '\0') {
    if (*(long *)(param_1 + 0x218) < (long)(ulong)param_2) {
      *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x40;
      if (*(char *)(param_1 + 0x2fe) == '\'') {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x228) + 0x188) + 8))
                  (param_1,1,*(undefined8 *)(param_1 + 0x270),"Timed out waiting SSL",0x15);
      }
      FUN_00a9f034(param_1,0);
      return 1;
    }
    return 0;
  }
  return 0;
}

