
void spColorTimeline_setFrame
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,long param_6,int param_7)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_6 + 0x20);
  lVar1 = (long)param_7 + (long)param_7 * 4;
  puVar2 = (undefined4 *)(lVar3 + (long)(int)lVar1 * 4);
  *puVar2 = param_1;
  *(undefined4 *)(lVar3 + lVar1 * 4 + 4) = param_2;
  puVar2[2] = param_3;
  puVar2[3] = param_4;
  puVar2[4] = param_5;
  return;
}

