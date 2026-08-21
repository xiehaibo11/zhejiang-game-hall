
void FUN_012476b4(long *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  Value *this;
  ulong *puVar8;
  ulong *puVar9;
  char *pcVar10;
  ulong uVar11;
  Isolate *this_00;
  Object *pOVar12;
  ulong local_a8;
  ulong local_a0;
  Isolate *local_98;
  char *pcStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  HandleScope aHStack_68 [24];
  char *local_50;
  undefined8 uStack_48;
  
  this_00 = *(Isolate **)(*param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_68,this_00);
  local_88 = 0;
  local_78 = 0;
  uStack_70 = 0;
  pcStack_90 = "WebAssembly.Memory()";
  local_80 = 0;
  uVar11 = *(ulong *)(*param_1 + 0x28);
  local_98 = this_00;
  if ((((uVar11 & 3) == 1) &&
      (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (long)*(int *)(uVar11 - 1)) == 0x43)) &&
     ((*(uint *)(uVar11 + 0x17) & 0xfffffffe) == 10)) {
    pcVar10 = "WebAssembly.Memory must be invoked with \'new\'";
  }
  else {
    if ((int)param_1[2] < 1) {
      uVar11 = v8::Value::IsObject((Value *)(*(long *)(*param_1 + 8) + 0xa0));
    }
    else {
      uVar11 = v8::Value::IsObject((Value *)param_1[1]);
    }
    if ((uVar11 & 1) != 0) {
      uVar5 = v8::Isolate::GetCurrentContext(this_00);
      if ((int)param_1[2] < 1) {
        pOVar12 = (Object *)(*(long *)(*param_1 + 8) + 0xa0);
      }
      else {
        pOVar12 = (Object *)param_1[1];
      }
      local_a0 = 0;
      uVar2 = v8::internal::wasm::max_mem_pages();
      uVar11 = FUN_0124a4d8(this_00,&local_98,uVar5,pOVar12,&local_a0,uVar2);
      if ((uVar11 & 1) == 0) goto LAB_0124795c;
      local_a8 = 0xffffffffffffffff;
      uStack_48 = __strlen_chk("maximum",8);
      local_50 = "maximum";
      lVar6 = v8::internal::Factory::NewStringFromOneByte(this_00,&local_50,0);
      uVar11 = local_a0;
      if (lVar6 == 0) {
LAB_01247998:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
      uVar7 = FUN_0124a624(&local_98,uVar5,pOVar12,lVar6,0,&local_a8,local_a0,0x10000);
      if ((uVar7 & 1) == 0) goto LAB_0124795c;
      uVar3 = v8::internal::wasm::WasmFeatures::FromIsolate((Isolate *)this_00);
      if ((uVar3 >> 1 & 1) == 0) {
LAB_012478a8:
        uVar3 = 0;
      }
      else {
        uStack_48 = __strlen_chk("shared",7);
        local_50 = "shared";
        lVar6 = v8::internal::Factory::NewStringFromOneByte(this_00,&local_50,0);
        if (lVar6 == 0) goto LAB_01247998;
        this = (Value *)v8::Object::Get(pOVar12,uVar5,lVar6);
        if (this == (Value *)0x0) goto LAB_012478a8;
        uVar4 = v8::Value::BooleanValue(this,this_00);
        uVar3 = uVar4 & 1;
        if (((uVar4 & 1) != 0) && (local_a8 == 0xffffffffffffffff)) {
          pcVar10 = "If shared is true, maximum property should be defined.";
          goto LAB_01247794;
        }
      }
      puVar8 = (ulong *)v8::internal::WasmMemoryObject::New
                                  (this_00,uVar11 & 0xffffffff,local_a8 & 0xffffffff,uVar3);
      if (puVar8 == (ulong *)0x0) {
        v8::internal::wasm::ErrorThrower::RangeError((char *)&local_98,"could not allocate memory");
        goto LAB_0124795c;
      }
      if (uVar3 != 0) {
        uVar11 = *puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb);
        if (*(CanonicalHandleScope **)(this_00 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar9 = *(ulong **)(this_00 + 0x95a0);
          if (puVar9 == *(ulong **)(this_00 + 0x95a8)) {
            puVar9 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)this_00);
          }
          *(ulong **)(this_00 + 0x95a0) = puVar9 + 1;
          *puVar9 = uVar11;
        }
        else {
          puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(this_00 + 0x95b8),uVar11);
        }
        uVar1 = v8::internal::JSReceiver::SetIntegrityLevel(puVar9,5,1);
        if ((uVar1 & 0xff) == 0) {
          v8::V8::FromJustIsNothing();
        }
        if (uVar1 < 0x100) {
          pcVar10 = "Status of setting SetIntegrityLevel of buffer is false.";
          goto LAB_01247794;
        }
      }
      *(ulong *)(*param_1 + 0x18) = *puVar8;
      goto LAB_0124795c;
    }
    pcVar10 = "Argument 0 must be a memory descriptor";
  }
LAB_01247794:
  v8::internal::wasm::ErrorThrower::TypeError((char *)&local_98,pcVar10);
LAB_0124795c:
  FUN_01249590(&local_98);
  v8::HandleScope::~HandleScope(aHStack_68);
  return;
}

