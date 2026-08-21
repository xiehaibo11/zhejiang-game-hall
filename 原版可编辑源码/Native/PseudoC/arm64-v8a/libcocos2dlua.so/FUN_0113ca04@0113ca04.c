
undefined8 FUN_0113ca04(long param_1,int param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint *puVar3;
  ushort *puVar4;
  long local_30;
  long lStack_28;
  long local_20;
  long lStack_18;
  
  puVar3 = *(uint **)(param_1 + 0x350);
  if (param_2 == 0x13d) {
    iVar1 = (int)param_3[3];
    if ((iVar1 < 0) && (*(int *)(param_3 + 3) = iVar1 + 8, iVar1 + 8 < 1)) {
                    /* try { // try from 0113ca94 to 0123cb03 has its CatchHandler @ 0113ca28 */
      puVar4 = (ushort *)(param_3[1] + (long)iVar1);
    }
    else {
                    /* catch() { ... } // from try @ 0113ca94 with catch @ 0113ca28 */
      puVar4 = (ushort *)*param_3;
      *param_3 = (long)(puVar4 + 4);
    }
    *puVar3 = (uint)*puVar4;
    *(ulong *)(param_1 + 0x48) = *(ulong *)(param_1 + 0x48) | 4;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
    return 1;
  }
  lStack_18 = param_3[3];
  local_20 = param_3[2];
  lStack_28 = param_3[1];
  local_30 = *param_3;
  uVar2 = (**(code **)(puVar3 + 0x18))(param_1,param_2,&local_30);
                    /* try { // try from 0113ca88 to 0123ca93 has its CatchHandler @ 0113cafc */
  return uVar2;
}

