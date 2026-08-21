
/* v8::internal::JSObject::GetPropertyWithFailedAccessCheck(v8::internal::LookupIterator*) */

long v8::internal::JSObject::GetPropertyWithFailedAccessCheck(LookupIterator *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong uVar4;
  Isolate *this;
  undefined8 uVar5;
  char local_18 [4];
  char local_14 [4];
  
  this = *(Isolate **)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  lVar1 = LookupIterator::GetInterceptorForFailedAccessCheck(param_1);
  if (lVar1 == 0) {
    do {
      uVar4 = AllCanRead(param_1);
      if ((uVar4 & 1) == 0) goto LAB_010d20b4;
      if (*(int *)(param_1 + 4) == 5) {
        lVar1 = Object::GetPropertyWithAccessor(param_1);
        return lVar1;
      }
      uVar2 = LookupIterator::GetInterceptor(param_1);
      lVar1 = FUN_010d217c(param_1,uVar2,local_14);
    } while ((lVar1 != 0) && (local_14[0] == '\0'));
  }
  else {
    lVar1 = FUN_010d217c(param_1,lVar1,local_18);
    if ((lVar1 != 0) && (local_18[0] == '\0')) {
LAB_010d20b4:
      puVar3 = *(ulong **)(param_1 + 0x20);
      if (puVar3 == (ulong *)0x0) {
        puVar3 = (ulong *)Factory::SizeToString
                                    (*(Factory **)(param_1 + 0x18),*(ulong *)(param_1 + 0x48),true);
        *(ulong **)(param_1 + 0x20) = puVar3;
      }
      uVar4 = *puVar3;
      if (((*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x40) &&
          ((*(byte *)(uVar4 + 7) >> 1 & 1) != 0)) ||
         (Isolate::ReportFailedAccessCheck(this,uVar5),
         *(int *)(this + 0x2c20) == *(int *)(this + 0xa8))) {
        lVar1 = *(long *)(param_1 + 0x18) + 0xa0;
      }
      else {
        Isolate::PromoteScheduledException(this);
        lVar1 = 0;
      }
    }
  }
  return lVar1;
}

