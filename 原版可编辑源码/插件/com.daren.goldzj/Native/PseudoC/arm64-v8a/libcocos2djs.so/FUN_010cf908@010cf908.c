
undefined8 FUN_010cf908(ulong *param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  Isolate *pIVar6;
  int iVar7;
  long lVar8;
  PropertyDescriptor local_e8 [8];
  long local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  LookupIterator aLStack_c0 [92];
  undefined1 local_64 [4];
  
  if (*(short *)((*param_1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_1 - 1)) == 0xa9) {
    uVar2 = v8::internal::JSProxy::IsExtensible();
  }
  else {
    uVar5 = v8::internal::JSObject::IsExtensible();
    uVar2 = 0x101;
    if ((uVar5 & 1) == 0) {
      uVar2 = 1;
    }
  }
  if ((uVar2 & 0xff) != 0) {
    if (0xff < uVar2) {
      return 1;
    }
    uVar1 = *(uint *)((long)param_1 + 4);
    puVar3 = (ulong *)v8::internal::KeyAccumulator::GetKeys(param_1,0,0,0,0,0);
    if (puVar3 != (ulong *)0x0) {
      uVar5 = *puVar3;
      if (1 < *(int *)(uVar5 + 3)) {
        pIVar6 = (Isolate *)((ulong)uVar1 << 0x20);
        iVar7 = 0;
        lVar8 = 0;
        do {
          uVar5 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + (long)iVar7 + 7);
          if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar4 = *(ulong **)(pIVar6 + 0x95a0);
            if (puVar4 == *(ulong **)(pIVar6 + 0x95a8)) {
              puVar4 = (ulong *)v8::internal::HandleScope::Extend(pIVar6);
            }
            *(ulong **)(pIVar6 + 0x95a0) = puVar4 + 1;
            *puVar4 = uVar5;
          }
          else {
            puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar5);
          }
          local_e8[0] = (PropertyDescriptor)0x0;
          uStack_d8 = 0;
          local_e0 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          local_64[0] = 0;
          v8::internal::LookupIterator::PropertyOrElement
                    (aLStack_c0,pIVar6,param_1,puVar4,local_64,1);
          uVar2 = v8::internal::JSReceiver::GetOwnPropertyDescriptor(aLStack_c0,local_e8);
          if ((uVar2 & 0xff) == 0) {
            return 0;
          }
          if (0xff < uVar2) {
            if (((byte)local_e8[0] >> 2 & 1) != 0) {
              return 1;
            }
            if (((param_2 == 5) && (((byte)local_e8[0] >> 4 & 1) != 0)) &&
               (local_e0 != 0 || ((byte)local_e8[0] & 0x20) != 0)) {
              return 1;
            }
          }
          uVar5 = *puVar3;
          lVar8 = lVar8 + 1;
          iVar7 = iVar7 + 4;
        } while (lVar8 < *(int *)(uVar5 + 3) >> 1);
      }
      return 0x101;
    }
  }
  return 0;
}

