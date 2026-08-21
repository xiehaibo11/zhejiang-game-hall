
/* v8::internal::Genesis::InitializeGlobal_harmony_weak_refs() */

void __thiscall v8::internal::Genesis::InitializeGlobal_harmony_weak_refs(Genesis *this)

{
  undefined4 *puVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  Isolate *pIVar8;
  ulong uVar9;
  Factory *this_00;
  ulong uVar10;
  Factory *this_01;
  char *local_60;
  undefined8 uStack_58;
  
  if (FLAG_harmony_weak_refs != '\0') {
    this_00 = *(Factory **)this;
    local_60 = (char *)**(undefined8 **)(this + 0x10);
    uVar2 = Context::global_object((Context *)&local_60);
    pIVar8 = *(Isolate **)this;
    if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar8 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar8 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar8);
      }
      *(ulong **)(pIVar8 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar2;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar2);
    }
    local_60 = "FinalizationGroup";
    uStack_58 = 0x11;
    lVar4 = Factory::NewStringFromOneByte(this_00,&local_60,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    pIVar8 = *(Isolate **)this;
    uVar2 = *(ulong *)(pIVar8 + 0x2bc8) & 0xffffffff00000000;
    uVar2 = uVar2 | *(uint *)((uVar2 | *(uint *)((uVar2 | *(uint *)(*(ulong *)(pIVar8 + 0x2bc8) - 1)
                                                 ) + 0x13)) + 499);
    if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar8 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar8 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar8);
      }
      *(ulong **)(pIVar8 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar2;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar2);
    }
    uVar6 = Factory::NewJSObject(this_00,puVar5,1);
    puVar5 = (ulong *)FUN_01028494(*(undefined8 *)this,lVar4,0x42a,0x28,0,uVar6,0x28e);
    FUN_010369f8(*(undefined8 *)this,puVar5,0x66);
    *(undefined2 *)((*puVar5 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar5 + 0xb)) + 0x15) =
         0xffff;
    *(undefined2 *)((*puVar5 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar5 + 0xb)) + 0x13) = 1;
    JSObject::AddProperty(*(undefined8 *)this,uVar6,this_00 + 0x5d0,puVar5,2);
    FUN_01036ca4(*(undefined8 *)this,uVar6,lVar4);
    JSObject::AddProperty(*(undefined8 *)this,puVar3,lVar4,puVar5,2);
    FUN_01029064(*(undefined8 *)this,uVar6,"register",0x28f,2,0,2);
    FUN_01029064(*(undefined8 *)this,uVar6,"unregister",0x290,1,0,2);
    FUN_01029064(*(undefined8 *)this,uVar6,"cleanupSome",0x28d,0,0,2);
    uVar6 = Factory::NewMap(this_00,0x431,0x10,3,0);
    pIVar8 = *(Isolate **)this;
    uVar2 = *(ulong *)(pIVar8 + 0x2bc8) & 0xffffffff00000000;
    uVar2 = uVar2 | *(uint *)((uVar2 | *(uint *)((uVar2 | *(uint *)(*(ulong *)(pIVar8 + 0x2bc8) - 1)
                                                 ) + 0x13)) + 499);
    if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar8 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar8 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar8);
      }
      *(ulong **)(pIVar8 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar2;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar2);
    }
    uVar7 = Factory::NewJSObject(this_00,puVar5,1);
    Map::SetPrototype(*(undefined8 *)this,uVar6,uVar7,1);
    FUN_01036ca4(*(undefined8 *)this,uVar7,this_00 + 0xae0);
    FUN_01029064(*(undefined8 *)this,uVar7,"deref",0x292,0,0,2);
    uStack_58 = __strlen_chk("WeakRef",8);
    local_60 = "WeakRef";
    uVar6 = Factory::InternalizeUtf8String(this_00,(Vector *)&local_60);
    puVar5 = (ulong *)FUN_01028494(*(undefined8 *)this,uVar6,0x431,0x10,0,uVar7,0x291);
    FUN_010369f8(*(undefined8 *)this,puVar5,0x65);
    *(undefined2 *)((*puVar5 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar5 + 0xb)) + 0x15) =
         0xffff;
    *(undefined2 *)((*puVar5 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar5 + 0xb)) + 0x13) = 1;
    JSObject::AddProperty(*(undefined8 *)this,uVar7,this_00 + 0x5d0,puVar5,2);
    JSObject::AddProperty(*(undefined8 *)this,puVar3,uVar6,puVar5,2);
    pIVar8 = *(Isolate **)this;
    uVar2 = **(ulong **)(this + 0x10) & 0xffffffff00000000 |
            (ulong)*(uint *)(**(ulong **)(this + 0x10) + 0xf7);
    if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar8 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar8 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar8);
      }
      *(ulong **)(pIVar8 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar2;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar2);
    }
    pIVar8 = *(Isolate **)this;
    uVar2 = *(ulong *)(pIVar8 + 0x2bc8) & 0xffffffff00000000;
    uVar2 = uVar2 | *(uint *)((uVar2 | *(uint *)((uVar2 | *(uint *)(*(ulong *)(pIVar8 + 0x2bc8) - 1)
                                                 ) + 0x13)) + 499);
    if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar8 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar8 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar8);
      }
      *(ulong **)(pIVar8 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar2;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar2);
    }
    uVar6 = Factory::NewJSObject(this_00,puVar5,1);
    JSObject::ForceSetPrototype(uVar6,puVar3);
    this_01 = *(Factory **)this;
    uStack_58 = __strlen_chk("FinalizationGroup Cleanup Iterator",0x23);
    local_60 = "FinalizationGroup Cleanup Iterator";
    uVar7 = Factory::InternalizeUtf8String(this_01,(Vector *)&local_60);
    FUN_01036ca4(this_01,uVar6,uVar7);
    FUN_01029064(*(undefined8 *)this,uVar6,"next",0x28c,0,1,2);
    puVar3 = (ulong *)Factory::NewMap(this_00,0x42b,0x10,3,0);
    Map::SetPrototype(*(undefined8 *)this,puVar3,uVar6,1);
    uVar2 = *puVar3;
    uVar10 = **(ulong **)(this + 0x10);
    puVar1 = (undefined4 *)(uVar10 + 399);
    *puVar1 = (int)uVar2;
    if ((uVar2 & 1) != 0) {
      uVar9 = *(ulong *)((uVar2 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar9 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar10,puVar1,uVar2);
        uVar9 = *(ulong *)(uVar2 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar10,puVar1,uVar2);
      }
    }
  }
  return;
}

