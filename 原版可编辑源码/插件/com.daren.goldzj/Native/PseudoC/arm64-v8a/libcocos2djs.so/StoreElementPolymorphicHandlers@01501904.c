
/* WARNING: Removing unreachable block (ram,0x015019e4) */
/* v8::internal::KeyedStoreIC::StoreElementPolymorphicHandlers(std::__ndk1::vector<v8::internal::Handle<v8::internal::Map>,
   std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map> > >*,
   std::__ndk1::vector<v8::internal::MaybeObjectHandle,
   std::__ndk1::allocator<v8::internal::MaybeObjectHandle> >*, v8::internal::KeyedAccessStoreMode)
    */

void __thiscall
v8::internal::KeyedStoreIC::StoreElementPolymorphicHandlers
          (KeyedStoreIC *this,long *param_1,
          vector<v8::internal::MaybeObjectHandle,std::__ndk1::allocator<v8::internal::MaybeObjectHandle>>
          *param_2,undefined4 param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  Isolate *pIVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong local_70;
  undefined8 *puStack_68;
  
  puVar12 = (undefined8 *)*param_1;
  puVar11 = (undefined8 *)param_1[1];
  puVar3 = puVar12;
  uVar4 = local_70;
  if (puVar12 != puVar11) {
    uVar1 = *(uint *)(*(long *)*puVar12 + 0xb);
    while ((uVar1 >> 0x18 & 1) == 0) {
      puVar3 = puVar3 + 1;
      if (puVar11 == puVar3) goto joined_r0x01501a00;
      uVar1 = *(uint *)(*(long *)*puVar3 + 0xb);
    }
  }
  if ((puVar3 != puVar11) && (puVar7 = puVar3 + 1, puVar9 = puVar3, puVar7 != puVar11)) {
    do {
      puVar3 = puVar9;
      if ((*(uint *)(*(long *)*puVar7 + 0xb) >> 0x18 & 1) == 0) {
        puVar3 = puVar9 + 1;
        *puVar9 = (long *)*puVar7;
      }
      puVar7 = puVar7 + 1;
      puVar9 = puVar3;
    } while (puVar11 != puVar7);
    puVar12 = (undefined8 *)*param_1;
    puVar11 = (undefined8 *)param_1[1];
  }
  if (puVar11 != puVar3) {
    param_1[1] = (long)puVar3;
    puVar11 = puVar3;
  }
joined_r0x01501a00:
  do {
    if (puVar12 == puVar11) {
      return;
    }
    puVar10 = (ulong *)*puVar12;
    local_70 = *puVar10;
    if ((*(ushort *)(local_70 + 7) < 0xa9) ||
       (uVar2 = Map::DictionaryElementsInPrototypeChainOnly
                          ((Map *)&local_70,*(Isolate **)(this + 8)), uVar4 = local_70,
       (uVar2 & 1) != 0)) {
      local_70 = uVar4;
      if (TracingFlags::runtime_stats != 0) {
        RuntimeCallStats::CorrectCurrentCounterId
                  ((RuntimeCallStats *)(*(long *)(*(long *)(this + 8) + 0x9520) + 0x58a0),0x400,0);
      }
      pIVar8 = *(Isolate **)(this + 8);
      if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar3 = *(undefined8 **)(pIVar8 + 0x95a0);
        if (puVar3 == *(undefined8 **)(pIVar8 + 0x95a8)) {
          puVar3 = (undefined8 *)HandleScope::Extend(pIVar8);
        }
        *(undefined8 **)(pIVar8 + 0x95a0) = puVar3 + 1;
        *puVar3 = 0x14;
      }
      else {
        puVar3 = (undefined8 *)
                 CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar8 + 0x95b8),0x14);
      }
    }
    else {
      local_70 = *puVar10;
      uVar4 = Map::FindElementsKindTransitionedMap((Isolate *)&local_70,*(vector **)(this + 8));
      if ((int)uVar4 != 0) {
        uVar2 = *puVar10;
        if (((*(uint *)(uVar2 + 0xb) >> 0x19 & 1) == 0) &&
           (uVar6 = *(undefined8 *)(this + 8), (*(uint *)(uVar2 + 0xb) >> 0x19 & 1) == 0)) {
          *(uint *)(uVar2 + 0xb) = *(uint *)(uVar2 + 0xb) | 0x2000000;
          local_70 = uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0x1b);
          DependentCode::DeoptimizeDependentCodeGroup(&local_70,uVar6,1);
        }
        pIVar8 = *(Isolate **)(this + 8);
        if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar5 = *(ulong **)(pIVar8 + 0x95a0);
          if (puVar5 == *(ulong **)(pIVar8 + 0x95a8)) {
            puVar5 = (ulong *)HandleScope::Extend(pIVar8);
          }
          *(ulong **)(pIVar8 + 0x95a0) = puVar5 + 1;
          *puVar5 = uVar4;
        }
        else {
          puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar4);
        }
        if (puVar5 != (ulong *)0x0) {
          if (TracingFlags::runtime_stats != 0) {
            RuntimeCallStats::CorrectCurrentCounterId
                      ((RuntimeCallStats *)(*(long *)(*(long *)(this + 8) + 0x9520) + 0x58a0),0x3fe,
                       0);
          }
          puVar3 = (undefined8 *)
                   StoreHandler::StoreElementTransition
                             (*(undefined8 *)(this + 8),puVar10,puVar5,param_4);
          goto LAB_01501ba8;
        }
      }
      puVar3 = (undefined8 *)StoreElementHandler(this,puVar10,param_4);
    }
LAB_01501ba8:
    local_70 = CONCAT44(local_70._4_4_,1);
    puVar10 = *(ulong **)(param_2 + 8);
    puStack_68 = puVar3;
    if (puVar10 < *(ulong **)(param_2 + 0x10)) {
      puVar10[1] = (ulong)puVar3;
      *puVar10 = local_70;
      *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 0x10;
    }
    else {
      std::__ndk1::
      vector<v8::internal::MaybeObjectHandle,std::__ndk1::allocator<v8::internal::MaybeObjectHandle>>
      ::__push_back_slow_path<v8::internal::MaybeObjectHandle>
                (param_2,(MaybeObjectHandle *)&local_70);
    }
    puVar12 = puVar12 + 1;
    uVar4 = local_70;
  } while( true );
}

