
/* v8::Exception::GetStackTrace(v8::Local<v8::Value>) */

undefined8 v8::Exception::GetStackTrace(ulong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  Isolate *pIVar4;
  
  uVar3 = *param_1;
  if (((uVar3 & 1) == 0) ||
     (pIVar4 = (Isolate *)(uVar3 & 0xffffffff00000000),
     *(ushort *)(((ulong)pIVar4 | 7) + (ulong)*(uint *)(uVar3 - 1)) < 0xaa)) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(pIVar4 + 0x2c60);
    *(undefined4 *)(pIVar4 + 0x2c60) = 5;
    uVar2 = internal::Isolate::GetDetailedStackTrace(pIVar4,param_1);
    *(undefined4 *)(pIVar4 + 0x2c60) = uVar1;
  }
  return uVar2;
}

