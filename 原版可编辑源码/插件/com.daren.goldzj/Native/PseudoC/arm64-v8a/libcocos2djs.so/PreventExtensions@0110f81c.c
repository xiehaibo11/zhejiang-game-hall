
/* v8::internal::JSProxy::PreventExtensions(v8::internal::Handle<v8::internal::JSProxy>,
   v8::internal::ShouldThrow) */

undefined2 v8::internal::JSProxy::PreventExtensions(ulong *param_1,int param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  CanonicalHandleScope *pCVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  Isolate *pIVar10;
  ulong uVar11;
  Isolate *this;
  undefined8 local_60;
  ulong *local_58;
  
  this = (Isolate *)((ulong)*(uint *)((long)param_1 + 4) << 0x20);
  uVar3 = GetCurrentStackPosition();
  if (uVar3 < *(ulong *)(this + 0x58)) {
    Isolate::StackOverflow(this);
  }
  else {
    uVar11 = *param_1;
    pIVar10 = this + 0x8e8;
    uVar3 = uVar11 & 0xffffffff00000000;
    if (*(ushort *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | *(uint *)(uVar11 + 0xb)) - 1)) < 0xa9) {
      uVar9 = 0x90;
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
      puVar8 = (ulong *)Object::GetMethod(puVar7,pIVar10);
      if (puVar8 == (ulong *)0x0) {
        return 0;
      }
      if (((*puVar8 & 1) != 0) && ((int)*puVar8 == *(int *)(this + 0xa0))) {
        uVar1 = JSReceiver::PreventExtensions(puVar6,param_2);
        return uVar1;
      }
      local_58 = puVar6;
      puVar4 = (undefined8 *)Execution::Call(this,puVar8,puVar7,1,&local_58);
      if (puVar4 == (undefined8 *)0x0) {
        return 0;
      }
      local_60 = *puVar4;
      uVar3 = Object::BooleanValue((Object *)&local_60,this);
      if ((uVar3 & 1) == 0) {
        if (param_2 == 1) {
          return 1;
        }
        uVar9 = 0x94;
      }
      else {
        uVar2 = JSReceiver::IsExtensible(puVar6);
        if ((uVar2 & 0xff) == 0) {
          return 0;
        }
        if (uVar2 < 0x100) {
          return 0x101;
        }
        uVar9 = 0x8e;
        pIVar10 = (Isolate *)0x0;
      }
    }
    puVar4 = (undefined8 *)Factory::NewTypeError((Factory *)this,uVar9,pIVar10,0,0);
    Isolate::Throw(this,*puVar4,0);
  }
  return 0;
}

