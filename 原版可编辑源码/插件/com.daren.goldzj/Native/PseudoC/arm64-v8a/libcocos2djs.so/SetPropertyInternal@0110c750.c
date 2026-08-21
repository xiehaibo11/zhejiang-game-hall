
/* v8::internal::Object::SetPropertyInternal(v8::internal::LookupIterator*,
   v8::internal::Handle<v8::internal::Object>, v8::Maybe<v8::internal::ShouldThrow>,
   v8::internal::StoreOrigin, bool*) */

ulong v8::internal::Object::SetPropertyInternal
                (LookupIterator *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
                undefined1 *param_5)

{
  uint uVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  Isolate *pIVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 local_50;
  undefined8 local_48;
  
  if (*(long *)(param_1 + 0x48) == -1) {
    lVar6 = *(long *)(param_1 + 0x18);
    iVar2 = **(int **)(param_1 + 0x20);
    if (((((iVar2 == *(int *)(lVar6 + 0xc70)) || (iVar2 == *(int *)(lVar6 + 0x5d0))) ||
         (iVar2 == *(int *)(lVar6 + 0x848))) ||
        ((iVar2 == *(int *)(lVar6 + 0xc48) || (iVar2 == *(int *)(lVar6 + 0xc18))))) ||
       ((iVar2 == *(int *)(lVar6 + 0x960) || (iVar2 == *(int *)(lVar6 + 0xa38))))) {
      LookupIterator::InternalUpdateProtector(lVar6,*(undefined8 *)(param_1 + 0x30));
    }
  }
  iVar2 = *(int *)(param_1 + 4);
LAB_0110c7f4:
  switch(iVar2) {
  case 0:
    uVar4 = LookupIterator::HasAccess(param_1);
    if ((uVar4 & 1) != 0) goto switchD_0110c80c_default;
    uVar4 = JSObject::SetPropertyWithFailedAccessCheck(param_1,param_2,param_3);
    break;
  case 1:
    puVar8 = *(undefined8 **)(param_1 + 0x38);
    local_48 = *puVar8;
    iVar2 = JSTypedArray::type((JSTypedArray *)&local_48);
    if (iVar2 == 10) {
LAB_0110c964:
      param_2 = (ulong *)BigInt::FromObject(*(undefined8 *)(param_1 + 0x18),param_2);
    }
    else {
      local_50 = *puVar8;
      iVar2 = JSTypedArray::type((JSTypedArray *)&local_50);
      if (iVar2 == 0xb) goto LAB_0110c964;
      uVar4 = *param_2;
      if (((uVar4 & 1) != 0) &&
         (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0x42)) {
        param_2 = (ulong *)ConvertToNumberOrNumeric(*(undefined8 *)(param_1 + 0x18),param_2,0);
      }
    }
    uVar4 = (ulong)(param_2 != (ulong *)0x0);
    uVar7 = uVar4;
    goto LAB_0110ca70;
  case 2:
    uVar4 = LookupIterator::HolderIsReceiverOrHiddenPrototype(param_1);
    if ((uVar4 & 1) == 0) {
      uVar4 = JSObject::GetPropertyAttributesWithInterceptor(param_1);
      if ((uVar4 & 0xff) == 0) {
        uVar4 = 0;
        uVar7 = 0;
        goto LAB_0110ca70;
      }
      if ((uVar4 >> 0x20 & 1) != 0) goto LAB_0110c91c;
      if ((int)(uVar4 >> 0x20) == 0x40) goto switchD_0110c80c_default;
      goto switchD_0110c80c_caseD_7;
    }
    uVar4 = JSObject::SetPropertyWithInterceptor(param_1,param_3,param_2);
    uVar1 = (uint)uVar4 >> 8 & 0xff;
    uVar7 = (ulong)uVar1;
    if ((uVar4 & 0xff) == 0) {
      uVar4 = 0;
      goto LAB_0110ca70;
    }
    if (uVar1 != 0) goto LAB_0110ca70;
switchD_0110c80c_default:
    LookupIterator::Next(param_1);
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 == 4) {
switchD_0110c80c_caseD_7:
      uVar4 = 0;
      *param_5 = 0;
      uVar7 = 0;
LAB_0110ca70:
      return uVar4 & 0xff | uVar7 << 8;
    }
    goto LAB_0110c7f4;
  case 3:
    puVar3 = *(ulong **)(param_1 + 0x30);
    uVar4 = *puVar3;
    if (((uVar4 & 1) != 0) &&
       (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0xaa)) {
      pIVar5 = *(Isolate **)(param_1 + 0x18);
      uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xf);
      if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar3 = *(ulong **)(pIVar5 + 0x95a0);
        if (puVar3 == *(ulong **)(pIVar5 + 0x95a8)) {
          puVar3 = (ulong *)HandleScope::Extend(pIVar5);
        }
        *(ulong **)(pIVar5 + 0x95a0) = puVar3 + 1;
        *puVar3 = uVar4;
      }
      else {
        puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar4);
      }
    }
    lVar6 = *(long *)(param_1 + 0x20);
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    if (lVar6 == 0) {
      lVar6 = Factory::SizeToString(*(Factory **)(param_1 + 0x18),*(ulong *)(param_1 + 0x48),true);
      *(long *)(param_1 + 0x20) = lVar6;
    }
    uVar4 = JSProxy::SetProperty(uVar9,lVar6,param_2,puVar3,param_3);
    break;
  case 4:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 5:
    if (((byte)param_1[0x10] >> 3 & 1) == 0) {
      puVar3 = (ulong *)LookupIterator::GetAccessors();
      uVar4 = *puVar3;
      if ((((uVar4 & 1) != 0) &&
          (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x51)) &&
         ((uVar4 = LookupIterator::HolderIsReceiverOrHiddenPrototype(param_1), (uVar4 & 1) == 0 &&
          ((*(byte *)(*puVar3 + 7) >> 3 & 1) != 0)))) goto switchD_0110c80c_caseD_7;
      uVar4 = SetPropertyWithAccessor(param_1,param_2,param_3);
    }
    else {
LAB_0110c91c:
      uVar4 = WriteToReadOnlyProperty(param_1,param_2,param_3);
    }
    break;
  case 6:
    if (((byte)param_1[0x10] >> 3 & 1) != 0) goto LAB_0110c91c;
    uVar4 = LookupIterator::HolderIsReceiverOrHiddenPrototype(param_1);
    if ((uVar4 & 1) == 0) goto switchD_0110c80c_caseD_7;
    uVar4 = SetDataProperty(param_1,param_2);
    break;
  case 7:
    goto switchD_0110c80c_caseD_7;
  default:
    goto switchD_0110c80c_default;
  }
  uVar7 = uVar4 >> 8 & 0xff;
  goto LAB_0110ca70;
}

