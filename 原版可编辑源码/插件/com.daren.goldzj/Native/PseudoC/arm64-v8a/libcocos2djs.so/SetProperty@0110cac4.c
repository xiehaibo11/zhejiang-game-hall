
/* v8::internal::JSProxy::SetProperty(v8::internal::Handle<v8::internal::JSProxy>,
   v8::internal::Handle<v8::internal::Name>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>, v8::Maybe<v8::internal::ShouldThrow>) */

undefined2
v8::internal::JSProxy::SetProperty
          (ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined2 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  CanonicalHandleScope *pCVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  Isolate *this;
  undefined8 local_c0;
  ulong *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  
  this = (Isolate *)((ulong)*(uint *)((long)param_1 + 4) << 0x20);
  uVar3 = GetCurrentStackPosition();
  if (uVar3 < *(ulong *)(this + 0x58)) {
    Isolate::StackOverflow(this);
    return 0;
  }
  uVar11 = *param_1;
  uVar3 = uVar11 & 0xffffffff00000000;
  if (*(ushort *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | *(uint *)(uVar11 + 0xb)) - 1)) < 0xa9) {
    uVar10 = 0x90;
    param_2 = 0;
  }
  else {
    pCVar5 = *(CanonicalHandleScope **)(this + 0x95b8);
    uVar3 = uVar3 | *(uint *)(uVar11 + 7);
    if (pCVar5 == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(this + 0x95a0);
      if (puVar6 == *(ulong **)(this + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(this);
      }
      *(ulong **)(this + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar3;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup(pCVar5,uVar3);
    }
    pCVar5 = *(CanonicalHandleScope **)(this + 0x95b8);
    uVar3 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 + 0xb);
    if (pCVar5 == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)(this + 0x95a0);
      if (puVar7 == *(ulong **)(this + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(this);
      }
      *(ulong **)(this + 0x95a0) = puVar7 + 1;
      *puVar7 = uVar3;
    }
    else {
      puVar7 = (ulong *)CanonicalHandleScope::Lookup(pCVar5,uVar3);
    }
    puVar8 = (ulong *)Object::GetMethod(puVar7,this + 0x9b0);
    if (puVar8 == (ulong *)0x0) {
      return 0;
    }
    if (((*puVar8 & 1) != 0) && ((int)*puVar8 == *(int *)(this + 0xa0))) {
      LookupIterator::PropertyOrElement((LookupIterator *)&local_b8,this,param_4,param_2,puVar6,3);
      uVar1 = Object::SetSuperProperty(&local_b8,param_3,0,param_5);
      return uVar1;
    }
    local_b8 = puVar6;
    uStack_b0 = param_2;
    local_a8 = param_3;
    uStack_a0 = param_4;
    puVar4 = (undefined8 *)Execution::Call(this,puVar8,puVar7,4,&local_b8);
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    local_c0 = *puVar4;
    uVar3 = Object::BooleanValue((Object *)&local_c0,this);
    if ((uVar3 & 1) != 0) {
      lVar9 = CheckGetSetTrapResult(this,param_2,puVar6,param_3,1);
      if (lVar9 == 0) {
        return 0;
      }
      return 0x101;
    }
    iVar2 = GetShouldThrow(this,param_5);
    if (iVar2 == 1) {
      return 1;
    }
    uVar10 = 0x95;
  }
  puVar4 = (undefined8 *)Factory::NewTypeError((Factory *)this,uVar10,this + 0x9b0,param_2,0);
  Isolate::Throw(this,*puVar4,0);
  return 0;
}

