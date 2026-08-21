
undefined8 FUN_014d5c84(int param_1,long param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  Isolate *pIVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  double dVar14;
  IncrementalStringBuilder aIStack_e0 [40];
  undefined4 local_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  Isolate *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong *puStack_88;
  undefined8 local_80;
  ulong *puStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  pIVar1 = param_3 + 0x95a0;
  lVar2 = *(long *)pIVar1;
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  pIVar6 = (Isolate *)(param_2 + -8);
  if ((int)(param_1 - 4U) < 2) {
    pIVar6 = param_3 + 0xa0;
  }
  uVar4 = __strlen_chk("raw",4);
  local_b8 = 0x1a4223c;
  iStack_b4 = 0;
  uStack_b0 = (undefined4)uVar4;
  local_ac = (undefined4)((ulong)uVar4 >> 0x20);
  lVar5 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_b8,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(location_) != nullptr");
  }
  uVar10 = *(ulong *)pIVar6;
  if (((uVar10 & 1) == 0) ||
     (*(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) < 0xa9)) {
    pIVar6 = (Isolate *)v8::internal::Object::ToObjectImpl(param_3,pIVar6,0);
  }
  if ((((pIVar6 != (Isolate *)0x0) &&
       (puVar7 = (ulong *)v8::internal::Object::GetProperty(param_3,pIVar6,lVar5),
       puVar7 != (ulong *)0x0)) &&
      (((uVar10 = *puVar7, (uVar10 & 1) != 0 &&
        (0xa8 < *(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)))) ||
       (puVar7 = (ulong *)v8::internal::Object::ToObjectImpl(param_3,puVar7,0),
       puVar7 != (ulong *)0x0)))) &&
     (puVar8 = (ulong *)v8::internal::Object::GetProperty(param_3,puVar7,param_3 + 0x7b8),
     puVar8 != (ulong *)0x0)) {
    uVar10 = *puVar8;
    if ((uVar10 & 1) == 0) {
      uVar10 = (ulong)(((uint)(uVar10 >> 1) & 0x7fffffff & ((int)uVar10 >> 0x1f ^ 0xffffffffU)) << 1
                      );
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)pIVar1;
        if (puVar8 == *(ulong **)(param_3 + 0x95a8)) {
          puVar8 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar1 = puVar8 + 1;
        *puVar8 = uVar10;
      }
      else {
        puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
      }
    }
    else {
      puVar8 = (ulong *)v8::internal::Object::ConvertToLength(param_3,puVar8);
    }
    if (puVar8 != (ulong *)0x0) {
      v8::internal::IncrementalStringBuilder::IncrementalStringBuilder(aIStack_e0,param_3);
      uVar10 = *puVar8;
      if ((uVar10 & 1) == 0) {
        dVar14 = (double)((int)uVar10 >> 1);
      }
      else {
        dVar14 = *(double *)(uVar10 + 3);
      }
      if (dVar14 <= 4294967295.0) {
        uVar12 = (uint)dVar14;
        if (uVar12 != 0) {
          uVar10 = *puVar7;
          goto joined_r0x014d5e68;
        }
      }
      else {
        uVar12 = 0xffffffff;
        uVar10 = *puVar7;
joined_r0x014d5e68:
        if (((uVar10 & 1) == 0) ||
           (puStack_78 = puVar7,
           *(ushort *)(((ulong)param_3 | 7) + (ulong)*(uint *)(uVar10 - 1)) < 0xa9)) {
          puStack_78 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver
                                          (param_3,puVar7,0);
        }
        local_80 = 0;
        uStack_98 = 0;
        local_90 = 0;
        local_b8 = 3;
        local_ac = 0;
        uStack_a8 = 0xc0;
        uStack_68 = 0xffffffffffffffff;
        local_70 = 0;
        local_a0 = param_3;
        puStack_88 = puVar7;
        v8::internal::LookupIterator::Start<true>((LookupIterator *)&local_b8);
        if (iStack_b4 == 4) {
          pIVar6 = local_a0 + 0xa0;
          uVar10 = *(ulong *)pIVar6;
          if ((uVar10 & 1) == 0) goto LAB_014d5f1c;
LAB_014d5f04:
          if (0x3f < *(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)))
          goto LAB_014d5f1c;
        }
        else {
          pIVar6 = (Isolate *)v8::internal::Object::GetProperty((LookupIterator *)&local_b8,false);
          if (pIVar6 == (Isolate *)0x0) goto LAB_014d600c;
          uVar10 = *(ulong *)pIVar6;
          if ((uVar10 & 1) != 0) goto LAB_014d5f04;
LAB_014d5f1c:
          pIVar6 = (Isolate *)v8::internal::Object::ConvertToString(param_3);
        }
        if (pIVar6 == (Isolate *)0x0) goto LAB_014d600c;
        v8::internal::IncrementalStringBuilder::AppendString(aIStack_e0);
        if (1 < uVar12) {
          uVar11 = 1;
          iVar13 = 0x10;
          do {
            if (uVar11 + 1 < param_1 - 4U) {
              puVar8 = (ulong *)(param_2 - iVar13);
              uVar10 = *puVar8;
              if (((uVar10 & 1) == 0) ||
                 (0x3f < *(ushort *)
                          ((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)))) {
                puVar8 = (ulong *)v8::internal::Object::ConvertToString(param_3);
              }
              if (puVar8 == (ulong *)0x0) goto LAB_014d600c;
              v8::internal::IncrementalStringBuilder::AppendString(aIStack_e0);
            }
            puVar8 = (ulong *)v8::internal::Object::GetElement(param_3,puVar7,uVar11);
            if ((puVar8 == (ulong *)0x0) ||
               (((uVar10 = *puVar8, (uVar10 & 1) == 0 ||
                 (0x3f < *(ushort *)
                          ((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)))) &&
                (puVar8 = (ulong *)v8::internal::Object::ConvertToString(param_3,puVar8),
                puVar8 == (ulong *)0x0)))) goto LAB_014d600c;
            v8::internal::IncrementalStringBuilder::AppendString(aIStack_e0,puVar8);
            uVar11 = uVar11 + 1;
            iVar13 = iVar13 + 8;
          } while (uVar12 != uVar11);
        }
      }
      puVar9 = (undefined8 *)v8::internal::IncrementalStringBuilder::Finish(aIStack_e0);
      if (puVar9 != (undefined8 *)0x0) {
        uVar4 = *puVar9;
        if (param_3 == (Isolate *)0x0) {
          return uVar4;
        }
        goto LAB_014d6010;
      }
    }
  }
LAB_014d600c:
  uVar4 = *(undefined8 *)(param_3 + 0x180);
LAB_014d6010:
  *(long *)pIVar1 = lVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar4;
}

