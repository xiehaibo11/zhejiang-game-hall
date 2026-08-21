
/* v8::HandleScope::Initialize(v8::Isolate*) */

void __thiscall v8::HandleScope::Initialize(HandleScope *this,Isolate *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = Locker::IsActive();
  if ((((uVar3 & 1) != 0) &&
      (iVar1 = *(int *)(*(long *)(param_1 + 0x95f0) + 0x28),
      iVar2 = internal::ThreadId::GetCurrentThreadId(), iVar1 != iVar2)) &&
     (param_1[0xb6b8] == (Isolate)0x0)) {
    lVar4 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
    if (lVar4 != 0) {
      if (*(code **)(lVar4 + 0xb738) != (code *)0x0) {
        (**(code **)(lVar4 + 0xb738))
                  ("HandleScope::HandleScope","Entering the V8 API without proper locking in place")
        ;
        *(undefined1 *)(lVar4 + 0xb6b9) = 1;
        goto LAB_00ea4014;
      }
    }
    base::OS::PrintError
              ("\n#\n# Fatal error in %s\n# %s\n#\n\n","HandleScope::HandleScope",
               "Entering the V8 API without proper locking in place");
                    /* WARNING: Subroutine does not return */
    base::OS::Abort();
  }
LAB_00ea4014:
  *(Isolate **)this = param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 0x95a0);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x95a8);
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
  return;
}

