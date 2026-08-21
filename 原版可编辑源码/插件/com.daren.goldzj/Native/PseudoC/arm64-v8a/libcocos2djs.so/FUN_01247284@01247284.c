
void FUN_01247284(long *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  Isolate *this;
  ulong *puVar5;
  uint local_7c;
  Isolate *local_78;
  char *pcStack_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  HandleScope aHStack_48 [24];
  
  this = *(Isolate **)(*param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_48,this);
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  pcStack_70 = "WebAssembly.Table.get()";
  local_50 = 0;
  local_78 = this;
  uVar1 = v8::Isolate::GetCurrentContext(this);
  lVar3 = param_1[1];
  puVar5 = (ulong *)(lVar3 + 8);
  uVar4 = *puVar5;
  if (((uVar4 & 1) == 0) ||
     (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0x437)) {
    v8::internal::wasm::ErrorThrower::TypeError
              ((char *)&local_78,"Receiver is not a %s","WebAssembly.Table");
  }
  else {
    if ((int)param_1[2] < 1) {
      lVar3 = *(long *)(*param_1 + 8) + 0xa0;
    }
    uVar4 = FUN_0124a994(lVar3,uVar1,&local_78,&local_7c);
    if ((uVar4 & 1) != 0) {
      uVar4 = v8::internal::WasmTableObject::IsInBounds(this,puVar5,local_7c);
      if ((uVar4 & 1) == 0) {
        v8::internal::wasm::ErrorThrower::RangeError
                  ((char *)&local_78,"invalid index %u into function table",(ulong)local_7c);
      }
      else {
        puVar2 = (undefined8 *)v8::internal::WasmTableObject::Get(this,puVar5,local_7c);
        if (puVar2 == (undefined8 *)0x0) {
          uVar1 = *(undefined8 *)(*param_1 + 0x10);
        }
        else {
          uVar1 = *puVar2;
        }
        *(undefined8 *)(*param_1 + 0x18) = uVar1;
      }
    }
  }
  FUN_01249590(&local_78);
  v8::HandleScope::~HandleScope(aHStack_48);
  return;
}

