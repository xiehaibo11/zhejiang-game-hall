
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::JSReceiver::SetIntegrityLevel(v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::PropertyAttributes, v8::internal::ShouldThrow) */

ushort v8::internal::JSReceiver::SetIntegrityLevel(ulong *param_1,int param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  ushort uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  Isolate *pIVar8;
  int iVar9;
  long lVar10;
  PropertyDescriptor local_148 [8];
  undefined8 local_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined1 local_120 [8];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_6c [12];
  
  uVar6 = *param_1;
  pIVar8 = (Isolate *)(uVar6 & 0xffffffff00000000);
  uVar7 = (ulong)pIVar8 | 7;
  if (((*(ushort *)(uVar7 + *(uint *)(uVar6 - 1)) < 0xaa) ||
      ((byte)((*(byte *)(((ulong)pIVar8 | 10) + (ulong)*(uint *)(uVar6 - 1)) >> 3) - 0xd) < 2)) ||
     (*(short *)(uVar7 + *(uint *)(uVar6 - 1)) == 0xac)) {
    if (*(short *)(uVar7 + *(uint *)(uVar6 - 1)) == 0xa9) {
      cVar2 = JSProxy::PreventExtensions();
    }
    else {
      cVar2 = JSObject::PreventExtensions(param_1,param_3);
    }
    if ((cVar2 != '\0') &&
       (puVar4 = (ulong *)KeyAccumulator::GetKeys(param_1,0,0,0,0,0), puVar4 != (ulong *)0x0)) {
      uStack_e8 = 0;
      uStack_f0 = 0;
      local_d8 = 0;
      uStack_e0 = 0;
      local_f8._0_1_ = 8;
      uStack_100 = 0;
      local_108 = 0;
      uStack_110 = 0;
      local_118 = 0;
      local_120[0] = 0x28;
      uVar6 = *puVar4;
      if (param_2 == 4) {
        if (*(int *)(uVar6 + 3) < 2) {
          return 0x101;
        }
        iVar9 = 0;
        lVar10 = 0;
        while( true ) {
          uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + (long)iVar9 + 7);
          if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar5 = *(ulong **)(pIVar8 + 0x95a0);
            if (puVar5 == *(ulong **)(pIVar8 + 0x95a8)) {
              puVar5 = (ulong *)HandleScope::Extend(pIVar8);
            }
            *(ulong **)(pIVar8 + 0x95a0) = puVar5 + 1;
            *puVar5 = uVar6;
          }
          else {
            puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar6);
          }
          cVar2 = DefineOwnProperty(pIVar8,param_1,puVar5,&local_f8,1);
          if (cVar2 == '\0') break;
          uVar6 = *puVar4;
          lVar10 = lVar10 + 1;
          iVar9 = iVar9 + 4;
          if (*(int *)(uVar6 + 3) >> 1 <= lVar10) {
            return 0x101;
          }
        }
      }
      else {
        if (*(int *)(uVar6 + 3) < 2) {
          return 0x101;
        }
        iVar9 = 0;
        lVar10 = 0;
        while( true ) {
          uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + (long)iVar9 + 7);
          if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar5 = *(ulong **)(pIVar8 + 0x95a0);
            if (puVar5 == *(ulong **)(pIVar8 + 0x95a8)) {
              puVar5 = (ulong *)HandleScope::Extend(pIVar8);
            }
            *(ulong **)(pIVar8 + 0x95a0) = puVar5 + 1;
            *puVar5 = uVar6;
          }
          else {
            puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar6);
          }
          local_148[0] = (PropertyDescriptor)0x0;
          lStack_138 = 0;
          local_140 = 0;
          uStack_128 = 0;
          lStack_130 = 0;
          local_6c[0] = 0;
          LookupIterator::PropertyOrElement
                    ((LookupIterator *)&local_d0,pIVar8,param_1,puVar5,local_6c,1);
          uVar3 = GetOwnPropertyDescriptor((LookupIterator *)&local_d0,local_148);
          if ((uVar3 & 0xff) == 0) break;
          if (0xff < uVar3) {
            puVar1 = (undefined8 *)local_120;
            if (lStack_138 != 0 || lStack_130 != 0) {
              puVar1 = &local_f8;
            }
            uStack_c8 = puVar1[1];
            local_d0 = *puVar1;
            uStack_b8 = puVar1[3];
            uStack_c0 = puVar1[2];
            local_b0 = puVar1[4];
            cVar2 = DefineOwnProperty(pIVar8,param_1,puVar5,&local_d0,1);
            if (cVar2 == '\0') {
              return 0;
            }
          }
          uVar6 = *puVar4;
          lVar10 = lVar10 + 1;
          iVar9 = iVar9 + 4;
          if (*(int *)(uVar6 + 3) >> 1 <= lVar10) {
            return 0x101;
          }
        }
      }
    }
  }
  else {
    uVar3 = JSObject::TestIntegrityLevel(param_1,param_2);
    if ((uVar3 & 0xff) != 0) {
      if (0xff < uVar3) {
        return uVar3;
      }
      if (param_2 != 4) {
        uVar3 = JSObject::PreventExtensionsWithTransition<(v8::internal::PropertyAttributes)5>
                          (param_1,param_3);
        return uVar3;
      }
      uVar3 = JSObject::PreventExtensionsWithTransition<(v8::internal::PropertyAttributes)4>();
      return uVar3;
    }
  }
  return 0;
}

