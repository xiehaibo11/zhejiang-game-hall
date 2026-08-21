
/* v8::internal::JSObject::PreventExtensions(v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::ShouldThrow) */

undefined2 v8::internal::JSObject::PreventExtensions(ulong *param_1,int param_2)

{
  long lVar1;
  undefined2 uVar2;
  int iVar3;
  long *plVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  Isolate *this;
  ulong uVar10;
  Isolate *local_70;
  ulong local_68;
  ulong *local_60;
  undefined4 local_58;
  char local_54;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar10 = *param_1;
  this = (Isolate *)(uVar10 & 0xffffffff00000000);
  if (1 < (byte)((*(byte *)(((ulong)this | 10) + (ulong)*(uint *)(uVar10 - 1)) >> 3) - 0xd)) {
    uVar2 = PreventExtensionsWithTransition<(v8::internal::PropertyAttributes)0>(param_1,param_2);
    goto LAB_010cfe4c;
  }
  if (*(short *)(((ulong)this | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0xab) {
    local_70 = *(Isolate **)(this + 0x2bc8);
    iVar3 = Context::global_object((Context *)&local_70);
    local_60 = (ulong *)0x0;
    local_58 = 0;
    local_54 = '\0';
    local_50 = 0;
    local_70 = this;
    local_68 = uVar10;
    PrototypeIterator::Advance((PrototypeIterator *)&local_70);
    if ((int)local_68 == iVar3) goto LAB_010cfc44;
LAB_010cfbe8:
    uVar10 = *(ulong *)(this + 0x2bc8);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(this + 0x95a0);
      if (puVar5 == *(ulong **)(this + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(this);
      }
      *(ulong **)(this + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar10;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar10);
    }
    uVar10 = Isolate::MayAccess(this,puVar5,param_1);
    if ((uVar10 & 1) != 0) goto LAB_010cfc44;
    Isolate::ReportFailedAccessCheck(this,param_1);
    if (*(int *)(this + 0x2c20) != *(int *)(this + 0xa8)) {
      Isolate::PromoteScheduledException(this);
      uVar2 = 0;
      goto LAB_010cfe4c;
    }
    if (param_2 != 1) {
      uVar7 = 0x4e;
LAB_010cfdbc:
      puVar6 = (undefined8 *)Factory::NewTypeError((Factory *)this,uVar7,0,0,0);
      Isolate::Throw(this,*puVar6,0);
      uVar2 = 0;
      goto LAB_010cfe4c;
    }
LAB_010cfda0:
    uVar2 = 1;
  }
  else {
    if ((*(byte *)(((ulong)this | 9) + (ulong)*(uint *)(uVar10 - 1)) >> 5 & 1) != 0)
    goto LAB_010cfbe8;
LAB_010cfc44:
    uVar8 = *param_1;
    uVar10 = uVar8 & 0xffffffff00000000;
    if ((*(uint *)((uVar10 | *(uint *)(uVar8 - 1)) + 0xb) >> 0x1b & 1) != 0) {
      if (*(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0xab) {
        local_68 = 0;
        local_58 = 0;
        local_54 = '\0';
        local_50 = 0;
        local_60 = param_1;
        if (param_1 == (ulong *)0x0) {
          local_70 = this;
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","!handle_.is_null()");
        }
        local_70 = this;
        PrototypeIterator::Advance((PrototypeIterator *)&local_70);
        if (local_54 == '\0') {
          uVar2 = PreventExtensions(local_60,param_2);
          goto LAB_010cfe4c;
        }
      }
      else {
        if (((*(byte *)((uVar10 | *(uint *)(uVar8 - 1)) + 9) >> 2 & 1) != 0) ||
           ((*(byte *)((uVar10 | *(uint *)(uVar8 - 1)) + 9) >> 3 & 1) != 0)) {
          if (param_2 != 1) {
            uVar7 = 0x1e;
            goto LAB_010cfdbc;
          }
          goto LAB_010cfda0;
        }
        if (10 < (byte)((*(byte *)((uVar10 | 10) + (ulong)*(uint *)(uVar8 - 1)) >> 3) - 0x11)) {
          plVar4 = (long *)NormalizeElements(param_1);
          lVar9 = *plVar4;
          if (((int)lVar9 != *(int *)(this + 1000)) &&
             (uVar10 = *param_1, (*(uint *)(lVar9 + 0x13) & 3) != 2)) {
            *(undefined4 *)(lVar9 + 0x13) = 2;
            if ((*(uint *)((uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 - 1)) + 0xb) >>
                 0x14 & 1) != 0) {
              FUN_010d8b9c(uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 - 1));
            }
          }
        }
        uVar10 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 - 1);
        if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar5 = *(ulong **)(this + 0x95a0);
          if (puVar5 == *(ulong **)(this + 0x95a8)) {
            puVar5 = (ulong *)HandleScope::Extend(this);
          }
          *(ulong **)(this + 0x95a0) = puVar5 + 1;
          *puVar5 = uVar10;
        }
        else {
          puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(this + 0x95b8),uVar10);
        }
        plVar4 = (long *)Map::Copy(this,puVar5,"PreventExtensions");
        *(uint *)(*plVar4 + 0xb) = *(uint *)(*plVar4 + 0xb) & 0xf7ffffff;
        MigrateToMap(this,param_1,plVar4,0);
      }
    }
    uVar2 = 0x101;
  }
LAB_010cfe4c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}

