
long * FUN_00c1b2c4(long *param_1,long param_2,long param_3,ulong param_4,int param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  void *pvVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_3 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint *)(param_3 + 0x10);
  }
  if (param_5 < (int)(uint)param_4) {
    return param_1;
  }
  uVar6 = param_4 & 0xffffffff;
  uVar7 = -(param_4 >> 0x1f & 1) & 0xfffffff800000000 | (param_4 & 0xffffffff) << 3;
  if (*(uint *)(param_2 + 0x30) <= (uint)param_4) goto LAB_00c1b3a0;
LAB_00c1b324:
  iVar5 = (int)uVar6;
  puVar2 = (ulong *)(uVar7 + *(long *)(param_2 + 0x10));
  do {
    if (puVar2 == (ulong *)0x0) {
LAB_00c1b3b4:
      *param_1 = (long)iVar5;
      return (long *)0x0;
    }
    uVar9 = (uint)((long)*puVar2 >> 0x2f);
    iVar5 = (int)uVar6;
    if (uVar9 == 0xfffffffb) {
      pvVar3 = (void *)*param_1;
      uVar9 = *(uint *)((*puVar2 & 0x7fffffffffff) + 0x10);
      if ((uint)((int)param_1[1] - (int)pvVar3) < uVar8 + uVar9) {
        pvVar3 = (void *)FUN_00c1a4a8(param_1);
      }
      pvVar3 = memcpy(pvVar3,(void *)((*puVar2 & 0x7fffffffffff) + 0x18),(ulong)uVar9);
      pvVar3 = (void *)((long)pvVar3 + (ulong)uVar9);
    }
    else if (uVar9 == 0xfffffff2) {
      lVar4 = *param_1;
      if ((uint)((int)param_1[1] - (int)lVar4) < uVar8 + 0xb) {
        lVar4 = FUN_00c1a4a8(param_1,uVar8 + 0xb);
      }
      pvVar3 = (void *)FUN_00bff3ac(lVar4,(int)*puVar2);
    }
    else {
      if (0xfffffff1 < uVar9) goto LAB_00c1b3b4;
      puVar1 = (undefined8 *)FUN_00c030d0(*puVar2,param_1,0xf000035);
      pvVar3 = (void *)*puVar1;
      if ((uint)((int)puVar1[1] - (int)pvVar3) < uVar8) {
        pvVar3 = (void *)FUN_00c1a4a8(puVar1,uVar8);
      }
    }
    if (iVar5 == param_5) {
      *param_1 = (long)pvVar3;
      return param_1;
    }
    if (uVar8 != 0) {
      pvVar3 = memcpy(pvVar3,(void *)(param_3 + 0x18),(ulong)uVar8);
      pvVar3 = (void *)((long)pvVar3 + (ulong)uVar8);
    }
    uVar9 = *(uint *)(param_2 + 0x30);
    uVar6 = (ulong)(iVar5 + 1U);
    *param_1 = (long)pvVar3;
    uVar7 = uVar7 + 8;
    if (iVar5 + 1U < uVar9) goto LAB_00c1b324;
LAB_00c1b3a0:
    iVar5 = (int)uVar6;
    puVar2 = (ulong *)FUN_00c1bbc0(param_2,uVar6);
  } while( true );
}

