
/* v8::internal::PendingCompilationErrorHandler::MessageDetails::ArgumentString(v8::internal::Isolate*)
   const */

Isolate * __thiscall
v8::internal::PendingCompilationErrorHandler::MessageDetails::ArgumentString
          (MessageDetails *this,Isolate *param_1)

{
  Isolate *pIVar1;
  char *__s;
  char *local_30;
  size_t sStack_28;
  
  if (*(long **)(this + 0x10) == (long *)0x0) {
    __s = *(char **)(this + 0x18);
    if (__s == (char *)0x0) {
      pIVar1 = param_1 + 0xaa8;
    }
    else {
      sStack_28 = strlen(__s);
      local_30 = __s;
      pIVar1 = (Isolate *)Factory::NewStringFromUtf8((Factory *)param_1,&local_30,0);
      if (pIVar1 == (Isolate *)0x0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
    }
  }
  else {
    pIVar1 = (Isolate *)**(long **)(this + 0x10);
  }
  return pIVar1;
}

