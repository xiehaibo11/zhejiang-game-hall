
/* v8::internal::JSReceiver::HasProperty(v8::internal::LookupIterator*) */

undefined2 v8::internal::JSReceiver::HasProperty(LookupIterator *param_1)

{
  Factory *this;
  undefined2 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  do {
    switch(*(undefined4 *)(param_1 + 4)) {
    case 0:
      uVar2 = LookupIterator::HasAccess(param_1);
      if ((uVar2 & 1) == 0) {
        uVar2 = JSObject::GetPropertyAttributesWithFailedAccessCheck(param_1);
        uVar1 = 0x101;
        if (uVar2 >> 0x20 == 0x40) {
          uVar1 = 1;
        }
        if ((uVar2 & 0xff) != 0) {
          return uVar1;
        }
        return 0;
      }
      break;
    case 1:
    case 4:
      return 1;
    case 2:
      uVar4 = LookupIterator::GetInterceptor(param_1);
      uVar2 = FUN_010d248c(param_1,uVar4);
      if ((uVar2 & 0xff) == 0) {
        return 0;
      }
      if (uVar2 >> 0x20 != 0x40) {
        return 0x101;
      }
      break;
    case 3:
      this = *(Factory **)(param_1 + 0x18);
      lVar3 = *(long *)(param_1 + 0x20);
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      if (lVar3 == 0) {
        lVar3 = Factory::SizeToString(this,*(ulong *)(param_1 + 0x48),true);
        *(long *)(param_1 + 0x20) = lVar3;
      }
      uVar1 = JSProxy::HasProperty(this,uVar4,lVar3);
      return uVar1;
    case 5:
    case 6:
      return 0x101;
    case 7:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    LookupIterator::Next(param_1);
  } while( true );
}

