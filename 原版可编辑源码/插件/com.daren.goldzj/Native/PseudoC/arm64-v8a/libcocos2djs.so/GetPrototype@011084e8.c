
/* v8::internal::JSProxy::GetPrototype(v8::internal::Handle<v8::internal::JSProxy>) */

Isolate * v8::internal::JSProxy::GetPrototype(ulong *param_1)

{
  uint uVar1;
  long lVar2;
  ushort uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  CanonicalHandleScope *pCVar6;
  Isolate *pIVar7;
  ulong *puVar8;
  ulong *puVar9;
  Isolate *pIVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  Isolate *this;
  Isolate *local_88;
  Isolate *local_80;
  undefined8 uStack_78;
  Isolate *local_70;
  undefined4 local_68;
  char local_64;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)((long)param_1 + 4);
  this = (Isolate *)((ulong)uVar1 << 0x20);
  uVar4 = GetCurrentStackPosition();
  if (uVar4 < *(ulong *)(this + 0x58)) {
    Isolate::StackOverflow(this);
  }
  else {
    uVar13 = *param_1;
    uVar4 = (ulong)uVar1 << 0x20 | 0x710;
    uVar12 = uVar13 & 0xffffffff00000000;
    if (*(ushort *)((uVar12 | 7) + (ulong)*(uint *)((uVar12 | *(uint *)(uVar13 + 0xb)) - 1)) < 0xa9)
    {
      uVar11 = 0x90;
LAB_01108570:
      puVar5 = (undefined8 *)Factory::NewTypeError((Factory *)this,uVar11,uVar4,0,0);
      Isolate::Throw(this,*puVar5,0);
    }
    else {
      pCVar6 = *(CanonicalHandleScope **)(this + 0x95b8);
      uVar12 = uVar12 | *(uint *)(uVar13 + 7);
      if (pCVar6 == (CanonicalHandleScope *)0x0) {
        pIVar7 = *(Isolate **)(this + 0x95a0);
        if (pIVar7 == *(Isolate **)(this + 0x95a8)) {
          pIVar7 = (Isolate *)HandleScope::Extend(this);
        }
        *(Isolate **)(this + 0x95a0) = pIVar7 + 8;
        *(ulong *)pIVar7 = uVar12;
      }
      else {
        pIVar7 = (Isolate *)CanonicalHandleScope::Lookup(pCVar6,uVar12);
      }
      pCVar6 = *(CanonicalHandleScope **)(this + 0x95b8);
      uVar12 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 + 0xb);
      if (pCVar6 == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)(this + 0x95a0);
        if (puVar8 == *(ulong **)(this + 0x95a8)) {
          puVar8 = (ulong *)HandleScope::Extend(this);
        }
        *(ulong **)(this + 0x95a0) = puVar8 + 1;
        *puVar8 = uVar12;
      }
      else {
        puVar8 = (ulong *)CanonicalHandleScope::Lookup(pCVar6,uVar12);
      }
      puVar9 = (ulong *)Object::GetMethod(puVar8,uVar4);
      if (puVar9 != (ulong *)0x0) {
        if (((*puVar9 & 1) != 0) && ((int)*puVar9 == *(int *)(this + 0xa0))) {
          uStack_78 = 0;
          local_64 = '\0';
          local_68 = 1;
          local_60 = 0;
          local_80 = this;
          local_70 = pIVar7;
          if (pIVar7 == (Isolate *)0x0) {
LAB_011087d8:
            local_60 = 0;
            local_64 = 0;
            local_68 = 1;
            uStack_78 = 0;
            local_80 = this;
            local_70 = pIVar7;
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","!handle_.is_null()");
          }
          do {
            uVar4 = PrototypeIterator::HasAccess((PrototypeIterator *)&local_80);
            if ((uVar4 & 1) == 0) {
              local_64 = '\x01';
              local_70 = local_80 + 0xb0;
              pIVar10 = local_70;
              break;
            }
            uVar4 = PrototypeIterator::AdvanceFollowingProxiesIgnoringAccessChecks
                              ((PrototypeIterator *)&local_80);
            if ((uVar4 & 1) == 0) goto LAB_01108760;
            pIVar10 = local_70;
          } while (local_64 == '\0');
          goto LAB_01108764;
        }
        local_88 = pIVar7;
        pIVar10 = (Isolate *)Execution::Call(this,puVar9,puVar8,1,&local_88);
        if (pIVar10 == (Isolate *)0x0) goto LAB_01108764;
        uVar4 = *(ulong *)pIVar10;
        if (((uVar4 & 1) == 0) ||
           ((*(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) < 0xa9 &&
            ((int)uVar4 != *(int *)(this + 0xb0))))) {
          uVar11 = 0x84;
LAB_011086d0:
          uVar4 = 0;
          goto LAB_01108570;
        }
        uVar3 = JSReceiver::IsExtensible(pIVar7);
        if ((uVar3 & 0xff) != 0) {
          if (0xff < uVar3) goto LAB_01108764;
          uStack_78 = 0;
          local_64 = '\0';
          local_68 = 1;
          local_60 = 0;
          local_80 = this;
          local_70 = pIVar7;
          if (pIVar7 == (Isolate *)0x0) goto LAB_011087d8;
          do {
            uVar4 = PrototypeIterator::HasAccess((PrototypeIterator *)&local_80);
            if ((uVar4 & 1) == 0) {
              pIVar7 = local_80 + 0xb0;
              goto LAB_011087b4;
            }
            uVar4 = PrototypeIterator::AdvanceFollowingProxiesIgnoringAccessChecks
                              ((PrototypeIterator *)&local_80);
            if ((uVar4 & 1) == 0) goto LAB_01108760;
          } while (local_64 == '\0');
          pIVar7 = local_70;
          if (local_70 != (Isolate *)0x0) {
LAB_011087b4:
            local_80 = *(Isolate **)pIVar10;
            uVar4 = Object::SameValue((Object *)&local_80,*(ulong *)pIVar7);
            if ((uVar4 & 1) != 0) goto LAB_01108764;
            uVar11 = 0x85;
            goto LAB_011086d0;
          }
        }
      }
    }
  }
LAB_01108760:
  pIVar10 = (Isolate *)0x0;
LAB_01108764:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pIVar10;
}

