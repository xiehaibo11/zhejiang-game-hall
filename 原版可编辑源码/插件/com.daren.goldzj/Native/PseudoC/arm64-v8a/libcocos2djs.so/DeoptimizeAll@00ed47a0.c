
/* v8::Testing::DeoptimizeAll(v8::Isolate*) */

void v8::Testing::DeoptimizeAll(Isolate *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x95a0);
  lVar2 = *(long *)(param_1 + 0x95a8);
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
  internal::Deoptimizer::DeoptimizeAll((Isolate *)param_1);
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

