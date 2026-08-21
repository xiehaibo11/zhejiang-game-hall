
void spShearTimeline_setFrame
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,int param_5)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_4 + 0x20);
  lVar1 = (long)param_5 + (long)param_5 * 2;
  puVar2 = (undefined4 *)(lVar3 + (long)(int)lVar1 * 4);
  *puVar2 = param_1;
  *(undefined4 *)(lVar3 + lVar1 * 4 + 4) = param_2;
  puVar2[2] = param_3;
  return;
}

