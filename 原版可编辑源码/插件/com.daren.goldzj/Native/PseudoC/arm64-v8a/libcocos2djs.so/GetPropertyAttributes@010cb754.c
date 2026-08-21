
/* v8::internal::JSReceiver::GetPropertyAttributes(v8::internal::LookupIterator*) */

ulong v8::internal::JSReceiver::GetPropertyAttributes(LookupIterator *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
LAB_010cb76c:
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0:
    uVar3 = LookupIterator::HasAccess(param_1);
    if ((uVar3 & 1) != 0) goto switchD_010cb784_default;
    uVar2 = JSObject::GetPropertyAttributesWithFailedAccessCheck(param_1);
    break;
  case 1:
  case 4:
    uVar3 = 0x40;
LAB_010cb814:
    uVar4 = 0;
    uVar2 = 1;
LAB_010cb82c:
    return uVar2 & 0xff | uVar3 << 0x20 | uVar4 & 0xffffff00;
  case 2:
    uVar1 = LookupIterator::GetInterceptor(param_1);
    uVar2 = FUN_010d248c(param_1,uVar1);
    uVar3 = uVar2 >> 0x20;
    if ((uVar2 & 0xff) == 0) {
      uVar4 = uVar2 & 0xffffffffffffff00;
      uVar2 = 0;
    }
    else {
      if (uVar3 == 0x40) goto switchD_010cb784_default;
      uVar4 = uVar2 & 0xffffffffffffff00;
    }
    goto LAB_010cb82c;
  case 3:
    uVar2 = JSProxy::GetPropertyAttributes(param_1);
    break;
  case 5:
    uVar3 = **(ulong **)(param_1 + 0x38);
    if (((uVar3 & 1) == 0) ||
       (*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0xac))
    goto switchD_010cb784_caseD_6;
    uVar2 = JSModuleNamespace::GetPropertyAttributes(param_1);
    break;
  case 6:
switchD_010cb784_caseD_6:
    uVar3 = (ulong)(*(uint *)(param_1 + 0x10) >> 3 & 7);
    goto LAB_010cb814;
  case 7:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  default:
    goto switchD_010cb784_default;
  }
  uVar4 = uVar2 & 0xffffffffffffff00;
  uVar3 = uVar2 >> 0x20;
  goto LAB_010cb82c;
switchD_010cb784_default:
  LookupIterator::Next(param_1);
  goto LAB_010cb76c;
}

