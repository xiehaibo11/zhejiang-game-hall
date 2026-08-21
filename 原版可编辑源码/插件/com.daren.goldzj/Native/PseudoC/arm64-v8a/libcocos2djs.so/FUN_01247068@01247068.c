
void FUN_01247068(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  Isolate *pIVar4;
  long lVar5;
  Isolate *local_68;
  char *pcStack_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  HandleScope aHStack_38 [24];
  
  pIVar4 = *(Isolate **)(*param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_38,pIVar4);
  local_58 = 0;
  local_48 = 0;
  uStack_40 = 0;
  pcStack_60 = "WebAssembly.Table.length()";
  local_50 = 0;
  uVar2 = *(ulong *)(param_1[1] + 8);
  local_68 = pIVar4;
  if (((uVar2 & 1) == 0) ||
     (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) != 0x437)) {
    v8::internal::wasm::ErrorThrower::TypeError
              ((char *)&local_68,"Receiver is not a %s","WebAssembly.Table");
  }
  else {
    lVar5 = *param_1;
    puVar1 = (undefined8 *)v8::Number::New(pIVar4,(double)(*(int *)(uVar2 + 0xf) >> 1));
    if (puVar1 == (undefined8 *)0x0) {
      uVar3 = *(undefined8 *)(lVar5 + 0x10);
    }
    else {
      uVar3 = *puVar1;
    }
    *(undefined8 *)(lVar5 + 0x18) = uVar3;
  }
  FUN_01249590(&local_68);
  v8::HandleScope::~HandleScope(aHStack_38);
  return;
}

