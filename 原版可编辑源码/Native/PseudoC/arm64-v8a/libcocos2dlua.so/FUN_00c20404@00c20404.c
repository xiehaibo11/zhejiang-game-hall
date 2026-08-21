
void FUN_00c20404(long *param_1,ulong *param_2)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  
  pbVar7 = (byte *)*param_1;
  if ((uint)((int)param_1[1] - (int)pbVar7) < 0xb) {
    pbVar7 = (byte *)FUN_00c1a4a8(param_1,0xb);
  }
  uVar2 = (uint)((long)*param_2 >> 0x2f);
  if (uVar2 != 0xfffffffb) {
    if (uVar2 == 0xfffffff2) {
      *pbVar7 = 3;
      pbVar6 = (byte *)thunk_FUN_00bff61c(pbVar7 + 1,(int)*param_2);
    }
    else {
      if (uVar2 < 0xfffffff2) {
        *pbVar7 = 4;
        uVar4 = thunk_FUN_00bff61c(pbVar7 + 1,(int)*param_2);
        lVar5 = thunk_FUN_00bff61c(uVar4,*(undefined4 *)((long)param_2 + 4));
        *param_1 = lVar5;
        return;
      }
      pbVar6 = pbVar7 + 1;
      *pbVar7 = ~(byte)uVar2;
    }
    *param_1 = (long)pbVar6;
    return;
  }
  uVar8 = *param_2 & 0x7fffffffffff;
  lVar5 = *param_1;
  uVar1 = *(uint *)(uVar8 + 0x10);
  uVar2 = uVar1 + 5;
  if ((uint)((int)param_1[1] - (int)lVar5) < uVar2) {
    lVar5 = FUN_00c1a4a8(param_1,uVar2);
  }
  pvVar3 = (void *)thunk_FUN_00bff61c(lVar5,uVar2);
  pvVar3 = memcpy(pvVar3,(void *)(uVar8 + 0x18),(ulong)uVar1);
  *param_1 = (long)pvVar3 + (ulong)uVar1;
  return;
}

