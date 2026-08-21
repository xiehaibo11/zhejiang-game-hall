
/* unsigned long
   v8::internal::GlobalHandles::InvokeFirstPassWeakCallbacks<v8::internal::GlobalHandles::Node>(std::__ndk1::vector<std::__ndk1::pair<v8::internal::GlobalHandles::Node*,
   v8::internal::GlobalHandles::PendingPhantomCallback>,
   std::__ndk1::allocator<std::__ndk1::pair<v8::internal::GlobalHandles::Node*,
   v8::internal::GlobalHandles::PendingPhantomCallback> > >*) */

ulong __thiscall
v8::internal::GlobalHandles::InvokeFirstPassWeakCallbacks<v8::internal::GlobalHandles::Node>
          (GlobalHandles *this,vector *param_1)

{
  PendingPhantomCallback *pPVar1;
  PendingPhantomCallback *pPVar2;
  undefined8 *puVar3;
  PendingPhantomCallback *pPVar4;
  code *pcVar5;
  ulong uVar6;
  PendingPhantomCallback *pPVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_78;
  undefined8 uStack_70;
  PendingPhantomCallback *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  pPVar2 = *(PendingPhantomCallback **)param_1;
  pPVar4 = *(PendingPhantomCallback **)(param_1 + 8);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (pPVar2 == pPVar4) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    pPVar7 = pPVar2 + 8;
    do {
      local_78 = *(undefined8 *)this;
      uStack_70 = *(undefined8 *)(pPVar7 + 8);
      lVar8 = *(long *)(pPVar7 + -8);
      uStack_58 = *(undefined8 *)(pPVar7 + 0x18);
      local_60 = *(undefined8 *)(pPVar7 + 0x10);
      pcVar5 = *(code **)pPVar7;
      *(undefined8 *)pPVar7 = 0;
      local_68 = pPVar7;
      (*pcVar5)(&local_78);
      if ((*(byte *)(lVar8 + 0xb) & 7) != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "Handle not reset in first callback. See comments on |v8::WeakCallbackInfo|.");
      }
      if (*(long *)pPVar7 != 0) {
        puVar3 = *(undefined8 **)(this + 0x90);
        if (puVar3 == *(undefined8 **)(this + 0x98)) {
          std::__ndk1::
          vector<v8::internal::GlobalHandles::PendingPhantomCallback,std::__ndk1::allocator<v8::internal::GlobalHandles::PendingPhantomCallback>>
          ::__push_back_slow_path<v8::internal::GlobalHandles::PendingPhantomCallback_const&>
                    ((vector<v8::internal::GlobalHandles::PendingPhantomCallback,std::__ndk1::allocator<v8::internal::GlobalHandles::PendingPhantomCallback>>
                      *)(this + 0x88),pPVar7);
        }
        else {
          uVar9 = *(undefined8 *)pPVar7;
          uVar11 = *(undefined8 *)(pPVar7 + 0x18);
          uVar10 = *(undefined8 *)(pPVar7 + 0x10);
          puVar3[1] = *(undefined8 *)(pPVar7 + 8);
          *puVar3 = uVar9;
          puVar3[3] = uVar11;
          puVar3[2] = uVar10;
          *(long *)(this + 0x90) = *(long *)(this + 0x90) + 0x20;
        }
      }
      pPVar1 = pPVar7 + 0x20;
      pPVar7 = pPVar7 + 0x28;
      uVar6 = uVar6 + 1;
    } while (pPVar1 != pPVar4);
  }
  if (pPVar2 != (PendingPhantomCallback *)0x0) {
    operator_delete(pPVar2);
  }
  return uVar6;
}

