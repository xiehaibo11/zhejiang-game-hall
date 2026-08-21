
/* v8::internal::Factory::NewWeakFixedArray(int, v8::internal::AllocationType) */

Isolate * v8::internal::Factory::NewWeakFixedArray(Isolate *param_1,uint param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  Isolate *pIVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
    pIVar3 = param_1 + 0x420;
  }
  else {
    uVar2 = AllocateRawArray((Factory *)param_1,param_2 * 4 + 8);
    *(undefined4 *)(uVar2 - 1) = *(undefined4 *)(param_1 + 0x2b8);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      pIVar3 = *(Isolate **)(param_1 + 0x95a0);
      if (pIVar3 == *(Isolate **)(param_1 + 0x95a8)) {
        pIVar3 = (Isolate *)HandleScope::Extend(param_1);
      }
      *(Isolate **)(param_1 + 0x95a0) = pIVar3 + 8;
      *(ulong *)pIVar3 = uVar2;
    }
    else {
      pIVar3 = (Isolate *)
               CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar2);
      uVar2 = *(ulong *)pIVar3;
    }
    *(uint *)(uVar2 + 3) = param_2 << 1;
    lVar4 = *(long *)pIVar3;
    uVar1 = *(undefined4 *)(param_1 + 0xa0);
    uVar2 = (ulong)(int)param_2;
    if (param_2 < 8) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar2 & 0xfffffffffffffff8;
      puVar8 = (undefined8 *)(lVar4 + 0x17);
      uVar9 = uVar7;
      do {
        puVar8[-1] = CONCAT44(uVar1,uVar1);
        puVar8[-2] = CONCAT44(uVar1,uVar1);
        puVar8[1] = CONCAT44(uVar1,uVar1);
        *puVar8 = CONCAT44(uVar1,uVar1);
        uVar9 = uVar9 - 8;
        puVar8 = puVar8 + 4;
      } while (uVar9 != 0);
      if (uVar7 == uVar2) {
        return pIVar3;
      }
    }
    lVar6 = uVar2 - uVar7;
    puVar5 = (undefined4 *)(lVar4 + 7 + uVar7 * 4);
    do {
      lVar6 = lVar6 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (lVar6 != 0);
  }
  return pIVar3;
}

