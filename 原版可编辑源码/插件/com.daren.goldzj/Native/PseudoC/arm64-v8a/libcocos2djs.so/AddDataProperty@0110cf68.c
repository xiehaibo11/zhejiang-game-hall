
/* v8::internal::Object::AddDataProperty(v8::internal::LookupIterator*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::PropertyAttributes,
   v8::Maybe<v8::internal::ShouldThrow>, v8::internal::StoreOrigin) */

undefined8
v8::internal::Object::AddDataProperty
          (LookupIterator *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined4 param_5)

{
  Isolate *pIVar1;
  int iVar2;
  Isolate *pIVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  Factory *this;
  double dVar14;
  double dVar15;
  ulong local_58;
  
  puVar13 = *(ulong **)(param_1 + 0x30);
  uVar10 = *puVar13;
  if (((uVar10 & 1) == 0) ||
     (uVar11 = uVar10 & 0xffffffff00000000 | 7, *(ushort *)(uVar11 + *(uint *)(uVar10 - 1)) < 0xa9))
  {
    this = *(Factory **)(param_1 + 0x18);
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 == 0) {
      lVar4 = Factory::SizeToString(this,*(ulong *)(param_1 + 0x48),true);
      *(long *)(param_1 + 0x20) = lVar4;
    }
    iVar2 = GetShouldThrow(this,param_4);
    if (iVar2 == 1) {
      return 1;
    }
    uVar8 = TypeOf(this,puVar13);
    puVar5 = (undefined8 *)Factory::NewTypeError(this,0xa6,lVar4,uVar8,puVar13);
    uVar8 = *puVar5;
LAB_0110d0dc:
    Isolate::Throw((Isolate *)this,uVar8,0);
    uVar8 = 0;
  }
  else {
    if (*(short *)(uVar11 + *(uint *)(uVar10 - 1)) == 0xa9) {
      puVar13 = *(ulong **)(param_1 + 0x20);
      if (puVar13 == (ulong *)0x0) {
        puVar13 = (ulong *)Factory::SizeToString
                                     (*(Factory **)(param_1 + 0x18),*(ulong *)(param_1 + 0x48),true)
        ;
        *(ulong **)(param_1 + 0x20) = puVar13;
      }
      uVar10 = *puVar13;
      if ((*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0x40) &&
         ((*(byte *)(uVar10 + 7) & 1) != 0)) {
        if (puVar13 == (ulong *)0x0) {
          puVar13 = (ulong *)Factory::SizeToString
                                       (*(Factory **)(param_1 + 0x18),*(ulong *)(param_1 + 0x48),
                                        true);
          *(ulong **)(param_1 + 0x20) = puVar13;
        }
        uVar10 = *puVar13;
        if ((*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x40)
           || ((*(byte *)(uVar10 + 7) >> 4 & 1) == 0)) {
          iVar2 = GetShouldThrow(*(undefined8 *)(param_1 + 0x18),param_4);
          if (iVar2 == 1) {
            return 1;
          }
          this = *(Factory **)(param_1 + 0x18);
          puVar5 = (undefined8 *)Factory::NewTypeError(this,0x8f,0,0,0);
          uVar8 = *puVar5;
          goto LAB_0110d0dc;
        }
      }
    }
    puVar13 = *(ulong **)(param_1 + 0x30);
    uVar10 = *puVar13;
    if ((uVar10 & 1) != 0) {
      pIVar3 = *(Isolate **)(param_1 + 0x18);
      if ((*(short *)(((ulong)pIVar3 | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0xab) &&
         (pIVar1 = pIVar3 + *(uint *)(((ulong)pIVar3 | 0xf) + (ulong)*(uint *)(uVar10 - 1)),
         *(short *)(((ulong)pIVar3 | 7) + (ulong)*(uint *)(pIVar1 + -1)) == 0xaa)) {
        if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar13 = *(ulong **)(pIVar3 + 0x95a0);
          if (puVar13 == *(ulong **)(pIVar3 + 0x95a8)) {
            puVar13 = (ulong *)HandleScope::Extend(pIVar3);
          }
          *(ulong **)(pIVar3 + 0x95a0) = puVar13 + 1;
          *puVar13 = (ulong)pIVar1;
        }
        else {
          puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),(ulong)pIVar1);
        }
      }
    }
    uVar12 = *puVar13;
    uVar11 = uVar12 & 0xffffffff00000000;
    uVar10 = uVar11 | 7;
    if (*(short *)(uVar10 + *(uint *)(uVar12 - 1)) != 0xab) {
      this = *(Factory **)(param_1 + 0x18);
      uVar6 = *(ulong *)(param_1 + 0x48);
      if ((*(uint *)(((ulong)this | 0xb) + (ulong)*(uint *)(uVar12 - 1)) >> 0x1b & 1) == 0) {
        if (((uVar6 != 0xffffffffffffffff) ||
            (*(short *)(((ulong)this | 7) + (ulong)*(uint *)(**(long **)(param_1 + 0x20) + -1)) !=
             0x40)) || ((*(byte *)(**(long **)(param_1 + 0x20) + 7) & 1) == 0)) {
          iVar2 = GetShouldThrow(this,param_4);
          if (iVar2 == 1) {
            return 1;
          }
          pIVar3 = *(Isolate **)(param_1 + 0x20);
          if (pIVar3 == (Isolate *)0x0) {
            pIVar3 = (Isolate *)
                     Factory::SizeToString
                               (*(Factory **)(param_1 + 0x18),*(ulong *)(param_1 + 0x48),true);
            *(Isolate **)(param_1 + 0x20) = pIVar3;
          }
          uVar7 = 0x6a;
          uVar8 = 0;
          puVar13 = (ulong *)0x0;
LAB_0110d22c:
          puVar5 = (undefined8 *)Factory::NewTypeError(this,uVar7,pIVar3,uVar8,puVar13);
          uVar8 = *puVar5;
          goto LAB_0110d0dc;
        }
LAB_0110d29c:
        iVar2 = **(int **)(param_1 + 0x20);
        if (((((iVar2 == *(int *)(this + 0xc70)) || (iVar2 == *(int *)(this + 0x5d0))) ||
             ((iVar2 == *(int *)(this + 0x848) ||
              ((iVar2 == *(int *)(this + 0xc48) || (iVar2 == *(int *)(this + 0xc18))))))) ||
            (iVar2 == *(int *)(this + 0x960))) || (iVar2 == *(int *)(this + 0xa38))) {
          LookupIterator::InternalUpdateProtector(this,*(undefined8 *)(param_1 + 0x30));
        }
LAB_0110d304:
        LookupIterator::PrepareTransitionToDataProperty(param_1,puVar13,param_2,param_3,param_5);
        LookupIterator::ApplyTransitionToDataProperty(param_1,puVar13);
        LookupIterator::WriteDataValue(param_1,param_2,1);
        if (FLAG_verify_heap != '\0') {
          local_58 = *puVar13;
          HeapObject::HeapObjectVerify((HeapObject *)&local_58,(Isolate *)this);
        }
      }
      else {
        if (0xfffffffe < uVar6) {
          if (uVar6 == 0xffffffffffffffff) goto LAB_0110d29c;
          if (10 < (byte)((*(byte *)((uVar11 | *(uint *)(uVar12 - 1)) + 10) >> 3) - 0x11))
          goto LAB_0110d304;
        }
        if (*(short *)(uVar10 + *(uint *)(uVar12 - 1)) == 0x423) {
          uVar9 = *(uint *)(uVar12 + 0xb);
          if ((uVar9 & 1) == 0) {
            if ((int)uVar9 < 0) goto LAB_0110d42c;
            uVar9 = uVar9 >> 1;
          }
          else {
            if (*(short *)(uVar10 + *(uint *)((uVar11 | uVar9) - 1)) != 0x42) {
LAB_0110d42c:
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","array->length().ToArrayLength(&length)");
            }
            dVar14 = *(double *)((uVar11 | uVar9) + 3);
            dVar15 = dVar14 + 4503599627370496.0;
            if (((ulong)dVar15 >> 0x20 != 0x43300000) ||
               (dVar14 != (double)((ulong)dVar15 & 0xffffffff))) goto LAB_0110d42c;
            uVar9 = SUB84(dVar15,0);
          }
          if (uVar9 <= (uint)uVar6) {
            uVar10 = JSArray::HasReadOnlyLength(puVar13);
            if ((uVar10 & 1) != 0) {
              iVar2 = GetShouldThrow(*(undefined8 *)(param_1 + 0x18),param_4);
              if (iVar2 == 1) {
                return 1;
              }
              pIVar3 = (Isolate *)(this + 0x7b8);
              uVar8 = TypeOf(this,puVar13);
              uVar7 = 0xa5;
              goto LAB_0110d22c;
            }
            uVar6 = *(ulong *)(param_1 + 0x48);
          }
        }
        JSObject::AddDataElement(puVar13,uVar6,param_2,param_3);
        JSObject::ValidateElements(*puVar13);
      }
    }
    uVar8 = 0x101;
  }
  return uVar8;
}

