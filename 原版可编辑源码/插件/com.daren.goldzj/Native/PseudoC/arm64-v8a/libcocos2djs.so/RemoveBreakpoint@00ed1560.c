
/* v8::debug::RemoveBreakpoint(v8::Isolate*, int) */

void v8::debug::RemoveBreakpoint(Isolate *param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x95a0);
  lVar2 = *(long *)(param_1 + 0x95a8);
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
  internal::Debug::RemoveBreakpoint(*(Debug **)(param_1 + 0xb6c8),param_2);
  if (param_1 != (Isolate *)0x0) {
    *(undefined8 *)(param_1 + 0x95a0) = uVar1;
    *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
    if (*(long *)(param_1 + 0x95a8) != lVar2) {
      *(long *)(param_1 + 0x95a8) = lVar2;
      internal::HandleScope::DeleteExtensions((Isolate *)param_1);
      return;
    }
  }
  return;
}

