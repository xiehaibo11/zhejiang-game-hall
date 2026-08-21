
undefined8 FUN_014ce334(int param_1,long param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ushort uVar5;
  Isolate *pIVar6;
  long *plVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  PropertyDescriptor local_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  pIVar1 = param_3 + 0x95a0;
  pIVar6 = (Isolate *)(param_2 + -8);
  if (param_1 < 6) {
    pIVar6 = param_3 + 0xa0;
  }
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar11 = *(ulong *)pIVar6;
  lVar2 = *(long *)pIVar1;
  lVar3 = *(long *)(param_3 + 0x95a8);
  if (((uVar11 & 1) == 0) ||
     (*(ushort *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) < 0xa9)) {
    pIVar6 = (Isolate *)v8::internal::Object::ToObjectImpl(param_3,pIVar6,0);
  }
  if ((pIVar6 == (Isolate *)0x0) ||
     (plVar7 = (long *)v8::internal::KeyAccumulator::GetKeys(pIVar6,0,0,0,0,0),
     plVar7 == (long *)0x0)) {
    uVar10 = *(undefined8 *)(param_3 + 0x180);
  }
  else {
    uVar11 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
    uVar11 = uVar11 | *(uint *)((uVar11 | *(uint *)((uVar11 | *(uint *)(*(ulong *)(param_3 + 0x2bc8)
                                                                       - 1)) + 0x13)) + 499);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)pIVar1;
      if (puVar8 == *(ulong **)(param_3 + 0x95a8)) {
        puVar8 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar8 + 1;
      *puVar8 = uVar11;
    }
    else {
      puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar11);
    }
    puVar9 = (undefined8 *)v8::internal::Factory::NewJSObject((Factory *)param_3,puVar8,0);
    lVar12 = *plVar7;
    if (1 < *(int *)(lVar12 + 3)) {
      iVar14 = 0;
      lVar13 = 0;
      do {
        uVar4 = *(uint *)(lVar12 + iVar14 + 7);
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar8 = *(ulong **)pIVar1;
          if (puVar8 == *(ulong **)(param_3 + 0x95a8)) {
            puVar8 = (ulong *)v8::internal::HandleScope::Extend(param_3);
          }
          *(ulong **)pIVar1 = puVar8 + 1;
          *puVar8 = (ulong)(param_3 + uVar4);
        }
        else {
          puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_3 + 0x95b8),
                                       (ulong)(param_3 + uVar4));
        }
        local_88[0] = (PropertyDescriptor)0x0;
        uStack_78 = 0;
        local_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uVar5 = v8::internal::JSReceiver::GetOwnPropertyDescriptor(param_3,pIVar6,puVar8,local_88);
        if ((uVar5 & 0xff) == 0) {
          uVar10 = *(undefined8 *)(param_3 + 0x180);
          goto LAB_014ce568;
        }
        if (0xff < uVar5) {
          uVar10 = v8::internal::PropertyDescriptor::ToObject(local_88,param_3);
          uVar5 = v8::internal::JSReceiver::CreateDataProperty
                            (param_3,puVar9,puVar8,uVar10,0x100000001);
          if ((uVar5 & 0xff) == 0) {
            v8::V8::FromJustIsNothing();
          }
          if (uVar5 < 0x100) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","success.FromJust()");
          }
        }
        lVar12 = *plVar7;
        lVar13 = lVar13 + 1;
        iVar14 = iVar14 + 4;
      } while (lVar13 < *(int *)(lVar12 + 3) >> 1);
    }
    uVar10 = *puVar9;
  }
LAB_014ce568:
  *(long *)pIVar1 = lVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar10;
}

