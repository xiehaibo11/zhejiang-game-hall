
/* v8::internal::Genesis::CreateJSProxyMaps() */

void __thiscall v8::internal::Genesis::CreateJSProxyMaps(Genesis *this)

{
  undefined4 *puVar1;
  uint uVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  Isolate *pIVar8;
  ulong uVar9;
  uint *puVar10;
  ulong uVar11;
  ulong local_80;
  Descriptor aDStack_78 [32];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  puVar4 = (ulong *)Factory::NewMap(*(Factory **)this,0xa9,0x10,3,0);
  *(uint *)(*puVar4 + 0xb) = *(uint *)(*puVar4 + 0xb) | 0x2200000;
  *(uint *)(*puVar4 + 0xb) = *(uint *)(*puVar4 + 0xb) | 0x10000000;
  uVar7 = *puVar4;
  uVar9 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar9 + 0x207);
  *puVar1 = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,puVar1,uVar7);
      uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar9,puVar1,uVar7);
    }
  }
  puVar4 = (ulong *)Map::Copy(*(undefined8 *)this,puVar4,"callable Proxy");
  *(byte *)(*puVar4 + 9) = *(byte *)(*puVar4 + 9) | 2;
  uVar7 = *puVar4;
  uVar9 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar9 + 0x1fb);
  *puVar1 = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,puVar1,uVar7);
      uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar9,puVar1,uVar7);
    }
  }
  uVar9 = *puVar4;
  uVar7 = **(ulong **)(this + 0x10);
  uVar2 = *(uint *)(uVar7 + 0xcf);
  puVar10 = (uint *)(uVar9 + 0x13);
  if (((*puVar10 & 1) == 0) ||
     (*(short *)((uVar9 & 0xffffffff00000000 | 7) +
                (ulong)*(uint *)((uVar9 & 0xffffffff00000000 | (ulong)*puVar10) - 1)) != 0xa2)) {
    *puVar10 = uVar2;
    if ((uVar2 & 1) != 0) {
      uVar7 = uVar7 & 0xffffffff00000000;
      uVar11 = uVar7 | uVar2;
      uVar7 = uVar7 | (ulong)uVar2 & 0xfffffffffffc0000;
      uVar6 = *(ulong *)(uVar7 + 8);
      if (((uint)uVar6 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar9,puVar10,uVar11);
        uVar6 = *(ulong *)(uVar7 | 8);
      }
      if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar9,puVar10,uVar11);
      }
    }
    puVar4 = (ulong *)Map::Copy(*(undefined8 *)this,puVar4,"constructor Proxy");
    *(byte *)(*puVar4 + 9) = *(byte *)(*puVar4 + 9) | 0x40;
    uVar7 = *puVar4;
    uVar9 = **(ulong **)(this + 0x10);
    puVar1 = (undefined4 *)(uVar9 + 0x1ff);
    *puVar1 = (int)uVar7;
    if ((uVar7 & 1) != 0) {
      uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar6 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar9,puVar1,uVar7);
        uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar9,puVar1,uVar7);
      }
    }
    puVar4 = (ulong *)Factory::NewMap(*(Factory **)this,0x421,0x14,3,2);
    Map::EnsureDescriptorSlack(*(undefined8 *)this,puVar4,2);
    Descriptor::DataField(aDStack_78,*(long *)this,*(long *)this + 0x910,0,0,4);
    local_80 = *puVar4;
    Map::AppendDescriptor((Map *)&local_80,*(Isolate **)this,aDStack_78);
    Descriptor::DataField(aDStack_78,*(long *)this,*(long *)this + 0x970,1,0,4);
    local_80 = *puVar4;
    Map::AppendDescriptor((Map *)&local_80,*(Isolate **)this,aDStack_78);
    pIVar8 = *(Isolate **)this;
    uVar7 = *(ulong *)(pIVar8 + 0x2bc8) & 0xffffffff00000000;
    uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)((uVar7 | *(uint *)(*(ulong *)(pIVar8 + 0x2bc8) - 1)
                                                 ) + 0x13)) + 0x103);
    if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar8 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar8 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar8);
      }
      *(ulong **)(pIVar8 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar7;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar7);
    }
    Map::SetPrototype(pIVar8,puVar4,puVar5,1);
    uVar9 = *puVar4;
    uVar7 = **(ulong **)(this + 0x10);
    uVar2 = *(uint *)(uVar7 + 499);
    puVar10 = (uint *)(uVar9 + 0x13);
    if (((*puVar10 & 1) == 0) ||
       (*(short *)((uVar9 & 0xffffffff00000000 | 7) +
                  (ulong)*(uint *)((uVar9 & 0xffffffff00000000 | (ulong)*puVar10) - 1)) != 0xa2)) {
      *puVar10 = uVar2;
      if ((uVar2 & 1) != 0) {
        uVar7 = uVar7 & 0xffffffff00000000;
        uVar11 = uVar7 | uVar2;
        uVar7 = uVar7 | (ulong)uVar2 & 0xfffffffffffc0000;
        uVar6 = *(ulong *)(uVar7 + 8);
        if (((uint)uVar6 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar9,puVar10,uVar11);
          uVar6 = *(ulong *)(uVar7 | 8);
        }
        if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar9,puVar10,uVar11);
        }
      }
      uVar7 = *puVar4;
      uVar9 = **(ulong **)(this + 0x10);
      puVar1 = (undefined4 *)(uVar9 + 0x20b);
      *puVar1 = (int)uVar7;
      if ((uVar7 & 1) != 0) {
        uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar6 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar9,puVar1,uVar7);
          uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar9,puVar1,uVar7);
        }
      }
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!constructor_or_backpointer().IsMap()");
}

