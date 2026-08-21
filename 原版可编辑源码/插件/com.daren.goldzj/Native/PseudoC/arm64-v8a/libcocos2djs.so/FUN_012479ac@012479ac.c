
void FUN_012479ac(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong *puVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  Isolate *this;
  ulong *puVar10;
  uint local_8c;
  Isolate *local_88;
  char *pcStack_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  HandleScope aHStack_58 [24];
  
  this = *(Isolate **)(*param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_58,this);
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  pcStack_80 = "WebAssembly.Memory.grow()";
  local_60 = 0;
  local_88 = this;
  uVar2 = v8::Isolate::GetCurrentContext(this);
  lVar7 = param_1[1];
  puVar10 = (ulong *)(lVar7 + 8);
  uVar9 = *puVar10;
  if (((uVar9 & 1) == 0) ||
     (*(short *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x435)) {
    v8::internal::wasm::ErrorThrower::TypeError
              ((char *)&local_88,"Receiver is not a %s","WebAssembly.Memory");
  }
  else {
    if ((int)param_1[2] < 1) {
      lVar7 = *(long *)(*param_1 + 8) + 0xa0;
    }
    uVar9 = FUN_0124a994(lVar7,uVar2,&local_88,&local_8c);
    if ((uVar9 & 1) != 0) {
      uVar9 = (long)((ulong)*(uint *)(*puVar10 + 0xf) << 0x20) >> 0x21;
      uVar3 = v8::internal::wasm::max_mem_pages();
      if ((uVar3 & 0xffffffff) < uVar9) {
        uVar9 = v8::internal::wasm::max_mem_pages();
        uVar9 = uVar9 & 0xffffffff;
      }
      uVar3 = *puVar10 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar10 + 0xb);
      if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)(this + 0x95a0);
        if (puVar4 == *(ulong **)(this + 0x95a8)) {
          puVar4 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)this);
        }
        *(ulong **)(this + 0x95a0) = puVar4 + 1;
        *puVar4 = uVar3;
      }
      else {
        puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(this + 0x95b8),uVar3);
        uVar3 = *puVar4;
      }
      if (uVar9 < (ulong)local_8c + (*(ulong *)(uVar3 + 0xb) >> 0x10)) {
        pcVar6 = "Maximum memory size exceeded";
      }
      else {
        iVar1 = v8::internal::WasmMemoryObject::Grow(this,puVar10);
        if (iVar1 != -1) {
          lVar7 = *param_1;
          if ((long)iVar1 + 0x40000000U >> 0x1f == 0) {
            lVar8 = (long)iVar1 << 1;
          }
          else {
            plVar5 = (long *)v8::Integer::New(*(Isolate **)(lVar7 + 8),iVar1);
            if (plVar5 == (long *)0x0) {
              lVar8 = *(long *)(lVar7 + 0x10);
            }
            else {
              lVar8 = *plVar5;
            }
          }
          *(long *)(lVar7 + 0x18) = lVar8;
          goto LAB_01247abc;
        }
        pcVar6 = "Unable to grow instance memory.";
      }
      v8::internal::wasm::ErrorThrower::RangeError((char *)&local_88,pcVar6);
    }
  }
LAB_01247abc:
  FUN_01249590(&local_88);
  v8::HandleScope::~HandleScope(aHStack_58);
  return;
}

