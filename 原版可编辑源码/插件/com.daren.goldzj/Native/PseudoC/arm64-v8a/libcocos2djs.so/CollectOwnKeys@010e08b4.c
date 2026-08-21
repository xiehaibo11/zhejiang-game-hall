
/* v8::internal::KeyAccumulator::CollectOwnKeys(v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::Handle<v8::internal::JSObject>) */

void __thiscall
v8::internal::KeyAccumulator::CollectOwnKeys(KeyAccumulator *this,ulong *param_2,ulong *param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  ulong *puVar4;
  ulong *extraout_x1;
  Isolate *pIVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  ulong local_80;
  ulong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar6 = *param_3;
  uVar7 = uVar6 & 0xffffffff00000000;
  if (*(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0xab) {
    local_80 = *(undefined8 *)(uVar7 + 0x2bc8);
    iVar3 = Context::global_object((Context *)&local_80);
    local_70 = 0;
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_80 = uVar7;
    local_78 = uVar6;
    PrototypeIterator::Advance((PrototypeIterator *)&local_80);
    puVar4 = extraout_x1;
    if ((int)local_78 == iVar3) goto LAB_010e0a68;
LAB_010e0958:
    pIVar5 = *(Isolate **)this;
    uVar6 = *(ulong *)(pIVar5 + 0x2bc8);
    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar6;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar6);
    }
    auVar8 = Isolate::MayAccess(pIVar5,puVar4,param_3);
    puVar4 = auVar8._8_8_;
    if ((auVar8._0_8_ & 1) != 0) goto LAB_010e0a68;
    if (*(int *)(this + 0x20) != 1) {
      auVar8 = AccessCheckInfo::Get(*(undefined8 *)this,param_3);
      puVar4 = auVar8._8_8_;
      if (auVar8._0_4_ != 0) {
        pIVar5 = *(Isolate **)this;
        if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar4 = *(ulong **)(pIVar5 + 0x95a0);
          if (puVar4 == *(ulong **)(pIVar5 + 0x95a8)) {
            puVar4 = (ulong *)HandleScope::Extend(pIVar5);
          }
          *(ulong **)(pIVar5 + 0x95a0) = puVar4 + 1;
          *puVar4 = auVar8._0_8_;
        }
        else {
          puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),auVar8._0_8_);
        }
        if ((puVar4 != (ulong *)0x0) && (*(int *)(*puVar4 + 7) != 0)) {
          cVar2 = CollectAccessCheckInterceptorKeys(this,puVar4,param_2,param_3);
          uVar6 = (ulong)(cVar2 != '\0');
          goto LAB_010e0ae0;
        }
      }
      *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 0x20;
      goto LAB_010e0a68;
    }
    uVar6 = 1;
  }
  else {
    puVar4 = param_2;
    if ((*(byte *)((uVar7 | 9) + (ulong)*(uint *)(uVar6 - 1)) >> 5 & 1) != 0) goto LAB_010e0958;
LAB_010e0a68:
    if (((byte)this[0x24] >> 6 & 1) != 0) {
      uVar7 = CollectPrivateNames(this,puVar4,param_3);
      uVar6 = 0x101;
      if ((uVar7 & 1) == 0) {
        uVar6 = 0;
      }
      if (*(long *)(lVar1 + 0x28) == local_58) {
        return;
      }
      goto LAB_010e0b0c;
    }
    if ((this[0x2b] == (KeyAccumulator)0x0) ||
       (cVar2 = CollectOwnElementIndices(this,param_2,param_3), cVar2 != '\0')) {
      cVar2 = CollectOwnPropertyNames(this,param_2,param_3);
      uVar6 = 0;
      if (cVar2 != '\0') {
        uVar6 = 0x101;
      }
    }
    else {
      uVar6 = 0;
    }
  }
LAB_010e0ae0:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_010e0b0c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

