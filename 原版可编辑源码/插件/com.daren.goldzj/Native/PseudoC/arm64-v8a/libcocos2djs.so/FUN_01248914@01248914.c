
void FUN_01248914(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  Isolate *pIVar5;
  Isolate *local_68;
  char *pcStack_60;
  int local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  HandleScope aHStack_38 [24];
  
  pIVar5 = *(Isolate **)(*param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_38,pIVar5);
  local_58 = 0;
  local_48 = 0;
  uStack_40 = 0;
  pcStack_60 = "WebAssembly.Global.type()";
  local_50 = 0;
  if ((int)param_1[2] < 1) {
    uVar4 = *(ulong *)(*(long *)(*param_1 + 8) + 0xa0);
  }
  else {
    uVar4 = *(ulong *)param_1[1];
  }
  local_68 = pIVar5;
  if (((uVar4 & 1) == 0) ||
     (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0x433)) {
    v8::internal::wasm::ErrorThrower::TypeError
              ((char *)&local_68,"Argument 0 must be a WebAssembly.Global");
    if (local_58 == 0) {
LAB_012489c8:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
  }
  else {
    if ((int)param_1[2] < 1) {
      plVar3 = (long *)(*(long *)(*param_1 + 8) + 0xa0);
    }
    else {
      plVar3 = (long *)param_1[1];
    }
    if (plVar3 == (long *)0x0) goto LAB_012489c8;
    puVar2 = (undefined8 *)
             v8::internal::wasm::GetTypeForGlobal
                       (pIVar5,*(uint *)(*plVar3 + 0x17) >> 9 & 1,*(uint *)(*plVar3 + 0x17) >> 1);
    puVar1 = (undefined8 *)(*param_1 + 0x10);
    if (puVar2 != (undefined8 *)0x0) {
      puVar1 = puVar2;
    }
    *(undefined8 *)(*param_1 + 0x18) = *puVar1;
  }
  FUN_01249590(&local_68);
  v8::HandleScope::~HandleScope(aHStack_38);
  return;
}

