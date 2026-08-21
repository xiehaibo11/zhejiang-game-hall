
/* v8::internal::PendingCompilationErrorHandler::ReportWarnings(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Script>) */

void __thiscall
v8::internal::PendingCompilationErrorHandler::ReportWarnings
          (PendingCompilationErrorHandler *this,Factory *param_1,undefined8 param_3)

{
  long *plVar1;
  Factory *pFVar2;
  char *__s;
  long *plVar3;
  MessageLocation aMStack_70 [32];
  char *local_50;
  size_t sStack_48;
  
  plVar3 = *(long **)(this + 0x28);
  if (plVar3 != (long *)0x0) {
    do {
      MessageLocation::MessageLocation
                (aMStack_70,param_3,(int)plVar3[1],*(undefined4 *)((long)plVar3 + 0xc));
      if ((long *)plVar3[3] == (long *)0x0) {
        __s = (char *)plVar3[4];
        pFVar2 = param_1 + 0xaa8;
        if (__s != (char *)0x0) {
          sStack_48 = strlen(__s);
          local_50 = __s;
          pFVar2 = (Factory *)Factory::NewStringFromUtf8(param_1,&local_50,0);
          if (pFVar2 == (Factory *)0x0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","(location_) != nullptr");
          }
        }
      }
      else {
        pFVar2 = *(Factory **)plVar3[3];
      }
      plVar1 = (long *)MessageHandler::MakeMessageObject(param_1,(int)plVar3[2],aMStack_70,pFVar2,0)
      ;
      *(undefined4 *)(*plVar1 + 0x2b) = 0x20;
      MessageHandler::ReportMessage(param_1,aMStack_70,plVar1);
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
  }
  return;
}

