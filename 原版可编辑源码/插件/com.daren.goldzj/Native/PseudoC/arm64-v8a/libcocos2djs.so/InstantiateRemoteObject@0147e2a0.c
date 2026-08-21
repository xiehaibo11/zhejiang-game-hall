
/* v8::internal::ApiNatives::InstantiateRemoteObject(v8::internal::Handle<v8::internal::ObjectTemplateInfo>)
    */

undefined8 v8::internal::ApiNatives::InstantiateRemoteObject(ulong *param_1)

{
  uint uVar1;
  CanonicalHandleScope *this;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  Isolate *this_00;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  SaveContext aSStack_68 [24];
  
  uVar1 = *(uint *)((long)param_1 + 4);
  this_00 = (Isolate *)((ulong)uVar1 << 0x20);
  SaveContext::SaveContext(aSStack_68,this_00);
  this = *(CanonicalHandleScope **)((ulong)uVar1 << 0x20 | 0x95b8);
  uVar6 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 + 0x17);
  if (this == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(this_00 + 0x95a0);
    if (puVar2 == *(ulong **)(this_00 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(this_00);
    }
    *(ulong **)(this_00 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar6;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup(this,uVar6);
  }
  puVar3 = (ulong *)Factory::NewMap((Factory *)this_00,0x410,
                                    (*(uint *)(*param_1 + 0x1b) & 0x7ffffffc) * 2 + 0xc,3,0);
  uVar7 = *puVar3;
  uVar6 = *puVar2;
  puVar8 = (uint *)(uVar7 + 0x13);
  if (((*puVar8 & 1) != 0) &&
     (*(short *)((uVar7 & 0xffffffff00000000 | 7) +
                (ulong)*(uint *)((uVar7 & 0xffffffff00000000 | (ulong)*puVar8) - 1)) == 0xa2)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!constructor_or_backpointer().IsMap()");
  }
  *puVar8 = (uint)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar5 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,puVar8,uVar6);
      uVar5 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,puVar8,uVar6);
    }
  }
  *(byte *)(*puVar3 + 9) = *(byte *)(*puVar3 + 9) | 0x20;
  *(uint *)(*puVar3 + 0xb) = *(uint *)(*puVar3 + 0xb) | 0x10000000;
  uVar4 = Factory::NewJSObjectFromMap(this_00,puVar3,0,0);
  JSObject::ForceSetPrototype(uVar4,this_00 + 0xb0);
  if (((*(ulong *)(this_00 + 0x2bd8) & 1) == 0) ||
     ((int)*(ulong *)(this_00 + 0x2bd8) != (int)*(undefined8 *)(this_00 + 0xa8))) {
    Isolate::ReportPendingMessages(this_00);
  }
  else {
    *(undefined8 *)(this_00 + 0x2c10) = *(undefined8 *)(this_00 + 0xa8);
  }
  SaveContext::~SaveContext(aSStack_68);
  return uVar4;
}

