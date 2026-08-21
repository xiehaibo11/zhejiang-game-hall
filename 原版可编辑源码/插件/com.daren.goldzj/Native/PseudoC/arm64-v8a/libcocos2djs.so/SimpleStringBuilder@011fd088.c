
/* v8::internal::SimpleStringBuilder::SimpleStringBuilder(int) */

void __thiscall
v8::internal::SimpleStringBuilder::SimpleStringBuilder(SimpleStringBuilder *this,int param_1)

{
  void *pvVar1;
  long *plVar2;
  ulong uVar3;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  uVar3 = (ulong)param_1;
  pvVar1 = operator_new__(uVar3,(nothrow_t *)&std::nothrow);
  if (pvVar1 == (void *)0x0) {
    plVar2 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar2 + 0x18))();
    pvVar1 = operator_new__(uVar3,(nothrow_t *)&std::nothrow);
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  *(void **)this = pvVar1;
  *(ulong *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}

