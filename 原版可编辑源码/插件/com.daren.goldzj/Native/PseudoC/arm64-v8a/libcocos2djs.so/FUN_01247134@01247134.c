
void FUN_01247134(long *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  Isolate *this;
  ulong *puVar7;
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
  pcStack_70 = "WebAssembly.Table.grow()";
  local_50 = 0;
  local_78 = this;
  uVar2 = v8::Isolate::GetCurrentContext(this);
  lVar4 = param_1[1];
  puVar7 = (ulong *)(lVar4 + 8);
  uVar6 = *puVar7;
  if (((uVar6 & 1) == 0) ||
     (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x437)) {
    v8::internal::wasm::ErrorThrower::TypeError
              ((char *)&local_78,"Receiver is not a %s","WebAssembly.Table");
  }
  else {
    if ((int)param_1[2] < 1) {
      lVar4 = *(long *)(*param_1 + 8) + 0xa0;
    }
    uVar6 = FUN_0124a994(lVar4,uVar2,&local_78,&local_7c);
    if ((uVar6 & 1) != 0) {
      uVar1 = v8::internal::WasmTableObject::Grow(this,puVar7,local_7c,this + 0xb0);
      if ((int)uVar1 < 0) {
        v8::internal::wasm::ErrorThrower::RangeError
                  ((char *)&local_78,"failed to grow table by %u",(ulong)local_7c);
      }
      else {
        lVar4 = *param_1;
        if (uVar1 >> 0x1e == 0) {
          lVar5 = (ulong)uVar1 << 1;
        }
        else {
          plVar3 = (long *)v8::Integer::New(*(Isolate **)(lVar4 + 8),uVar1);
          if (plVar3 == (long *)0x0) {
            lVar5 = *(long *)(lVar4 + 0x10);
          }
          else {
            lVar5 = *plVar3;
          }
        }
        *(long *)(lVar4 + 0x18) = lVar5;
      }
    }
  }
  FUN_01249590(&local_78);
  v8::HandleScope::~HandleScope(aHStack_48);
  return;
}

