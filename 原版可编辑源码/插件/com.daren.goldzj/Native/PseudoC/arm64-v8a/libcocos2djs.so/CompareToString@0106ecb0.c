
/* v8::internal::BigInt::CompareToString(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BigInt>, v8::internal::Handle<v8::internal::String>) */

uint v8::internal::BigInt::CompareToString(undefined8 param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  
  plVar4 = (long *)StringToBigInt(param_1,param_3);
  if (plVar4 == (long *)0x0) {
    return 3;
  }
  lVar5 = *param_2;
  lVar6 = *plVar4;
  uVar3 = *(uint *)(lVar5 + 3) & 1;
  if (uVar3 == (*(uint *)(lVar6 + 3) & 1)) {
    uVar1 = *(uint *)(lVar5 + 3) >> 1 & 0x3fffffff;
    uVar2 = *(uint *)(lVar6 + 3) >> 1 & 0x3fffffff;
    iVar8 = uVar1 - uVar2;
    if (uVar1 == uVar2) {
      lVar7 = ((ulong)(*(uint *)(lVar5 + 3) >> 1) & 0x3fffffff) + 1;
      iVar8 = (*(uint *)(lVar5 + 3) >> 1) * 8 + -1;
      do {
        lVar7 = lVar7 + -1;
        if (lVar7 < 1) {
          return 1;
        }
        uVar10 = *(ulong *)(lVar5 + iVar8);
        uVar9 = *(ulong *)(lVar6 + iVar8);
        iVar8 = iVar8 + -8;
      } while (uVar10 == uVar9);
      if (uVar9 < uVar10) goto LAB_0106ed5c;
    }
    else {
      if (0 < iVar8) goto LAB_0106ed5c;
      if (-1 < iVar8) {
        return 1;
      }
    }
    uVar3 = uVar3 << 1;
  }
  else {
LAB_0106ed5c:
    uVar3 = uVar3 << 1 ^ 2;
  }
  return uVar3;
}

