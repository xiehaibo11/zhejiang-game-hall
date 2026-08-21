
void FUN_012473c0(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  Isolate *this;
  ulong *puVar4;
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
  pcStack_70 = "WebAssembly.Table.set()";
  local_50 = 0;
  local_78 = this;
  uVar1 = v8::Isolate::GetCurrentContext(this);
  lVar2 = param_1[1];
  puVar4 = (ulong *)(lVar2 + 8);
  uVar3 = *puVar4;
  if (((uVar3 & 1) == 0) ||
     (*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0x437)) {
    v8::internal::wasm::ErrorThrower::TypeError
              ((char *)&local_78,"Receiver is not a %s","WebAssembly.Table");
  }
  else {
    if ((int)param_1[2] < 1) {
      lVar2 = *(long *)(*param_1 + 8) + 0xa0;
    }
    uVar3 = FUN_0124a994(lVar2,uVar1,&local_78,&local_7c);
    if ((uVar3 & 1) != 0) {
      uVar3 = v8::internal::WasmTableObject::IsInBounds(this,puVar4,local_7c);
      if ((uVar3 & 1) == 0) {
        v8::internal::wasm::ErrorThrower::RangeError
                  ((char *)&local_78,"invalid index %u into function table",(ulong)local_7c);
      }
      else {
        if ((int)param_1[2] < 2) {
          lVar2 = *(long *)(*param_1 + 8) + 0xa0;
        }
        else {
          lVar2 = param_1[1] + -8;
        }
        uVar3 = v8::internal::WasmTableObject::IsValidElement(this,puVar4,lVar2);
        if ((uVar3 & 1) == 0) {
          v8::internal::wasm::ErrorThrower::TypeError
                    ((char *)&local_78,"Argument 1 must be null or a WebAssembly function");
        }
        else {
          v8::internal::WasmTableObject::Set(this,puVar4,local_7c,lVar2);
        }
      }
    }
  }
  FUN_01249590(&local_78);
  v8::HandleScope::~HandleScope(aHStack_48);
  return;
}

