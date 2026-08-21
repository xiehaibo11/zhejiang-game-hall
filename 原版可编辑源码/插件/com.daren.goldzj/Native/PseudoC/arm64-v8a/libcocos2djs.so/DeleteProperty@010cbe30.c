
/* v8::internal::JSReceiver::DeleteProperty(v8::internal::LookupIterator*,
   v8::internal::LanguageMode) */

ushort v8::internal::JSReceiver::DeleteProperty(LookupIterator *param_1,uint param_2)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  Factory *this;
  undefined8 uVar7;
  ulong *puVar8;
  
  if (*(long *)(param_1 + 0x48) == -1) {
    lVar5 = *(long *)(param_1 + 0x18);
    iVar1 = **(int **)(param_1 + 0x20);
    if (((((iVar1 == *(int *)(lVar5 + 0xc70)) || (iVar1 == *(int *)(lVar5 + 0x5d0))) ||
         (iVar1 == *(int *)(lVar5 + 0x848))) ||
        ((iVar1 == *(int *)(lVar5 + 0xc48) || (iVar1 == *(int *)(lVar5 + 0xc18))))) ||
       ((iVar1 == *(int *)(lVar5 + 0x960) || (iVar1 == *(int *)(lVar5 + 0xa38))))) {
      LookupIterator::InternalUpdateProtector(lVar5,*(undefined8 *)(param_1 + 0x30));
    }
  }
  iVar1 = *(int *)(param_1 + 4);
  this = *(Factory **)(param_1 + 0x18);
  if (iVar1 == 3) {
    lVar5 = *(long *)(param_1 + 0x20);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    if (lVar5 == 0) {
      lVar5 = Factory::SizeToString(this,*(ulong *)(param_1 + 0x48),true);
      *(long *)(param_1 + 0x20) = lVar5;
    }
    uVar2 = JSProxy::DeletePropertyOrElement(uVar7,lVar5,param_2 & 1);
  }
  else {
    puVar8 = *(ulong **)(param_1 + 0x30);
    uVar6 = *puVar8;
    if (((uVar6 & 1) == 0) ||
       (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0xa9)) {
      uVar2 = 0x101;
      do {
        switch(iVar1) {
        case 0:
          uVar6 = LookupIterator::HasAccess(param_1);
          if ((uVar6 & 1) == 0) {
            Isolate::ReportFailedAccessCheck((Isolate *)this,*(undefined8 *)(param_1 + 0x38));
            if (*(int *)(this + 0x2c20) == *(int *)(this + 0xa8)) {
              return 1;
            }
            Isolate::PromoteScheduledException((Isolate *)this);
            return 0;
          }
          break;
        case 1:
        case 4:
          goto switchD_010cbf68_caseD_1;
        case 2:
          uVar3 = JSObject::DeletePropertyWithInterceptor(param_1,~param_2 & 1);
          if (((*(ulong *)(this + 0x2bd8) & 1) == 0) ||
             ((int)*(ulong *)(this + 0x2bd8) != *(int *)(this + 0xa8))) {
            return 0;
          }
          if ((uVar3 & 0xff) != 0) {
            return uVar3;
          }
          break;
        case 3:
        case 7:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        case 5:
        case 6:
          if (((byte)param_1[0x10] >> 5 & 1) != 0) {
            if ((param_2 & 1) == 0) {
              return 1;
            }
            lVar5 = *(long *)(param_1 + 0x20);
            if (lVar5 == 0) {
              lVar5 = Factory::SizeToString
                                (*(Factory **)(param_1 + 0x18),*(ulong *)(param_1 + 0x48),true);
              *(long *)(param_1 + 0x20) = lVar5;
            }
            puVar4 = (undefined8 *)Factory::NewTypeError(this,0xa3,lVar5,puVar8,0);
            Isolate::Throw((Isolate *)this,*puVar4,0);
            return 0;
          }
          goto LAB_010cbfbc;
        }
        LookupIterator::Next(param_1);
        iVar1 = *(int *)(param_1 + 4);
      } while( true );
    }
    if (iVar1 == 4) {
      uVar2 = 0x101;
    }
    else {
LAB_010cbfbc:
      LookupIterator::Delete(param_1);
      uVar2 = 0x101;
    }
  }
switchD_010cbf68_caseD_1:
  return uVar2;
}

