
undefined8 FUN_014ab3d8(Factory *param_1,long param_2)

{
  char cVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Factory *pFVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong *puVar9;
  double dVar10;
  LookupIterator aLStack_98 [88];
  
  puVar9 = *(ulong **)(param_2 + 8);
  uVar8 = *puVar9;
  if (((uVar8 & 1) == 0) ||
     (*(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) < 0xa9)) {
    puVar9 = (ulong *)v8::internal::Object::ToObjectImpl(param_1,puVar9,0);
  }
  if ((puVar9 != (ulong *)0x0) &&
     (puVar2 = (ulong *)v8::internal::Object::GetLengthFromArrayLike(param_1,puVar9),
     puVar2 != (ulong *)0x0)) {
    uVar8 = *puVar2;
    if ((uVar8 & 1) == 0) {
      dVar10 = (double)((int)uVar8 >> 1);
    }
    else {
      dVar10 = *(double *)(uVar8 + 3);
    }
    if (dVar10 == 0.0) {
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(undefined8 **)(param_1 + 0x95a0);
        if (puVar7 == *(undefined8 **)(param_1 + 0x95a8)) {
          puVar7 = (undefined8 *)v8::internal::HandleScope::Extend((Isolate *)param_1);
        }
        *(undefined8 **)(param_1 + 0x95a0) = puVar7 + 1;
        *puVar7 = 0;
      }
      else {
        puVar7 = (undefined8 *)
                 v8::internal::CanonicalHandleScope::Lookup
                           (*(CanonicalHandleScope **)(param_1 + 0x95b8),0);
      }
      lVar6 = v8::internal::Object::SetProperty(param_1,puVar9,param_1 + 0x7b8,puVar7,0,1);
      if (lVar6 != 0) {
        pFVar5 = param_1 + 0xa0;
        goto LAB_014ab564;
      }
    }
    else {
      uVar3 = v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>
                        (param_1,dVar10 + -1.0);
      uVar4 = v8::internal::Factory::NumberToString(param_1,uVar3,1);
      v8::internal::LookupIterator::PropertyOrElement(aLStack_98,param_1,puVar9,uVar4,3);
      pFVar5 = (Factory *)v8::internal::Object::GetProperty(aLStack_98,false);
      if (((pFVar5 != (Factory *)0x0) &&
          (cVar1 = v8::internal::JSReceiver::DeletePropertyOrElement(puVar9,uVar4,1), cVar1 != '\0')
          ) && (lVar6 = v8::internal::Object::SetProperty(param_1,puVar9,param_1 + 0x7b8,uVar3,0,1),
               lVar6 != 0)) goto LAB_014ab564;
    }
  }
  pFVar5 = param_1 + 0x180;
LAB_014ab564:
  return *(undefined8 *)pFVar5;
}

