
void FUN_01097bf8(Isolate *param_1,ulong *param_2,uint param_3)

{
  Isolate *pIVar1;
  long *plVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  ulong local_58;
  
  uVar7 = *param_2;
  uVar9 = *(uint *)(uVar7 + 0xb);
  uVar5 = uVar7 & 0xffffffff00000000;
  if ((uVar9 & 1) == 0) {
    if (-1 < (int)uVar9) {
      uVar9 = uVar9 >> 1;
      dVar11 = (double)(ulong)uVar9;
joined_r0x01097c94:
      if (uVar9 != param_3) {
        pIVar1 = param_1 + 0x95a0;
        if (SUB84(dVar11,0) == 0) {
          pIVar3 = param_1 + 1000;
        }
        else {
          plVar2 = *(long **)(v8::internal::ElementsAccessor::elements_accessors_ +
                             ((ulong)*(byte *)((uVar5 | 10) + (ulong)*(uint *)(uVar7 - 1)) & 0xf8));
          pIVar3 = (Isolate *)(**(code **)(*plVar2 + 0xb0))(plVar2,param_2);
          uVar7 = *param_2;
          uVar5 = uVar7 & 0xffffffff00000000;
        }
        uVar5 = uVar5 | *(uint *)(uVar7 - 1);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar4 = *(ulong **)pIVar1;
          if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
            puVar4 = (ulong *)v8::internal::HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar1 = puVar4 + 1;
          *puVar4 = uVar5;
        }
        else {
          puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
        }
        plVar2 = (long *)v8::internal::Map::Copy(param_1,puVar4,"SlowCopyForSetLengthImpl");
        *(uint *)(*plVar2 + 0xb) = *(uint *)(*plVar2 + 0xb) & 0xf7ffffff;
        *(byte *)(*plVar2 + 10) = *(byte *)(*plVar2 + 10) & 7 | 0x60;
        v8::internal::JSObject::MigrateToMap(param_1,param_2,plVar2,0);
        if (pIVar3 != (Isolate *)0x0) {
          uVar7 = *param_2;
          uVar5 = *(ulong *)pIVar3;
          *(int *)(uVar7 + 7) = (int)uVar5;
          if ((uVar5 & 1) != 0) {
            uVar6 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
            if (((uint)uVar6 >> 0x12 & 1) != 0) {
              v8::internal::Heap_MarkingBarrierSlow(uVar7,uVar7 + 7,uVar5);
              uVar6 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
               ) {
              v8::internal::Heap_GenerationalBarrierSlow(uVar7,uVar7 + 7,uVar5);
            }
          }
        }
        uVar5 = *param_2 & 0xffffffff00000000;
        puVar8 = (uint *)(*param_2 + 7);
        if (*puVar8 != *(uint *)(param_1 + 1000)) {
          uVar5 = uVar5 | *puVar8;
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar4 = *(ulong **)pIVar1;
            if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
              puVar4 = (ulong *)v8::internal::HandleScope::Extend(param_1);
            }
            *(ulong **)pIVar1 = puVar4 + 1;
            *puVar4 = uVar5;
          }
          else {
            puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
          }
          local_58 = *param_2;
          v8::internal::JSObject::RequireSlowElements((JSObject *)&local_58,*puVar4);
          v8::internal::JSObject::ApplyAttributesToDictionary<v8::internal::NumberDictionary>
                    (param_1,param_1 + 0x80,puVar4,0);
          uVar5 = *param_2 & 0xffffffff00000000;
          puVar8 = (uint *)(*param_2 + 7);
        }
        uVar9 = *puVar8;
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar4 = *(ulong **)pIVar1;
          if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
            puVar4 = (ulong *)v8::internal::HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar1 = puVar4 + 1;
          *puVar4 = uVar5 | uVar9;
        }
        else {
          puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5 | uVar9);
        }
        FUN_01094e40(param_1,param_2,param_3,puVar4);
      }
      return;
    }
  }
  else if (*(short *)((uVar5 | 7) + (ulong)*(uint *)((uVar5 | uVar9) - 1)) == 0x42) {
    dVar10 = *(double *)((uVar5 | uVar9) + 3);
    dVar11 = dVar10 + 4503599627370496.0;
    if ((((ulong)dVar11 >> 0x20 == 0x43300000) && (uVar9 = SUB84(dVar11,0), uVar9 != 0xffffffff)) &&
       (dVar10 == (double)((ulong)dVar11 & 0xffffffff))) goto joined_r0x01097c94;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","array->length().ToArrayIndex(&old_length)");
}

