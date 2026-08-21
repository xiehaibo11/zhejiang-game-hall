
void FUN_01094720(undefined8 param_1,long param_2,undefined8 param_3,uint param_4,undefined8 param_5
                 ,undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  double dVar8;
  
  puVar3 = (ulong *)v8::internal::JSObject::NormalizeElements(param_2);
  uVar6 = *puVar3;
  lVar4 = (ulong)*(uint *)(param_2 + 4) << 0x20;
  uVar5 = *(ulong *)(*(long *)(lVar4 + 0x490) + 7);
  uVar5 = (uVar5 ^ (ulong)param_4 ^ 0xffffffffffffffff) + (uVar5 ^ param_4) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uVar5 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uVar2 = (*(int *)(uVar6 + 0xf) >> 1) - 1;
  uVar5 = (ulong)(uVar2 & ((uint)(uVar5 >> 0x16) ^ (uint)uVar5) & 0x3fffffff);
  uVar1 = *(uint *)(((long)(uVar5 * 0xc00000000 + 0x1000000000) >> 0x20) + uVar6 + 7);
  if (uVar1 != *(uint *)(lVar4 + 0xa0)) {
    iVar7 = 1;
    do {
      if (uVar1 != (uint)*(undefined8 *)(lVar4 + 0xa8)) {
        if ((uVar1 & 1) == 0) {
          dVar8 = (double)((int)uVar1 >> 1);
        }
        else {
          dVar8 = *(double *)((uVar6 & 0xffffffff00000000 | (ulong)uVar1) + 3);
        }
        if ((int)dVar8 == param_4) goto LAB_01094830;
      }
      uVar5 = (ulong)((int)uVar5 + iVar7 & uVar2);
      uVar1 = *(uint *)(((long)(uVar5 * 0xc00000000 + 0x1000000000) >> 0x20) + uVar6 + 7);
      iVar7 = iVar7 + 1;
    } while (uVar1 != *(uint *)(lVar4 + 0xa0));
  }
  uVar5 = 0xffffffffffffffff;
LAB_01094830:
  FUN_010842c0(param_2,puVar3,uVar5,param_5,param_6);
  return;
}

