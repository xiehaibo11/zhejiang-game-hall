
/* void v8::internal::LookupIterator::NextInternal<true>(v8::internal::Map,
   v8::internal::JSReceiver) */

void __thiscall
v8::internal::LookupIterator::NextInternal<true>
          (LookupIterator *this,Isolate *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  int iVar2;
  Isolate *pIVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  Isolate *pIVar6;
  
  pIVar3 = *(Isolate **)(this + 0x18);
  pIVar1 = pIVar3 + *(uint *)(param_2 + 0xf);
  if ((int)(pIVar3 + *(uint *)(param_2 + 0xf)) != *(int *)(pIVar3 + 0xb0)) {
    while (((pIVar6 = pIVar1, ((byte)*this >> 1 & 1) != 0 || (*(short *)(param_2 + 7) == 0xab)) &&
           ((int)pIVar6 != 0))) {
      param_2 = pIVar3 + *(uint *)(pIVar6 + -1);
      if (*(ushort *)(param_2 + 7) < 0x411) {
        iVar2 = LookupInSpecialHolder<true>();
      }
      else {
        iVar2 = LookupInRegularHolder<true>(this,param_2,pIVar6);
      }
      pIVar3 = *(Isolate **)(this + 0x18);
      *(int *)(this + 4) = iVar2;
      if (iVar2 != 4) {
        if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar5 = *(undefined8 **)(pIVar3 + 0x95a0);
          if (puVar5 == *(undefined8 **)(pIVar3 + 0x95a8)) {
            puVar5 = (undefined8 *)HandleScope::Extend(pIVar3);
          }
          *(undefined8 **)(pIVar3 + 0x95a0) = puVar5 + 1;
          *puVar5 = pIVar6;
        }
        else {
          puVar5 = (undefined8 *)
                   CanonicalHandleScope::Lookup
                             (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),(ulong)pIVar6);
        }
        goto LAB_010e40a8;
      }
      pIVar1 = pIVar3 + *(uint *)(param_2 + 0xf);
      param_3 = pIVar6;
      if ((int)(pIVar3 + *(uint *)(param_2 + 0xf)) == *(int *)(pIVar3 + 0xb0)) break;
    }
  }
  if (*(int *)(this + 0xc) == 1) {
    RestartInternal<true>(this,2);
    return;
  }
  *(undefined4 *)(this + 4) = 4;
  if ((int)param_3 != **(int **)(this + 0x38)) {
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(undefined8 **)(pIVar3 + 0x95a0);
      if (puVar5 == *(undefined8 **)(pIVar3 + 0x95a8)) {
        puVar5 = (undefined8 *)HandleScope::Extend(pIVar3);
      }
      *(undefined8 **)(pIVar3 + 0x95a0) = puVar5 + 1;
      *puVar5 = param_3;
LAB_010e40a8:
      *(undefined8 **)(this + 0x38) = puVar5;
    }
    else {
      uVar4 = CanonicalHandleScope::Lookup
                        (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),(ulong)param_3);
      *(undefined8 *)(this + 0x38) = uVar4;
    }
  }
  return;
}

