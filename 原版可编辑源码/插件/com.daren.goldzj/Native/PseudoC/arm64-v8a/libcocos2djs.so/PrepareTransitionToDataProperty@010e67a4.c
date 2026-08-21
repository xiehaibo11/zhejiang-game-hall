
/* v8::internal::LookupIterator::PrepareTransitionToDataProperty(v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::PropertyAttributes,
   v8::internal::StoreOrigin) */

void __thiscall
v8::internal::LookupIterator::PrepareTransitionToDataProperty
          (LookupIterator *this,long *param_2,undefined8 param_3,uint param_4,undefined4 param_5)

{
  Isolate *pIVar1;
  uint uVar2;
  int iVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  long *plVar6;
  long lVar7;
  
  if (*(int *)(this + 4) != 7) {
    if (*(long *)(this + 0x48) == -1) {
      pIVar4 = *(Isolate **)(this + 0x18);
      if (*(short *)(((ulong)pIVar4 | 7) + (ulong)*(uint *)(**(long **)(this + 0x20) + -1)) == 0x40)
      {
        param_4 = (*(uint *)(**(long **)(this + 0x20) + 7) & 1) << 1 | param_4;
      }
    }
    else {
      pIVar4 = *(Isolate **)(this + 0x18);
    }
    pIVar1 = pIVar4 + *(uint *)(*param_2 + -1);
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
      *puVar5 = (ulong)pIVar1;
      uVar2 = *(uint *)(pIVar1 + 0xb);
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),(ulong)pIVar1);
      uVar2 = *(uint *)(*puVar5 + 0xb);
    }
    if ((uVar2 >> 0x15 & 1) == 0) {
      plVar6 = (long *)Map::TransitionToDataProperty
                                 (*(undefined8 *)(this + 0x18),puVar5,*(undefined8 *)(this + 0x20),
                                  param_3,param_4,1,param_5);
      *(undefined4 *)(this + 4) = 7;
      *(long **)(this + 0x28) = plVar6;
      lVar7 = *plVar6;
      if ((*(uint *)(lVar7 + 0xb) >> 0x15 & 1) == 0) {
        iVar3 = *(int *)(*(long *)(this + 0x18) + (ulong)*(uint *)(lVar7 + 0x17) +
                        ((long)(int)((*(uint *)(lVar7 + 0xb) >> 10 & 0x3ff) - 1) * 0xc00000000 +
                         0x1000000000 >> 0x20 | 3U));
        this[8] = (LookupIterator)0x1;
        *(int *)(this + 0x10) = iVar3 >> 1;
      }
      else {
        *(uint *)(this + 0x10) = param_4 << 3 | 0xc0;
      }
    }
    else {
      *(undefined4 *)(this + 4) = 7;
      if (*(short *)(*puVar5 + 7) == 0xaa) {
        plVar6 = (long *)JSGlobalObject::EnsureEmptyPropertyCell
                                   (param_2,*(undefined8 *)(this + 0x20),0,this + 0x50);
        pIVar4 = *(Isolate **)(this + 0x18);
        uVar2 = *(uint *)(*param_2 + 3);
        if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar5 = *(ulong **)(pIVar4 + 0x95a0);
          if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
            puVar5 = (ulong *)HandleScope::Extend(pIVar4);
          }
          *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
          *puVar5 = (ulong)(pIVar4 + uVar2);
        }
        else {
          puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),
                                       (ulong)(pIVar4 + uVar2));
        }
        *(long **)(this + 0x28) = plVar6;
        uVar2 = *(uint *)(*puVar5 + 0x13);
        *(uint *)(*puVar5 + 0x13) = uVar2 + 2 & 0xfffffffe;
        *(uint *)(this + 0x10) = (uVar2 & 0x1fffffe) << 7 | param_4 << 3;
        iVar3 = PropertyCell::UpdatedType(*(undefined8 *)(this + 0x18),plVar6,param_3);
        uVar2 = *(uint *)(this + 0x10) & 0xffffff3f | iVar3 << 6;
        *(uint *)(this + 0x10) = uVar2;
        *(uint *)(*plVar6 + 7) = uVar2 << 1;
        this[8] = (LookupIterator)0x1;
      }
      else {
        *(uint *)(this + 0x10) = param_4 << 3 | 0xc0;
        *(ulong **)(this + 0x28) = puVar5;
      }
    }
  }
  return;
}

