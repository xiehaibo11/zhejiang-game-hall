
void FUN_012469f4(long *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  bool bVar3;
  long lVar4;
  Value *this;
  Value *pVVar5;
  long local_b8;
  char *pcStack_b0;
  int local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  HandleScope aHStack_88 [24];
  long local_70;
  char *pcStack_68;
  int local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar4 = *(long *)(*param_1 + 8);
  v8::internal::Isolate::CountUsage(lVar4,0x2e);
  v8::HandleScope::HandleScope(aHStack_88,*(Isolate **)(*param_1 + 8));
  uVar1 = (**(code **)(lVar4 + 0xb770))(param_1);
  if ((uVar1 & 1) != 0) goto LAB_01246bf0;
  local_a8 = 0;
  local_98 = 0;
  uStack_90 = 0;
  pcStack_b0 = "WebAssembly.Instance()";
  local_a0 = 0;
  uVar1 = *(ulong *)(*param_1 + 0x28);
  local_b8 = lVar4;
  if ((((uVar1 & 3) == 1) &&
      (*(short *)((uVar1 & 0xffffffff00000000 | 7) + (long)*(int *)(uVar1 - 1)) == 0x43)) &&
     ((*(uint *)(uVar1 + 0x17) & 0xfffffffe) == 10)) {
    v8::internal::wasm::ErrorThrower::TypeError
              ((char *)&local_b8,"WebAssembly.Instance must be invoked with \'new\'");
  }
  else {
    if ((int)param_1[2] < 1) {
      uVar1 = *(ulong *)(*(long *)(*param_1 + 8) + 0xa0);
      if ((uVar1 & 1) != 0) goto LAB_01246ae0;
LAB_01246af8:
      v8::internal::wasm::ErrorThrower::TypeError
                ((char *)&local_b8,"Argument 0 must be a WebAssembly.Module");
      if (local_a8 != 0) goto LAB_01246be8;
    }
    else {
      uVar1 = *(ulong *)param_1[1];
      if ((uVar1 & 1) == 0) goto LAB_01246af8;
LAB_01246ae0:
      if (*(short *)((uVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar1 - 1)) != 0x436)
      goto LAB_01246af8;
    }
    if ((int)param_1[2] < 2) {
      this = (Value *)(*(long *)(*param_1 + 8) + 0xa0);
      pVVar5 = this;
      if ((int)param_1[2] == 1) {
        pVVar5 = (Value *)param_1[1];
      }
    }
    else {
      this = (Value *)param_1[1] + -8;
      pVVar5 = (Value *)param_1[1];
    }
    pcStack_68 = "WebAssembly.Instance()";
    local_60 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    uVar1 = *(ulong *)pVVar5;
    local_70 = lVar4;
    if (((uVar1 & 1) == 0) ||
       (*(short *)((uVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar1 - 1)) != 0x436)) {
      v8::internal::wasm::ErrorThrower::TypeError
                ((char *)&local_70,"Argument 0 must be a WebAssembly.Module object");
LAB_01246bc8:
      puVar2 = (undefined8 *)0x0;
      bVar3 = true;
    }
    else {
      uVar1 = *(ulong *)this;
      if ((((uVar1 & 3) == 1) &&
          (*(short *)((uVar1 & 0xffffffff00000000 | 7) + (long)*(int *)(uVar1 - 1)) == 0x43)) &&
         ((*(uint *)(uVar1 + 0x17) & 0xfffffffe) == 10)) {
        this = (Value *)0x0;
      }
      else {
        uVar1 = v8::Value::IsObject(this);
        if ((uVar1 & 1) == 0) {
          v8::internal::wasm::ErrorThrower::TypeError
                    ((char *)&local_70,"Argument 1 must be an object");
          this = (Value *)0x0;
          if (local_60 != 0) goto LAB_01246bc8;
        }
      }
      puVar2 = (undefined8 *)
               v8::internal::wasm::WasmEngine::SyncInstantiate
                         (*(WasmEngine **)(lVar4 + 0xc770),lVar4,&local_70,pVVar5,this,0);
      bVar3 = false;
    }
    FUN_01249590(&local_70);
    if ((!bVar3) && (puVar2 != (undefined8 *)0x0)) {
      *(undefined8 *)(*param_1 + 0x18) = *puVar2;
    }
  }
LAB_01246be8:
  FUN_01249590(&local_b8);
LAB_01246bf0:
  v8::HandleScope::~HandleScope(aHStack_88);
  return;
}

