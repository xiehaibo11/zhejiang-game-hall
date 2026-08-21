
/* v8::internal::Isolate::StackTraceString() */

Isolate * __thiscall v8::internal::Isolate::StackTraceString(Isolate *this)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  undefined8 *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 *local_48;
  undefined **local_40;
  void *local_38;
  
  pIVar1 = this + 0x9490;
  if (*(int *)pIVar1 == 1) {
    *(int *)pIVar1 = 2;
    base::OS::PrintError("\n\nAttempt to print stack while printing stack (double fault)\n");
    base::OS::PrintError("If you are lucky you may find a partial stack dump on stdout.\n\n");
    StringStream::OutputToFile(*(StringStream **)(this + 0x9498),(__sFILE *)waitpid);
    pIVar2 = this + 200;
  }
  else {
    if (*(int *)pIVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      base::OS::Abort();
    }
    *(int *)pIVar1 = 1;
    local_40 = &PTR__HeapStringAllocator_01cbbc78;
    StringStream::ClearMentionedObjectCache(this);
    local_60 = &local_40;
    local_58 = 0x1000000001;
    local_50 = 0;
    local_48 = (undefined1 *)HeapStringAllocator::allocate((HeapStringAllocator *)&local_40,0x10);
    *local_48 = 0;
    *(undefined8 ***)(this + 0x9498) = &local_60;
    PrintStack(this,&local_60,1);
    pIVar2 = (Isolate *)StringStream::ToString((StringStream *)&local_60,this);
    *(undefined8 *)(this + 0x9498) = 0;
    *(int *)pIVar1 = 0;
    if (local_38 != (void *)0x0) {
      local_40 = &PTR__HeapStringAllocator_01cbbc78;
      operator_delete__(local_38);
    }
  }
  return pIVar2;
}

