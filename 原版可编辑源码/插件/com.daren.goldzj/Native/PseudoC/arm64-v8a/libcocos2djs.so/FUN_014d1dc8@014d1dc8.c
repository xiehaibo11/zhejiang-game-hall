
undefined8 FUN_014d1dc8(int param_1,long param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  Isolate *pIVar10;
  
  pIVar1 = param_3 + 0x95a0;
  pIVar10 = param_3 + 0xa0;
  pIVar4 = (Isolate *)(param_2 + -8);
  if (param_1 < 6) {
    pIVar4 = pIVar10;
  }
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *(ulong *)pIVar4;
  lVar2 = *(long *)pIVar1;
  lVar3 = *(long *)(param_3 + 0x95a8);
  if (((uVar6 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)))) {
    pIVar4 = (Isolate *)v8::internal::Object::ConvertToString(param_3,pIVar4);
  }
  if (pIVar4 == (Isolate *)0x0) {
    pIVar10 = param_3 + 0x180;
  }
  else {
    uVar6 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
    uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(param_3 + 0x2bc8) - 1
                                                                   )) + 0x13)) + 0x247);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pIVar1;
      if (puVar5 == *(ulong **)(param_3 + 0x95a8)) {
        puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar5 + 1;
      *puVar5 = uVar6;
    }
    else {
      puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar6);
      uVar6 = *puVar5;
    }
    uVar8 = *(ulong *)pIVar4;
    *(int *)(uVar6 + 0xf) = (int)uVar8;
    if ((uVar8 & 1) != 0) {
      uVar7 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar7 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar6,uVar6 + 0xf,uVar8);
        uVar7 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0xf,uVar8);
      }
    }
  }
  uVar9 = *(undefined8 *)pIVar10;
  *(long *)pIVar1 = lVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar9;
}

