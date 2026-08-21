
/* v8::internal::DeferredHandleScope::DeferredHandleScope(v8::internal::Isolate*) */

void __thiscall
v8::internal::DeferredHandleScope::DeferredHandleScope(DeferredHandleScope *this,Isolate *param_1)

{
  ulong uVar1;
  long *plVar2;
  void *__dest;
  HandleScopeImplementer *this_00;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  this_00 = *(HandleScopeImplementer **)(param_1 + 0x95c0);
  *(HandleScopeImplementer **)(this + 0x10) = this_00;
  HandleScopeImplementer::BeginDeferredScope(this_00);
  plVar6 = *(long **)(this + 0x10);
  pvVar4 = (void *)plVar6[0xd];
  lVar5 = *plVar6;
  if ((pvVar4 == (void *)0x0) &&
     (pvVar4 = operator_new__(0x1ff0,(nothrow_t *)&std::nothrow), pvVar4 == (void *)0x0)) {
    plVar2 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar2 + 0x18))();
    pvVar4 = operator_new__(0x1ff0,(nothrow_t *)&std::nothrow);
    if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  plVar6[0xd] = 0;
  lVar7 = *(long *)(this + 0x10);
  lVar8 = *(long *)(lVar7 + 0x18);
  if (lVar8 == *(long *)(lVar7 + 0x10)) {
    uVar1 = lVar8 << 1;
    if ((ulong)(lVar8 << 1) < 9) {
      uVar1 = 8;
    }
    uVar3 = uVar1 << 3;
    if (uVar1 >> 0x3d != 0) {
      uVar3 = 0xffffffffffffffff;
    }
    __dest = operator_new__(uVar3);
    if (lVar8 != 0) {
      memmove(__dest,*(void **)(lVar7 + 8),lVar8 << 3);
    }
    if (*(void **)(lVar7 + 8) != (void *)0x0) {
      operator_delete__(*(void **)(lVar7 + 8));
    }
    lVar8 = *(long *)(lVar7 + 0x18);
    *(void **)(lVar7 + 8) = __dest;
    *(ulong *)(lVar7 + 0x10) = uVar1;
  }
  else {
    __dest = *(void **)(lVar7 + 8);
  }
  *(void **)((long)__dest + lVar8 * 8) = pvVar4;
  *(long *)(lVar7 + 0x18) = *(long *)(lVar7 + 0x18) + 1;
  *(int *)(lVar5 + 0x95b0) = *(int *)(lVar5 + 0x95b0) + 1;
  *(undefined8 *)this = *(undefined8 *)(lVar5 + 0x95a8);
  *(undefined8 *)(this + 8) = *(undefined8 *)(lVar5 + 0x95a0);
  *(undefined8 *)(lVar5 + 0x95a0) = pvVar4;
  *(long *)(lVar5 + 0x95a8) = (long)pvVar4 + 0x1ff0;
  return;
}

