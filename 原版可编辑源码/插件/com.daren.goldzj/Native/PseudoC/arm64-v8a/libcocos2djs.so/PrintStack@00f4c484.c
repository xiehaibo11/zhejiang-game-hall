
/* v8::internal::Isolate::PrintStack(v8::internal::StringStream*,
   v8::internal::Isolate::PrintStackMode) */

void __thiscall v8::internal::Isolate::PrintStack(Isolate *this,StringStream *param_1,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  WasmCodeRefScope aWStack_638 [48];
  StackFrameIterator aSStack_608 [1416];
  long *local_80;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(this + 0x95a0);
  lVar2 = *(long *)(this + 0x95a8);
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
  wasm::WasmCodeRefScope::WasmCodeRefScope(aWStack_638);
  if (*(long *)(this + 0x2c28) != 0) {
    uVar4 = __strlen_chk("\n==== JS stack trace =========================================\n\n",0x41)
    ;
    StringStream::Add(param_1,"\n==== JS stack trace =========================================\n\n",
                      uVar4,0,0);
    StackFrameIterator::StackFrameIterator(aSStack_608,this);
    if (local_80 != (long *)0x0) {
      iVar5 = 0;
      do {
        (**(code **)(*local_80 + 0x20))(local_80,param_1,0,iVar5);
        StackFrameIterator::Advance(aSStack_608);
        iVar5 = iVar5 + 1;
      } while (local_80 != (long *)0x0);
    }
    if (param_3 == 1) {
      uVar4 = __strlen_chk("\n==== Details ================================================\n\n",
                           0x41);
      StringStream::Add(param_1,
                        "\n==== Details ================================================\n\n",uVar4,
                        0,0);
      StackFrameIterator::StackFrameIterator(aSStack_608,this);
      if (local_80 != (long *)0x0) {
        iVar5 = 0;
        do {
          (**(code **)(*local_80 + 0x20))(local_80,param_1,1,iVar5);
          StackFrameIterator::Advance(aSStack_608);
          iVar5 = iVar5 + 1;
        } while (local_80 != (long *)0x0);
      }
      StringStream::PrintMentionedObjectCache(param_1,this);
    }
    uVar4 = __strlen_chk("=====================\n\n",0x18);
    StringStream::Add(param_1,"=====================\n\n",uVar4,0,0);
  }
  wasm::WasmCodeRefScope::~WasmCodeRefScope(aWStack_638);
  if (this != (Isolate *)0x0) {
    *(undefined8 *)(this + 0x95a0) = uVar1;
    *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
    if (*(long *)(this + 0x95a8) != lVar2) {
      *(long *)(this + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(this);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

