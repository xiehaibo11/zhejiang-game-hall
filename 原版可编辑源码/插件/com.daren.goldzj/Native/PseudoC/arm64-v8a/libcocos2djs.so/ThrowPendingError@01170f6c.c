
/* v8::internal::PendingCompilationErrorHandler::ThrowPendingError(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Script>) */

void __thiscall
v8::internal::PendingCompilationErrorHandler::ThrowPendingError
          (PendingCompilationErrorHandler *this,Isolate *param_1,undefined8 param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  Isolate *pIVar6;
  char *__s;
  MessageLocation aMStack_70 [8];
  int local_68;
  int local_64;
  char *local_50;
  size_t sStack_48;
  
  if (*this != (PendingCompilationErrorHandler)0x0) {
    MessageLocation::MessageLocation
              (aMStack_70,param_3,*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
    if (*(long **)(this + 0x18) == (long *)0x0) {
      __s = *(char **)(this + 0x20);
      if (__s == (char *)0x0) {
        pIVar6 = param_1 + 0xaa8;
      }
      else {
        sStack_48 = strlen(__s);
        local_50 = __s;
        pIVar6 = (Isolate *)Factory::NewStringFromUtf8((Factory *)param_1,&local_50,0);
        if (pIVar6 == (Isolate *)0x0) goto LAB_0117114c;
      }
    }
    else {
      pIVar6 = (Isolate *)**(long **)(this + 0x18);
    }
    pIVar1 = param_1 + 0x95a0;
    Debug::OnCompileError(*(Debug **)(param_1 + 0xb6c8),param_3);
    puVar2 = (ulong *)Factory::NewSyntaxError
                                ((Factory *)param_1,*(undefined4 *)(this + 0x10),pIVar6,0,0);
    uVar5 = *puVar2;
    if (((uVar5 & 1) != 0) &&
       (0xa9 < *(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)))) {
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar3 = *(ulong **)pIVar1;
        if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
          puVar3 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar3 + 1;
        *puVar3 = (long)local_68 << 1;
      }
      else {
        puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),
                                     (long)local_68 << 1);
      }
      lVar4 = Object::SetProperty(param_1,puVar2,param_1 + 0xb60,puVar3,0,1);
      if (lVar4 == 0) {
LAB_0117114c:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar3 = *(ulong **)pIVar1;
        if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
          puVar3 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar3 + 1;
        *puVar3 = (long)local_64 << 1;
      }
      else {
        puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),
                                     (long)local_64 << 1);
      }
      lVar4 = Object::SetProperty(param_1,puVar2,param_1 + 0xb50,puVar3,0,1);
      if ((lVar4 == 0) ||
         (lVar4 = Object::SetProperty(param_1,puVar2,param_1 + 0xb58,param_3,0,1), lVar4 == 0))
      goto LAB_0117114c;
      uVar5 = *puVar2;
    }
    Isolate::Throw(param_1,uVar5,aMStack_70);
  }
  return;
}

