
/* v8::internal::Object::GetProperty(v8::internal::LookupIterator*, bool) */

long v8::internal::Object::GetProperty(LookupIterator *param_1,bool param_2)

{
  Factory *pFVar1;
  ushort uVar2;
  Isolate *pIVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  bool local_28 [4];
  char local_24 [4];
  
  do {
    switch(*(undefined4 *)(param_1 + 4)) {
    case 0:
      uVar5 = LookupIterator::HasAccess(param_1);
      if ((uVar5 & 1) == 0) {
        lVar4 = JSObject::GetPropertyWithFailedAccessCheck(param_1);
        return lVar4;
      }
      break;
    case 1:
    case 4:
      lVar4 = *(long *)(param_1 + 0x18);
LAB_01107210:
      return lVar4 + 0xa0;
    case 2:
      lVar4 = JSObject::GetPropertyWithInterceptor(param_1,local_28);
      if (lVar4 == 0) {
        return 0;
      }
      if (local_28[0] != false) {
        return lVar4;
      }
      break;
    case 3:
      puVar6 = *(ulong **)(param_1 + 0x30);
      uVar5 = *puVar6;
      if (((uVar5 & 1) != 0) &&
         (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0xaa)) {
        pIVar3 = *(Isolate **)(param_1 + 0x18);
        uVar5 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0xf);
        if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar6 = *(ulong **)(pIVar3 + 0x95a0);
          if (puVar6 == *(ulong **)(pIVar3 + 0x95a8)) {
            puVar6 = (ulong *)HandleScope::Extend(pIVar3);
          }
          *(ulong **)(pIVar3 + 0x95a0) = puVar6 + 1;
          *puVar6 = uVar5;
        }
        else {
          puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar5);
        }
      }
      if (param_2) {
        pFVar1 = *(Factory **)(param_1 + 0x18);
        lVar4 = *(long *)(param_1 + 0x20);
        uVar7 = *(undefined8 *)(param_1 + 0x38);
        if (lVar4 == 0) {
          lVar4 = Factory::SizeToString(pFVar1,*(ulong *)(param_1 + 0x48),true);
          *(long *)(param_1 + 0x20) = lVar4;
        }
        uVar2 = JSProxy::HasProperty(pFVar1,uVar7,lVar4);
        if ((uVar2 & 0xff) == 0) {
          return 0;
        }
        if (uVar2 < 0x100) {
          lVar4 = *(long *)(param_1 + 0x18);
          param_1[8] = (LookupIterator)0x0;
          *(undefined4 *)(param_1 + 4) = 4;
          goto LAB_01107210;
        }
      }
      pFVar1 = *(Factory **)(param_1 + 0x18);
      lVar4 = *(long *)(param_1 + 0x20);
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      if (lVar4 == 0) {
        lVar4 = Factory::SizeToString(pFVar1,*(ulong *)(param_1 + 0x48),true);
        *(long *)(param_1 + 0x20) = lVar4;
      }
      lVar4 = JSProxy::GetProperty(pFVar1,uVar7,lVar4,puVar6,local_24);
      if (local_24[0] != '\0') {
        return lVar4;
      }
      if (param_2) {
        return lVar4;
      }
      param_1[8] = (LookupIterator)0x0;
      *(undefined4 *)(param_1 + 4) = 4;
      return lVar4;
    case 5:
      lVar4 = GetPropertyWithAccessor(param_1);
      return lVar4;
    case 6:
      lVar4 = LookupIterator::GetDataValue();
      return lVar4;
    case 7:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    LookupIterator::Next(param_1);
  } while( true );
}

