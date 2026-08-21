
/* v8::internal::JSObject::SetPrototype(v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::Handle<v8::internal::Object>, bool, v8::internal::ShouldThrow) */

void v8::internal::JSObject::SetPrototype(ulong *param_1,ulong *param_2,ulong param_3,int param_4)

{
  long lVar1;
  int iVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  Isolate *this;
  ulong uVar8;
  uint uVar9;
  Isolate *local_90;
  ulong local_88;
  ulong *local_80;
  undefined4 local_78;
  char local_74;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar8 = *param_1;
  this = (Isolate *)(uVar8 & 0xffffffff00000000);
  if ((param_3 & 1) != 0) {
    if (*(short *)(((ulong)this | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0xab) {
      if ((*(byte *)(((ulong)this | 9) + (ulong)*(uint *)(uVar8 - 1)) >> 5 & 1) != 0)
      goto LAB_010d0f44;
      goto LAB_010d0fa0;
    }
    local_90 = *(Isolate **)(this + 0x2bc8);
    iVar2 = Context::global_object((Context *)&local_90);
    local_80 = (ulong *)0x0;
    local_78 = 0;
    local_74 = '\0';
    local_70 = 0;
    local_90 = this;
    local_88 = uVar8;
    PrototypeIterator::Advance((PrototypeIterator *)&local_90);
    if ((int)local_88 == iVar2) goto LAB_010d0fa0;
LAB_010d0f44:
    uVar8 = *(ulong *)(this + 0x2bc8);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(this + 0x95a0);
      if (puVar3 == *(ulong **)(this + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(this);
      }
      *(ulong **)(this + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar8;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar8);
    }
    uVar8 = Isolate::MayAccess(this,puVar3,param_1);
    if ((uVar8 & 1) != 0) goto LAB_010d0fa0;
    Isolate::ReportFailedAccessCheck(this,param_1);
    if (*(int *)(this + 0x2c20) != *(int *)(this + 0xa8)) {
      Isolate::PromoteScheduledException(this);
      uVar5 = 0;
      goto LAB_010d110c;
    }
    if (param_4 != 1) {
      uVar5 = 0x4e;
LAB_010d10c0:
      param_1 = (ulong *)0x0;
      goto LAB_010d1224;
    }
    goto LAB_010d11dc;
  }
LAB_010d0fa0:
  uVar8 = *param_2;
  if (((uVar8 & 1) != 0) &&
     ((0xa8 < *(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) ||
      ((int)uVar8 == *(int *)(this + 0xb0))))) {
    uVar7 = *param_1;
    uVar8 = uVar7 & 0xffffffff00000000;
    uVar9 = *(uint *)((uVar8 | *(uint *)(uVar7 - 1)) + 0xb) >> 0x1b & 1;
    puVar3 = param_1;
    if ((param_3 & 1) != 0) {
      local_88 = 0;
      local_74 = '\0';
      local_78 = 1;
      local_70 = 0;
      local_80 = param_1;
      if (param_1 == (ulong *)0x0) {
        local_90 = this;
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!handle_.is_null()");
      }
      local_90 = this;
      PrototypeIterator::Advance((PrototypeIterator *)&local_90);
      while (local_74 == '\0') {
        while (puVar3 = local_80, PrototypeIterator::Advance((PrototypeIterator *)&local_90),
              uVar9 == 0) {
          uVar9 = 0;
          if (local_74 != '\0') goto LAB_010d1058;
        }
        uVar9 = *(uint *)((*puVar3 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar3 - 1)) + 0xb) >>
                0x1b & 1;
      }
LAB_010d1058:
      uVar7 = *puVar3;
      uVar8 = uVar7 & 0xffffffff00000000;
    }
    uVar8 = uVar8 | *(uint *)(uVar7 - 1);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(this + 0x95a0);
      if (puVar4 == *(ulong **)(this + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(this);
      }
      *(ulong **)(this + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar8;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar8);
      uVar8 = *puVar4;
    }
    uVar7 = *param_2;
    if (*(int *)(uVar8 + 0xf) != (int)uVar7) {
      if ((*(byte *)(uVar8 + 10) >> 1 & 1) == 0) {
        if (uVar9 == 0) {
          if (param_4 != 1) {
            uVar5 = 0x52;
            goto LAB_010d1224;
          }
        }
        else {
          if (((uVar7 & 1) == 0) ||
             (*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) < 0xa9)) {
LAB_010d11e4:
            Isolate::UpdateNoElementsProtectorOnSetElement(this,puVar3);
            uVar5 = Map::TransitionToPrototype(this,puVar4,param_2);
            MigrateToMap(this,puVar3,uVar5,0);
            goto LAB_010d1108;
          }
          local_80 = (ulong *)0x0;
          local_78 = 0;
          local_74 = '\0';
          local_70 = 0;
          local_90 = this;
          local_88 = uVar7;
          if ((int)uVar7 != (int)*param_1) {
            do {
              PrototypeIterator::Advance((PrototypeIterator *)&local_90);
              if (local_74 != '\0') goto LAB_010d11e4;
            } while ((int)local_88 != (int)*param_1);
          }
          if (param_4 != 1) {
            uVar5 = 1;
            goto LAB_010d10c0;
          }
        }
      }
      else if (param_4 != 1) {
        uVar5 = 0x38;
LAB_010d1224:
        puVar6 = (undefined8 *)Factory::NewTypeError((Factory *)this,uVar5,param_1,0,0);
        Isolate::Throw(this,*puVar6,0);
        uVar5 = 0;
        goto LAB_010d110c;
      }
LAB_010d11dc:
      uVar5 = 1;
      goto LAB_010d110c;
    }
  }
LAB_010d1108:
  uVar5 = 0x101;
LAB_010d110c:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

