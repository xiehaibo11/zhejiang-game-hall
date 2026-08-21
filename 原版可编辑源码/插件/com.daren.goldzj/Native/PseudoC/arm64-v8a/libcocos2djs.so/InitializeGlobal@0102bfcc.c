
/* v8::internal::Genesis::InitializeGlobal(v8::internal::Handle<v8::internal::JSGlobalObject>,
   v8::internal::Handle<v8::internal::JSFunction>) */

void __thiscall
v8::internal::Genesis::InitializeGlobal(Genesis *this,ulong *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  Factory *pFVar2;
  Factory *pFVar3;
  uint uVar4;
  long lVar5;
  ulong *puVar6;
  Isolate *pIVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  Factory *this_00;
  ulong uVar17;
  undefined8 uVar18;
  Factory *pFVar19;
  Factory *pFVar20;
  ulong uVar21;
  Factory *this_01;
  undefined8 uVar22;
  Factory *pFVar23;
  Genesis *pGVar24;
  uint *puVar25;
  double dVar26;
  double dVar27;
  ulong local_e8;
  undefined1 *local_e0;
  undefined8 uStack_d8;
  char *local_c0;
  undefined8 uStack_b8;
  long local_80;
  
  lVar5 = tpidr_el0;
  local_80 = *(long *)(lVar5 + 0x28);
  pGVar24 = this + 0x10;
  *(undefined4 *)(**(long **)pGVar24 + 0xb) = 0;
  uVar16 = *param_2;
  uVar17 = **(ulong **)pGVar24;
  *(int *)(uVar17 + 0xf) = (int)uVar16;
  if ((uVar16 & 1) != 0) {
    uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar15 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar17,uVar17 + 0xf,uVar16);
      uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar17,uVar17 + 0xf,uVar16);
    }
  }
  uVar16 = *param_2;
  uVar17 = **(ulong **)pGVar24;
  puVar1 = (undefined4 *)(uVar17 + 0x27b);
  *puVar1 = (int)uVar16;
  if ((uVar16 & 1) != 0) {
    uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar15 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
      uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
    }
  }
  this_00 = *(Factory **)this;
  puVar6 = (ulong *)Factory::NewMap(this_00,0x8d,0,3,0);
  uVar17 = *puVar6;
  uVar16 = **(ulong **)(this + 0x10);
  *(int *)(uVar17 + 0x13) = (int)uVar16;
  if ((uVar16 & 1) != 0) {
    uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar15 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar17,uVar17 + 0x13,uVar16);
      uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar17,uVar17 + 0x13,uVar16);
    }
  }
  uVar16 = *puVar6;
  uVar17 = **(ulong **)pGVar24;
  puVar1 = (undefined4 *)(uVar17 + 0x1a7);
  *puVar1 = (int)uVar16;
  if ((uVar16 & 1) != 0) {
    uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar15 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
      uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
    }
  }
  puVar6 = (ulong *)Factory::NewMap(this_00,0x8a,0,3,0);
  uVar17 = *puVar6;
  uVar16 = **(ulong **)pGVar24;
  *(int *)(uVar17 + 0x13) = (int)uVar16;
  if ((uVar16 & 1) != 0) {
    uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar15 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar17,uVar17 + 0x13,uVar16);
      uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar17,uVar17 + 0x13,uVar16);
    }
  }
  uVar16 = *puVar6;
  uVar17 = **(ulong **)pGVar24;
  puVar1 = (undefined4 *)(uVar17 + 0x1bf);
  *puVar1 = (int)uVar16;
  if ((uVar16 & 1) != 0) {
    uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar15 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
      uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
    }
  }
  puVar6 = (ulong *)Factory::NewMap(this_00,0x91,0,3,0);
  uVar17 = *puVar6;
  uVar16 = **(ulong **)pGVar24;
  *(int *)(uVar17 + 0x13) = (int)uVar16;
  if ((uVar16 & 1) != 0) {
    uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar15 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar17,uVar17 + 0x13,uVar16);
      uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar17,uVar17 + 0x13,uVar16);
    }
  }
  uVar16 = *puVar6;
  uVar17 = **(ulong **)pGVar24;
  puVar1 = (undefined4 *)(uVar17 + 0x1c3);
  *puVar1 = (int)uVar16;
  if ((uVar16 & 1) != 0) {
    uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar15 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
      uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
    }
  }
  puVar6 = (ulong *)Factory::NewMap(this_00,0x8b,0,3,0);
  uVar17 = *puVar6;
  uVar16 = **(ulong **)pGVar24;
  *(int *)(uVar17 + 0x13) = (int)uVar16;
  if ((uVar16 & 1) != 0) {
    uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar15 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar17,uVar17 + 0x13,uVar16);
      uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar17,uVar17 + 0x13,uVar16);
    }
  }
  uVar16 = *puVar6;
  uVar17 = **(ulong **)pGVar24;
  puVar1 = (undefined4 *)(uVar17 + 0x1c7);
  *puVar1 = (int)uVar16;
  if ((uVar16 & 1) != 0) {
    uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar15 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
      uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
    }
  }
  puVar6 = (ulong *)Factory::NewMap(this_00,0x89,0,3,0);
  uVar17 = *puVar6;
  uVar16 = **(ulong **)pGVar24;
  *(int *)(uVar17 + 0x13) = (int)uVar16;
  if ((uVar16 & 1) != 0) {
    uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar15 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar17,uVar17 + 0x13,uVar16);
      uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar17,uVar17 + 0x13,uVar16);
    }
  }
  uVar16 = *puVar6;
  uVar17 = **(ulong **)pGVar24;
  puVar1 = (undefined4 *)(uVar17 + 0x1bb);
  *puVar1 = (int)uVar16;
  if ((uVar16 & 1) != 0) {
    uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar15 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
      uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
    }
  }
  puVar6 = (ulong *)Factory::NewMap(this_00,0x8e,0,3,0);
  uVar17 = *puVar6;
  uVar16 = **(ulong **)pGVar24;
  *(int *)(uVar17 + 0x13) = (int)uVar16;
  if ((uVar16 & 1) != 0) {
    uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar15 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar17,uVar17 + 0x13,uVar16);
      uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar17,uVar17 + 0x13,uVar16);
    }
  }
  uVar16 = *puVar6;
  uVar17 = **(ulong **)pGVar24;
  puVar1 = (undefined4 *)(uVar17 + 0x1ab);
  *puVar1 = (int)uVar16;
  if ((uVar16 & 1) != 0) {
    uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar15 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
      uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
    }
  }
  puVar6 = (ulong *)Factory::NewMap(this_00,0x88,0,3,0);
  uVar17 = *puVar6;
  uVar16 = **(ulong **)pGVar24;
  *(int *)(uVar17 + 0x13) = (int)uVar16;
  if ((uVar16 & 1) != 0) {
    uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar15 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar17,uVar17 + 0x13,uVar16);
      uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar17,uVar17 + 0x13,uVar16);
    }
  }
  uVar16 = *puVar6;
  uVar17 = **(ulong **)pGVar24;
  puVar1 = (undefined4 *)(uVar17 + 0x1b7);
  *puVar1 = (int)uVar16;
  if ((uVar16 & 1) != 0) {
    uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar15 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
      uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
    }
  }
  puVar6 = (ulong *)Factory::NewMap(this_00,0x90,0,3,0);
  uVar17 = *puVar6;
  uVar16 = **(ulong **)pGVar24;
  *(int *)(uVar17 + 0x13) = (int)uVar16;
  if ((uVar16 & 1) != 0) {
    uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar15 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar17,uVar17 + 0x13,uVar16);
      uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar17,uVar17 + 0x13,uVar16);
    }
  }
  uVar16 = *puVar6;
  uVar17 = **(ulong **)pGVar24;
  puVar1 = (undefined4 *)(uVar17 + 0x1b3);
  *puVar1 = (int)uVar16;
  if ((uVar16 & 1) != 0) {
    uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar15 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
      uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
    }
  }
  puVar6 = (ulong *)Factory::NewMap(this_00,0x8c,0,3,0);
  uVar17 = *puVar6;
  uVar16 = **(ulong **)pGVar24;
  *(int *)(uVar17 + 0x13) = (int)uVar16;
  if ((uVar16 & 1) != 0) {
    uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar15 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar17,uVar17 + 0x13,uVar16);
      uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar17,uVar17 + 0x13,uVar16);
    }
  }
  uVar16 = *puVar6;
  uVar17 = **(ulong **)pGVar24;
  puVar1 = (undefined4 *)(uVar17 + 0x1af);
  *puVar1 = (int)uVar16;
  if ((uVar16 & 1) != 0) {
    uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar15 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
      uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
    }
  }
  puVar6 = (ulong *)Factory::NewScriptContextTable(this_00);
  uVar16 = *puVar6;
  uVar17 = **(ulong **)pGVar24;
  puVar1 = (undefined4 *)(uVar17 + 0x273);
  *puVar1 = (int)uVar16;
  if ((uVar16 & 1) != 0) {
    uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar15 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
      uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
    }
  }
  InstallGlobalThisBinding(this);
  pIVar7 = *(Isolate **)this;
  uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
  uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(pIVar7 + 0x2bc8) -
                                                                     1)) + 0x13)) + 499);
  if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar16;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar16);
  }
  JSObject::AddProperty(*(undefined8 *)this,param_2,this_00 + 0x8a0,puVar6,2);
  FUN_01029064(*(undefined8 *)this,puVar6,"assign",0x1ab,2,0,2);
  FUN_01029064(*(undefined8 *)this,puVar6,"getOwnPropertyDescriptor",0x1b3,2,0,2);
  FUN_01029064(*(undefined8 *)this,puVar6,"getOwnPropertyDescriptors",0x1b4,1,0,2);
  FUN_01029064(*(undefined8 *)this,puVar6,"getOwnPropertyNames",0x1b5,1,1,2);
  FUN_01029064(*(undefined8 *)this,puVar6,"getOwnPropertySymbols",0x1b6,1,0,2);
  FUN_01029064(*(undefined8 *)this,puVar6,"is",0x1b7,2,1,2);
  FUN_01029064(*(undefined8 *)this,puVar6,"preventExtensions",0x32a,1,1,2);
  FUN_01029064(*(undefined8 *)this,puVar6,"seal",0x1c5,1,0,2);
  puVar8 = (ulong *)FUN_01029064(*(undefined8 *)this,puVar6,"create",0x1ac,2,0,2);
  uVar16 = *puVar8;
  uVar17 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar17 + 0x3f7);
  *puVar1 = (int)uVar16;
  if ((uVar16 & 1) != 0) {
    uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar15 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
      uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
    }
  }
  FUN_01029064(*(undefined8 *)this,puVar6,"defineProperties",0x1ae,2,1,2);
  FUN_01029064(*(undefined8 *)this,puVar6,"defineProperty",0x1af,3,1,2);
  FUN_01029064(*(undefined8 *)this,puVar6,"freeze",0x1b2,1,0,2);
  FUN_01029064(*(undefined8 *)this,puVar6,"getPrototypeOf",0x32b,1,1,2);
  FUN_01029064(*(undefined8 *)this,puVar6,"setPrototypeOf",0x32c,2,1,2);
  FUN_01029064(*(undefined8 *)this,puVar6,"isExtensible",0x329,1,1,2);
  FUN_01029064(*(undefined8 *)this,puVar6,"isFrozen",0x1b8,1,0,2);
  FUN_01029064(*(undefined8 *)this,puVar6,"isSealed",0x1b9,1,0,2);
  FUN_01029064(*(undefined8 *)this,puVar6,&DAT_019c7514,0x1ba,1,1,2);
  FUN_01029064(*(undefined8 *)this,puVar6,"entries",0x1b1,1,1,2);
  FUN_01029064(*(undefined8 *)this,puVar6,"fromEntries",0x327,1,0,2);
  FUN_01029064(*(undefined8 *)this,puVar6,"values",0x1c7,1,1,2);
  pIVar7 = *(Isolate **)this;
  uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
  uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(pIVar7 + 0x2bc8) -
                                                                     1)) + 0x13)) + 0x103);
  if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar16;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar16);
  }
  FUN_01029064(pIVar7,puVar6,"__defineGetter__",0x1ad,2,1,2);
  pIVar7 = *(Isolate **)this;
  uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
  uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(pIVar7 + 0x2bc8) -
                                                                     1)) + 0x13)) + 0x103);
  if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar16;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar16);
  }
  FUN_01029064(pIVar7,puVar6,"__defineSetter__",0x1b0,2,1,2);
  pIVar7 = *(Isolate **)this;
  uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
  uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(pIVar7 + 0x2bc8) -
                                                                     1)) + 0x13)) + 0x103);
  if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar16;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar16);
  }
  FUN_01029064(pIVar7,puVar6,"hasOwnProperty",0x1bf,1,1,2);
  pIVar7 = *(Isolate **)this;
  uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
  uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(pIVar7 + 0x2bc8) -
                                                                     1)) + 0x13)) + 0x103);
  if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar16;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar16);
  }
  FUN_01029064(pIVar7,puVar6,"__lookupGetter__",0x1bb,1,1,2);
  pIVar7 = *(Isolate **)this;
  uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
  uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(pIVar7 + 0x2bc8) -
                                                                     1)) + 0x13)) + 0x103);
  if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar16;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar16);
  }
  FUN_01029064(pIVar7,puVar6,"__lookupSetter__",0x1bc,1,1,2);
  pIVar7 = *(Isolate **)this;
  uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
  uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(pIVar7 + 0x2bc8) -
                                                                     1)) + 0x13)) + 0x103);
  if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar16;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar16);
  }
  FUN_01029064(pIVar7,puVar6,"isPrototypeOf",0x1c0,1,1,2);
  pIVar7 = *(Isolate **)this;
  uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
  uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(pIVar7 + 0x2bc8) -
                                                                     1)) + 0x13)) + 0x103);
  if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar16;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar16);
  }
  FUN_01029064(pIVar7,puVar6,"propertyIsEnumerable",0x1c1,1,0,2);
  pIVar7 = *(Isolate **)this;
  uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
  uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(pIVar7 + 0x2bc8) -
                                                                     1)) + 0x13)) + 0x103);
  if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar16;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar16);
  }
  puVar6 = (ulong *)FUN_01029064(pIVar7,puVar6,"toString",0x1bd,0,1,2);
  uVar16 = *puVar6;
  uVar17 = **(ulong **)pGVar24;
  puVar1 = (undefined4 *)(uVar17 + 0x387);
  *puVar1 = (int)uVar16;
  if ((uVar16 & 1) != 0) {
    uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar15 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
      uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
    }
  }
  pIVar7 = *(Isolate **)this;
  uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
  uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(pIVar7 + 0x2bc8) -
                                                                     1)) + 0x13)) + 0x103);
  if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar16;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar16);
  }
  FUN_01029064(pIVar7,puVar6,"valueOf",0x1be,0,1,2);
  pIVar7 = *(Isolate **)this;
  uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
  uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(pIVar7 + 0x2bc8) -
                                                                     1)) + 0x13)) + 0x103);
  if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar16;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar16);
  }
  FUN_010368a0(pIVar7,puVar6,this_00 + 0x900,0x1c2,0x1c3);
  pIVar7 = *(Isolate **)this;
  uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
  uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(pIVar7 + 0x2bc8) -
                                                                     1)) + 0x13)) + 0x103);
  if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar16;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar16);
  }
  FUN_01029064(pIVar7,puVar6,"toLocaleString",0x1c4,0,1,2);
  local_c0 = (char *)**(undefined8 **)(this + 0x10);
  uVar16 = Context::global_object((Context *)&local_c0);
  pIVar7 = *(Isolate **)this;
  if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar16;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar16);
  }
  puVar8 = (ulong *)FUN_01036964(*(undefined8 *)this,puVar6,"Function",0x439,0x20,0,param_3,0x13f);
  pIVar7 = *(Isolate **)this;
  uVar17 = *puVar8;
  uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
  uVar4 = *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(pIVar7 + 0x2bc8) - 1)) + 0x13
                                       )) + 0x2ab);
  uVar16 = uVar16 | uVar4;
  if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar9 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar9 = (ulong *)HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar9 + 1;
    *puVar9 = uVar16;
    *(uint *)(uVar17 + 0x1b) = uVar4;
    if ((uVar4 & 1) != 0) goto LAB_0102d4e4;
  }
  else {
    puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar16);
    uVar16 = *puVar9;
    *(int *)(uVar17 + 0x1b) = (int)uVar16;
    if ((uVar16 & 1) != 0) {
LAB_0102d4e4:
      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar15 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar17,uVar17 + 0x1b,uVar16);
        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar17,uVar17 + 0x1b,uVar16);
      }
    }
  }
  *(undefined2 *)((*puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb)) + 0x15) = 0xffff;
  *(undefined2 *)((*puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb)) + 0x13) = 1;
  FUN_010369f8(*(undefined8 *)this,puVar8,0x32);
  pFVar19 = this_00 + 0x5d0;
  JSObject::AddProperty(*(undefined8 *)this,param_3,pFVar19,puVar8,2);
  FUN_01029064(*(undefined8 *)this,param_3,"apply",0x140,2,0,2);
  FUN_01029064(*(undefined8 *)this,param_3,"bind",0x142,1,0,2);
  FUN_01029064(*(undefined8 *)this,param_3,"call",0x143,1,0,2);
  FUN_01029064(*(undefined8 *)this,param_3,"toString",0x145,0,0,2);
  puVar9 = (ulong *)FUN_01028fbc(*(undefined8 *)this,param_3,this_00 + 0xc68,"[Symbol.hasInstance]",
                                 0x144,1,1,7);
  uVar16 = *puVar9;
  uVar17 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar17 + 899);
  *puVar1 = (int)uVar16;
  if ((uVar16 & 1) != 0) {
    uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar15 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
      uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
    }
  }
  pIVar7 = *(Isolate **)this;
  uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
  uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(pIVar7 + 0x2bc8) -
                                                                     1)) + 0x13)) + 0x2ab);
  if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar9 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar9 = (ulong *)HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar9 + 1;
    *puVar9 = uVar16;
  }
  else {
    puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar16);
    uVar16 = *puVar9;
  }
  uVar17 = *puVar8;
  puVar25 = (uint *)(uVar16 + 0x13);
  if (((*puVar25 & 1) == 0) ||
     (*(short *)((uVar16 & 0xffffffff00000000 | 7) +
                (ulong)*(uint *)((uVar16 & 0xffffffff00000000 | (ulong)*puVar25) - 1)) != 0xa2)) {
    *puVar25 = (uint)uVar17;
    if ((uVar17 & 1) != 0) {
      uVar15 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar15 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar16,puVar25,uVar17);
        uVar15 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar16,puVar25,uVar17);
      }
    }
    pIVar7 = *(Isolate **)this;
    uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
    uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(pIVar7 + 0x2bc8)
                                                                       - 1)) + 0x13)) + 0x2af);
    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar9 = *(ulong **)(pIVar7 + 0x95a0);
      if (puVar9 == *(ulong **)(pIVar7 + 0x95a8)) {
        puVar9 = (ulong *)HandleScope::Extend(pIVar7);
      }
      *(ulong **)(pIVar7 + 0x95a0) = puVar9 + 1;
      *puVar9 = uVar16;
    }
    else {
      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar16);
      uVar16 = *puVar9;
    }
    uVar17 = *puVar8;
    puVar25 = (uint *)(uVar16 + 0x13);
    if (((*puVar25 & 1) == 0) ||
       (*(short *)((uVar16 & 0xffffffff00000000 | 7) +
                  (ulong)*(uint *)((uVar16 & 0xffffffff00000000 | (ulong)*puVar25) - 1)) != 0xa2)) {
      *puVar25 = (uint)uVar17;
      if ((uVar17 & 1) != 0) {
        uVar15 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar15 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar16,puVar25,uVar17);
          uVar15 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar16,puVar25,uVar17);
        }
      }
      pIVar7 = *(Isolate **)this;
      uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
      uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(pIVar7 + 0x2bc8
                                                                                    ) - 1)) + 0x13))
                                 + 0x2b7);
      if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar9 = *(ulong **)(pIVar7 + 0x95a0);
        if (puVar9 == *(ulong **)(pIVar7 + 0x95a8)) {
          puVar9 = (ulong *)HandleScope::Extend(pIVar7);
        }
        *(ulong **)(pIVar7 + 0x95a0) = puVar9 + 1;
        *puVar9 = uVar16;
      }
      else {
        puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar16);
        uVar16 = *puVar9;
      }
      uVar17 = *puVar8;
      puVar25 = (uint *)(uVar16 + 0x13);
      if (((*puVar25 & 1) == 0) ||
         (*(short *)((uVar16 & 0xffffffff00000000 | 7) +
                    (ulong)*(uint *)((uVar16 & 0xffffffff00000000 | (ulong)*puVar25) - 1)) != 0xa2))
      {
        *puVar25 = (uint)uVar17;
        if ((uVar17 & 1) != 0) {
          uVar15 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar15 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar16,puVar25,uVar17);
            uVar15 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            Heap_GenerationalBarrierSlow(uVar16,puVar25,uVar17);
          }
        }
        pIVar7 = *(Isolate **)this;
        uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
        uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(pIVar7 + 
                                                  0x2bc8) - 1)) + 0x13)) + 699);
        if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar9 = *(ulong **)(pIVar7 + 0x95a0);
          if (puVar9 == *(ulong **)(pIVar7 + 0x95a8)) {
            puVar9 = (ulong *)HandleScope::Extend(pIVar7);
          }
          *(ulong **)(pIVar7 + 0x95a0) = puVar9 + 1;
          *puVar9 = uVar16;
        }
        else {
          puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar16);
          uVar16 = *puVar9;
        }
        uVar17 = *puVar8;
        puVar25 = (uint *)(uVar16 + 0x13);
        if (((*puVar25 & 1) == 0) ||
           (*(short *)((uVar16 & 0xffffffff00000000 | 7) +
                      (ulong)*(uint *)((uVar16 & 0xffffffff00000000 | (ulong)*puVar25) - 1)) != 0xa2
           )) {
          *puVar25 = (uint)uVar17;
          if ((uVar17 & 1) != 0) {
            uVar15 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
            if (((uint)uVar15 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar16,puVar25,uVar17);
              uVar15 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar15 & 0x18) != 0) &&
               ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar16,puVar25,uVar17);
            }
          }
          pIVar7 = *(Isolate **)this;
          uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
          uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(pIVar7 + 
                                                  0x2bc8) - 1)) + 0x13)) + 0x2bf);
          if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar9 = *(ulong **)(pIVar7 + 0x95a0);
            if (puVar9 == *(ulong **)(pIVar7 + 0x95a8)) {
              puVar9 = (ulong *)HandleScope::Extend(pIVar7);
            }
            *(ulong **)(pIVar7 + 0x95a0) = puVar9 + 1;
            *puVar9 = uVar16;
          }
          else {
            puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar16);
            uVar16 = *puVar9;
          }
          uVar17 = *puVar8;
          puVar25 = (uint *)(uVar16 + 0x13);
          if (((*puVar25 & 1) == 0) ||
             (*(short *)((uVar16 & 0xffffffff00000000 | 7) +
                        (ulong)*(uint *)((uVar16 & 0xffffffff00000000 | (ulong)*puVar25) - 1)) !=
              0xa2)) {
            *puVar25 = (uint)uVar17;
            if ((uVar17 & 1) != 0) {
              uVar15 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
              if (((uint)uVar15 >> 0x12 & 1) != 0) {
                Heap_MarkingBarrierSlow(uVar16,puVar25,uVar17);
                uVar15 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
              }
              if (((uVar15 & 0x18) != 0) &&
                 ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                Heap_GenerationalBarrierSlow(uVar16,puVar25,uVar17);
              }
            }
            uVar16 = *puVar8;
            uVar17 = **(ulong **)(this + 0x20);
            puVar25 = (uint *)(uVar17 + 0x13);
            if (((*puVar25 & 1) == 0) ||
               (*(short *)((uVar17 & 0xffffffff00000000 | 7) +
                          (ulong)*(uint *)((uVar17 & 0xffffffff00000000 | (ulong)*puVar25) - 1)) !=
                0xa2)) {
              *puVar25 = (uint)uVar16;
              if ((uVar16 & 1) != 0) {
                uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                if (((uint)uVar15 >> 0x12 & 1) != 0) {
                  Heap_MarkingBarrierSlow(uVar17,puVar25,uVar16);
                  uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                }
                if (((uVar15 & 0x18) != 0) &&
                   ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                  Heap_GenerationalBarrierSlow(uVar17,puVar25,uVar16);
                }
              }
              uVar16 = *puVar8;
              uVar17 = **(ulong **)(this + 0x28);
              puVar25 = (uint *)(uVar17 + 0x13);
              if (((*puVar25 & 1) == 0) ||
                 (*(short *)((uVar17 & 0xffffffff00000000 | 7) +
                            (ulong)*(uint *)((uVar17 & 0xffffffff00000000 | (ulong)*puVar25) - 1))
                  != 0xa2)) {
                *puVar25 = (uint)uVar16;
                if ((uVar16 & 1) != 0) {
                  uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                  if (((uint)uVar15 >> 0x12 & 1) != 0) {
                    Heap_MarkingBarrierSlow(uVar17,puVar25,uVar16);
                    uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                  }
                  if (((uVar15 & 0x18) != 0) &&
                     ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                    Heap_GenerationalBarrierSlow(uVar17,puVar25,uVar16);
                  }
                }
                pIVar7 = *(Isolate **)this;
                uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
                uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(
                                                  pIVar7 + 0x2bc8) - 1)) + 0x13)) + 0x2c3);
                if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                  puVar9 = *(ulong **)(pIVar7 + 0x95a0);
                  if (puVar9 == *(ulong **)(pIVar7 + 0x95a8)) {
                    puVar9 = (ulong *)HandleScope::Extend(pIVar7);
                  }
                  *(ulong **)(pIVar7 + 0x95a0) = puVar9 + 1;
                  *puVar9 = uVar16;
                }
                else {
                  puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                              (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar16);
                  uVar16 = *puVar9;
                }
                uVar17 = *puVar8;
                puVar25 = (uint *)(uVar16 + 0x13);
                if (((*puVar25 & 1) == 0) ||
                   (*(short *)((uVar16 & 0xffffffff00000000 | 7) +
                              (ulong)*(uint *)((uVar16 & 0xffffffff00000000 | (ulong)*puVar25) - 1))
                    != 0xa2)) {
                  *puVar25 = (uint)uVar17;
                  if ((uVar17 & 1) != 0) {
                    uVar15 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
                    if (((uint)uVar15 >> 0x12 & 1) != 0) {
                      Heap_MarkingBarrierSlow(uVar16,puVar25,uVar17);
                      uVar15 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
                    }
                    if (((uVar15 & 0x18) != 0) &&
                       ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                      Heap_GenerationalBarrierSlow(uVar16,puVar25,uVar17);
                    }
                  }
                  pIVar7 = *(Isolate **)this;
                  uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
                  uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(
                                                  pIVar7 + 0x2bc8) - 1)) + 0x13)) + 0x307);
                  if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                    puVar9 = *(ulong **)(pIVar7 + 0x95a0);
                    if (puVar9 == *(ulong **)(pIVar7 + 0x95a8)) {
                      puVar9 = (ulong *)HandleScope::Extend(pIVar7);
                    }
                    *(ulong **)(pIVar7 + 0x95a0) = puVar9 + 1;
                    *puVar9 = uVar16;
                  }
                  else {
                    puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                                (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar16)
                    ;
                    uVar16 = *puVar9;
                  }
                  uVar17 = *puVar8;
                  puVar25 = (uint *)(uVar16 + 0x13);
                  if (((*puVar25 & 1) == 0) ||
                     (*(short *)((uVar16 & 0xffffffff00000000 | 7) +
                                (ulong)*(uint *)((uVar16 & 0xffffffff00000000 | (ulong)*puVar25) - 1
                                                )) != 0xa2)) {
                    *puVar25 = (uint)uVar17;
                    if ((uVar17 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar16,puVar25,uVar17);
                        uVar15 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar16,puVar25,uVar17);
                      }
                    }
                    pFVar2 = this_00 + 200;
                    puVar8 = (ulong *)FUN_01036b50(*(undefined8 *)this,0x274,pFVar2,1,0);
                    uVar16 = *puVar8;
                    uVar17 = **(ulong **)(this + 0x10);
                    *(int *)(uVar17 + 0x4f) = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,uVar17 + 0x4f,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,uVar17 + 0x4f,uVar16);
                      }
                    }
                    puVar8 = (ulong *)FUN_01036b50(*(undefined8 *)this,0x26b,pFVar2,1,0);
                    uVar16 = *puVar8;
                    uVar17 = **(ulong **)(this + 0x10);
                    *(int *)(uVar17 + 0x57) = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,uVar17 + 0x57,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,uVar17 + 0x57,uVar16);
                      }
                    }
                    puVar8 = (ulong *)FUN_01036b50(*(undefined8 *)this,0x26c,pFVar2,1,0);
                    uVar16 = *puVar8;
                    uVar17 = **(ulong **)(this + 0x10);
                    *(int *)(uVar17 + 0x53) = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,uVar17 + 0x53,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,uVar17 + 0x53,uVar16);
                      }
                    }
                    puVar8 = (ulong *)FUN_01036b50(*(undefined8 *)this,0x26d,pFVar2,1,0);
                    uVar16 = *puVar8;
                    uVar17 = **(ulong **)(this + 0x10);
                    *(int *)(uVar17 + 0x5b) = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,uVar17 + 0x5b,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,uVar17 + 0x5b,uVar16);
                      }
                    }
                    puVar8 = (ulong *)FUN_01036b50(*(undefined8 *)this,0x270,pFVar2,1,0);
                    uVar16 = *puVar8;
                    uVar17 = **(ulong **)(this + 0x10);
                    *(int *)(uVar17 + 0x5f) = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,uVar17 + 0x5f,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,uVar17 + 0x5f,uVar16);
                      }
                    }
                    puVar8 = (ulong *)FUN_01036b50(*(undefined8 *)this,0x26e,pFVar2,1,0);
                    uVar16 = *puVar8;
                    uVar17 = **(ulong **)(this + 0x10);
                    *(int *)(uVar17 + 99) = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,uVar17 + 99,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,uVar17 + 99,uVar16);
                      }
                    }
                    puVar8 = (ulong *)FUN_01036b50(*(undefined8 *)this,0x26f,pFVar2,1,0);
                    uVar16 = *puVar8;
                    uVar17 = **(ulong **)(this + 0x10);
                    *(int *)(uVar17 + 0x67) = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,uVar17 + 0x67,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,uVar17 + 0x67,uVar16);
                      }
                    }
                    pIVar7 = *(Isolate **)this;
                    uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
                    uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(
                                                  pIVar7 + 0x2bc8) - 1)) + 0x13)) + 0x103);
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar8 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar8 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
                      *puVar8 = uVar16;
                    }
                    else {
                      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar16);
                    }
                    puVar8 = (ulong *)FUN_01036964(pIVar7,puVar6,"Array",0x423,0x10,0,puVar8,0x9b);
                    *(undefined2 *)
                     ((*puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb)) + 0x15) =
                         0xffff;
                    *(undefined2 *)
                     ((*puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb)) + 0x13) = 1;
                    pIVar7 = *(Isolate **)this;
                    uVar16 = *puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0x1b);
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar9 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar9 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar9 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar9 + 1;
                      *puVar9 = uVar16;
                    }
                    else {
                      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar16);
                    }
                    Map::EnsureDescriptorSlack(*(undefined8 *)this,puVar9,1);
                    pFVar3 = this_00 + 0x7b8;
                    Descriptor::AccessorConstant((Descriptor *)&local_c0,pFVar3,this_00 + 0xe20,6);
                    local_e0 = (undefined1 *)*puVar9;
                    Map::AppendDescriptor
                              ((Map *)&local_e0,*(Isolate **)this,(Descriptor *)&local_c0);
                    FUN_010369f8(*(undefined8 *)this,puVar8,10);
                    FUN_01036b90(*(undefined8 *)this,puVar8);
                    CacheInitialJSArrayMaps(*(undefined8 *)this,*(undefined8 *)(this + 0x10),puVar9)
                    ;
                    puVar9 = (ulong *)Factory::NewJSArray(this_00,3,0,0,1,1);
                    JSFunction::SetPrototype(puVar8,puVar9);
                    uVar16 = *puVar9;
                    uVar17 = **(ulong **)(this + 0x10);
                    *(int *)(uVar17 + 0xe7) = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,uVar17 + 0xe7,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,uVar17 + 0xe7,uVar16);
                      }
                    }
                    FUN_01029064(*(undefined8 *)this,puVar8,"isArray",0x2ad,1,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"from",0xb0,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,&DAT_019db47e,0x2be,0,0,2);
                    JSObject::AddProperty(*(undefined8 *)this,puVar9,pFVar19,puVar8,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"concat",0xae,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"copyWithin",0x296,2,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"fill",0xaf,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,&DAT_019c75b8,0x2a3,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"findIndex",0x2a8,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"lastIndexOf",0x2b9,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"pop",0xba,0,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,&DAT_019c75c7,0xbc,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"reverse",0x2c9,0,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"shift",0x2ca,0,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"unshift",0x2d1,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"slice",0x2cb,2,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"sort",0x39f,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"splice",0x2d0,2,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"includes",0xb4,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"indexOf",0xb8,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,&DAT_019c75db,0x2b4,1,0,2);
                    puVar8 = (ulong *)FUN_01036ba4(*(undefined8 *)this,puVar9,&DAT_019c7514,0xc3,0,1
                                                  );
                    uVar16 = *puVar8;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x357);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    puVar8 = (ulong *)FUN_01036ba4(*(undefined8 *)this,puVar9,"entries",0xc2,0,1);
                    uVar16 = *puVar8;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x34f);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    puVar8 = (ulong *)FUN_01036ba4(*(undefined8 *)this,puVar9,"values",0xc4,0,1);
                    pFVar23 = this_00 + 0xc18;
                    JSObject::AddProperty(*(undefined8 *)this,puVar9,pFVar23,puVar8,2);
                    uVar16 = *puVar8;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x35b);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    puVar8 = (ulong *)FUN_01029064(*(undefined8 *)this,puVar9,"forEach",0x2ac,1,0,2)
                    ;
                    uVar16 = *puVar8;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x353);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    FUN_01029064(*(undefined8 *)this,puVar9,"filter",0x29e,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,&DAT_019c75e8,200,0,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"flatMap",0xc9,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"map",0x2bd,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"every",0x29a,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,&DAT_019c75fb,0x2cf,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"reduce",0x2c8,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"reduceRight",0x2c3,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"toLocaleString",0x2b5,0,0,2);
                    uVar10 = FUN_01029064(*(undefined8 *)this,puVar9,"toString",0x2b6,0,0,2);
                    uVar11 = Factory::NewJSObjectWithNullProto(this_00);
                    FUN_01036c40(*(undefined8 *)this,uVar11,"copyWithin");
                    FUN_01036c40(*(undefined8 *)this,uVar11,"entries");
                    FUN_01036c40(*(undefined8 *)this,uVar11,"fill");
                    FUN_01036c40(*(undefined8 *)this,uVar11,&DAT_019c75b8);
                    FUN_01036c40(*(undefined8 *)this,uVar11,"findIndex");
                    FUN_01036c40(*(undefined8 *)this,uVar11,&DAT_019c75e8);
                    FUN_01036c40(*(undefined8 *)this,uVar11,"flatMap");
                    FUN_01036c40(*(undefined8 *)this,uVar11,"includes");
                    FUN_01036c40(*(undefined8 *)this,uVar11,&DAT_019c7514);
                    FUN_01036c40(*(undefined8 *)this,uVar11,"values");
                    JSObject::MigrateSlowToFast(uVar11,0,"Bootstrapping");
                    JSObject::AddProperty(*(undefined8 *)this,puVar9,this_00 + 0xc60,uVar11,3);
                    pIVar7 = *(Isolate **)this;
                    uVar16 = *puVar9 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar9 - 1);
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar8 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar8 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
                      *puVar8 = uVar16;
                    }
                    else {
                      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar16);
                    }
                    Map::SetShouldBeFastPrototypeMap(puVar8,1,*(undefined8 *)this);
                    pIVar7 = *(Isolate **)this;
                    uVar16 = **(ulong **)(this + 0x10) & 0xffffffff00000000 |
                             (ulong)*(uint *)(**(ulong **)(this + 0x10) + 0xf7);
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar8 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar8 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
                      *puVar8 = uVar16;
                    }
                    else {
                      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar16);
                    }
                    pIVar7 = *(Isolate **)this;
                    uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
                    uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(
                                                  pIVar7 + 0x2bc8) - 1)) + 0x13)) + 499);
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar9 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar9 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar9 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar9 + 1;
                      *puVar9 = uVar16;
                    }
                    else {
                      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar16);
                    }
                    puVar9 = (ulong *)Factory::NewJSObject(this_00,puVar9,1);
                    JSObject::ForceSetPrototype(puVar9,puVar8);
                    FUN_01036ca4(*(undefined8 *)this,puVar9,this_00 + 0x4f0);
                    FUN_01036ba4(*(undefined8 *)this,puVar9,"next",0xc5,0,1);
                    puVar8 = (ulong *)FUN_01028494(*(undefined8 *)this,this_00 + 0x4f0,0x425,0x18,0,
                                                   puVar9,0x97);
                    uVar16 = *puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb);
                    *(uint *)(uVar16 + 0x1b) = *(uint *)(uVar16 + 0x1b) & 0xffffffdf;
                    uVar16 = *puVar8;
                    uVar17 = **(ulong **)(this + 0x10);
                    uVar4 = *(uint *)(uVar16 + 0x1b);
                    *(uint *)(uVar17 + 0xdf) = uVar4;
                    if ((uVar4 & 1) != 0) {
                      uVar16 = uVar16 & 0xffffffff00000000;
                      uVar21 = uVar16 | uVar4;
                      uVar16 = uVar16 | (ulong)uVar4 & 0xfffffffffffc0000;
                      uVar15 = *(ulong *)(uVar16 + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,uVar17 + 0xdf,uVar21);
                        uVar15 = *(ulong *)(uVar16 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,uVar17 + 0xdf,uVar21);
                      }
                    }
                    uVar16 = *puVar9;
                    uVar17 = **(ulong **)pGVar24;
                    *(int *)(uVar17 + 0xe3) = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,uVar17 + 0xe3,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,uVar17 + 0xe3,uVar16);
                      }
                    }
                    pIVar7 = *(Isolate **)this;
                    uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
                    uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(
                                                  pIVar7 + 0x2bc8) - 1)) + 0x13)) + 0x103);
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar8 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar8 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
                      *puVar8 = uVar16;
                    }
                    else {
                      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar16);
                    }
                    puVar8 = (ulong *)FUN_01036964(pIVar7,puVar6,"Number",0x411,0x10,0,puVar8,0x185)
                    ;
                    *(undefined2 *)
                     ((*puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb)) + 0x15) =
                         0xffff;
                    *(undefined2 *)
                     ((*puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb)) + 0x13) = 1;
                    FUN_010369f8(*(undefined8 *)this,puVar8,0x7a);
                    plVar12 = (long *)Factory::NewJSObject(this_00,puVar8,1);
                    *(undefined4 *)(*plVar12 + 0xb) = 0;
                    JSFunction::SetPrototype(puVar8,plVar12);
                    JSObject::AddProperty(*(undefined8 *)this,plVar12,pFVar19,puVar8,2);
                    FUN_01029064(*(undefined8 *)this,plVar12,"toExponential",0x18d,1,0,2);
                    FUN_01029064(*(undefined8 *)this,plVar12,"toFixed",0x18e,1,0,2);
                    FUN_01029064(*(undefined8 *)this,plVar12,"toPrecision",400,1,0,2);
                    FUN_01029064(*(undefined8 *)this,plVar12,"toString",0x326,1,0,2);
                    FUN_01029064(*(undefined8 *)this,plVar12,"valueOf",0x191,0,1,2);
                    FUN_01029064(*(undefined8 *)this,plVar12,"toLocaleString",399,0,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"isFinite",0x186,1,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"isInteger",0x187,1,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"isNaN",0x188,1,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"isSafeInteger",0x189,1,1,2);
                    uVar11 = FUN_01029064(*(undefined8 *)this,puVar8,"parseFloat",0x18a,1,1,2);
                    JSObject::AddProperty(*(undefined8 *)this,param_2,"parseFloat",uVar11,2);
                    uVar11 = FUN_01029064(*(undefined8 *)this,puVar8,"parseInt",0x18b,2,1,2);
                    JSObject::AddProperty(*(undefined8 *)this,param_2,"parseInt",uVar11,2);
                    uVar18 = *(undefined8 *)this;
                    uVar11 = Factory::NewNumber<(v8::internal::AllocationType)0>
                                       (this_00,1.7976931348623157e+308);
                    FUN_01036cb4(uVar18,puVar8,"MAX_VALUE",uVar11);
                    uVar18 = *(undefined8 *)this;
                    uVar11 = Factory::NewNumber<(v8::internal::AllocationType)0>
                                       (this_00,4.94065645841247e-324);
                    FUN_01036cb4(uVar18,puVar8,"MIN_VALUE",uVar11);
                    FUN_01036cb4(*(undefined8 *)this,puVar8,"NaN",this_00 + 0x430);
                    uVar18 = *(undefined8 *)this;
                    uVar11 = Factory::NewNumber<(v8::internal::AllocationType)0>(this_00,-INFINITY);
                    FUN_01036cb4(uVar18,puVar8,"NEGATIVE_INFINITY",uVar11);
                    FUN_01036cb4(*(undefined8 *)this,puVar8,"POSITIVE_INFINITY",this_00 + 0x440);
                    uVar18 = *(undefined8 *)this;
                    uVar11 = Factory::NewNumber<(v8::internal::AllocationType)0>
                                       (this_00,9007199254740991.0);
                    FUN_01036cb4(uVar18,puVar8,"MAX_SAFE_INTEGER",uVar11);
                    uVar18 = *(undefined8 *)this;
                    uVar11 = Factory::NewNumber<(v8::internal::AllocationType)0>
                                       (this_00,-9007199254740991.0);
                    FUN_01036cb4(uVar18,puVar8,"MIN_SAFE_INTEGER",uVar11);
                    uVar18 = *(undefined8 *)this;
                    uVar11 = Factory::NewNumber<(v8::internal::AllocationType)0>
                                       (this_00,2.220446049250313e-16);
                    FUN_01036cb4(uVar18,puVar8,"EPSILON",uVar11);
                    FUN_01036cb4(*(undefined8 *)this,puVar6,"Infinity",this_00 + 0x440);
                    FUN_01036cb4(*(undefined8 *)this,puVar6,"NaN",this_00 + 0x430);
                    FUN_01036cb4(*(undefined8 *)this,puVar6,"undefined",this_00 + 0xa0);
                    pIVar7 = *(Isolate **)this;
                    uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
                    uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(
                                                  pIVar7 + 0x2bc8) - 1)) + 0x13)) + 0x103);
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar8 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar8 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
                      *puVar8 = uVar16;
                    }
                    else {
                      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar16);
                    }
                    puVar8 = (ulong *)FUN_01036964(pIVar7,puVar6,"Boolean",0x411,0x10,0,puVar8,0x2da
                                                  );
                    *(undefined2 *)
                     ((*puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb)) + 0x15) =
                         0xffff;
                    *(undefined2 *)
                     ((*puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb)) + 0x13) = 1;
                    FUN_010369f8(*(undefined8 *)this,puVar8,0x1d);
                    puVar9 = (ulong *)Factory::NewJSObject(this_00,puVar8,1);
                    uVar17 = *puVar9;
                    uVar16 = *(ulong *)(*(long *)this + 0xc0);
                    *(int *)(uVar17 + 0xb) = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,uVar17 + 0xb,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,uVar17 + 0xb,uVar16);
                      }
                    }
                    JSFunction::SetPrototype(puVar8,puVar9);
                    JSObject::AddProperty(*(undefined8 *)this,puVar9,pFVar19,puVar8,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"toString",0x2db,0,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"valueOf",0x2dc,0,1,2);
                    pIVar7 = *(Isolate **)this;
                    uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
                    uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(
                                                  pIVar7 + 0x2bc8) - 1)) + 0x13)) + 0x103);
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar8 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar8 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
                      *puVar8 = uVar16;
                    }
                    else {
                      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar16);
                    }
                    puVar8 = (ulong *)FUN_01036964(pIVar7,puVar6,"String",0x411,0x10,0,puVar8,0x2e4)
                    ;
                    *(undefined2 *)
                     ((*puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb)) + 0x15) =
                         0xffff;
                    *(undefined2 *)
                     ((*puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb)) + 0x13) = 1;
                    FUN_010369f8(*(undefined8 *)this,puVar8,0xc1);
                    pIVar7 = *(Isolate **)this;
                    uVar16 = **(ulong **)(this + 0x10) & 0xffffffff00000000;
                    uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)(**(ulong **)(this + 0x10) +
                                                                   0x30b)) + 0x1b);
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar9 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar9 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar9 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar9 + 1;
                      *puVar9 = uVar16;
                    }
                    else {
                      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar16);
                      uVar16 = *puVar9;
                    }
                    *(byte *)(uVar16 + 10) = *(byte *)(uVar16 + 10) & 7 | 0x78;
                    Map::EnsureDescriptorSlack(*(undefined8 *)this,puVar9,1);
                    Descriptor::AccessorConstant((Descriptor *)&local_c0,pFVar3,this_00 + 0xe70,7);
                    local_e0 = (undefined1 *)*puVar9;
                    Map::AppendDescriptor
                              ((Map *)&local_e0,*(Isolate **)this,(Descriptor *)&local_c0);
                    FUN_01029064(*(undefined8 *)this,puVar8,"fromCharCode",0x219,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"fromCodePoint",0x218,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"raw",0x226,1,0,2);
                    puVar9 = (ulong *)Factory::NewJSObject(this_00,puVar8,1);
                    uVar17 = *puVar9;
                    uVar16 = *(ulong *)(*(long *)this + 200);
                    *(int *)(uVar17 + 0xb) = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,uVar17 + 0xb,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,uVar17 + 0xb,uVar16);
                      }
                    }
                    JSFunction::SetPrototype(puVar8,puVar9);
                    uVar16 = *puVar9;
                    uVar17 = **(ulong **)pGVar24;
                    puVar1 = (undefined4 *)(uVar17 + 0x11b);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    JSObject::AddProperty(*(undefined8 *)this,puVar9,pFVar19,puVar8,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"anchor",0x35e,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"big",0x35f,0,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"blink",0x360,0,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,&DAT_01853226,0x361,0,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"charAt",0x2e0,1,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"charCodeAt",0x2e1,1,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"codePointAt",0x2e2,1,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"concat",0x2e3,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"endsWith",0x35c,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"fontcolor",0x362,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"fontsize",0x363,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"fixed",0x364,0,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"includes",0x21a,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"indexOf",0x21b,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"italics",0x365,0,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"lastIndexOf",0x21c,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"link",0x366,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"localeCompare",0x21f,1,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"match",0x21d,1,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"matchAll",0x21e,1,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"normalize",0x3d4,0,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"padEnd",0x36e,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"padStart",0x36d,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"repeat",0x370,1,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"replace",0x220,2,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"search",0x221,1,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"slice",0x372,2,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"small",0x367,0,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"split",0x222,2,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"strike",0x368,0,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,&DAT_019f1126,0x369,0,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"substr",0x375,2,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"substring",0x374,2,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,&DAT_019c7751,0x36a,0,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"startsWith",0x373,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"toString",0x2dd,0,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,&DAT_019c7760,0x223,0,0,2);
                    uVar11 = FUN_01029064(*(undefined8 *)this,puVar9,"trimStart",0x225,0,0,2);
                    JSObject::AddProperty(*(undefined8 *)this,puVar9,"trimLeft",uVar11,2);
                    uVar11 = FUN_01029064(*(undefined8 *)this,puVar9,"trimEnd",0x224,0,0,2);
                    JSObject::AddProperty(*(undefined8 *)this,puVar9,"trimRight",uVar11,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"toLocaleLowerCase",0x3d5,0,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"toLocaleUpperCase",0x3d6,0,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"toLowerCase",0x3d7,0,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"toUpperCase",0x3d8,0,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"valueOf",0x2de,0,1,2);
                    FUN_01028fbc(*(undefined8 *)this,puVar9,pFVar23,"[Symbol.iterator]",0x36b,0,1,2)
                    ;
                    pIVar7 = *(Isolate **)this;
                    uVar16 = **(ulong **)(this + 0x10) & 0xffffffff00000000 |
                             (ulong)*(uint *)(**(ulong **)(this + 0x10) + 0xf7);
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar8 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar8 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
                      *puVar8 = uVar16;
                    }
                    else {
                      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar16);
                    }
                    pIVar7 = *(Isolate **)this;
                    uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
                    uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(
                                                  pIVar7 + 0x2bc8) - 1)) + 0x13)) + 499);
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar9 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar9 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar9 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar9 + 1;
                      *puVar9 = uVar16;
                    }
                    else {
                      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar16);
                    }
                    puVar9 = (ulong *)Factory::NewJSObject(this_00,puVar9,1);
                    JSObject::ForceSetPrototype(puVar9,puVar8);
                    pFVar19 = *(Factory **)this;
                    uStack_b8 = __strlen_chk("String Iterator",0x10);
                    local_c0 = "String Iterator";
                    uVar11 = Factory::InternalizeUtf8String(pFVar19,(Vector *)&local_c0);
                    FUN_01036ca4(pFVar19,puVar9,uVar11);
                    FUN_01036ba4(*(undefined8 *)this,puVar9,"next",0x36c,0,1);
                    uVar18 = *(undefined8 *)this;
                    uStack_b8 = __strlen_chk("StringIterator",0xf);
                    local_c0 = "StringIterator";
                    uVar11 = Factory::InternalizeUtf8String(this_00,(Vector *)&local_c0);
                    puVar8 = (ulong *)FUN_01028494(uVar18,uVar11,0x430,0x14,0,puVar9,0x97);
                    uVar16 = *puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb);
                    *(uint *)(uVar16 + 0x1b) = *(uint *)(uVar16 + 0x1b) & 0xffffffdf;
                    uVar16 = *puVar8;
                    uVar17 = **(ulong **)(this + 0x10);
                    uVar4 = *(uint *)(uVar16 + 0x1b);
                    puVar25 = (uint *)(uVar17 + 0x113);
                    *puVar25 = uVar4;
                    if ((uVar4 & 1) != 0) {
                      uVar16 = uVar16 & 0xffffffff00000000;
                      uVar21 = uVar16 | uVar4;
                      uVar16 = uVar16 | (ulong)uVar4 & 0xfffffffffffc0000;
                      uVar15 = *(ulong *)(uVar16 + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar25,uVar21);
                        uVar15 = *(ulong *)(uVar16 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar25,uVar21);
                      }
                    }
                    uVar16 = *puVar9;
                    uVar17 = **(ulong **)pGVar24;
                    puVar1 = (undefined4 *)(uVar17 + 0x117);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    pFVar19 = this_00 + 0xa8;
                    puVar8 = (ulong *)FUN_01036964(*(undefined8 *)this,puVar6,"Symbol",0x411,0x10,0,
                                                   pFVar19,0x227);
                    *(undefined2 *)
                     ((*puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb)) + 0x13) = 0;
                    *(undefined2 *)
                     ((*puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb)) + 0x15) =
                         0xffff;
                    uVar16 = *puVar8;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x313);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    FUN_01029064(*(undefined8 *)this,puVar8,"for",0x228,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"keyFor",0x229,1,0,2);
                    FUN_01036cb4(*(undefined8 *)this,puVar8,"asyncIterator",this_00 + 0xc10);
                    FUN_01036cb4(*(undefined8 *)this,puVar8,"hasInstance",this_00 + 0xc68);
                    FUN_01036cb4(*(undefined8 *)this,puVar8,"isConcatSpreadable",this_00 + 0xc70);
                    FUN_01036cb4(*(undefined8 *)this,puVar8,"iterator",pFVar23);
                    FUN_01036cb4(*(undefined8 *)this,puVar8,"match",this_00 + 0xc30);
                    FUN_01036cb4(*(undefined8 *)this,puVar8,"matchAll");
                    FUN_01036cb4(*(undefined8 *)this,puVar8,"replace");
                    FUN_01036cb4(*(undefined8 *)this,puVar8,"search");
                    FUN_01036cb4(*(undefined8 *)this,puVar8,"species",this_00 + 0xc48);
                    FUN_01036cb4(*(undefined8 *)this,puVar8,"split");
                    pFVar20 = this_00 + 0xc58;
                    FUN_01036cb4(*(undefined8 *)this,puVar8,"toPrimitive",pFVar20);
                    FUN_01036cb4(*(undefined8 *)this,puVar8,"toStringTag");
                    FUN_01036cb4(*(undefined8 *)this,puVar8,"unscopables",this_00 + 0xc60);
                    uVar16 = *puVar8 & 0xffffffff00000000;
                    uVar17 = uVar16 | *(uint *)(*puVar8 + 0x1b);
                    if (*(short *)((uVar16 | 7) + (ulong)*(uint *)(uVar17 - 1)) == 0xa2) {
                      uVar17 = uVar16 | *(uint *)(uVar17 + 0xf);
                    }
                    pIVar7 = *(Isolate **)this;
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar8 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar8 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
                      *puVar8 = uVar17;
                    }
                    else {
                      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar17);
                    }
                    this_01 = *(Factory **)this;
                    uStack_b8 = __strlen_chk("Symbol",7);
                    local_c0 = "Symbol";
                    uVar11 = Factory::InternalizeUtf8String(this_01,(Vector *)&local_c0);
                    FUN_01036ca4(this_01,puVar8,uVar11);
                    FUN_01036ba4(*(undefined8 *)this,puVar8,"toString",0x378,0,1);
                    FUN_01036ba4(*(undefined8 *)this,puVar8,"valueOf",0x379,0,1);
                    uVar18 = *(undefined8 *)this;
                    uStack_b8 = __strlen_chk("description",0xc);
                    local_c0 = "description";
                    uVar11 = Factory::InternalizeUtf8String(this_00,(Vector *)&local_c0);
                    FUN_01036d1c(uVar18,puVar8,uVar11,0x376,1);
                    FUN_01028fbc(*(undefined8 *)this,puVar8,pFVar20,"[Symbol.toPrimitive]",0x377,1,1
                                 ,3);
                    puVar8 = (ulong *)FUN_01036964(*(undefined8 *)this,puVar6,"Date",0x428,0x30,0,
                                                   pFVar19,0x108);
                    FUN_010369f8(*(undefined8 *)this,puVar8,0x28);
                    *(undefined2 *)
                     ((*puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb)) + 0x13) = 7;
                    *(undefined2 *)
                     ((*puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb)) + 0x15) =
                         0xffff;
                    FUN_01029064(*(undefined8 *)this,puVar8,&DAT_01854a92,0x11f,0,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"parse",0x120,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"UTC",0x136,7,0,2);
                    uVar16 = *puVar8 & 0xffffffff00000000;
                    uVar17 = uVar16 | *(uint *)(*puVar8 + 0x1b);
                    if (*(short *)((uVar16 | 7) + (ulong)*(uint *)(uVar17 - 1)) == 0xa2) {
                      uVar17 = uVar16 | *(uint *)(uVar17 + 0xf);
                    }
                    pIVar7 = *(Isolate **)this;
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar8 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar8 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
                      *puVar8 = uVar17;
                    }
                    else {
                      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar17);
                    }
                    FUN_01029064(*(undefined8 *)this,puVar8,"toString",0x133,0,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"toDateString",0x130,0,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"toTimeString",0x134,0,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"toISOString",0x131,0,0,2);
                    uVar11 = FUN_01029064(*(undefined8 *)this,puVar8,"toUTCString",0x132,0,0,2);
                    JSObject::AddProperty(*(undefined8 *)this,puVar8,"toGMTString",uVar11,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"getDate",0x109,0,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"setDate",0x121,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"getDay",0x10a,0,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"getFullYear",0x10b,0,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"setFullYear",0x122,3,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"getHours",0x10c,0,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"setHours",0x123,4,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"getMilliseconds",0x10d,0,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"setMilliseconds",0x124,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"getMinutes",0x10e,0,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"setMinutes",0x125,3,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"getMonth",0x10f,0,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"setMonth",0x126,2,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"getSeconds",0x110,0,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"setSeconds",0x127,2,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"getTime",0x111,0,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"setTime",0x128,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"getTimezoneOffset",0x112,0,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"getUTCDate",0x113,0,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"setUTCDate",0x129,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"getUTCDay",0x114,0,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"getUTCFullYear",0x115,0,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"setUTCFullYear",0x12a,3,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"getUTCHours",0x116,0,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"setUTCHours",299,4,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"getUTCMilliseconds",0x117,0,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"setUTCMilliseconds",300,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"getUTCMinutes",0x118,0,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"setUTCMinutes",0x12d,3,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"getUTCMonth",0x119,0,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"setUTCMonth",0x12e,2,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"getUTCSeconds",0x11a,0,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"setUTCSeconds",0x12f,2,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"valueOf",0x11b,0,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"getYear",0x11d,0,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"setYear",0x11e,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,&DAT_019c78cf,0x135,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"toLocaleString",0x133,0,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"toLocaleDateString",0x130,0,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"toLocaleTimeString",0x134,0,0,2);
                    FUN_01028fbc(*(undefined8 *)this,puVar8,pFVar20,"[Symbol.toPrimitive]",0x11c,1,1
                                 ,3);
                    puVar8 = (ulong *)FUN_01036d30(*(undefined8 *)this,pFVar2);
                    uVar16 = *puVar8;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x213);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    puVar8 = (ulong *)FUN_01036964(*(undefined8 *)this,puVar6,"Promise",0x42d,0x14,0
                                                   ,pFVar19,0x333);
                    FUN_010369f8(*(undefined8 *)this,puVar8,0xe3);
                    pIVar7 = *(Isolate **)this;
                    uVar16 = *puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb);
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar9 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar9 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar9 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar9 + 1;
                      *puVar9 = uVar16;
                    }
                    else {
                      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar16);
                      uVar16 = *puVar9;
                    }
                    *(undefined2 *)(uVar16 + 0x15) = 1;
                    *(undefined2 *)(*puVar9 + 0x13) = 1;
                    FUN_01036b90(*(undefined8 *)this,puVar8);
                    puVar9 = (ulong *)FUN_01036ba4(*(undefined8 *)this,puVar8,"all",0x1dd,1,1);
                    uVar16 = *puVar9;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x38b);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    FUN_01036ba4(*(undefined8 *)this,puVar8,"race",0x1df,1,1);
                    FUN_01036ba4(*(undefined8 *)this,puVar8,"resolve",0x1d5,1,1);
                    FUN_01036ba4(*(undefined8 *)this,puVar8,"reject",0x1d7,1,1);
                    uVar16 = *puVar8 & 0xffffffff00000000;
                    uVar17 = uVar16 | *(uint *)(*puVar8 + 0x1b);
                    if (*(short *)((uVar16 | 7) + (ulong)*(uint *)(uVar17 - 1)) == 0xa2) {
                      uVar17 = uVar16 | *(uint *)(uVar17 + 0xf);
                    }
                    pIVar7 = *(Isolate **)this;
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar9 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar9 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar9 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar9 + 1;
                      *puVar9 = uVar17;
                    }
                    else {
                      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar17);
                      uVar17 = *puVar9;
                    }
                    uVar16 = **(ulong **)pGVar24;
                    puVar1 = (undefined4 *)(uVar16 + 0x23b);
                    *puVar1 = (int)uVar17;
                    if ((uVar17 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar16,puVar1,uVar17);
                        uVar15 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar16,puVar1,uVar17);
                      }
                    }
                    FUN_01036ca4(*(undefined8 *)this,puVar9,this_00 + 0x8f8);
                    puVar13 = (ulong *)FUN_01036ba4(*(undefined8 *)this,puVar9,"then",0x1d0,2,1);
                    uVar16 = *puVar13;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x413);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    puVar13 = (ulong *)FUN_01036ba4(*(undefined8 *)this,puVar9,"catch",0x1d1,1,1);
                    uVar16 = *puVar13;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x38f);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    FUN_01036ba4(*(undefined8 *)this,puVar9,"finally",0x1d8,1,1);
                    puVar13 = (ulong *)FUN_01036b50(*(long *)this,0x1d9,*(long *)this + 200,1,0);
                    *(uint *)(*puVar13 + 0x1b) = *(uint *)(*puVar13 + 0x1b) | 0x20;
                    uVar16 = *puVar13;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x21f);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    puVar13 = (ulong *)FUN_01036b50(*(long *)this,0x1da,*(long *)this + 200,1,0);
                    *(uint *)(*puVar13 + 0x1b) = *(uint *)(*puVar13 + 0x1b) | 0x20;
                    uVar16 = *puVar13;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x223);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    puVar13 = (ulong *)FUN_01036b50(*(long *)this,0x1db,*(long *)this + 200,0,0);
                    uVar16 = *puVar13;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x227);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    puVar13 = (ulong *)FUN_01036b50(*(long *)this,0x1dc,*(long *)this + 200,0,0);
                    uVar16 = *puVar13;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x22b);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    JSObject::MigrateSlowToFast(puVar8,0,"Bootstrapping");
                    pIVar7 = *(Isolate **)this;
                    uVar16 = *puVar9 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar9 - 1);
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar9 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar9 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar9 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar9 + 1;
                      *puVar9 = uVar16;
                    }
                    else {
                      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar16);
                    }
                    Map::SetShouldBeFastPrototypeMap(puVar9,1,*(undefined8 *)this);
                    puVar9 = (ulong *)FUN_0102910c(*(undefined8 *)this,pFVar2,0x1cf,1,0);
                    uVar16 = *puVar9;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x40f);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    puVar9 = (ulong *)FUN_01036b50(*(undefined8 *)this,0x331,pFVar2,1,0x11);
                    *(uint *)(*puVar9 + 0x1b) = *(uint *)(*puVar9 + 0x1b) | 0x20;
                    *(uint *)(*puVar9 + 0x1b) = *(uint *)(*puVar9 + 0x1b) & 0xfff07fff | 0x38000;
                    uVar16 = *puVar9;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x21b);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    puVar9 = (ulong *)FUN_01036b50(*(undefined8 *)this,0x330,pFVar2,1,0x11);
                    *(uint *)(*puVar9 + 0x1b) = *(uint *)(*puVar9 + 0x1b) | 0x20;
                    *(uint *)(*puVar9 + 0x1b) = *(uint *)(*puVar9 + 0x1b) & 0xfff07fff | 0x38000;
                    uVar16 = *puVar9;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x217);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    puVar9 = (ulong *)FUN_01036b50(*(undefined8 *)this,0x1de,pFVar2,1,0);
                    uVar16 = *puVar9;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x22f);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    JSObject::MigrateSlowToFast(puVar8,0,"Bootstrapping");
                    puVar8 = (ulong *)FUN_01036964(*(undefined8 *)this,puVar6,"RegExp",0x42e,0x1c,1,
                                                   pFVar19,0x1f2);
                    FUN_010369f8(*(undefined8 *)this,puVar8,0x8f);
                    pIVar7 = *(Isolate **)this;
                    uVar16 = *puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb);
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar9 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar9 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar9 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar9 + 1;
                      *puVar9 = uVar16;
                    }
                    else {
                      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar16);
                      uVar16 = *puVar9;
                    }
                    *(undefined2 *)(uVar16 + 0x15) = 2;
                    *(undefined2 *)(*puVar9 + 0x13) = 2;
                    uVar16 = *puVar8 & 0xffffffff00000000;
                    uVar17 = uVar16 | *(uint *)(*puVar8 + 0x1b);
                    if (*(short *)((uVar16 | 7) + (ulong)*(uint *)(uVar17 - 1)) == 0xa2) {
                      uVar17 = uVar16 | *(uint *)(uVar17 + 0xf);
                    }
                    pIVar7 = *(Isolate **)this;
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar9 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar9 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar9 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar9 + 1;
                      *puVar9 = uVar17;
                    }
                    else {
                      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar17);
                      uVar17 = *puVar9;
                    }
                    uVar16 = **(ulong **)pGVar24;
                    puVar1 = (undefined4 *)(uVar16 + 0x253);
                    *puVar1 = (int)uVar17;
                    if ((uVar17 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar16,puVar1,uVar17);
                        uVar15 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar16,puVar1,uVar17);
                      }
                    }
                    puVar13 = (ulong *)FUN_01029064(*(undefined8 *)this,puVar9,"exec",0x347,1,1,2);
                    uVar16 = *puVar13;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x23f);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    FUN_01036d1c(*(undefined8 *)this,puVar9,this_00 + 0x668,0x358,1);
                    FUN_01036d1c(*(undefined8 *)this,puVar9,this_00 + 0x6b0,0x35b,1);
                    FUN_01036d1c(*(undefined8 *)this,puVar9,this_00 + 0x718,0x355,1);
                    FUN_01036d1c(*(undefined8 *)this,puVar9,this_00 + 0x738,0x356,1);
                    FUN_01036d1c(*(undefined8 *)this,puVar9,this_00 + 0x818,0x357,1);
                    FUN_01036d1c(*(undefined8 *)this,puVar9,this_00 + 0x9d0,0x350,1);
                    FUN_01036d1c(*(undefined8 *)this,puVar9,this_00 + 0x9f0,0x359,1);
                    FUN_01036d1c(*(undefined8 *)this,puVar9,this_00 + 0xab8,0x35a,1);
                    FUN_01029064(*(undefined8 *)this,puVar9,"compile",0x1f8,2,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"toString",0x1f9,0,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"test",0x353,1,1,2);
                    puVar13 = (ulong *)FUN_01028fbc(*(undefined8 *)this,puVar9,this_00 + 0xc30,
                                                    "[Symbol.match]",0x34b,1,1,2);
                    uVar16 = *puVar13;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x24f);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    puVar13 = (ulong *)FUN_01028fbc(*(undefined8 *)this,puVar9,this_00 + 0xc28,
                                                    "[Symbol.matchAll]",0x348,1,1,2);
                    uVar16 = *puVar13;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x24b);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    puVar13 = (ulong *)FUN_01028fbc(*(undefined8 *)this,puVar9,this_00 + 0xc38,
                                                    "[Symbol.replace]",0x34d,2,0,2);
                    uVar16 = *puVar13;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x25b);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    puVar13 = (ulong *)FUN_01028fbc(*(undefined8 *)this,puVar9,this_00 + 0xc40,
                                                    "[Symbol.search]",0x34f,1,1,2);
                    uVar16 = *puVar13;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x267);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    puVar13 = (ulong *)FUN_01028fbc(*(undefined8 *)this,puVar9,this_00 + 0xc50,
                                                    "[Symbol.split]",0x352,2,0,2);
                    uVar16 = *puVar13;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x26b);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    pIVar7 = *(Isolate **)this;
                    uVar16 = *puVar9 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar9 - 1);
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar9 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar9 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar9 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar9 + 1;
                      *puVar9 = uVar16;
                    }
                    else {
                      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar16);
                    }
                    Map::SetShouldBeFastPrototypeMap(puVar9,1,*(undefined8 *)this);
                    uVar16 = *puVar9;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 599);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    FUN_01036b90(*(undefined8 *)this,puVar8);
                    FUN_010368a0(*(undefined8 *)this,puVar8,this_00 + 0x770,499,500);
                    pFVar20 = *(Factory **)this;
                    uStack_b8 = __strlen_chk(&DAT_019c795d,3);
                    local_c0 = "$_";
                    uVar11 = Factory::InternalizeUtf8String(pFVar20,(Vector *)&local_c0);
                    FUN_010368a0(pFVar20,puVar8,uVar11,499,500);
                    pFVar20 = *(Factory **)this;
                    uStack_b8 = __strlen_chk("lastMatch",10);
                    local_c0 = "lastMatch";
                    uVar11 = Factory::InternalizeUtf8String(pFVar20,(Vector *)&local_c0);
                    FUN_010368a0(pFVar20,puVar8,uVar11,0x1f5,0x96);
                    pFVar20 = *(Factory **)this;
                    uStack_b8 = __strlen_chk(&DAT_019c796a,3);
                    local_c0 = "$&";
                    uVar11 = Factory::InternalizeUtf8String(pFVar20,(Vector *)&local_c0);
                    FUN_010368a0(pFVar20,puVar8,uVar11,0x1f5,0x96);
                    pFVar20 = *(Factory **)this;
                    uStack_b8 = __strlen_chk("lastParen",10);
                    local_c0 = "lastParen";
                    uVar11 = Factory::InternalizeUtf8String(pFVar20,(Vector *)&local_c0);
                    FUN_010368a0(pFVar20,puVar8,uVar11,0x1f6,0x96);
                    pFVar20 = *(Factory **)this;
                    uStack_b8 = __strlen_chk(&DAT_019c7977,3);
                    local_c0 = "$+";
                    uVar11 = Factory::InternalizeUtf8String(pFVar20,(Vector *)&local_c0);
                    FUN_010368a0(pFVar20,puVar8,uVar11,0x1f6,0x96);
                    pFVar20 = *(Factory **)this;
                    uStack_b8 = __strlen_chk("leftContext",0xc);
                    local_c0 = "leftContext";
                    uVar11 = Factory::InternalizeUtf8String(pFVar20,(Vector *)&local_c0);
                    FUN_010368a0(pFVar20,puVar8,uVar11,0x1f7,0x96);
                    pFVar20 = *(Factory **)this;
                    uStack_b8 = __strlen_chk(&DAT_019c7986,3);
                    local_c0 = "$`";
                    uVar11 = Factory::InternalizeUtf8String(pFVar20,(Vector *)&local_c0);
                    FUN_010368a0(pFVar20,puVar8,uVar11,0x1f7,0x96);
                    pFVar20 = *(Factory **)this;
                    uStack_b8 = __strlen_chk("rightContext",0xd);
                    local_c0 = "rightContext";
                    uVar11 = Factory::InternalizeUtf8String(pFVar20,(Vector *)&local_c0);
                    FUN_010368a0(pFVar20,puVar8,uVar11,0x1fa,0x96);
                    pFVar20 = *(Factory **)this;
                    uStack_b8 = __strlen_chk(&DAT_019c7996,3);
                    local_c0 = "$\'";
                    uVar11 = Factory::InternalizeUtf8String(pFVar20,(Vector *)&local_c0);
                    FUN_010368a0(pFVar20,puVar8,uVar11,0x1fa,0x96);
                    pFVar20 = *(Factory **)this;
                    uStack_b8 = __strlen_chk(&DAT_019c7999,3);
                    local_c0 = "$1";
                    uVar11 = Factory::InternalizeUtf8String(pFVar20,(Vector *)&local_c0);
                    FUN_010368a0(pFVar20,puVar8,uVar11,0x1e9,0x96);
                    pFVar20 = *(Factory **)this;
                    uStack_b8 = __strlen_chk(&DAT_019c799c,3);
                    local_c0 = "$2";
                    uVar11 = Factory::InternalizeUtf8String(pFVar20,(Vector *)&local_c0);
                    FUN_010368a0(pFVar20,puVar8,uVar11,0x1ea,0x96);
                    pFVar20 = *(Factory **)this;
                    uStack_b8 = __strlen_chk(&DAT_019c799f,3);
                    local_c0 = "$3";
                    uVar11 = Factory::InternalizeUtf8String(pFVar20,(Vector *)&local_c0);
                    FUN_010368a0(pFVar20,puVar8,uVar11,0x1eb,0x96);
                    pFVar20 = *(Factory **)this;
                    uStack_b8 = __strlen_chk(&DAT_019c79a2,3);
                    local_c0 = "$4";
                    uVar11 = Factory::InternalizeUtf8String(pFVar20,(Vector *)&local_c0);
                    FUN_010368a0(pFVar20,puVar8,uVar11,0x1ec,0x96);
                    pFVar20 = *(Factory **)this;
                    uStack_b8 = __strlen_chk(&DAT_019c79a5,3);
                    local_c0 = "$5";
                    uVar11 = Factory::InternalizeUtf8String(pFVar20,(Vector *)&local_c0);
                    FUN_010368a0(pFVar20,puVar8,uVar11,0x1ed,0x96);
                    pFVar20 = *(Factory **)this;
                    uStack_b8 = __strlen_chk(&DAT_019c79a8,3);
                    local_c0 = "$6";
                    uVar11 = Factory::InternalizeUtf8String(pFVar20,(Vector *)&local_c0);
                    FUN_010368a0(pFVar20,puVar8,uVar11,0x1ee,0x96);
                    pFVar20 = *(Factory **)this;
                    uStack_b8 = __strlen_chk(&DAT_019c79ab,3);
                    local_c0 = "$7";
                    uVar11 = Factory::InternalizeUtf8String(pFVar20,(Vector *)&local_c0);
                    FUN_010368a0(pFVar20,puVar8,uVar11,0x1ef,0x96);
                    pFVar20 = *(Factory **)this;
                    uStack_b8 = __strlen_chk(&DAT_019c79ae,3);
                    local_c0 = "$8";
                    uVar11 = Factory::InternalizeUtf8String(pFVar20,(Vector *)&local_c0);
                    FUN_010368a0(pFVar20,puVar8,uVar11,0x1f0,0x96);
                    pFVar20 = *(Factory **)this;
                    uStack_b8 = __strlen_chk(&DAT_019c79b1,3);
                    local_c0 = "$9";
                    uVar11 = Factory::InternalizeUtf8String(pFVar20,(Vector *)&local_c0);
                    FUN_010368a0(pFVar20,puVar8,uVar11,0x1f1,0x96);
                    pIVar7 = *(Isolate **)this;
                    uVar16 = *puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0x1b);
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar9 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar9 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar9 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar9 + 1;
                      *puVar9 = uVar16;
                    }
                    else {
                      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar16);
                    }
                    Map::EnsureDescriptorSlack(*(undefined8 *)this,puVar9,1);
                    Descriptor::DataField
                              ((Descriptor *)&local_c0,*(undefined8 *)this,this_00 + 0x7b0,0,6,4);
                    local_e0 = (undefined1 *)*puVar9;
                    Map::AppendDescriptor
                              ((Map *)&local_e0,*(Isolate **)this,(Descriptor *)&local_c0);
                    puVar9 = (ulong *)Factory::NewRegExpMatchInfo(this_00);
                    uVar16 = *puVar9;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x247);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    puVar9 = (ulong *)Factory::NewPropertyCell(this_00,pFVar2,1);
                    *(undefined4 *)(*puVar9 + 0xb) = 2;
                    uVar16 = *puVar9;
                    uVar17 = **(ulong **)pGVar24;
                    puVar1 = (undefined4 *)(uVar17 + 0x2a7);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    JSObject::MigrateSlowToFast(puVar8,0,"Bootstrapping");
                    pIVar7 = *(Isolate **)this;
                    uVar16 = **(ulong **)(this + 0x10) & 0xffffffff00000000 |
                             (ulong)*(uint *)(**(ulong **)(this + 0x10) + 0xf7);
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar8 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar8 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
                      *puVar8 = uVar16;
                    }
                    else {
                      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar16);
                    }
                    pIVar7 = *(Isolate **)this;
                    uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
                    uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(
                                                  pIVar7 + 0x2bc8) - 1)) + 0x13)) + 499);
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar9 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar9 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar9 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar9 + 1;
                      *puVar9 = uVar16;
                    }
                    else {
                      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar16);
                    }
                    uVar11 = Factory::NewJSObject(this_00,puVar9,1);
                    JSObject::ForceSetPrototype(uVar11,puVar8);
                    pFVar20 = *(Factory **)this;
                    uStack_b8 = __strlen_chk("RegExp String Iterator",0x17);
                    local_c0 = "RegExp String Iterator";
                    uVar18 = Factory::InternalizeUtf8String(pFVar20,(Vector *)&local_c0);
                    FUN_01036ca4(pFVar20,uVar11,uVar18);
                    FUN_01029064(*(undefined8 *)this,uVar11,"next",0x349,0,1,2);
                    puVar8 = (ulong *)FUN_01036d60(*(undefined8 *)this,"RegExpStringIterator",0x42f,
                                                   0x18,uVar11,0x97);
                    uVar16 = *puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb);
                    *(uint *)(uVar16 + 0x1b) = *(uint *)(uVar16 + 0x1b) & 0xffffffdf;
                    uVar16 = *puVar8;
                    uVar17 = **(ulong **)(this + 0x10);
                    uVar4 = *(uint *)(uVar16 + 0x1b);
                    puVar25 = (uint *)(uVar17 + 0x26f);
                    *puVar25 = uVar4;
                    if ((uVar4 & 1) != 0) {
                      uVar16 = uVar16 & 0xffffffff00000000;
                      uVar21 = uVar16 | uVar4;
                      uVar16 = uVar16 | (ulong)uVar4 & 0xfffffffffffc0000;
                      uVar15 = *(ulong *)(uVar16 + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar25,uVar21);
                        uVar15 = *(ulong *)(uVar16 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar25,uVar21);
                      }
                    }
                    FUN_01036de0(*(undefined8 *)this,puVar6,this_00 + 0x680,0xd6);
                    FUN_010373d8(*(undefined8 *)this,0x13a,0xf7);
                    FUN_01036de0(*(undefined8 *)this,puVar6,this_00 + 0x698,0xd8);
                    FUN_01036de0(*(undefined8 *)this,puVar6,this_00 + 0x928,0xe4);
                    FUN_010373d8(*(undefined8 *)this,0x13b,0xf8);
                    FUN_01036de0(*(undefined8 *)this,puVar6,this_00 + 0x938,0xe5);
                    FUN_01036de0(*(undefined8 *)this,puVar6,this_00 + 0xa28,0xe9);
                    FUN_010373d8(*(undefined8 *)this,0x13c,0xf9);
                    FUN_01036de0(*(undefined8 *)this,puVar6,this_00 + 0xa80,0xea);
                    FUN_010373d8(*(undefined8 *)this,0x13d,0xfa);
                    FUN_01036de0(*(undefined8 *)this,puVar6,this_00 + 0xac0,0xeb);
                    FUN_010373d8(*(undefined8 *)this,0x13e,0xfb);
                    pIVar7 = *(Isolate **)this;
                    uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
                    uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(
                                                  pIVar7 + 0x2bc8) - 1)) + 0x13)) + 499);
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar8 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar8 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
                      *puVar8 = uVar16;
                    }
                    else {
                      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar16);
                    }
                    uVar11 = Factory::NewJSObject(this_00,puVar8,0);
                    FUN_01036de0(*(undefined8 *)this,uVar11,this_00 + 0x578,0xec);
                    FUN_01036de0(*(undefined8 *)this,uVar11,this_00 + 2000,0xed);
                    FUN_01036de0(*(undefined8 *)this,uVar11,this_00 + 0x978,0xee);
                    puVar8 = (ulong *)Factory::NewEmbedderDataArray(this_00,0);
                    uVar16 = *puVar8;
                    uVar17 = **(ulong **)(this + 0x10);
                    *(int *)(uVar17 + 0x17) = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,uVar17 + 0x17,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,uVar17 + 0x17,uVar16);
                      }
                    }
                    local_c0 = (char *)**(undefined8 **)(this + 0x10);
                    uVar16 = Context::global_proxy((Context *)&local_c0);
                    pIVar7 = *(Isolate **)this;
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar8 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar8 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
                      *puVar8 = uVar16;
                    }
                    else {
                      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar16);
                    }
                    JSObject::AddProperty(*(undefined8 *)this,puVar6,this_00 + 0x720,puVar8,2);
                    pIVar7 = *(Isolate **)this;
                    uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
                    uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(
                                                  pIVar7 + 0x2bc8) - 1)) + 0x13)) + 499);
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar8 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar8 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
                      *puVar8 = uVar16;
                    }
                    else {
                      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar16);
                    }
                    uVar11 = Factory::NewJSObject(this_00,puVar8,1);
                    JSObject::AddProperty(*(undefined8 *)this,puVar6,&DAT_019c78d1,uVar11,2);
                    FUN_01029064(*(undefined8 *)this,uVar11,"parse",0x157,2,0,2);
                    FUN_01029064(*(undefined8 *)this,uVar11,"stringify",0x158,3,1,2);
                    pFVar20 = *(Factory **)this;
                    uStack_b8 = __strlen_chk(&DAT_019c78d1,5);
                    local_c0 = "JSON";
                    uVar18 = Factory::InternalizeUtf8String(pFVar20,(Vector *)&local_c0);
                    FUN_01036ca4(pFVar20,uVar11,uVar18);
                    pIVar7 = *(Isolate **)this;
                    uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
                    uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(
                                                  pIVar7 + 0x2bc8) - 1)) + 0x13)) + 499);
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar8 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar8 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
                      *puVar8 = uVar16;
                    }
                    else {
                      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar16);
                    }
                    uVar11 = Factory::NewJSObject(this_00,puVar8,1);
                    JSObject::AddProperty(*(undefined8 *)this,puVar6,"Math",uVar11,2);
                    FUN_01029064(*(undefined8 *)this,uVar11,&DAT_019f134a,0x303,1,1,2);
                    FUN_01029064(*(undefined8 *)this,uVar11,&DAT_019f1801,0x30b,1,1,2);
                    FUN_01029064(*(undefined8 *)this,uVar11,"acosh",0x30c,1,1,2);
                    FUN_01029064(*(undefined8 *)this,uVar11,&DAT_019f180a,0x30d,1,1,2);
                    FUN_01029064(*(undefined8 *)this,uVar11,"asinh",0x30e,1,1,2);
                    FUN_01029064(*(undefined8 *)this,uVar11,&DAT_019f1813,0x30f,1,1,2);
                    FUN_01029064(*(undefined8 *)this,uVar11,"atanh",0x311,1,1,2);
                    FUN_01029064(*(undefined8 *)this,uVar11,"atan2",0x310,2,1,2);
                    FUN_01029064(*(undefined8 *)this,uVar11,&DAT_019f136a,0x304,1,1,2);
                    FUN_01029064(*(undefined8 *)this,uVar11,"cbrt",0x312,1,1,2);
                    FUN_01029064(*(undefined8 *)this,uVar11,"expm1",0x317,1,1,2);
                    FUN_01029064(*(undefined8 *)this,uVar11,"clz32",0x313,1,1,2);
                    FUN_01029064(*(undefined8 *)this,uVar11,&DAT_019f181c,0x314,1,1,2);
                    FUN_01029064(*(undefined8 *)this,uVar11,"cosh",0x315,1,1,2);
                    FUN_01029064(*(undefined8 *)this,uVar11,&DAT_019f1834,0x316,1,1,2);
                    puVar8 = (ulong *)FUN_01029064(*(undefined8 *)this,uVar11,"floor",0x305,1,1,2);
                    uVar16 = *puVar8;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x403);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    FUN_01029064(*(undefined8 *)this,uVar11,"fround",0x318,1,1,2);
                    FUN_01029064(*(undefined8 *)this,uVar11,"hypot",0x324,2,0,2);
                    FUN_01029064(*(undefined8 *)this,uVar11,&DAT_019c79e1,0x319,2,1,2);
                    FUN_01029064(*(undefined8 *)this,uVar11,"log",0x31a,1,1,2);
                    FUN_01029064(*(undefined8 *)this,uVar11,"log1p",0x31b,1,1,2);
                    FUN_01029064(*(undefined8 *)this,uVar11,"log2",0x31d,1,1,2);
                    FUN_01029064(*(undefined8 *)this,uVar11,"log10",0x31c,1,1,2);
                    FUN_01029064(*(undefined8 *)this,uVar11,&DAT_01a3da63,0x309,2,0,2);
                    FUN_01029064(*(undefined8 *)this,uVar11,&DAT_019f13ce,0x30a,2,0,2);
                    puVar8 = (ulong *)FUN_01029064(*(undefined8 *)this,uVar11,&DAT_019f184e,0x308,2,
                                                   1,2);
                    uVar16 = *puVar8;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x407);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    FUN_01029064(*(undefined8 *)this,uVar11,"random",0x325,0,1,2);
                    FUN_01029064(*(undefined8 *)this,uVar11,"round",0x306,1,1,2);
                    FUN_01029064(*(undefined8 *)this,uVar11,"sign",799,1,1,2);
                    FUN_01029064(*(undefined8 *)this,uVar11,&DAT_019f1824,0x31e,1,1,2);
                    FUN_01029064(*(undefined8 *)this,uVar11,"sinh",800,1,1,2);
                    FUN_01029064(*(undefined8 *)this,uVar11,"sqrt",0x321,1,1,2);
                    FUN_01029064(*(undefined8 *)this,uVar11,&DAT_019f182c,0x322,1,1,2);
                    FUN_01029064(*(undefined8 *)this,uVar11,"tanh",0x323,1,1,2);
                    FUN_01029064(*(undefined8 *)this,uVar11,"trunc",0x307,1,1,2);
                    dVar26 = (double)base::ieee754::exp(1.0);
                    uVar22 = *(undefined8 *)this;
                    uVar18 = Factory::NewNumber<(v8::internal::AllocationType)0>(this_00,dVar26);
                    FUN_01036cb4(uVar22,uVar11,&DAT_019c79f4,uVar18);
                    uVar22 = *(undefined8 *)this;
                    dVar27 = (double)base::ieee754::log(10.0);
                    uVar18 = Factory::NewNumber<(v8::internal::AllocationType)0>(this_00,dVar27);
                    FUN_01036cb4(uVar22,uVar11,&DAT_019c79e6,uVar18);
                    uVar22 = *(undefined8 *)this;
                    dVar27 = (double)base::ieee754::log(2.0);
                    uVar18 = Factory::NewNumber<(v8::internal::AllocationType)0>(this_00,dVar27);
                    FUN_01036cb4(uVar22,uVar11,&DAT_019c79eb,uVar18);
                    uVar22 = *(undefined8 *)this;
                    dVar27 = (double)base::ieee754::log10(dVar26);
                    uVar18 = Factory::NewNumber<(v8::internal::AllocationType)0>(this_00,dVar27);
                    FUN_01036cb4(uVar22,uVar11,&DAT_019c79ef,uVar18);
                    uVar22 = *(undefined8 *)this;
                    dVar26 = (double)base::ieee754::log2(dVar26);
                    uVar18 = Factory::NewNumber<(v8::internal::AllocationType)0>(this_00,dVar26);
                    FUN_01036cb4(uVar22,uVar11,"LOG2E",uVar18);
                    uVar22 = *(undefined8 *)this;
                    uVar18 = Factory::NewNumber<(v8::internal::AllocationType)0>
                                       (this_00,3.141592653589793);
                    FUN_01036cb4(uVar22,uVar11,"PI",uVar18);
                    uVar22 = *(undefined8 *)this;
                    uVar18 = Factory::NewNumber<(v8::internal::AllocationType)0>
                                       (this_00,0.7071067811865476);
                    FUN_01036cb4(uVar22,uVar11,"SQRT1_2",uVar18);
                    uVar22 = *(undefined8 *)this;
                    uVar18 = Factory::NewNumber<(v8::internal::AllocationType)0>
                                       (this_00,1.4142135623730951);
                    FUN_01036cb4(uVar22,uVar11,"SQRT2",uVar18);
                    pFVar20 = *(Factory **)this;
                    uStack_b8 = __strlen_chk("Math",5);
                    local_c0 = "Math";
                    uVar18 = Factory::InternalizeUtf8String(pFVar20,(Vector *)&local_c0);
                    FUN_01036ca4(pFVar20,uVar11,uVar18);
                    uStack_b8 = __strlen_chk("console",8);
                    local_c0 = "console";
                    uVar11 = Factory::InternalizeUtf8String(this_00,(Vector *)&local_c0);
                    pIVar7 = *(Isolate **)this;
                    uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
                    uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(
                                                  pIVar7 + 0x2bc8) - 1)) + 0x13)) + 699);
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar8 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar8 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
                      *puVar8 = uVar16;
                    }
                    else {
                      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar16);
                    }
                    NewFunctionArgs::ForFunctionWithoutCode
                              ((NewFunctionArgs *)&local_c0,uVar11,puVar8,1);
                    uVar18 = Factory::NewFunction(this_00,(NewFunctionArgs *)&local_c0);
                    pIVar7 = *(Isolate **)this;
                    uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
                    uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(
                                                  pIVar7 + 0x2bc8) - 1)) + 0x13)) + 499);
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar8 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar8 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
                      *puVar8 = uVar16;
                    }
                    else {
                      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar16);
                    }
                    uVar22 = Factory::NewJSObject(this_00,puVar8,0);
                    JSFunction::SetPrototype(uVar18,uVar22);
                    uVar18 = Factory::NewJSObject(this_00,uVar18,1);
                    JSObject::AddProperty(*(undefined8 *)this,puVar6,uVar11,uVar18,2);
                    FUN_01029064(*(undefined8 *)this,uVar18,"debug",0xf0,0,0,0);
                    FUN_01029064(*(undefined8 *)this,uVar18,"error",0xf1,0,0,0);
                    FUN_01029064(*(undefined8 *)this,uVar18,"info",0xf2,0,0,0);
                    FUN_01029064(*(undefined8 *)this,uVar18,"log",0xf3,0,0,0);
                    FUN_01029064(*(undefined8 *)this,uVar18,&DAT_0186871d,0xf4,0,0,0);
                    FUN_01029064(*(undefined8 *)this,uVar18,"dir",0xf5,0,0,0);
                    FUN_01029064(*(undefined8 *)this,uVar18,"dirxml",0xf6,0,0,0);
                    FUN_01029064(*(undefined8 *)this,uVar18,"table",0xf7,0,0,0);
                    FUN_01029064(*(undefined8 *)this,uVar18,"trace",0xf8,0,0,0);
                    FUN_01029064(*(undefined8 *)this,uVar18,"group",0xf9,0,0,0);
                    FUN_01029064(*(undefined8 *)this,uVar18,"groupCollapsed",0xfa,0,0,0);
                    FUN_01029064(*(undefined8 *)this,uVar18,"groupEnd",0xfb,0,0,0);
                    FUN_01029064(*(undefined8 *)this,uVar18,"clear",0xfc,0,0,0);
                    FUN_01029064(*(undefined8 *)this,uVar18,"count",0xfd,0,0,0);
                    FUN_01029064(*(undefined8 *)this,uVar18,"countReset",0xfe,0,0,0);
                    FUN_01029064(*(undefined8 *)this,uVar18,"assert",0x2e8,0,0,0);
                    FUN_01029064(*(undefined8 *)this,uVar18,"profile",0x100,0,0,0);
                    FUN_01029064(*(undefined8 *)this,uVar18,"profileEnd",0x101,0,0,0);
                    FUN_01029064(*(undefined8 *)this,uVar18,"time",0x102,0,0,0);
                    FUN_01029064(*(undefined8 *)this,uVar18,"timeLog",0x103,0,0,0);
                    FUN_01029064(*(undefined8 *)this,uVar18,"timeEnd",0x104,0,0,0);
                    FUN_01029064(*(undefined8 *)this,uVar18,"timeStamp",0x105,0,0,0);
                    FUN_01029064(*(undefined8 *)this,uVar18,"context",0x106,1,1,0);
                    pFVar20 = *(Factory **)this;
                    uStack_d8 = __strlen_chk(&LAB_019054f8,7);
                    local_e0 = &LAB_019054f8;
                    uVar11 = Factory::InternalizeUtf8String(pFVar20,(Vector *)&local_e0);
                    FUN_01036ca4(pFVar20,uVar18,uVar11);
                    uVar11 = CreateArrayBuffer(this,this_00 + 0x4e8,0);
                    JSObject::AddProperty(*(undefined8 *)this,puVar6,this_00 + 0x4e8,uVar11,2);
                    FUN_010369f8(*(undefined8 *)this,uVar11,7);
                    FUN_01036b90(*(undefined8 *)this,uVar11);
                    uVar18 = *(undefined8 *)this;
                    uStack_b8 = __strlen_chk("arrayBufferConstructor_DoNotInitialize",0x27);
                    local_c0 = "arrayBufferConstructor_DoNotInitialize";
                    uVar11 = Factory::InternalizeUtf8String(this_00,(Vector *)&local_c0);
                    puVar8 = (ulong *)FUN_0102910c(uVar18,uVar11,0xcb,1,0);
                    uVar16 = *puVar8;
                    uVar17 = **(ulong **)(this + 0x10);
                    *(int *)(uVar17 + 0x2b) = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,uVar17 + 0x2b,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,uVar17 + 0x2b,uVar16);
                      }
                    }
                    uVar11 = CreateArrayBuffer(this,this_00 + 0x9c8,1);
                    FUN_010369f8(*(undefined8 *)this,uVar11,0xa1);
                    FUN_01036b90(*(undefined8 *)this,uVar11);
                    pIVar7 = *(Isolate **)this;
                    uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
                    uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(
                                                  pIVar7 + 0x2bc8) - 1)) + 0x13)) + 499);
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar8 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar8 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
                      *puVar8 = uVar16;
                    }
                    else {
                      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar16);
                    }
                    puVar8 = (ulong *)Factory::NewJSObject(this_00,puVar8,1);
                    uVar16 = *puVar8;
                    uVar17 = **(ulong **)pGVar24;
                    *(int *)(uVar17 + 0x6b) = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,uVar17 + 0x6b,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,uVar17 + 0x6b,uVar16);
                      }
                    }
                    FUN_01029064(*(undefined8 *)this,puVar8,"load",0x20b,2,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"store",0x20c,3,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,&DAT_019f1106,0x20f,3,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,&DAT_019f1126,0x210,3,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"and",0x211,3,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,&DAT_019f12d4,0x212,3,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,&DAT_019f12e2,0x213,3,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"exchange",0x20d,3,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"compareExchange",0x20e,4,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"isLockFree",0x215,1,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"wait",0x216,4,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,&DAT_019c7a9b,0x217,3,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"notify",0x214,3,1,2);
                    uVar18 = *(undefined8 *)this;
                    uStack_b8 = __strlen_chk("TypedArray",0xb);
                    local_c0 = "TypedArray";
                    uVar11 = Factory::InternalizeUtf8String(this_00,(Vector *)&local_c0);
                    puVar8 = (ulong *)FUN_01028494(uVar18,uVar11,0x41b,0x34,0,pFVar19,0x22a);
                    uVar16 = *puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb);
                    *(uint *)(uVar16 + 0x1b) = *(uint *)(uVar16 + 0x1b) & 0xffffffdf;
                    *(undefined2 *)
                     ((*puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb)) + 0x13) = 0;
                    FUN_01036b90(*(undefined8 *)this,puVar8);
                    uVar16 = *puVar8;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x337);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    FUN_01029064(*(undefined8 *)this,puVar8,&DAT_019db47e,0x381,0,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"from",0x380,1,0,2);
                    uVar16 = *puVar8 & 0xffffffff00000000;
                    uVar17 = uVar16 | *(uint *)(*puVar8 + 0x1b);
                    if (*(short *)((uVar16 | 7) + (ulong)*(uint *)(uVar17 - 1)) == 0xa2) {
                      uVar17 = uVar16 | *(uint *)(uVar17 + 0xf);
                    }
                    pIVar7 = *(Isolate **)this;
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar8 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar8 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
                      *puVar8 = uVar17;
                    }
                    else {
                      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar17);
                      uVar17 = *puVar8;
                    }
                    uVar16 = **(ulong **)pGVar24;
                    puVar1 = (undefined4 *)(uVar16 + 0x33b);
                    *puVar1 = (int)uVar17;
                    if ((uVar17 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar16,puVar1,uVar17);
                        uVar15 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar16,puVar1,uVar17);
                      }
                    }
                    FUN_01036d1c(*(undefined8 *)this,puVar8,this_00 + 0x560,0x22d,0);
                    FUN_01036d1c(*(undefined8 *)this,puVar8,this_00 + 0x568,0x22e,1);
                    FUN_01036d1c(*(undefined8 *)this,puVar8,this_00 + 0x570,0x22f,1);
                    FUN_01036d1c(*(undefined8 *)this,puVar8,pFVar3,0x230,1);
                    FUN_01036d1c(*(undefined8 *)this,puVar8,this_00 + 0xc78,0x23a,1);
                    FUN_01036ba4(*(undefined8 *)this,puVar8,"entries",0x231,0,1);
                    FUN_01036ba4(*(undefined8 *)this,puVar8,&DAT_019c7514,0x232,0,1);
                    uVar11 = FUN_01036ba4(*(undefined8 *)this,puVar8,"values",0x233,0,1);
                    JSObject::AddProperty(*(undefined8 *)this,puVar8,pFVar23,uVar11,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"copyWithin",0x234,2,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"every",0x37b,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"fill",0x235,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"filter",0x37c,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,&DAT_019c75b8,0x37d,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"findIndex",0x37e,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"forEach",0x37f,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"includes",0x236,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"indexOf",0x237,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,&DAT_019c75db,0x2b7,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"lastIndexOf",0x238,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"map",0x23b,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"reverse",0x239,0,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"reduce",0x382,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"reduceRight",899,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"set",900,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"slice",0x385,2,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,&DAT_019c75fb,0x386,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"sort",0x388,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"subarray",0x389,2,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"toLocaleString",0x2b8,0,0,2);
                    JSObject::AddProperty(*(undefined8 *)this,puVar8,this_00 + 0xa68,uVar10,2);
                    uVar10 = InstallTypedArray(this,"Uint8Array",0x11);
                    FUN_010369f8(*(undefined8 *)this,uVar10,0xd0);
                    uVar10 = InstallTypedArray(this,"Int8Array",0x12);
                    FUN_010369f8(*(undefined8 *)this,uVar10,0x4a);
                    uVar10 = InstallTypedArray(this,"Uint16Array",0x13);
                    FUN_010369f8(*(undefined8 *)this,uVar10,0xce);
                    uVar10 = InstallTypedArray(this,"Int16Array",0x14);
                    FUN_010369f8(*(undefined8 *)this,uVar10,0x48);
                    uVar10 = InstallTypedArray(this,"Uint32Array",0x15);
                    FUN_010369f8(*(undefined8 *)this,uVar10,0xcf);
                    uVar10 = InstallTypedArray(this,"Int32Array",0x16);
                    FUN_010369f8(*(undefined8 *)this,uVar10,0x49);
                    uVar10 = InstallTypedArray(this,"Float32Array",0x17);
                    FUN_010369f8(*(undefined8 *)this,uVar10,0x30);
                    uVar10 = InstallTypedArray(this,"Float64Array",0x18);
                    FUN_010369f8(*(undefined8 *)this,uVar10,0x31);
                    uVar10 = InstallTypedArray(this,"Uint8ClampedArray",0x19);
                    FUN_010369f8(*(undefined8 *)this,uVar10,0xd1);
                    uVar10 = InstallTypedArray(this,"BigUint64Array",0x1a);
                    FUN_010369f8(*(undefined8 *)this,uVar10,0x1c);
                    uVar10 = InstallTypedArray(this,"BigInt64Array",0x1b);
                    FUN_010369f8(*(undefined8 *)this,uVar10,0x1b);
                    puVar8 = (ulong *)FUN_01036964(*(undefined8 *)this,puVar6,"DataView",0x41a,0x38,
                                                   0,pFVar19,0x107);
                    FUN_010369f8(*(undefined8 *)this,puVar8,0x27);
                    *(undefined2 *)
                     ((*puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb)) + 0x13) = 1;
                    *(undefined2 *)
                     ((*puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb)) + 0x15) =
                         0xffff;
                    uVar16 = *puVar8 & 0xffffffff00000000;
                    uVar17 = uVar16 | *(uint *)(*puVar8 + 0x1b);
                    if (*(short *)((uVar16 | 7) + (ulong)*(uint *)(uVar17 - 1)) == 0xa2) {
                      uVar17 = uVar16 | *(uint *)(uVar17 + 0xf);
                    }
                    pIVar7 = *(Isolate **)this;
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar8 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar8 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
                      *puVar8 = uVar17;
                    }
                    else {
                      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar17);
                    }
                    pFVar20 = *(Factory **)this;
                    uStack_b8 = __strlen_chk("DataView",9);
                    local_c0 = "DataView";
                    uVar10 = Factory::InternalizeUtf8String(pFVar20,(Vector *)&local_c0);
                    FUN_01036ca4(pFVar20,puVar8,uVar10);
                    FUN_01036d1c(*(undefined8 *)this,puVar8,this_00 + 0x560,0x2e9,0);
                    FUN_01036d1c(*(undefined8 *)this,puVar8,this_00 + 0x568,0x2ea,0);
                    FUN_01036d1c(*(undefined8 *)this,puVar8,this_00 + 0x570,0x2eb,0);
                    FUN_01029064(*(undefined8 *)this,puVar8,"getInt8",0x2ed,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"setInt8",0x2f7,2,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"getUint8",0x2ec,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"setUint8",0x2f6,2,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"getInt16",0x2ef,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"setInt16",0x2f9,2,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"getUint16",0x2ee,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"setUint16",0x2f8,2,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"getInt32",0x2f1,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"setInt32",0x2fb,2,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"getUint32",0x2f0,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"setUint32",0x2fa,2,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"getFloat32",0x2f2,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"setFloat32",0x2fc,2,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"getFloat64",0x2f3,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"setFloat64",0x2fd,2,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"getBigInt64",0x2f5,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"setBigInt64",0x2ff,2,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"getBigUint64",0x2f4,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"setBigUint64",0x2fe,2,0,2);
                    puVar8 = (ulong *)FUN_01036964(*(undefined8 *)this,puVar6,"Map",0x41c,0x10,0,
                                                   pFVar19,0x177);
                    FUN_010369f8(*(undefined8 *)this,puVar8,0x5c);
                    pIVar7 = *(Isolate **)this;
                    uVar16 = *puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb);
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar9 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar9 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar9 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar9 + 1;
                      *puVar9 = uVar16;
                    }
                    else {
                      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar16);
                      uVar16 = *puVar9;
                    }
                    *(undefined2 *)(uVar16 + 0x15) = 0xffff;
                    *(undefined2 *)(*puVar9 + 0x13) = 0;
                    uVar16 = *puVar8 & 0xffffffff00000000;
                    uVar17 = uVar16 | *(uint *)(*puVar8 + 0x1b);
                    if (*(short *)((uVar16 | 7) + (ulong)*(uint *)(uVar17 - 1)) == 0xa2) {
                      uVar17 = uVar16 | *(uint *)(uVar17 + 0xf);
                    }
                    pIVar7 = *(Isolate **)this;
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar9 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar9 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar9 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar9 + 1;
                      *puVar9 = uVar17;
                    }
                    else {
                      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar17);
                    }
                    FUN_01036ca4(*(undefined8 *)this,puVar9,this_00 + 0x7e0);
                    puVar13 = (ulong *)FUN_01029064(*(undefined8 *)this,puVar9,"get",0x17a,1,1,2);
                    uVar16 = *puVar13;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x377);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    puVar13 = (ulong *)FUN_01029064(*(undefined8 *)this,puVar9,"set",0x178,2,1,2);
                    uVar16 = *puVar13;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x37f);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    puVar13 = (ulong *)FUN_01029064(*(undefined8 *)this,puVar9,"has",0x17b,1,1,2);
                    uVar16 = *puVar13;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x37b);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    puVar13 = (ulong *)FUN_01029064(*(undefined8 *)this,puVar9,"delete",0x179,1,1,2)
                    ;
                    uVar16 = *puVar13;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x373);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    FUN_01029064(*(undefined8 *)this,puVar9,"clear",0x17c,0,1,2);
                    uVar10 = FUN_01029064(*(undefined8 *)this,puVar9,"entries",0x17d,0,1,2);
                    JSObject::AddProperty(*(undefined8 *)this,puVar9,pFVar23,uVar10,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"forEach",0x17f,1,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,&DAT_019c7514,0x180,0,1,2);
                    uVar11 = *(undefined8 *)this;
                    uStack_b8 = __strlen_chk("size",5);
                    local_c0 = "size";
                    uVar10 = Factory::InternalizeUtf8String(this_00,(Vector *)&local_c0);
                    FUN_01036d1c(uVar11,puVar9,uVar10,0x17e,1);
                    FUN_01029064(*(undefined8 *)this,puVar9,"values",0x181,0,1,2);
                    uVar16 = *puVar9;
                    uVar17 = **(ulong **)(this + 0x10);
                    uVar4 = *(uint *)(uVar16 - 1);
                    *(uint *)(uVar17 + 0xff) = uVar4;
                    if ((uVar4 & 1) != 0) {
                      uVar16 = uVar16 & 0xffffffff00000000;
                      uVar21 = uVar16 | uVar4;
                      uVar16 = uVar16 | (ulong)uVar4 & 0xfffffffffffc0000;
                      uVar15 = *(ulong *)(uVar16 + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,uVar17 + 0xff,uVar21);
                        uVar15 = *(ulong *)(uVar16 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,uVar17 + 0xff,uVar21);
                      }
                    }
                    FUN_01036b90(*(undefined8 *)this,puVar8);
                    puVar8 = (ulong *)FUN_01036964(*(undefined8 *)this,puVar6,"BigInt",0x411,0x10,0,
                                                   pFVar19,0xd7);
                    *(undefined2 *)
                     ((*puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb)) + 0x15) =
                         0xffff;
                    *(undefined2 *)
                     ((*puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb)) + 0x13) = 1;
                    FUN_010369f8(*(undefined8 *)this,puVar8,0x1a);
                    FUN_01029064(*(undefined8 *)this,puVar8,"asUintN",0xd8,2,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar8,"asIntN",0xd9,2,0,2);
                    uVar16 = *puVar8 & 0xffffffff00000000;
                    uVar17 = uVar16 | *(uint *)(*puVar8 + 0x1b);
                    if (*(short *)((uVar16 | 7) + (ulong)*(uint *)(uVar17 - 1)) == 0xa2) {
                      uVar17 = uVar16 | *(uint *)(uVar17 + 0xf);
                    }
                    pIVar7 = *(Isolate **)this;
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar9 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar9 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar9 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar9 + 1;
                      *puVar9 = uVar17;
                    }
                    else {
                      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar17);
                    }
                    JSFunction::SetPrototype(puVar8,puVar9);
                    FUN_01029064(*(undefined8 *)this,puVar9,"toLocaleString",0xda,0,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"toString",0xdb,0,0,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"valueOf",0xdc,0,0,2);
                    FUN_01036ca4(*(undefined8 *)this,puVar9,this_00 + 0x518);
                    puVar8 = (ulong *)FUN_01036964(*(undefined8 *)this,puVar6,"Set",0x41d,0x10,0,
                                                   pFVar19,0x1fe);
                    FUN_010369f8(*(undefined8 *)this,puVar8,0x5f);
                    pIVar7 = *(Isolate **)this;
                    uVar16 = *puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb);
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar9 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar9 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar9 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar9 + 1;
                      *puVar9 = uVar16;
                    }
                    else {
                      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar16);
                      uVar16 = *puVar9;
                    }
                    *(undefined2 *)(uVar16 + 0x15) = 0xffff;
                    *(undefined2 *)(*puVar9 + 0x13) = 0;
                    uVar16 = *puVar8 & 0xffffffff00000000;
                    uVar17 = uVar16 | *(uint *)(*puVar8 + 0x1b);
                    if (*(short *)((uVar16 | 7) + (ulong)*(uint *)(uVar17 - 1)) == 0xa2) {
                      uVar17 = uVar16 | *(uint *)(uVar17 + 0xf);
                    }
                    pIVar7 = *(Isolate **)this;
                    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar9 = *(ulong **)(pIVar7 + 0x95a0);
                      if (puVar9 == *(ulong **)(pIVar7 + 0x95a8)) {
                        puVar9 = (ulong *)HandleScope::Extend(pIVar7);
                      }
                      *(ulong **)(pIVar7 + 0x95a0) = puVar9 + 1;
                      *puVar9 = uVar17;
                    }
                    else {
                      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),
                                                   uVar17);
                    }
                    FUN_01036ca4(*(undefined8 *)this,puVar9,this_00 + 0x998);
                    puVar13 = (ulong *)FUN_01029064(*(undefined8 *)this,puVar9,"has",0x1ff,1,1,2);
                    uVar16 = *puVar13;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x3a7);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    puVar13 = (ulong *)FUN_01029064(*(undefined8 *)this,puVar9,&DAT_019f1106,0x200,1
                                                    ,1,2);
                    uVar16 = *puVar13;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x39f);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    puVar13 = (ulong *)FUN_01029064(*(undefined8 *)this,puVar9,"delete",0x201,1,1,2)
                    ;
                    uVar16 = *puVar13;
                    uVar17 = **(ulong **)(this + 0x10);
                    puVar1 = (undefined4 *)(uVar17 + 0x3a3);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    FUN_01029064(*(undefined8 *)this,puVar9,"clear",0x202,0,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"entries",0x203,0,1,2);
                    FUN_01029064(*(undefined8 *)this,puVar9,"forEach",0x205,1,0,2);
                    uVar11 = *(undefined8 *)this;
                    uStack_b8 = __strlen_chk("size",5);
                    local_c0 = "size";
                    uVar10 = Factory::InternalizeUtf8String(this_00,(Vector *)&local_c0);
                    FUN_01036d1c(uVar11,puVar9,uVar10,0x204,1);
                    uVar10 = FUN_01029064(*(undefined8 *)this,puVar9,"values",0x206,0,1,2);
                    JSObject::AddProperty(*(undefined8 *)this,puVar9,this_00 + 0x7a8,uVar10,2);
                    JSObject::AddProperty(*(undefined8 *)this,puVar9,pFVar23,uVar10,2);
                    uVar16 = *puVar9;
                    uVar17 = **(ulong **)(this + 0x10);
                    uVar4 = *(uint *)(uVar16 - 1);
                    puVar25 = (uint *)(uVar17 + 0x10f);
                    *puVar25 = uVar4;
                    if ((uVar4 & 1) != 0) {
                      uVar16 = uVar16 & 0xffffffff00000000;
                      uVar21 = uVar16 | uVar4;
                      uVar16 = uVar16 | (ulong)uVar4 & 0xfffffffffffc0000;
                      uVar15 = *(ulong *)(uVar16 + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar25,uVar21);
                        uVar15 = *(ulong *)(uVar16 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar25,uVar21);
                      }
                    }
                    uVar16 = *puVar9;
                    uVar17 = **(ulong **)pGVar24;
                    puVar1 = (undefined4 *)(uVar17 + 0x10b);
                    *puVar1 = (int)uVar16;
                    if ((uVar16 & 1) != 0) {
                      uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                      if (((uint)uVar15 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                        uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                      }
                      if (((uVar15 & 0x18) != 0) &&
                         ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                      }
                    }
                    FUN_01036b90(*(undefined8 *)this,puVar8);
                    puVar8 = (ulong *)Factory::NewMap(this_00,0xac,0x14,3,1);
                    uVar17 = *puVar8;
                    uVar16 = **(ulong **)(this + 0x10);
                    uVar4 = *(uint *)(uVar16 + 499);
                    puVar25 = (uint *)(uVar17 + 0x13);
                    if (((*puVar25 & 1) == 0) ||
                       (*(short *)((uVar17 & 0xffffffff00000000 | 7) +
                                  (ulong)*(uint *)((uVar17 & 0xffffffff00000000 | (ulong)*puVar25) -
                                                  1)) != 0xa2)) {
                      *puVar25 = uVar4;
                      if ((uVar4 & 1) != 0) {
                        uVar16 = uVar16 & 0xffffffff00000000;
                        uVar21 = uVar16 | uVar4;
                        uVar16 = uVar16 | (ulong)uVar4 & 0xfffffffffffc0000;
                        uVar15 = *(ulong *)(uVar16 + 8);
                        if (((uint)uVar15 >> 0x12 & 1) != 0) {
                          Heap_MarkingBarrierSlow(uVar17,puVar25,uVar21);
                          uVar15 = *(ulong *)(uVar16 | 8);
                        }
                        if (((uVar15 & 0x18) != 0) &&
                           ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                          Heap_GenerationalBarrierSlow(uVar17,puVar25,uVar21);
                        }
                      }
                      Map::SetPrototype(*(long *)this,puVar8,*(long *)this + 0xb0,1);
                      Map::EnsureDescriptorSlack(*(undefined8 *)this,puVar8,1);
                      uVar16 = *puVar8;
                      uVar17 = **(ulong **)(this + 0x10);
                      puVar1 = (undefined4 *)(uVar17 + 0x17f);
                      *puVar1 = (int)uVar16;
                      if ((uVar16 & 1) != 0) {
                        uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                        if (((uint)uVar15 >> 0x12 & 1) != 0) {
                          Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                          uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                        }
                        if (((uVar15 & 0x18) != 0) &&
                           ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                          Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                        }
                      }
                      Descriptor::DataField
                                ((Descriptor *)&local_c0,*(undefined8 *)this,this_00 + 0xc78,0,7,4);
                      local_e0 = (undefined1 *)*puVar8;
                      Map::AppendDescriptor
                                ((Map *)&local_e0,*(Isolate **)this,(Descriptor *)&local_c0);
                      uVar10 = Factory::ObjectLiteralMapFromCache
                                         (this_00,*(undefined8 *)(this + 0x10),2);
                      pIVar7 = *(Isolate **)this;
                      uVar11 = FieldType::Any(pIVar7);
                      lVar14 = Map::CopyWithField(pIVar7,uVar10,this_00 + 0xac8,uVar11,0,1,4,0);
                      if (lVar14 != 0) {
                        pIVar7 = *(Isolate **)this;
                        uVar10 = FieldType::Any(pIVar7);
                        puVar8 = (ulong *)Map::CopyWithField(pIVar7,lVar14,this_00 + 0x610,uVar10,0,
                                                             1,4,0);
                        if (puVar8 != (ulong *)0x0) {
                          uVar16 = *puVar8;
                          uVar17 = **(ulong **)pGVar24;
                          puVar1 = (undefined4 *)(uVar17 + 0x15b);
                          *puVar1 = (int)uVar16;
                          if ((uVar16 & 1) != 0) {
                            uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                            if (((uint)uVar15 >> 0x12 & 1) != 0) {
                              Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                              uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                            }
                            if (((uVar15 & 0x18) != 0) &&
                               ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                              Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                            }
                          }
                          puVar8 = (ulong *)FUN_01036964(*(undefined8 *)this,puVar6,"WeakMap",0x41e,
                                                         0x10,0,pFVar19,0x254);
                          FUN_010369f8(*(undefined8 *)this,puVar8,99);
                          pIVar7 = *(Isolate **)this;
                          uVar16 = *puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb);
                          if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) ==
                              (CanonicalHandleScope *)0x0) {
                            puVar9 = *(ulong **)(pIVar7 + 0x95a0);
                            if (puVar9 == *(ulong **)(pIVar7 + 0x95a8)) {
                              puVar9 = (ulong *)HandleScope::Extend(pIVar7);
                            }
                            *(ulong **)(pIVar7 + 0x95a0) = puVar9 + 1;
                            *puVar9 = uVar16;
                          }
                          else {
                            puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                                        (*(CanonicalHandleScope **)(pIVar7 + 0x95b8)
                                                         ,uVar16);
                            uVar16 = *puVar9;
                          }
                          *(undefined2 *)(uVar16 + 0x15) = 0xffff;
                          *(undefined2 *)(*puVar9 + 0x13) = 0;
                          uVar16 = *puVar8 & 0xffffffff00000000;
                          uVar17 = uVar16 | *(uint *)(*puVar8 + 0x1b);
                          if (*(short *)((uVar16 | 7) + (ulong)*(uint *)(uVar17 - 1)) == 0xa2) {
                            uVar17 = uVar16 | *(uint *)(uVar17 + 0xf);
                          }
                          pIVar7 = *(Isolate **)this;
                          if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) ==
                              (CanonicalHandleScope *)0x0) {
                            puVar8 = *(ulong **)(pIVar7 + 0x95a0);
                            if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
                              puVar8 = (ulong *)HandleScope::Extend(pIVar7);
                            }
                            *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
                            *puVar8 = uVar17;
                          }
                          else {
                            puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                                        (*(CanonicalHandleScope **)(pIVar7 + 0x95b8)
                                                         ,uVar17);
                          }
                          FUN_01029064(*(undefined8 *)this,puVar8,"delete",0x259,1,1,2);
                          puVar9 = (ulong *)FUN_01029064(*(undefined8 *)this,puVar8,"get",0x256,1,1,
                                                         2);
                          uVar16 = *puVar9;
                          uVar17 = **(ulong **)(this + 0x10);
                          puVar1 = (undefined4 *)(uVar17 + 0x3c7);
                          *puVar1 = (int)uVar16;
                          if ((uVar16 & 1) != 0) {
                            uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                            if (((uint)uVar15 >> 0x12 & 1) != 0) {
                              Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                              uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                            }
                            if (((uVar15 & 0x18) != 0) &&
                               ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                              Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                            }
                          }
                          puVar9 = (ulong *)FUN_01029064(*(undefined8 *)this,puVar8,"set",600,2,1,2)
                          ;
                          uVar16 = *puVar9;
                          uVar17 = **(ulong **)(this + 0x10);
                          puVar1 = (undefined4 *)(uVar17 + 0x3c3);
                          *puVar1 = (int)uVar16;
                          if ((uVar16 & 1) != 0) {
                            uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                            if (((uint)uVar15 >> 0x12 & 1) != 0) {
                              Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                              uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                            }
                            if (((uVar15 & 0x18) != 0) &&
                               ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                              Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                            }
                          }
                          FUN_01029064(*(undefined8 *)this,puVar8,"has",599,1,1,2);
                          pFVar23 = *(Factory **)this;
                          uStack_b8 = __strlen_chk("WeakMap",8);
                          local_c0 = "WeakMap";
                          uVar10 = Factory::InternalizeUtf8String(pFVar23,(Vector *)&local_c0);
                          FUN_01036ca4(pFVar23,puVar8,uVar10);
                          uVar16 = *puVar8;
                          uVar17 = **(ulong **)(this + 0x10);
                          uVar4 = *(uint *)(uVar16 - 1);
                          puVar25 = (uint *)(uVar17 + 0x11f);
                          *puVar25 = uVar4;
                          if ((uVar4 & 1) != 0) {
                            uVar16 = uVar16 & 0xffffffff00000000;
                            uVar21 = uVar16 | uVar4;
                            uVar16 = uVar16 | (ulong)uVar4 & 0xfffffffffffc0000;
                            uVar15 = *(ulong *)(uVar16 + 8);
                            if (((uint)uVar15 >> 0x12 & 1) != 0) {
                              Heap_MarkingBarrierSlow(uVar17,puVar25,uVar21);
                              uVar15 = *(ulong *)(uVar16 | 8);
                            }
                            if (((uVar15 & 0x18) != 0) &&
                               ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                              Heap_GenerationalBarrierSlow(uVar17,puVar25,uVar21);
                            }
                          }
                          puVar8 = (ulong *)FUN_01036964(*(undefined8 *)this,puVar6,"WeakSet",0x41f,
                                                         0x10,0,pFVar19,0x25a);
                          FUN_010369f8(*(undefined8 *)this,puVar8,100);
                          pIVar7 = *(Isolate **)this;
                          uVar16 = *puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb);
                          if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) ==
                              (CanonicalHandleScope *)0x0) {
                            puVar9 = *(ulong **)(pIVar7 + 0x95a0);
                            if (puVar9 == *(ulong **)(pIVar7 + 0x95a8)) {
                              puVar9 = (ulong *)HandleScope::Extend(pIVar7);
                            }
                            *(ulong **)(pIVar7 + 0x95a0) = puVar9 + 1;
                            *puVar9 = uVar16;
                          }
                          else {
                            puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                                        (*(CanonicalHandleScope **)(pIVar7 + 0x95b8)
                                                         ,uVar16);
                            uVar16 = *puVar9;
                          }
                          *(undefined2 *)(uVar16 + 0x15) = 0xffff;
                          *(undefined2 *)(*puVar9 + 0x13) = 0;
                          uVar16 = *puVar8 & 0xffffffff00000000;
                          uVar17 = uVar16 | *(uint *)(*puVar8 + 0x1b);
                          if (*(short *)((uVar16 | 7) + (ulong)*(uint *)(uVar17 - 1)) == 0xa2) {
                            uVar17 = uVar16 | *(uint *)(uVar17 + 0xf);
                          }
                          pIVar7 = *(Isolate **)this;
                          if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) ==
                              (CanonicalHandleScope *)0x0) {
                            puVar8 = *(ulong **)(pIVar7 + 0x95a0);
                            if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
                              puVar8 = (ulong *)HandleScope::Extend(pIVar7);
                            }
                            *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
                            *puVar8 = uVar17;
                          }
                          else {
                            puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                                        (*(CanonicalHandleScope **)(pIVar7 + 0x95b8)
                                                         ,uVar17);
                          }
                          FUN_01029064(*(undefined8 *)this,puVar8,"delete",0x25d,1,1,2);
                          FUN_01029064(*(undefined8 *)this,puVar8,"has",0x25b,1,1,2);
                          puVar9 = (ulong *)FUN_01029064(*(undefined8 *)this,puVar8,&DAT_019f1106,
                                                         0x25c,1,1,2);
                          uVar16 = *puVar9;
                          uVar17 = **(ulong **)(this + 0x10);
                          puVar1 = (undefined4 *)(uVar17 + 0x3cb);
                          *puVar1 = (int)uVar16;
                          if ((uVar16 & 1) != 0) {
                            uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                            if (((uint)uVar15 >> 0x12 & 1) != 0) {
                              Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                              uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                            }
                            if (((uVar15 & 0x18) != 0) &&
                               ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                              Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                            }
                          }
                          uVar11 = *(undefined8 *)this;
                          uStack_b8 = __strlen_chk("WeakSet",8);
                          local_c0 = "WeakSet";
                          uVar10 = Factory::InternalizeUtf8String(this_00,(Vector *)&local_c0);
                          FUN_01036ca4(uVar11,puVar8,uVar10);
                          uVar16 = *puVar8;
                          uVar17 = **(ulong **)(this + 0x10);
                          uVar4 = *(uint *)(uVar16 - 1);
                          puVar25 = (uint *)(uVar17 + 0x123);
                          *puVar25 = uVar4;
                          if ((uVar4 & 1) != 0) {
                            uVar16 = uVar16 & 0xffffffff00000000;
                            uVar21 = uVar16 | uVar4;
                            uVar16 = uVar16 | (ulong)uVar4 & 0xfffffffffffc0000;
                            uVar15 = *(ulong *)(uVar16 + 8);
                            if (((uint)uVar15 >> 0x12 & 1) != 0) {
                              Heap_MarkingBarrierSlow(uVar17,puVar25,uVar21);
                              uVar15 = *(ulong *)(uVar16 | 8);
                            }
                            if (((uVar15 & 0x18) != 0) &&
                               ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                              Heap_GenerationalBarrierSlow(uVar17,puVar25,uVar21);
                            }
                          }
                          CreateJSProxyMaps(this);
                          pIVar7 = *(Isolate **)this;
                          uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
                          uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(
                                                  ulong *)(pIVar7 + 0x2bc8) - 1)) + 0x13)) + 0x2c7);
                          if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) ==
                              (CanonicalHandleScope *)0x0) {
                            puVar8 = *(ulong **)(pIVar7 + 0x95a0);
                            if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
                              puVar8 = (ulong *)HandleScope::Extend(pIVar7);
                            }
                            *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
                            *puVar8 = uVar16;
                          }
                          else {
                            puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                                        (*(CanonicalHandleScope **)(pIVar7 + 0x95b8)
                                                         ,uVar16);
                          }
                          plVar12 = (long *)Map::Copy(pIVar7,puVar8,"Proxy");
                          *(byte *)(*plVar12 + 9) = *(byte *)(*plVar12 + 9) | 0x40;
                          NewFunctionArgs::ForBuiltin
                                    ((NewFunctionArgs *)&local_c0,this_00 + 0x918,plVar12,0x334);
                          puVar8 = (ulong *)Factory::NewFunction
                                                      (this_00,(NewFunctionArgs *)&local_c0);
                          pIVar7 = *(Isolate **)this;
                          uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
                          uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(
                                                  ulong *)(pIVar7 + 0x2bc8) - 1)) + 0x13)) + 0x207);
                          if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) ==
                              (CanonicalHandleScope *)0x0) {
                            puVar9 = *(ulong **)(pIVar7 + 0x95a0);
                            if (puVar9 == *(ulong **)(pIVar7 + 0x95a8)) {
                              puVar9 = (ulong *)HandleScope::Extend(pIVar7);
                            }
                            *(ulong **)(pIVar7 + 0x95a0) = puVar9 + 1;
                            *puVar9 = uVar16;
                          }
                          else {
                            puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                                        (*(CanonicalHandleScope **)(pIVar7 + 0x95b8)
                                                         ,uVar16);
                            uVar16 = *puVar9;
                          }
                          uVar17 = *puVar8;
                          puVar25 = (uint *)(uVar16 + 0x13);
                          if (((*puVar25 & 1) == 0) ||
                             (*(short *)((uVar16 & 0xffffffff00000000 | 7) +
                                        (ulong)*(uint *)((uVar16 & 0xffffffff00000000 |
                                                         (ulong)*puVar25) - 1)) != 0xa2)) {
                            *puVar25 = (uint)uVar17;
                            if ((uVar17 & 1) != 0) {
                              uVar15 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
                              if (((uint)uVar15 >> 0x12 & 1) != 0) {
                                Heap_MarkingBarrierSlow(uVar16,puVar25,uVar17);
                                uVar15 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
                              }
                              if (((uVar15 & 0x18) != 0) &&
                                 ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                                Heap_GenerationalBarrierSlow(uVar16,puVar25,uVar17);
                              }
                            }
                            *(undefined2 *)
                             ((*puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb)) +
                             0x15) = 2;
                            *(undefined2 *)
                             ((*puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb)) +
                             0x13) = 2;
                            uVar16 = *puVar8;
                            uVar17 = **(ulong **)pGVar24;
                            puVar1 = (undefined4 *)(uVar17 + 0x203);
                            *puVar1 = (int)uVar16;
                            if ((uVar16 & 1) != 0) {
                              uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                              if (((uint)uVar15 >> 0x12 & 1) != 0) {
                                Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                                uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                              }
                              if (((uVar15 & 0x18) != 0) &&
                                 ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                                Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                              }
                            }
                            JSObject::AddProperty
                                      (*(undefined8 *)this,puVar6,this_00 + 0x918,puVar8,2);
                            FUN_01029064(*(undefined8 *)this,puVar8,"revocable",0x33b,2,1,2);
                            puVar8 = (ulong *)FUN_01036b50(*(undefined8 *)this,0x33c,pFVar2,0,0);
                            uVar16 = *puVar8;
                            uVar17 = **(ulong **)(this + 0x10);
                            puVar1 = (undefined4 *)(uVar17 + 0x20f);
                            *puVar1 = (int)uVar16;
                            if ((uVar16 & 1) != 0) {
                              uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                              if (((uint)uVar15 >> 0x12 & 1) != 0) {
                                Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                                uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                              }
                              if (((uVar15 & 0x18) != 0) &&
                                 ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                                Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                              }
                            }
                            uStack_b8 = __strlen_chk("Reflect",8);
                            local_c0 = "Reflect";
                            uVar10 = Factory::InternalizeUtf8String(this_00,(Vector *)&local_c0);
                            pIVar7 = *(Isolate **)this;
                            uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
                            uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(
                                                  ulong *)(pIVar7 + 0x2bc8) - 1)) + 0x13)) + 499);
                            if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) ==
                                (CanonicalHandleScope *)0x0) {
                              puVar8 = *(ulong **)(pIVar7 + 0x95a0);
                              if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
                                puVar8 = (ulong *)HandleScope::Extend(pIVar7);
                              }
                              *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
                              *puVar8 = uVar16;
                            }
                            else {
                              puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                                          (*(CanonicalHandleScope **)
                                                            (pIVar7 + 0x95b8),uVar16);
                            }
                            uVar11 = Factory::NewJSObject(this_00,puVar8,1);
                            JSObject::AddProperty(*(undefined8 *)this,puVar6,uVar10,uVar11,2);
                            FUN_01029064(*(undefined8 *)this,uVar11,"defineProperty",0x1e5,3,1,2);
                            FUN_01029064(*(undefined8 *)this,uVar11,"deleteProperty",0x344,2,1,2);
                            puVar6 = (ulong *)FUN_01029064(*(undefined8 *)this,uVar11,"apply",0x1e3,
                                                           3,0,2);
                            uVar16 = *puVar6;
                            uVar17 = **(ulong **)(this + 0x10);
                            puVar1 = (undefined4 *)(uVar17 + 0x3fb);
                            *puVar1 = (int)uVar16;
                            if ((uVar16 & 1) != 0) {
                              uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                              if (((uint)uVar15 >> 0x12 & 1) != 0) {
                                Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                                uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                              }
                              if (((uVar15 & 0x18) != 0) &&
                                 ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                                Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                              }
                            }
                            puVar6 = (ulong *)FUN_01029064(*(undefined8 *)this,uVar11,"construct",
                                                           0x1e4,2,0,2);
                            uVar16 = *puVar6;
                            uVar17 = **(ulong **)(this + 0x10);
                            puVar1 = (undefined4 *)(uVar17 + 0x3ff);
                            *puVar1 = (int)uVar16;
                            if ((uVar16 & 1) != 0) {
                              uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                              if (((uint)uVar15 >> 0x12 & 1) != 0) {
                                Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                                uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                              }
                              if (((uVar15 & 0x18) != 0) &&
                                 ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                                Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                              }
                            }
                            FUN_01029064(*(undefined8 *)this,uVar11,"get",0x343,2,0,2);
                            FUN_01029064(*(undefined8 *)this,uVar11,"getOwnPropertyDescriptor",0x1e6
                                         ,2,1,2);
                            FUN_01029064(*(undefined8 *)this,uVar11,"getPrototypeOf",0x341,1,1,2);
                            FUN_01029064(*(undefined8 *)this,uVar11,"has",0x345,2,1,2);
                            FUN_01029064(*(undefined8 *)this,uVar11,"isExtensible",0x33f,1,1,2);
                            FUN_01029064(*(undefined8 *)this,uVar11,"ownKeys",0x1e7,1,1,2);
                            FUN_01029064(*(undefined8 *)this,uVar11,"preventExtensions",0x340,1,1,2)
                            ;
                            FUN_01029064(*(undefined8 *)this,uVar11,"set",0x1e8,3,0,2);
                            FUN_01029064(*(undefined8 *)this,uVar11,"setPrototypeOf",0x342,2,1,2);
                            puVar6 = (ulong *)Factory::NewMap(this_00,0x438,0x18,3,0);
                            uVar17 = *puVar6;
                            uVar16 = **(ulong **)(this + 0x10);
                            uVar4 = *(uint *)(uVar16 + 499);
                            puVar25 = (uint *)(uVar17 + 0x13);
                            if (((*puVar25 & 1) == 0) ||
                               (*(short *)((uVar17 & 0xffffffff00000000 | 7) +
                                          (ulong)*(uint *)((uVar17 & 0xffffffff00000000 |
                                                           (ulong)*puVar25) - 1)) != 0xa2)) {
                              *puVar25 = uVar4;
                              if ((uVar4 & 1) != 0) {
                                uVar16 = uVar16 & 0xffffffff00000000;
                                uVar21 = uVar16 | uVar4;
                                uVar16 = uVar16 | (ulong)uVar4 & 0xfffffffffffc0000;
                                uVar15 = *(ulong *)(uVar16 + 8);
                                if (((uint)uVar15 >> 0x12 & 1) != 0) {
                                  Heap_MarkingBarrierSlow(uVar17,puVar25,uVar21);
                                  uVar15 = *(ulong *)(uVar16 | 8);
                                }
                                if (((uVar15 & 0x18) != 0) &&
                                   ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                                  Heap_GenerationalBarrierSlow(uVar17,puVar25,uVar21);
                                }
                              }
                              *(byte *)(*puVar6 + 9) = *(byte *)(*puVar6 + 9) | 2;
                              Map::SetPrototype(*(undefined8 *)this,puVar6,param_3,1);
                              Map::EnsureDescriptorSlack(*(undefined8 *)this,puVar6,2);
                              Descriptor::AccessorConstant
                                        ((Descriptor *)&local_c0,pFVar3,this_00 + 0xe28,3);
                              local_e0 = (undefined1 *)*puVar6;
                              Map::AppendDescriptor
                                        ((Map *)&local_e0,*(Isolate **)this,(Descriptor *)&local_c0)
                              ;
                              Descriptor::AccessorConstant
                                        ((Descriptor *)&local_c0,this_00 + 0x820,this_00 + 0xe30,3);
                              local_e0 = (undefined1 *)*puVar6;
                              Map::AppendDescriptor
                                        ((Map *)&local_e0,*(Isolate **)this,(Descriptor *)&local_c0)
                              ;
                              uVar16 = *puVar6;
                              uVar17 = **(ulong **)(this + 0x10);
                              *(int *)(uVar17 + 0x83) = (int)uVar16;
                              if ((uVar16 & 1) != 0) {
                                uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                                if (((uint)uVar15 >> 0x12 & 1) != 0) {
                                  Heap_MarkingBarrierSlow(uVar17,uVar17 + 0x83,uVar16);
                                  uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                                }
                                if (((uVar15 & 0x18) != 0) &&
                                   ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                                  Heap_GenerationalBarrierSlow(uVar17,uVar17 + 0x83,uVar16);
                                }
                              }
                              puVar6 = (ulong *)Map::Copy(*(undefined8 *)this,puVar6,"IsConstructor"
                                                         );
                              *(byte *)(*puVar6 + 9) = *(byte *)(*puVar6 + 9) | 0x40;
                              uVar16 = *puVar6;
                              uVar17 = **(ulong **)(this + 0x10);
                              *(int *)(uVar17 + 0x7f) = (int)uVar16;
                              if ((uVar16 & 1) != 0) {
                                uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                                if (((uint)uVar15 >> 0x12 & 1) != 0) {
                                  Heap_MarkingBarrierSlow(uVar17,uVar17 + 0x7f,uVar16);
                                  uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                                }
                                if (((uVar15 & 0x18) != 0) &&
                                   ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                                  Heap_GenerationalBarrierSlow(uVar17,uVar17 + 0x7f,uVar16);
                                }
                              }
                              pIVar7 = *(Isolate **)this;
                              uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
                              uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(
                                                  ulong *)(pIVar7 + 0x2bc8) - 1)) + 0x13)) + 0x103);
                              if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) ==
                                  (CanonicalHandleScope *)0x0) {
                                puVar6 = *(ulong **)(pIVar7 + 0x95a0);
                                if (puVar6 == *(ulong **)(pIVar7 + 0x95a8)) {
                                  puVar6 = (ulong *)HandleScope::Extend(pIVar7);
                                }
                                *(ulong **)(pIVar7 + 0x95a0) = puVar6 + 1;
                                *puVar6 = uVar16;
                              }
                              else {
                                puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                                            (*(CanonicalHandleScope **)
                                                              (pIVar7 + 0x95b8),uVar16);
                              }
                              NewFunctionArgs::ForBuiltinWithPrototype
                                        ((NewFunctionArgs *)&local_c0,this_00 + 0x4c0,puVar6,0x422,
                                         0x14,2,0x97,0);
                              puVar6 = (ulong *)Factory::NewFunction
                                                          (this_00,(NewFunctionArgs *)&local_c0);
                              pIVar7 = *(Isolate **)this;
                              uVar16 = *puVar6 & 0xffffffff00000000 |
                                       (ulong)*(uint *)(*puVar6 + 0x1b);
                              if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) ==
                                  (CanonicalHandleScope *)0x0) {
                                puVar6 = *(ulong **)(pIVar7 + 0x95a0);
                                if (puVar6 == *(ulong **)(pIVar7 + 0x95a8)) {
                                  puVar6 = (ulong *)HandleScope::Extend(pIVar7);
                                }
                                *(ulong **)(pIVar7 + 0x95a0) = puVar6 + 1;
                                *puVar6 = uVar16;
                              }
                              else {
                                puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                                            (*(CanonicalHandleScope **)
                                                              (pIVar7 + 0x95b8),uVar16);
                              }
                              Map::EnsureDescriptorSlack(*(undefined8 *)this,puVar6,2);
                              Descriptor::DataField
                                        ((Descriptor *)&local_e0,*(undefined8 *)this,pFVar3,0,2,4);
                              local_e8 = *puVar6;
                              Map::AppendDescriptor
                                        ((Map *)&local_e8,*(Isolate **)this,(Descriptor *)&local_e0)
                              ;
                              Descriptor::DataField
                                        ((Descriptor *)&local_e0,*(undefined8 *)this,this_00 + 0x580
                                         ,1,2,4);
                              local_e8 = *puVar6;
                              Map::AppendDescriptor
                                        ((Map *)&local_e8,*(Isolate **)this,(Descriptor *)&local_e0)
                              ;
                              uVar16 = *puVar6;
                              uVar17 = **(ulong **)(this + 0x10);
                              puVar1 = (undefined4 *)(uVar17 + 0x28f);
                              *puVar1 = (int)uVar16;
                              if ((uVar16 & 1) != 0) {
                                uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                                if (((uint)uVar15 >> 0x12 & 1) != 0) {
                                  Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                                  uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                                }
                                if (((uVar15 & 0x18) != 0) &&
                                   ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                                  Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                                }
                              }
                              pIVar7 = *(Isolate **)this;
                              uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
                              uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(
                                                  ulong *)(pIVar7 + 0x2bc8) - 1)) + 0x13)) + 0x28f);
                              if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) ==
                                  (CanonicalHandleScope *)0x0) {
                                puVar6 = *(ulong **)(pIVar7 + 0x95a0);
                                if (puVar6 == *(ulong **)(pIVar7 + 0x95a8)) {
                                  puVar6 = (ulong *)HandleScope::Extend(pIVar7);
                                }
                                *(ulong **)(pIVar7 + 0x95a0) = puVar6 + 1;
                                *puVar6 = uVar16;
                              }
                              else {
                                puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                                            (*(CanonicalHandleScope **)
                                                              (pIVar7 + 0x95b8),uVar16);
                              }
                              puVar6 = (ulong *)Map::Copy(*(undefined8 *)this,puVar6,
                                                          "FastAliasedArguments");
                              *(byte *)(*puVar6 + 10) = *(byte *)(*puVar6 + 10) & 7 | 0x68;
                              uVar16 = *puVar6;
                              uVar17 = **(ulong **)(this + 0x10);
                              *(int *)(uVar17 + 0xbf) = (int)uVar16;
                              if ((uVar16 & 1) != 0) {
                                uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                                if (((uint)uVar15 >> 0x12 & 1) != 0) {
                                  Heap_MarkingBarrierSlow(uVar17,uVar17 + 0xbf,uVar16);
                                  uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                                }
                                if (((uVar15 & 0x18) != 0) &&
                                   ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                                  Heap_GenerationalBarrierSlow(uVar17,uVar17 + 0xbf,uVar16);
                                }
                              }
                              puVar6 = (ulong *)Map::Copy(*(undefined8 *)this,puVar6,
                                                          "SlowAliasedArguments");
                              *(byte *)(*puVar6 + 10) = *(byte *)(*puVar6 + 10) & 7 | 0x70;
                              uVar16 = *puVar6;
                              uVar17 = **(ulong **)(this + 0x10);
                              puVar1 = (undefined4 *)(uVar17 + 0x293);
                              *puVar1 = (int)uVar16;
                              if ((uVar16 & 1) != 0) {
                                uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                                if (((uint)uVar15 >> 0x12 & 1) != 0) {
                                  Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                                  uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                                }
                                if (((uVar15 & 0x18) != 0) &&
                                   ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                                  Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                                }
                              }
                              puVar6 = (ulong *)Factory::NewAccessorPair(this_00);
                              puVar8 = (ulong *)GetThrowTypeErrorIntrinsic(this);
                              uVar17 = *puVar6;
                              uVar16 = *puVar8;
                              *(int *)(uVar17 + 3) = (int)uVar16;
                              if ((uVar16 & 1) != 0) {
                                uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                                if (((uint)uVar15 >> 0x12 & 1) != 0) {
                                  Heap_MarkingBarrierSlow(uVar17,uVar17 + 3,uVar16);
                                  uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                                }
                                if (((uVar15 & 0x18) != 0) &&
                                   ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                                  Heap_GenerationalBarrierSlow(uVar17,uVar17 + 3,uVar16);
                                }
                              }
                              uVar17 = *puVar6;
                              uVar16 = *puVar8;
                              *(int *)(uVar17 + 7) = (int)uVar16;
                              if ((uVar16 & 1) != 0) {
                                uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                                if (((uint)uVar15 >> 0x12 & 1) != 0) {
                                  Heap_MarkingBarrierSlow(uVar17,uVar17 + 7,uVar16);
                                  uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                                }
                                if (((uVar15 & 0x18) != 0) &&
                                   ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                                  Heap_GenerationalBarrierSlow(uVar17,uVar17 + 7,uVar16);
                                }
                              }
                              puVar8 = (ulong *)Factory::NewMap(this_00,0x422,0x10,2,1);
                              Map::EnsureDescriptorSlack(*(undefined8 *)this,puVar8,2);
                              Descriptor::DataField
                                        ((Descriptor *)&local_c0,*(undefined8 *)this,pFVar3,0,2,4);
                              local_e0 = (undefined1 *)*puVar8;
                              Map::AppendDescriptor
                                        ((Map *)&local_e0,*(Isolate **)this,(Descriptor *)&local_c0)
                              ;
                              Descriptor::AccessorConstant
                                        ((Descriptor *)&local_c0,this_00 + 0x580,puVar6,7);
                              local_e0 = (undefined1 *)*puVar8;
                              Map::AppendDescriptor
                                        ((Map *)&local_e0,*(Isolate **)this,(Descriptor *)&local_c0)
                              ;
                              pIVar7 = *(Isolate **)this;
                              uVar16 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
                              uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(*(
                                                  ulong *)(pIVar7 + 0x2bc8) - 1)) + 0x13)) + 0x103);
                              if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) ==
                                  (CanonicalHandleScope *)0x0) {
                                puVar6 = *(ulong **)(pIVar7 + 0x95a0);
                                if (puVar6 == *(ulong **)(pIVar7 + 0x95a8)) {
                                  puVar6 = (ulong *)HandleScope::Extend(pIVar7);
                                }
                                *(ulong **)(pIVar7 + 0x95a0) = puVar6 + 1;
                                *puVar6 = uVar16;
                              }
                              else {
                                puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                                            (*(CanonicalHandleScope **)
                                                              (pIVar7 + 0x95b8),uVar16);
                              }
                              Map::SetPrototype(pIVar7,puVar8,puVar6,1);
                              uVar17 = *puVar8;
                              uVar16 = **(ulong **)pGVar24 & 0xffffffff00000000;
                              uVar4 = *(uint *)((uVar16 | *(uint *)(**(ulong **)pGVar24 + 0x28f)) +
                                               0x13);
                              uVar15 = uVar16 | uVar4;
                              if ((uVar4 & 1) != 0) {
                                do {
                                  if (*(short *)((uVar16 | 7) + (ulong)*(uint *)(uVar15 - 1)) !=
                                      0xa2) break;
                                  puVar25 = (uint *)(uVar15 + 0x13);
                                  uVar15 = uVar16 | *puVar25;
                                } while ((*puVar25 & 1) != 0);
                              }
                              puVar25 = (uint *)(uVar17 + 0x13);
                              if (((*puVar25 & 1) == 0) ||
                                 (*(short *)((uVar17 & 0xffffffff00000000 | 7) +
                                            (ulong)*(uint *)((uVar17 & 0xffffffff00000000 |
                                                             (ulong)*puVar25) - 1)) != 0xa2)) {
                                *puVar25 = (uint)uVar15;
                                if ((uVar15 & 1) != 0) {
                                  uVar16 = *(ulong *)((uVar15 & 0xfffffffffffc0000) + 8);
                                  if (((uint)uVar16 >> 0x12 & 1) != 0) {
                                    Heap_MarkingBarrierSlow(uVar17,puVar25,uVar15);
                                    uVar16 = *(ulong *)(uVar15 & 0xfffffffffffc0000 | 8);
                                  }
                                  if (((uVar16 & 0x18) != 0) &&
                                     ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                                    Heap_GenerationalBarrierSlow(uVar17,puVar25,uVar15);
                                  }
                                }
                                uVar16 = *puVar8;
                                uVar17 = **(ulong **)pGVar24;
                                puVar1 = (undefined4 *)(uVar17 + 0x297);
                                *puVar1 = (int)uVar16;
                                if ((uVar16 & 1) != 0) {
                                  uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                                  if (((uint)uVar15 >> 0x12 & 1) != 0) {
                                    Heap_MarkingBarrierSlow(uVar17,puVar1,uVar16);
                                    uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                                  }
                                  if (((uVar15 & 0x18) != 0) &&
                                     ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                                    Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar16);
                                  }
                                }
                                puVar6 = (ulong *)FUN_01028494(*(undefined8 *)this,pFVar2,0x427,0xc,
                                                               0,pFVar19,0x97);
                                uVar16 = *puVar6;
                                uVar17 = **(ulong **)(this + 0x10);
                                *(int *)(uVar17 + 0x9b) = (int)uVar16;
                                if ((uVar16 & 1) != 0) {
                                  uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                                  if (((uint)uVar15 >> 0x12 & 1) != 0) {
                                    Heap_MarkingBarrierSlow(uVar17,uVar17 + 0x9b,uVar16);
                                    uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                                  }
                                  if (((uVar15 & 0x18) != 0) &&
                                     ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                                    Heap_GenerationalBarrierSlow(uVar17,uVar17 + 0x9b,uVar16);
                                  }
                                }
                                puVar6 = (ulong *)FUN_0102910c(*(undefined8 *)this,pFVar2,0x4d,0,0);
                                uVar16 = *puVar6;
                                uVar17 = **(ulong **)(this + 0x10);
                                *(int *)(uVar17 + 0x8b) = (int)uVar16;
                                if ((uVar16 & 1) != 0) {
                                  uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                                  if (((uint)uVar15 >> 0x12 & 1) != 0) {
                                    Heap_MarkingBarrierSlow(uVar17,uVar17 + 0x8b,uVar16);
                                    uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                                  }
                                  if (((uVar15 & 0x18) != 0) &&
                                     ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                                    Heap_GenerationalBarrierSlow(uVar17,uVar17 + 0x8b,uVar16);
                                  }
                                }
                                puVar6 = (ulong *)FUN_0102910c(*(undefined8 *)this,pFVar2,0x4e,0,0);
                                uVar16 = *puVar6;
                                uVar17 = **(ulong **)(this + 0x10);
                                *(int *)(uVar17 + 0x87) = (int)uVar16;
                                if ((uVar16 & 1) != 0) {
                                  uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
                                  if (((uint)uVar15 >> 0x12 & 1) != 0) {
                                    Heap_MarkingBarrierSlow(uVar17,uVar17 + 0x87,uVar16);
                                    uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
                                  }
                                  if (((uVar15 & 0x18) != 0) &&
                                     ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                                    Heap_GenerationalBarrierSlow(uVar17,uVar17 + 0x87,uVar16);
                                  }
                                }
                                if (*(long *)(lVar5 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
                                  __stack_chk_fail();
                                }
                                return;
                              }
                            }
                          }
                          goto LAB_01036874;
                        }
                      }
                    /* WARNING: Subroutine does not return */
                      V8_Fatal("Check failed: %s.","(location_) != nullptr");
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01036874:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!constructor_or_backpointer().IsMap()");
}

