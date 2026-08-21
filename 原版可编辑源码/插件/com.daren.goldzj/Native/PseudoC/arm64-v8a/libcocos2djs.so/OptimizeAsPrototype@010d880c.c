
/* v8::internal::JSObject::OptimizeAsPrototype(v8::internal::Handle<v8::internal::JSObject>, bool)
    */

void v8::internal::JSObject::OptimizeAsPrototype(ulong *param_1,ulong param_2)

{
  uint uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  Isolate *pIVar8;
  ulong uVar9;
  ulong uVar10;
  Isolate *pIVar11;
  ulong uVar12;
  
  uVar4 = *param_1;
  pIVar11 = (Isolate *)(uVar4 & 0xffffffff00000000);
  uVar7 = (ulong)pIVar11 | 7;
  if (*(short *)(uVar7 + *(uint *)(uVar4 - 1)) != 0xaa) {
    puVar5 = (uint *)(uVar4 - 1);
    pIVar8 = pIVar11;
    if ((((((param_2 & 1) != 0) &&
          ((*(uint *)(((ulong)pIVar11 | 0xb) + (ulong)*puVar5) >> 0x15 & 1) == 0)) &&
         (*(short *)(uVar7 + *puVar5) != 0xab)) && (*(int *)(*(long *)(pIVar11 + 0x9508) + 8) == 0))
       && ((((*(uint *)(((ulong)pIVar11 | (ulong)*puVar5) + 0xb) >> 0x14 & 1) == 0 ||
            (uVar1 = *(uint *)(((ulong)pIVar11 | (ulong)*puVar5) + 0x23), (uVar1 & 1) == 0)) ||
           ((uVar4 = (ulong)pIVar11 | (ulong)uVar1, *(short *)(uVar7 + *(uint *)(uVar4 - 1)) != 100
            || ((*(byte *)(uVar4 + 0x17) >> 1 & 1) == 0)))))) {
      NormalizeProperties(pIVar11,param_1,1,0,"NormalizeAsPrototype");
      pIVar8 = (Isolate *)(*param_1 & 0xffffffff00000000);
      puVar5 = (uint *)(*param_1 - 1);
    }
    uVar4 = (ulong)pIVar8 | (ulong)*puVar5;
    if ((*(uint *)(((ulong)pIVar8 | (ulong)*puVar5) + 0xb) >> 0x14 & 1) == 0) {
      if (*(CanonicalHandleScope **)(pIVar11 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar2 = *(ulong **)(pIVar11 + 0x95a0);
        if (puVar2 == *(ulong **)(pIVar11 + 0x95a8)) {
          puVar2 = (ulong *)HandleScope::Extend(pIVar11);
        }
        *(ulong **)(pIVar11 + 0x95a0) = puVar2 + 1;
        *puVar2 = uVar4;
      }
      else {
        puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar11 + 0x95b8),uVar4);
      }
      uVar3 = Map::Copy(pIVar11,puVar2,"CopyAsPrototype");
      MigrateToMap(pIVar11,param_1,uVar3,0);
      uVar4 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 - 1);
      *(uint *)(uVar4 + 0xb) = *(uint *)(uVar4 + 0xb) | 0x100000;
      uVar4 = *param_1 & 0xffffffff00000000;
      uVar1 = *(uint *)((uVar4 | *(uint *)(*param_1 - 1)) + 0x13);
      uVar7 = uVar4 | uVar1;
      if ((uVar1 & 1) != 0) {
        do {
          if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0xa2) break;
          puVar5 = (uint *)(uVar7 + 0x13);
          uVar7 = uVar4 | *puVar5;
        } while ((*puVar5 & 1) != 0);
      }
      if ((uVar7 & 1) != 0) {
        uVar4 = uVar7 & 0xffffffff00000000;
        if ((*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x439) &&
           ((uVar1 = *(uint *)((uVar4 | *(uint *)(uVar7 + 0xb)) + 3), (uVar1 & 1) == 0 ||
            (*(short *)((uVar4 | 7) + (ulong)*(uint *)((uVar4 | uVar1) - 1)) != 0x4e)))) {
          uVar1 = *(uint *)((uVar4 | *(uint *)((uVar4 | *(uint *)((uVar4 | *(uint *)(uVar7 + 0xf)) -
                                                                 1)) + 0x13)) + 499);
          uVar9 = (ulong)*(uint *)(*param_1 - 1);
          uVar7 = *param_1 & 0xffffffff00000000;
          uVar10 = uVar7 | uVar9;
          puVar5 = (uint *)(uVar10 + 0x13);
          if (((*puVar5 & 1) != 0) &&
             (*(short *)((uVar7 | 7) + (ulong)*(uint *)((uVar7 | *puVar5) - 1)) == 0xa2)) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","!constructor_or_backpointer().IsMap()");
          }
          *puVar5 = uVar1;
          if ((uVar1 & 1) != 0) {
            uVar12 = uVar4 | uVar1;
            uVar4 = uVar4 | (ulong)uVar1 & 0xfffffffffffc0000;
            uVar6 = *(ulong *)(uVar4 + 8);
            if (((uint)uVar6 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar10,puVar5,uVar12);
              uVar6 = *(ulong *)(uVar4 | 8);
            }
            if (((uVar6 & 0x18) != 0) &&
               ((*(byte *)((uVar7 | uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar10,puVar5,uVar12);
              return;
            }
          }
        }
      }
    }
    else if ((((*(uint *)(uVar4 + 0x23) & 1) != 0) &&
             (uVar4 = (ulong)pIVar8 | (ulong)*(uint *)(uVar4 + 0x23),
             *(short *)(((ulong)pIVar8 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 100)) &&
            (((*(byte *)(uVar4 + 0x17) >> 1 & 1) != 0 &&
             ((*(uint *)(((ulong)pIVar8 | 0xb) + (ulong)*puVar5) >> 0x15 & 1) != 0)))) {
      MigrateSlowToFast(param_1,0,"OptimizeAsPrototype");
      return;
    }
  }
  return;
}

