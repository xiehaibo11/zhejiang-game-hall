
/* v8::Exception::CreateMessage(v8::Isolate*, v8::Local<v8::Value>) */

void v8::Exception::CreateMessage(Isolate *param_1,undefined8 param_2)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  ulong *puVar5;
  ulong uVar6;
  
  uVar4 = *(undefined4 *)(param_1 + 0x2c60);
  pIVar1 = param_1 + 0x95a0;
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  lVar2 = *(long *)pIVar1;
  lVar3 = *(long *)(param_1 + 0x95a8);
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
  puVar5 = (ulong *)internal::Isolate::CreateMessage(param_1,param_2,0);
  uVar6 = *puVar5;
  *(long *)pIVar1 = lVar2;
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
  if (*(long *)(param_1 + 0x95a8) != lVar3) {
    *(long *)(param_1 + 0x95a8) = lVar3;
    internal::HandleScope::DeleteExtensions(param_1);
  }
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pIVar1;
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)internal::HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar5 + 1;
    *puVar5 = uVar6;
  }
  else {
    internal::CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
  }
  *(undefined4 *)(param_1 + 0x2c60) = uVar4;
  return;
}

