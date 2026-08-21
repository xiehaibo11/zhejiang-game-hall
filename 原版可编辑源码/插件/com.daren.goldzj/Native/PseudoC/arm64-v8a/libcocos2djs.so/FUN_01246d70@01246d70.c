
void FUN_01246d70(long *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  Value *pVVar6;
  String *pSVar7;
  ulong uVar8;
  undefined8 *puVar9;
  char *pcVar10;
  ulong uVar11;
  Isolate *this;
  Object *pOVar12;
  undefined8 uVar13;
  undefined1 local_b4 [4];
  ulong local_b0;
  Isolate *local_a8;
  char *pcStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  HandleScope aHStack_78 [24];
  char *local_60;
  undefined8 uStack_58;
  ulong local_38;
  
  this = *(Isolate **)(*param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_78,this);
  local_98 = 0;
  local_88 = 0;
  uStack_80 = 0;
  pcStack_a0 = "WebAssembly.Module()";
  local_90 = 0;
  uVar11 = *(ulong *)(*param_1 + 0x28);
  local_a8 = this;
  if ((((uVar11 & 3) == 1) &&
      (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (long)*(int *)(uVar11 - 1)) == 0x43)) &&
     ((*(uint *)(uVar11 + 0x17) & 0xfffffffe) == 10)) {
    pcVar10 = "WebAssembly.Table must be invoked with \'new\'";
  }
  else {
    if ((int)param_1[2] < 1) {
      uVar11 = v8::Value::IsObject((Value *)(*(long *)(*param_1 + 8) + 0xa0));
    }
    else {
      uVar11 = v8::Value::IsObject((Value *)param_1[1]);
    }
    if ((uVar11 & 1) == 0) {
      pcVar10 = "Argument 0 must be a table descriptor";
    }
    else {
      uVar4 = v8::Isolate::GetCurrentContext(this);
      if ((int)param_1[2] < 1) {
        pOVar12 = (Object *)(*(long *)(*param_1 + 8) + 0xa0);
      }
      else {
        pOVar12 = (Object *)param_1[1];
      }
      uStack_58 = __strlen_chk("element",8);
      local_60 = "element";
      lVar5 = v8::internal::Factory::NewStringFromOneByte(this,&local_60,0);
      if (lVar5 == 0) goto LAB_01247054;
      pVVar6 = (Value *)v8::Object::Get(pOVar12,uVar4,lVar5);
      if ((pVVar6 == (Value *)0x0) ||
         (pSVar7 = (String *)v8::Value::ToString(pVVar6,uVar4), pSVar7 == (String *)0x0))
      goto LAB_01246fd4;
      uVar2 = v8::internal::wasm::WasmFeatures::FromFlags();
      uStack_58 = __strlen_chk("anyfunc",8);
      local_60 = "anyfunc";
      lVar5 = v8::internal::Factory::NewStringFromOneByte(this,&local_60,0);
      if (lVar5 == 0) goto LAB_01247054;
      uVar11 = v8::String::StringEquals(pSVar7,lVar5);
      if ((uVar11 & 1) != 0) {
        uVar13 = 7;
LAB_01246f04:
        local_38 = 0;
        uVar3 = v8::internal::wasm::max_table_init_entries();
        uVar11 = FUN_0124a4d8(this,&local_a8,uVar4,pOVar12,&local_38,uVar3);
        if ((uVar11 & 1) != 0) {
          local_b0 = 0xffffffffffffffff;
          local_b4[0] = 1;
          uStack_58 = __strlen_chk("maximum",8);
          local_60 = "maximum";
          lVar5 = v8::internal::Factory::NewStringFromOneByte(this,&local_60,0);
          uVar11 = local_38;
          if (lVar5 == 0) {
LAB_01247054:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","(location_) != nullptr");
          }
          uVar3 = v8::internal::wasm::max_table_init_entries();
          uVar8 = FUN_0124a624(&local_a8,uVar4,pOVar12,lVar5,local_b4,&local_b0,uVar11,uVar3);
          if ((uVar8 & 1) != 0) {
            local_60 = (char *)0x0;
            puVar9 = (undefined8 *)
                     v8::internal::WasmTableObject::New
                               (this,uVar13,uVar11 & 0xffffffff,local_b4[0],local_b0 & 0xffffffff,
                                &local_60);
            puVar1 = (undefined8 *)(*param_1 + 0x10);
            if (puVar9 != (undefined8 *)0x0) {
              puVar1 = puVar9;
            }
            *(undefined8 *)(*param_1 + 0x18) = *puVar1;
          }
        }
        goto LAB_01246fd4;
      }
      if ((uVar2 >> 5 & 1) != 0) {
        uStack_58 = __strlen_chk("anyref",7);
        local_60 = "anyref";
        lVar5 = v8::internal::Factory::NewStringFromOneByte(this,&local_60,0);
        if (lVar5 == 0) goto LAB_01247054;
        uVar11 = v8::String::StringEquals(pSVar7,lVar5);
        if ((uVar11 & 1) != 0) {
          uVar13 = 6;
          goto LAB_01246f04;
        }
      }
      pcVar10 = "Descriptor property \'element\' must be \'anyfunc\'";
    }
  }
  v8::internal::wasm::ErrorThrower::TypeError((char *)&local_a8,pcVar10);
LAB_01246fd4:
  FUN_01249590(&local_a8);
  v8::HandleScope::~HandleScope(aHStack_78);
  return;
}

