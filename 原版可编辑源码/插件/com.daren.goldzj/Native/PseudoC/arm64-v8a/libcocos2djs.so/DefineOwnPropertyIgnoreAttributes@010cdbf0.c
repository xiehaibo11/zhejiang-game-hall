
/* v8::internal::JSObject::DefineOwnPropertyIgnoreAttributes(v8::internal::LookupIterator*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::PropertyAttributes,
   v8::Maybe<v8::internal::ShouldThrow>, v8::internal::JSObject::AccessorInfoHandling) */

uint v8::internal::JSObject::DefineOwnPropertyIgnoreAttributes
               (LookupIterator *param_1,undefined8 param_2,uint param_3,undefined8 param_4,
               int param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  Factory *this;
  long lVar4;
  Isolate *this_00;
  uint uVar5;
  ulong uVar6;
  ulong *puVar7;
  
  if (*(long *)(param_1 + 0x48) == -1) {
    lVar4 = *(long *)(param_1 + 0x18);
    iVar1 = **(int **)(param_1 + 0x20);
    if ((((iVar1 == *(int *)(lVar4 + 0xc70)) || (iVar1 == *(int *)(lVar4 + 0x5d0))) ||
        (iVar1 == *(int *)(lVar4 + 0x848))) ||
       (((iVar1 == *(int *)(lVar4 + 0xc48) || (iVar1 == *(int *)(lVar4 + 0xc18))) ||
        ((iVar1 == *(int *)(lVar4 + 0x960) || (iVar1 == *(int *)(lVar4 + 0xa38))))))) {
      LookupIterator::InternalUpdateProtector(lVar4,*(undefined8 *)(param_1 + 0x30));
    }
  }
  puVar7 = *(ulong **)(param_1 + 0x30);
  do {
    switch(*(undefined4 *)(param_1 + 4)) {
    case 0:
      uVar6 = LookupIterator::HasAccess(param_1);
      if ((uVar6 & 1) != 0) goto switchD_010cdcb0_default;
      Isolate::ReportFailedAccessCheck
                (*(Isolate **)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x38));
      this_00 = *(Isolate **)(param_1 + 0x18);
      if (*(int *)(this_00 + 0x2c20) == *(int *)(this_00 + 0xa8)) goto LAB_010cde48;
      Isolate::PromoteScheduledException(this_00);
      uVar2 = 0;
      uVar5 = 0;
      goto LAB_010cde50;
    case 1:
      this = *(Factory **)(param_1 + 0x18);
      lVar4 = *(long *)(param_1 + 0x20);
      if (lVar4 == 0) {
        lVar4 = Factory::SizeToString(this,*(ulong *)(param_1 + 0x48),true);
        *(long *)(param_1 + 0x20) = lVar4;
      }
LAB_010cdd44:
      uVar2 = Object::RedefineIncompatibleProperty(this,lVar4,param_2,param_4);
LAB_010cddd4:
      uVar5 = uVar2 >> 8 & 0xff;
LAB_010cde50:
      return uVar5 << 8 | uVar2 & 0xff;
    case 2:
      if (param_5 == 1) {
        uVar3 = LookupIterator::GetInterceptor(param_1);
        uVar2 = FUN_010d29f8(param_1,uVar3,param_4,param_2);
        uVar5 = uVar2 >> 8 & 0xff;
        if ((uVar2 & 0xff) == 0) {
          uVar2 = 0;
          goto LAB_010cde50;
        }
        if (uVar5 != 0) goto LAB_010cde50;
      }
    default:
switchD_010cdcb0_default:
      LookupIterator::Next(param_1);
      break;
    case 3:
    case 7:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    case 4:
      uVar2 = Object::AddDataProperty(param_1,param_2,param_3,param_4,1);
      goto LAB_010cddd4;
    case 5:
      puVar7 = (ulong *)LookupIterator::GetAccessors();
      uVar6 = *puVar7;
      if ((((uVar6 & 1) == 0) || (param_5 != 1)) ||
         (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x51))
      goto LAB_010cde38;
      if ((*(uint *)(param_1 + 0x10) >> 3 & 7) != param_3) {
        LookupIterator::TransitionToAccessorPair(param_1,puVar7,param_3);
      }
      uVar2 = Object::SetPropertyWithAccessor(param_1,param_2,param_4);
      goto LAB_010cddd4;
    case 6:
      if ((*(uint *)(param_1 + 0x10) >> 3 & 7) == param_3) {
        uVar2 = Object::SetDataProperty(param_1,param_2);
        goto LAB_010cddd4;
      }
      if ((*(ulong *)(param_1 + 0x48) != 0xffffffffffffffff) &&
         ((byte)((*(byte *)((*puVar7 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(*puVar7 - 1)) >>
                 3) - 0x11) < 0xb)) {
        this = *(Factory **)(param_1 + 0x18);
        lVar4 = *(long *)(param_1 + 0x20);
        if (lVar4 == 0) {
          lVar4 = Factory::SizeToString(this,*(ulong *)(param_1 + 0x48),true);
          *(long *)(param_1 + 0x20) = lVar4;
        }
        goto LAB_010cdd44;
      }
LAB_010cde38:
      LookupIterator::ReconfigureDataProperty(param_1,param_2,param_3);
LAB_010cde48:
      uVar2 = 1;
      uVar5 = 1;
      goto LAB_010cde50;
    }
  } while( true );
}

