
void spIkConstraintTimeline_setFrame
               (undefined4 param_1,undefined4 param_2,long param_3,int param_4,int param_5)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_3 + 0x20);
  lVar1 = (long)param_4 + (long)param_4 * 2;
  puVar2 = (undefined4 *)(lVar3 + (long)(int)lVar1 * 4);
  *puVar2 = param_1;
  *(undefined4 *)(lVar3 + lVar1 * 4 + 4) = param_2;
  puVar2[2] = (float)param_5;
  return;
}

