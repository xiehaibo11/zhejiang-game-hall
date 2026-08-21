
/* v8::internal::Isolate::PrintStack(__sFILE*, v8::internal::Isolate::PrintStackMode) */

void __thiscall v8::internal::Isolate::PrintStack(Isolate *this,__sFILE *param_1,undefined4 param_3)

{
  Isolate *pIVar1;
  Logger *this_00;
  undefined8 *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 *local_58;
  undefined **local_50;
  void *local_48;
  
  pIVar1 = this + 0x9490;
  if (*(int *)pIVar1 != 1) {
    if (*(int *)pIVar1 == 0) {
      *(int *)pIVar1 = 1;
      StringStream::ClearMentionedObjectCache(this);
      local_70 = &local_50;
      local_68 = 0x1000000001;
      local_60 = 0;
      local_50 = &PTR__HeapStringAllocator_01cbbc78;
      local_58 = (undefined1 *)HeapStringAllocator::allocate((HeapStringAllocator *)&local_50,0x10);
      *local_58 = 0;
      *(undefined8 ***)(this + 0x9498) = &local_70;
      PrintStack(this,&local_70,param_3);
      StringStream::OutputToFile((StringStream *)&local_70,param_1);
      if (*(long *)(this + 0x9558) == 0) {
        this_00 = operator_new(0x88);
        Logger::Logger(this_00,this);
        *(Logger **)(this + 0x9558) = this_00;
      }
      InitializeCounters(this);
      StringStream::Log((StringStream *)&local_70,this);
      *(undefined8 *)(this + 0x9498) = 0;
      *(int *)pIVar1 = 0;
      if (local_48 != (void *)0x0) {
        local_50 = &PTR__HeapStringAllocator_01cbbc78;
        operator_delete__(local_48);
      }
    }
    return;
  }
  *(int *)pIVar1 = 2;
  base::OS::PrintError("\n\nAttempt to print stack while printing stack (double fault)\n");
  base::OS::PrintError("If you are lucky you may find a partial stack dump on stdout.\n\n");
  StringStream::OutputToFile(*(StringStream **)(this + 0x9498),param_1);
  return;
}

