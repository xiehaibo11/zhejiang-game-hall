
/* v8::internal::StackTraceFailureMessage::StackTraceFailureMessage(v8::internal::Isolate*, void*,
   void*, void*, void*) */

void __thiscall
v8::internal::StackTraceFailureMessage::StackTraceFailureMessage
          (StackTraceFailureMessage *this,Isolate *param_1,void *param_2,void *param_3,void *param_4
          ,void *param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *local_620;
  undefined8 local_618;
  undefined4 local_610;
  undefined1 *local_608;
  StackFrameIterator aSStack_600 [1416];
  long *local_78;
  undefined **local_60;
  StackTraceFailureMessage *pSStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)this = 0xdecade30;
  *(Isolate **)(this + 8) = param_1;
  *(undefined8 *)(this + 0x8050) = 0xdecade31;
  *(void **)(this + 0x10) = param_2;
  *(void **)(this + 0x18) = param_3;
  *(void **)(this + 0x20) = param_4;
  *(void **)(this + 0x28) = param_5;
  memset(this + 0x50,0,0x8000);
  local_60 = &PTR__StringAllocator_01cbbca8;
  local_620 = &local_60;
  local_50 = 0x7fff;
  local_618 = 0x1000000000;
  local_610 = 0;
  pSStack_58 = this + 0x50;
  local_608 = (undefined1 *)FixedStringAllocator::allocate((FixedStringAllocator *)&local_60,0x10);
  *local_608 = 0;
  Isolate::PrintStack(param_1,&local_620,1);
  StackFrameIterator::StackFrameIterator(aSStack_600,param_1);
  if (local_78 != (long *)0x0) {
    lVar3 = 6;
    do {
      uVar2 = (**(code **)(*local_78 + 0x10))();
      *(undefined8 *)(this + lVar3 * 8) = uVar2;
      StackFrameIterator::Advance(aSStack_600);
      if (3 < lVar3 - 5U) break;
      lVar3 = lVar3 + 1;
    } while (local_78 != (long *)0x0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

