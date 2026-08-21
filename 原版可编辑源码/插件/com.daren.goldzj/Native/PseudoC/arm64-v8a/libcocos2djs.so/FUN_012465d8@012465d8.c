
void FUN_012465d8(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_68;
  char *pcStack_60;
  int local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  HandleScope aHStack_38 [24];
  
  v8::HandleScope::HandleScope(aHStack_38,*(Isolate **)(*param_1 + 8));
  lVar3 = *param_1;
  local_68 = *(undefined8 *)(lVar3 + 8);
  local_58 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  pcStack_60 = "WebAssembly.Module.imports()";
  if ((int)param_1[2] < 1) {
    uVar4 = *(ulong *)(*(long *)(lVar3 + 8) + 0xa0);
  }
  else {
    uVar4 = *(ulong *)param_1[1];
  }
  if (((uVar4 & 1) == 0) ||
     (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0x436)) {
    v8::internal::wasm::ErrorThrower::TypeError
              ((char *)&local_68,"Argument 0 must be a WebAssembly.Module");
    if (local_58 == 0) goto LAB_0124668c;
  }
  else {
    if ((int)param_1[2] < 1) {
      if (*(long *)(lVar3 + 8) == -0xa0) goto LAB_0124668c;
    }
    else if (param_1[1] == 0) {
LAB_0124668c:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    puVar2 = (undefined8 *)v8::internal::wasm::GetImports();
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

