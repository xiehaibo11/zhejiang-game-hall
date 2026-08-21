
/* v8::internal::JSProxy::DeletePropertyOrElement(v8::internal::Handle<v8::internal::JSProxy>,
   v8::internal::Handle<v8::internal::Name>, v8::internal::LanguageMode) */

undefined2
v8::internal::JSProxy::DeletePropertyOrElement(ulong *param_1,undefined8 param_2,uint param_3)

{
  undefined2 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  CanonicalHandleScope *pCVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  Isolate *this;
  ulong *local_70;
  undefined8 uStack_68;
  undefined8 local_48;
  
  this = (Isolate *)((ulong)*(uint *)((long)param_1 + 4) << 0x20);
  uVar2 = GetCurrentStackPosition();
  if (uVar2 < *(ulong *)(this + 0x58)) {
    Isolate::StackOverflow(this);
    return 0;
  }
  uVar9 = *param_1;
  uVar2 = uVar9 & 0xffffffff00000000;
  if (*(ushort *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | *(uint *)(uVar9 + 0xb)) - 1)) < 0xa9) {
    uVar8 = 0x90;
    param_2 = 0;
  }
  else {
    pCVar4 = *(CanonicalHandleScope **)(this + 0x95b8);
    uVar2 = uVar2 | *(uint *)(uVar9 + 7);
    if (pCVar4 == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(this + 0x95a0);
      if (puVar5 == *(ulong **)(this + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(this);
      }
      *(ulong **)(this + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar2;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup(pCVar4,uVar2);
    }
    pCVar4 = *(CanonicalHandleScope **)(this + 0x95b8);
    uVar2 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 + 0xb);
    if (pCVar4 == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(this + 0x95a0);
      if (puVar6 == *(ulong **)(this + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(this);
      }
      *(ulong **)(this + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar2;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup(pCVar4,uVar2);
    }
    puVar7 = (ulong *)Object::GetMethod(puVar6,this + 0x5f8);
    if (puVar7 == (ulong *)0x0) {
      return 0;
    }
    if (((*puVar7 & 1) != 0) && ((int)*puVar7 == *(int *)(this + 0xa0))) {
      uVar1 = JSReceiver::DeletePropertyOrElement(puVar5,param_2,param_3 & 1);
      return uVar1;
    }
    local_70 = puVar5;
    uStack_68 = param_2;
    puVar3 = (undefined8 *)Execution::Call(this,puVar7,puVar6,2,&local_70);
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    local_48 = *puVar3;
    uVar2 = Object::BooleanValue((Object *)&local_48,this);
    if ((uVar2 & 1) != 0) {
      uVar1 = CheckDeleteTrap(this,param_2,puVar5);
      return uVar1;
    }
    if ((param_3 & 1) == 0) {
      return 1;
    }
    uVar8 = 0x95;
  }
  puVar3 = (undefined8 *)Factory::NewTypeError((Factory *)this,uVar8,this + 0x5f8,param_2,0);
  Isolate::Throw(this,*puVar3,0);
  return 0;
}

