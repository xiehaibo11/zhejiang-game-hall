
void jpeg_new_colormap(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  iVar1 = *(int *)((long)param_1 + 0x24);
  lVar4 = param_1[0x48];
  if (iVar1 != 0xcf) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x15;
    *(int *)((long)puVar3 + 0x2c) = iVar1;
    (*(code *)*puVar3)(param_1);
  }
  if (((*(int *)((long)param_1 + 0x6c) != 0) && ((int)param_1[0x10] != 0)) && (param_1[0x14] != 0))
  {
    lVar2 = *(long *)(lVar4 + 0x28);
    param_1[0x52] = lVar2;
    (**(code **)(lVar2 + 0x18))(param_1);
    *(undefined4 *)(lVar4 + 0x10) = 0;
    return;
  }
  puVar3 = (undefined8 *)*param_1;
  *(undefined4 *)(puVar3 + 5) = 0x2f;
                    /* WARNING: Could not recover jumptable at 0x00d8f354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(param_1);
  return;
}

