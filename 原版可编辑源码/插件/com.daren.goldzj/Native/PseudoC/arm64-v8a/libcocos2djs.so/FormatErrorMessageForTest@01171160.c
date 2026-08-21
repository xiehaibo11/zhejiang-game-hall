
/* v8::internal::PendingCompilationErrorHandler::FormatErrorMessageForTest(v8::internal::Isolate*)
   const */

void __thiscall
v8::internal::PendingCompilationErrorHandler::FormatErrorMessageForTest
          (PendingCompilationErrorHandler *this,Isolate *param_1)

{
  undefined4 uVar1;
  Isolate *pIVar2;
  char *__s;
  char *local_40;
  size_t sStack_38;
  
  uVar1 = *(undefined4 *)(this + 0x10);
  if (*(long **)(this + 0x18) == (long *)0x0) {
    __s = *(char **)(this + 0x20);
    if (__s == (char *)0x0) {
      pIVar2 = param_1 + 0xaa8;
    }
    else {
      sStack_38 = strlen(__s);
      local_40 = __s;
      pIVar2 = (Isolate *)Factory::NewStringFromUtf8((Factory *)param_1,&local_40,0);
      if (pIVar2 == (Isolate *)0x0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
    }
  }
  else {
    pIVar2 = (Isolate *)**(long **)(this + 0x18);
  }
  MessageFormatter::Format(param_1,uVar1,pIVar2);
  return;
}

