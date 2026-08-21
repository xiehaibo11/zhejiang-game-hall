
void FUN_010987ec(undefined8 param_1,ulong *param_2,uint param_3)

{
  long *plVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  Isolate *pIVar7;
  ulong uVar8;
  undefined8 *puVar9;
  double dVar10;
  double dVar11;
  ulong local_58;
  
  pIVar7 = (Isolate *)(*param_2 & 0xffffffff00000000);
  puVar9 = (undefined8 *)((ulong)pIVar7 | 0x95b8);
  uVar8 = (ulong)pIVar7 | (ulong)*(uint *)(*param_2 + 7);
  if ((CanonicalHandleScope *)*puVar9 == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar3 = (ulong *)v8::internal::HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar8;
  }
  else {
    v8::internal::CanonicalHandleScope::Lookup((CanonicalHandleScope *)*puVar9,uVar8);
  }
  uVar5 = *param_2;
  uVar6 = *(uint *)(uVar5 + 0xb);
  uVar8 = uVar5 & 0xffffffff00000000;
  if ((uVar6 & 1) == 0) {
    if (-1 < (int)uVar6) {
      uVar6 = uVar6 >> 1;
      dVar11 = (double)(ulong)uVar6;
joined_r0x010988d8:
      if (uVar6 != param_3) {
        if (SUB84(dVar11,0) == 0) {
          pIVar2 = pIVar7 + 1000;
        }
        else {
          plVar1 = *(long **)(v8::internal::ElementsAccessor::elements_accessors_ +
                             ((ulong)*(byte *)((uVar8 | 10) + (ulong)*(uint *)(uVar5 - 1)) & 0xf8));
          pIVar2 = (Isolate *)(**(code **)(*plVar1 + 0xb0))(plVar1,param_2);
          uVar5 = *param_2;
          uVar8 = uVar5 & 0xffffffff00000000;
        }
        uVar8 = uVar8 | *(uint *)(uVar5 - 1);
        if ((CanonicalHandleScope *)*puVar9 == (CanonicalHandleScope *)0x0) {
          puVar3 = *(ulong **)(pIVar7 + 0x95a0);
          if (puVar3 == *(ulong **)(pIVar7 + 0x95a8)) {
            puVar3 = (ulong *)v8::internal::HandleScope::Extend(pIVar7);
          }
          *(ulong **)(pIVar7 + 0x95a0) = puVar3 + 1;
          *puVar3 = uVar8;
        }
        else {
          puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      ((CanonicalHandleScope *)*puVar9,uVar8);
        }
        plVar1 = (long *)v8::internal::Map::Copy(pIVar7,puVar3,"SlowCopyForSetLengthImpl");
        *(uint *)(*plVar1 + 0xb) = *(uint *)(*plVar1 + 0xb) & 0xf7ffffff;
        *(byte *)(*plVar1 + 10) = *(byte *)(*plVar1 + 10) & 7 | 0x60;
        v8::internal::JSObject::MigrateToMap(pIVar7,param_2,plVar1,0);
        if (pIVar2 != (Isolate *)0x0) {
          uVar5 = *param_2;
          uVar8 = *(ulong *)pIVar2;
          *(int *)(uVar5 + 7) = (int)uVar8;
          if ((uVar8 & 1) != 0) {
            uVar4 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
            if (((uint)uVar4 >> 0x12 & 1) != 0) {
              v8::internal::Heap_MarkingBarrierSlow(uVar5,uVar5 + 7,uVar8);
              uVar4 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
               ) {
              v8::internal::Heap_GenerationalBarrierSlow(uVar5,uVar5 + 7,uVar8);
            }
          }
        }
        uVar6 = *(uint *)(*param_2 + 7);
        uVar8 = *param_2 & 0xffffffff00000000 | (ulong)uVar6;
        if (uVar6 != *(uint *)(pIVar7 + 1000)) {
          if ((CanonicalHandleScope *)*puVar9 == (CanonicalHandleScope *)0x0) {
            puVar3 = *(ulong **)(pIVar7 + 0x95a0);
            if (puVar3 == *(ulong **)(pIVar7 + 0x95a8)) {
              puVar3 = (ulong *)v8::internal::HandleScope::Extend(pIVar7);
            }
            *(ulong **)(pIVar7 + 0x95a0) = puVar3 + 1;
            *puVar3 = uVar8;
          }
          else {
            puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                        ((CanonicalHandleScope *)*puVar9,uVar8);
          }
          local_58 = *param_2;
          v8::internal::JSObject::RequireSlowElements((JSObject *)&local_58,*puVar3);
          v8::internal::JSObject::ApplyAttributesToDictionary<v8::internal::NumberDictionary>
                    (pIVar7,pIVar7 + 0x80,puVar3,4);
          uVar8 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 7);
        }
        if ((CanonicalHandleScope *)*puVar9 == (CanonicalHandleScope *)0x0) {
          puVar3 = *(ulong **)(pIVar7 + 0x95a0);
          if (puVar3 == *(ulong **)(pIVar7 + 0x95a8)) {
            puVar3 = (ulong *)v8::internal::HandleScope::Extend(pIVar7);
          }
          *(ulong **)(pIVar7 + 0x95a0) = puVar3 + 1;
          *puVar3 = uVar8;
        }
        else {
          puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      ((CanonicalHandleScope *)*puVar9,uVar8);
        }
        FUN_01094e40(pIVar7,param_2,param_3,puVar3);
      }
      return;
    }
  }
  else if (*(short *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar6) - 1)) == 0x42) {
    dVar10 = *(double *)((uVar8 | uVar6) + 3);
    dVar11 = dVar10 + 4503599627370496.0;
    if ((((ulong)dVar11 >> 0x20 == 0x43300000) && (uVar6 = SUB84(dVar11,0), uVar6 != 0xffffffff)) &&
       (dVar10 == (double)((ulong)dVar11 & 0xffffffff))) goto joined_r0x010988d8;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","array->length().ToArrayIndex(&old_length)");
}

