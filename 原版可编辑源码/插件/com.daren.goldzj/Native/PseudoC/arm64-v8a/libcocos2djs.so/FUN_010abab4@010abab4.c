
void FUN_010abab4(undefined8 param_1,ulong *param_2,undefined8 param_3,uint param_4,
                 undefined8 param_5,undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  double dVar8;
  
  uVar1 = *(uint *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb)) + 7);
  if (param_4 < uVar1) {
    return;
  }
  puVar3 = (ulong *)v8::internal::JSObject::NormalizeElements(param_2);
  uVar5 = *puVar3;
  param_4 = param_4 - uVar1;
  lVar4 = (ulong)*(uint *)((long)param_2 + 4) << 0x20;
  uVar7 = *(ulong *)(*(long *)(lVar4 + 0x490) + 7);
  uVar2 = (*(int *)(uVar5 + 0xf) >> 1) - 1;
  uVar7 = (uVar7 ^ (ulong)param_4 ^ 0xffffffffffffffff) + (uVar7 ^ param_4) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uVar7 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uVar7 = (ulong)(uVar2 & ((uint)(uVar7 >> 0x16) ^ (uint)uVar7) & 0x3fffffff);
  uVar1 = *(uint *)(((long)(uVar7 * 0xc00000000 + 0x1000000000) >> 0x20) + uVar5 + 7);
  if (uVar1 != *(uint *)(lVar4 + 0xa0)) {
    iVar6 = 1;
    do {
      if (uVar1 != (uint)*(undefined8 *)(lVar4 + 0xa8)) {
        if ((uVar1 & 1) == 0) {
          dVar8 = (double)((int)uVar1 >> 1);
        }
        else {
          dVar8 = *(double *)((uVar5 & 0xffffffff00000000 | (ulong)uVar1) + 3);
        }
        if (param_4 == (int)dVar8) goto LAB_010abbf8;
      }
      uVar7 = (ulong)((int)uVar7 + iVar6 & uVar2);
      uVar1 = *(uint *)(((long)(uVar7 * 0xc00000000 + 0x1000000000) >> 0x20) + uVar5 + 7);
      iVar6 = iVar6 + 1;
    } while (uVar1 != *(uint *)(lVar4 + 0xa0));
  }
  uVar7 = 0xffffffffffffffff;
LAB_010abbf8:
  FUN_010842c0(param_2,puVar3,uVar7,param_5,param_6);
  return;
}

