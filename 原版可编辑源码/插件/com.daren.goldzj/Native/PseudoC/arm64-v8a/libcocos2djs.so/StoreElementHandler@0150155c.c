
/* v8::internal::KeyedStoreIC::StoreElementHandler(v8::internal::Handle<v8::internal::Map>,
   v8::internal::KeyedAccessStoreMode) */

ulong * __thiscall
v8::internal::KeyedStoreIC::StoreElementHandler(KeyedStoreIC *this,long *param_2,uint param_3)

{
  byte bVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  CanonicalHandleScope *this_00;
  ulong uVar7;
  ulong uVar8;
  ulong *local_58 [3];
  
  if (*(short *)(*param_2 + 7) == 0xa9) {
    pIVar2 = *(Isolate **)(this + 8);
    this_00 = *(CanonicalHandleScope **)(pIVar2 + 0x95b8);
    if (this_00 == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar2 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar2);
      }
      *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
      *puVar3 = 0x16;
      return puVar3;
    }
    uVar6 = 0x16;
LAB_015015a0:
    puVar3 = (ulong *)CanonicalHandleScope::Lookup(this_00,uVar6);
  }
  else {
    bVar1 = *(byte *)(*param_2 + 10);
    if ((byte)((bVar1 >> 3) - 0xd) < 2) {
      if (TracingFlags::runtime_stats != 0) {
        RuntimeCallStats::CorrectCurrentCounterId
                  ((RuntimeCallStats *)(*(long *)(*(long *)(this + 8) + 0x9520) + 0x58a0),0x3ff,0);
      }
      CodeFactory::KeyedStoreIC_SloppyArguments(local_58,*(undefined8 *)(this + 8),param_3);
      puVar3 = local_58[0];
    }
    else if ((((bVar1 < 0x30) || ((bVar1 & 0xf0) == 0x30)) || ((bVar1 & 0xf0) == 0x40)) ||
            ((byte)((bVar1 >> 3) - 0x11) < 0xb)) {
      if (TracingFlags::runtime_stats != 0) {
        RuntimeCallStats::CorrectCurrentCounterId
                  ((RuntimeCallStats *)(*(long *)(*(long *)(this + 8) + 0x9520) + 0x58a0),0x402,0);
      }
      CodeFactory::StoreFastElementIC(local_58,*(undefined8 *)(this + 8),param_3);
      puVar3 = local_58[0];
      if ((byte)((*(byte *)(*param_2 + 10) >> 3) - 0x11) < 0xb) {
        return local_58[0];
      }
    }
    else {
      if (*(int *)(this + 0x1c) == 0xe) {
        if (TracingFlags::runtime_stats != 0) {
          RuntimeCallStats::CorrectCurrentCounterId
                    ((RuntimeCallStats *)(*(long *)(*(long *)(this + 8) + 0x9520) + 0x58a0),0x42e,0)
          ;
        }
        pIVar2 = *(Isolate **)(this + 8);
        this_00 = *(CanonicalHandleScope **)(pIVar2 + 0x95b8);
        uVar6 = -(ulong)((param_3 & 0xffff) >> 0xf) & 0xfffffffe00000000 |
                (ulong)(param_3 << 0x10 | 10) << 1;
        if (this_00 == (CanonicalHandleScope *)0x0) {
          puVar3 = *(ulong **)(pIVar2 + 0x95a0);
          if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
            puVar3 = (ulong *)HandleScope::Extend(pIVar2);
          }
          *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
          *puVar3 = uVar6;
          return puVar3;
        }
        goto LAB_015015a0;
      }
      if (TracingFlags::runtime_stats != 0) {
        RuntimeCallStats::CorrectCurrentCounterId
                  ((RuntimeCallStats *)(*(long *)(*(long *)(this + 8) + 0x9520) + 0x58a0),0x401,0);
      }
      pIVar2 = *(Isolate **)(this + 8);
      uVar6 = -(ulong)((param_3 & 0xffff) >> 0xf) & 0xfffffffe00000000 |
              (ulong)(param_3 << 0x10 | 10) << 1;
      if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar3 = *(ulong **)(pIVar2 + 0x95a0);
        if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
          puVar3 = (ulong *)HandleScope::Extend(pIVar2);
        }
        *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
        *puVar3 = uVar6;
      }
      else {
        puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar6);
      }
    }
    if ((*(int *)(this + 0x1c) != 0xe) &&
       (puVar4 = (ulong *)Map::GetOrCreatePrototypeChainValidityCell
                                    (param_2,*(undefined8 *)(this + 8)), (*puVar4 & 1) != 0)) {
      puVar5 = (ulong *)Factory::NewStoreHandler(*(Factory **)(this + 8),0);
      uVar8 = *puVar5;
      uVar6 = *puVar4;
      *(int *)(uVar8 + 7) = (int)uVar6;
      if ((uVar6 & 1) != 0) {
        uVar7 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar7 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar8,uVar8 + 7,uVar6);
          uVar7 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar8,uVar8 + 7,uVar6);
        }
      }
      uVar8 = *puVar5;
      uVar6 = *puVar3;
      *(int *)(uVar8 + 3) = (int)uVar6;
      puVar3 = puVar5;
      if ((uVar6 & 1) != 0) {
        uVar7 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar7 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar8,uVar8 + 3,uVar6);
          uVar7 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar8,uVar8 + 3,uVar6);
        }
      }
    }
  }
  return puVar3;
}

