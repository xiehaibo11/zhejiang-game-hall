
/* v8::internal::JSFunction::SetPrototype(v8::internal::Handle<v8::internal::JSFunction>,
   v8::internal::Handle<v8::internal::Object>) */

void v8::internal::JSFunction::SetPrototype(ulong *param_1,ulong *param_2)

{
  Isolate *pIVar1;
  uint uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong *puVar6;
  Isolate *pIVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  Isolate *pIVar11;
  uint *puVar12;
  ulong local_58;
  
  uVar8 = *param_1;
  uVar10 = *param_2;
  pIVar11 = (Isolate *)(uVar8 & 0xffffffff00000000);
  if (((uVar10 & 1) == 0) ||
     (*(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) < 0xa9)) {
    pIVar7 = pIVar11 + 0x95b8;
    uVar8 = (ulong)pIVar11 | (ulong)*(uint *)(uVar8 - 1);
    if (*(CanonicalHandleScope **)pIVar7 == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar11 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar11 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar11);
      }
      *(ulong **)(pIVar11 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar8;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar7,uVar8);
    }
    puVar3 = (ulong *)Map::Copy(pIVar11,puVar3,"SetPrototype");
    JSObject::MigrateToMap(pIVar11,param_1,puVar3,0);
    uVar10 = *puVar3;
    uVar8 = *param_2;
    puVar12 = (uint *)(uVar10 + 0x13);
    if (((*puVar12 & 1) != 0) &&
       (*(short *)((uVar10 & 0xffffffff00000000 | 7) +
                  (ulong)*(uint *)((uVar10 & 0xffffffff00000000 | (ulong)*puVar12) - 1)) == 0xa2)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!constructor_or_backpointer().IsMap()");
    }
    *puVar12 = (uint)uVar8;
    if ((uVar8 & 1) != 0) {
      uVar9 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar9 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar10,puVar12,uVar8);
        uVar9 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar10,puVar12,uVar8);
      }
    }
    *(byte *)(*puVar3 + 9) = *(byte *)(*puVar3 + 9) | 1;
    uVar8 = *param_1;
    uVar10 = uVar8 & 0xffffffff00000000;
    uVar2 = *(uint *)((uVar10 | *(uint *)(uVar8 + 0xb)) + 0x1b) & 0x1f;
    uVar10 = uVar10 | *(uint *)((uVar10 | *(uint *)((uVar10 | *(uint *)(uVar8 + 0xf)) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)pIVar7 == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar11 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar11 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar11);
      }
      *(ulong **)(pIVar11 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar10;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar7,uVar10);
    }
    if ((uVar2 - 0xd & 0xff) < 4) {
      uVar10 = *puVar3;
      uVar8 = uVar10 & 0xffffffff00000000;
      if ((uVar2 - 10 & 0xff) < 5) {
        puVar12 = (uint *)(uVar10 + 0xf3);
      }
      else {
        puVar12 = (uint *)(uVar10 + 0xef);
      }
    }
    else {
      uVar8 = *puVar3 & 0xffffffff00000000;
      puVar12 = (uint *)(*puVar3 + 0x103);
    }
    uVar2 = *puVar12;
    if (*(CanonicalHandleScope **)pIVar7 == (CanonicalHandleScope *)0x0) {
      param_2 = *(ulong **)(pIVar11 + 0x95a0);
      if (param_2 == *(ulong **)(pIVar11 + 0x95a8)) {
        param_2 = (ulong *)HandleScope::Extend(pIVar11);
      }
      *(ulong **)(pIVar11 + 0x95a0) = param_2 + 1;
      *param_2 = uVar8 | uVar2;
    }
    else {
      param_2 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)pIVar7,uVar8 | uVar2);
    }
  }
  else {
    uVar8 = (ulong)pIVar11 | (ulong)*(uint *)(uVar8 - 1);
    *(byte *)(uVar8 + 9) = *(byte *)(uVar8 + 9) & 0xfe;
  }
  uVar10 = *param_1;
  puVar12 = (uint *)(uVar10 + 0x1b);
  uVar8 = (ulong)*puVar12;
  pIVar7 = (Isolate *)(uVar10 & 0xffffffff00000000);
  if (*(short *)(((ulong)pIVar7 | 7) + (ulong)*(uint *)(pIVar7 + (uVar8 - 1))) != 0xa2) {
    uVar8 = *param_2;
    *puVar12 = (uint)uVar8;
    if ((uVar8 & 1) != 0) {
      uVar9 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar9 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar10,puVar12,uVar8);
        uVar9 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar10,puVar12,uVar8);
      }
    }
    if (*(ushort *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1)) < 0xaa) {
      return;
    }
    JSObject::OptimizeAsPrototype(param_2,1);
    return;
  }
  if (((*(char *)(((ulong)pIVar7 | 9) + (ulong)*(uint *)(uVar10 - 1)) < '\0') &&
      (*(short *)(((ulong)pIVar7 | 7) + (ulong)*(uint *)(pIVar7 + (uVar8 - 1))) == 0xa2)) &&
     (*(uint *)(((ulong)pIVar7 | uVar8) + 0xb) >> 0x1d != 0)) {
    local_58 = (ulong)pIVar7 | uVar8;
    Map::CompleteInobjectSlackTracking((Map *)&local_58,pIVar7);
    uVar8 = (ulong)*(uint *)(*param_1 + 0x1b);
    pIVar7 = (Isolate *)(*param_1 & 0xffffffff00000000);
  }
  pIVar1 = pIVar11 + 0x95b8;
  if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar11 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar11 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(pIVar11);
    }
    *(ulong **)(pIVar11 + 0x95a0) = puVar3 + 1;
    *puVar3 = (ulong)pIVar7 | uVar8;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)pIVar1,(ulong)pIVar7 | uVar8);
  }
  if ((*(int *)(*(long *)(pIVar11 + 0x9508) + 8) == 0) && (*(short *)(*puVar3 + 7) == 0x421)) {
    uVar10 = *param_1;
    uVar8 = *param_2;
    *(int *)(uVar10 + 0x1b) = (int)uVar8;
    if ((uVar8 & 1) != 0) {
      uVar9 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar9 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar10,uVar10 + 0x1b,uVar8);
        uVar9 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar10,uVar10 + 0x1b,uVar8);
      }
    }
  }
  else {
    uVar4 = Map::Copy(pIVar11,puVar3,"SetInstancePrototype");
    SetInitialMap(param_1,uVar4,param_2);
    uVar8 = *param_1 & 0xffffffff00000000;
    uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)((uVar8 | *(uint *)(*param_1 + 0xf)) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar11 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar11 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar11);
      }
      *(ulong **)(pIVar11 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar8;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar1,uVar8);
      uVar8 = *puVar5;
    }
    uVar2 = *(uint *)(uVar8 + 0x2f);
    uVar8 = uVar8 & 0xffffffff00000000 | (ulong)uVar2;
    if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(pIVar11 + 0x95a0);
      if (puVar6 == *(ulong **)(pIVar11 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(pIVar11);
      }
      *(ulong **)(pIVar11 + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar8;
      if ((uVar2 & 1) == 0) goto LAB_010da980;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar1,uVar8);
      uVar8 = *puVar6;
      if ((uVar8 & 1) == 0) goto LAB_010da980;
    }
    if ((*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x439) &&
       ((int)*param_1 == (int)uVar8)) {
      CacheInitialJSArrayMaps(pIVar11,puVar5,uVar4);
    }
  }
LAB_010da980:
  local_58 = *puVar3 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar3 + 0x1b);
  DependentCode::DeoptimizeDependentCodeGroup(&local_58,pIVar11,4);
  return;
}

