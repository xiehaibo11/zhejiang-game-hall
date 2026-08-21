
/* v8::internal::JSProxy::SetPrototype(v8::internal::Handle<v8::internal::JSProxy>,
   v8::internal::Handle<v8::internal::Object>, bool, v8::internal::ShouldThrow) */

undefined2
v8::internal::JSProxy::SetPrototype(ulong *param_1,undefined8 *param_2,uint param_3,int param_4)

{
  long lVar1;
  undefined2 uVar2;
  ushort uVar3;
  ulong uVar4;
  CanonicalHandleScope *pCVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  Isolate *pIVar8;
  ulong *puVar9;
  undefined8 uVar10;
  Isolate *pIVar11;
  ulong uVar12;
  Isolate *this;
  Isolate *local_a0;
  undefined8 *puStack_98;
  Isolate *local_90;
  undefined8 uStack_88;
  Isolate *local_80;
  undefined4 local_78;
  char local_74;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this = (Isolate *)((ulong)*(uint *)((long)param_1 + 4) << 0x20);
  uVar4 = GetCurrentStackPosition();
  if (uVar4 < *(ulong *)(this + 0x58)) {
    Isolate::StackOverflow(this);
    goto LAB_01116524;
  }
  pCVar5 = *(CanonicalHandleScope **)(this + 0x95b8);
  pIVar11 = this + 0x9c0;
  uVar4 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 + 0xb);
  if (pCVar5 == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(this + 0x95a0);
    if (puVar6 == *(ulong **)(this + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(this);
    }
    *(ulong **)(this + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar4;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup(pCVar5,uVar4);
  }
  uVar12 = *param_1;
  uVar4 = uVar12 & 0xffffffff00000000;
  if (*(ushort *)((uVar4 | 7) + (ulong)*(uint *)((uVar4 | *(uint *)(uVar12 + 0xb)) - 1)) < 0xa9) {
    uVar10 = 0x90;
LAB_01116508:
    puVar7 = (undefined8 *)Factory::NewTypeError((Factory *)this,uVar10,pIVar11,0,0);
    Isolate::Throw(this,*puVar7,0);
    goto LAB_01116524;
  }
  pCVar5 = *(CanonicalHandleScope **)(this + 0x95b8);
  uVar4 = uVar4 | *(uint *)(uVar12 + 7);
  if (pCVar5 == (CanonicalHandleScope *)0x0) {
    pIVar8 = *(Isolate **)(this + 0x95a0);
    if (pIVar8 == *(Isolate **)(this + 0x95a8)) {
      pIVar8 = (Isolate *)HandleScope::Extend(this);
    }
    *(Isolate **)(this + 0x95a0) = pIVar8 + 8;
    *(ulong *)pIVar8 = uVar4;
  }
  else {
    pIVar8 = (Isolate *)CanonicalHandleScope::Lookup(pCVar5,uVar4);
  }
  puVar9 = (ulong *)Object::GetMethod(puVar6,pIVar11);
  uVar2 = 0;
  if (puVar9 == (ulong *)0x0) goto LAB_01116528;
  if (((*puVar9 & 1) != 0) && ((int)*puVar9 == *(int *)(this + 0xa0))) {
    uVar2 = JSReceiver::SetPrototype(pIVar8,param_2,param_3 & 1,param_4);
    goto LAB_01116528;
  }
  local_a0 = pIVar8;
  puStack_98 = param_2;
  puVar7 = (undefined8 *)Execution::Call(this,puVar9,puVar6,2,&local_a0);
  uVar2 = 0;
  if (puVar7 == (undefined8 *)0x0) goto LAB_01116528;
  local_90 = (Isolate *)*puVar7;
  uVar4 = Object::BooleanValue((Object *)&local_90,this);
  if ((uVar4 & 1) == 0) {
    if (param_4 == 1) {
      uVar2 = 1;
      goto LAB_01116528;
    }
    uVar10 = 0x94;
    goto LAB_01116508;
  }
  uVar3 = JSReceiver::IsExtensible(pIVar8);
  if ((uVar3 & 0xff) == 0) {
LAB_01116524:
    uVar2 = 0;
  }
  else {
    if (uVar3 < 0x100) {
      uStack_88 = 0;
      local_74 = '\0';
      local_78 = 1;
      local_70 = 0;
      local_90 = this;
      local_80 = pIVar8;
      if (pIVar8 == (Isolate *)0x0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!handle_.is_null()");
      }
      do {
        uVar4 = PrototypeIterator::HasAccess((PrototypeIterator *)&local_90);
        if ((uVar4 & 1) == 0) {
          pIVar11 = local_90 + 0xb0;
          goto LAB_011166a8;
        }
        uVar4 = PrototypeIterator::AdvanceFollowingProxiesIgnoringAccessChecks
                          ((PrototypeIterator *)&local_90);
        if ((uVar4 & 1) == 0) goto LAB_01116524;
      } while (local_74 == '\0');
      pIVar11 = local_80;
      if (local_80 == (Isolate *)0x0) goto LAB_01116524;
LAB_011166a8:
      local_90 = (Isolate *)*param_2;
      uVar4 = Object::SameValue((Object *)&local_90,*(undefined8 *)pIVar11);
      if ((uVar4 & 1) == 0) {
        uVar10 = 0x93;
        pIVar11 = (Isolate *)0x0;
        goto LAB_01116508;
      }
    }
    uVar2 = 0x101;
  }
LAB_01116528:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}

