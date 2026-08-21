
/* v8::internal::Factory::NewJSObjectWithNullProto() */

ulong * __thiscall v8::internal::Factory::NewJSObjectWithNullProto(Factory *this)

{
  Factory *pFVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
  pFVar1 = this + 0x95a0;
  uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)((uVar5 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) +
                                              0x13)) + 499);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)pFVar1;
    if (puVar2 == *(ulong **)(this + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar2 + 1;
    *puVar2 = uVar5;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar5);
  }
  puVar2 = (ulong *)NewJSObject(this,puVar2,0);
  uVar5 = *puVar2 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar2 - 1);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pFVar1;
    if (puVar3 == *(ulong **)(this + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar3 + 1;
    *puVar3 = uVar5;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar5);
  }
  uVar4 = Map::Copy(this,puVar3,"ObjectWithNullProto");
  Map::SetPrototype(this,uVar4,this + 0xb0,1);
  JSObject::MigrateToMap(this,puVar2,uVar4,0);
  return puVar2;
}

