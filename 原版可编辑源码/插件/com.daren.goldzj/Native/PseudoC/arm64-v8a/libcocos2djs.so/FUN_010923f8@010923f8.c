
uint FUN_010923f8(ulong *param_1,ulong *param_2,long param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  Factory *this;
  ulong *puVar3;
  ulong uVar4;
  int iVar5;
  double *pdVar6;
  ulong uVar7;
  ulong uVar8;
  double dVar9;
  
  iVar5 = *(int *)(*param_1 + 0xb) >> 1;
  uVar1 = iVar5 + param_4;
  this = (Factory *)(*param_1 & 0xffffffff00000000);
  if ((uint)(*(int *)(*param_2 + 3) >> 1) < uVar1) {
    iVar2 = param_4;
    if (param_5 != 0) {
      iVar2 = 0;
    }
    puVar3 = (ulong *)v8::internal::Factory::NewFixedDoubleArray(this,uVar1 + (uVar1 >> 1) + 0x10);
    FUN_0108f6a8(*param_2,0,*puVar3,iVar2,0xffffffff);
    uVar8 = *param_1;
    uVar7 = *puVar3;
    *(int *)(uVar8 + 7) = (int)uVar7;
    param_2 = puVar3;
    if ((uVar7 & 1) != 0) {
      uVar4 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar4 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar8,uVar8 + 7,uVar7);
        uVar4 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar8,uVar8 + 7,uVar7);
      }
    }
  }
  else if (param_5 == 0) {
    FUN_010925b0(this,param_1,param_2,param_4,0,iVar5);
  }
  iVar2 = 0;
  if (param_5 != 0) {
    iVar2 = iVar5;
  }
  if (param_4 != 0) {
    uVar7 = *param_2;
    iVar5 = 7;
    do {
      uVar8 = *(ulong *)(*(long *)(param_3 + 8) - (long)(iVar5 + 1));
      if ((uVar8 & 1) == 0) {
        dVar9 = (double)((int)uVar8 >> 1);
        pdVar6 = (double *)(uVar7 + (long)(iVar2 * 8 + iVar5));
LAB_01092564:
        *pdVar6 = dVar9;
      }
      else {
        dVar9 = *(double *)(uVar8 + 3);
        pdVar6 = (double *)(uVar7 + (long)(iVar2 * 8 + iVar5));
        if (!NAN(dVar9)) goto LAB_01092564;
        *pdVar6 = NAN;
      }
      param_4 = param_4 + -1;
      iVar5 = iVar5 + 8;
    } while (param_4 != 0);
  }
  *(uint *)(*param_1 + 0xb) = uVar1 * 2;
  return uVar1;
}

