
void FUN_01248aa8(long *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  Value *this;
  Value *pVVar7;
  Uint32 *pUVar8;
  Value *pVVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  char *pcVar15;
  ulong uVar16;
  Isolate *this_00;
  Object *pOVar17;
  ulong uVar18;
  char local_fc [4];
  Isolate *local_f8;
  char *pcStack_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  HandleScope aHStack_c8 [24];
  char *local_b0;
  undefined8 uStack_a8;
  ulong *local_a0;
  long lStack_98;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  this_00 = *(Isolate **)(*param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_c8,this_00);
  local_e8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  pcStack_f0 = "WebAssembly.Function()";
  local_e0 = 0;
  uVar16 = *(ulong *)(*param_1 + 0x28);
  local_f8 = this_00;
  if ((((uVar16 & 3) == 1) &&
      (*(short *)((uVar16 & 0xffffffff00000000 | 7) + (long)*(int *)(uVar16 - 1)) == 0x43)) &&
     ((*(uint *)(uVar16 + 0x17) & 0xfffffffe) == 10)) {
    pcVar15 = "WebAssembly.Function must be invoked with \'new\'";
  }
  else {
    if ((int)param_1[2] < 1) {
      uVar16 = v8::Value::IsObject((Value *)(*(long *)(*param_1 + 8) + 0xa0));
    }
    else {
      uVar16 = v8::Value::IsObject((Value *)param_1[1]);
    }
    if ((uVar16 & 1) == 0) {
      pcVar15 = "Argument 0 must be a function type";
    }
    else {
      if ((int)param_1[2] < 1) {
        pOVar17 = (Object *)(*(long *)(*param_1 + 8) + 0xa0);
      }
      else {
        pOVar17 = (Object *)param_1[1];
      }
      uVar5 = v8::Isolate::GetCurrentContext(this_00);
      uVar2 = v8::internal::wasm::WasmFeatures::FromIsolate((Isolate *)this_00);
      uStack_a8 = __strlen_chk("parameters",0xb);
      local_b0 = "parameters";
      lVar6 = v8::internal::Factory::NewStringFromOneByte(this_00,&local_b0,0);
      if (lVar6 == 0) {
LAB_01248f8c:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
      this = (Value *)v8::Object::Get(pOVar17,uVar5,lVar6);
      if (this == (Value *)0x0) goto LAB_01248c68;
      uVar16 = v8::Value::IsObject(this);
      if ((uVar16 & 1) == 0) {
        pcVar15 = "Argument 0 must be a function type with \'parameters\'";
      }
      else {
        pVVar7 = (Value *)v8::Object::Get((Object *)this,uVar5,this_00 + 0x7b8);
        if (((pVVar7 == (Value *)0x0) ||
            (pUVar8 = (Uint32 *)v8::Value::ToArrayIndex(pVVar7,uVar5), pUVar8 == (Uint32 *)0x0)) ||
           (uVar3 = v8::Uint32::Value(pUVar8), uVar3 == 0xffffffff)) {
          pcVar15 = "Argument 0 contains parameters without \'length\'";
        }
        else if (uVar3 < 0x3e9) {
          uStack_a8 = __strlen_chk("results",8);
          local_b0 = "results";
          lVar6 = v8::internal::Factory::NewStringFromOneByte(this_00,&local_b0,0);
          if (lVar6 == 0) goto LAB_01248f8c;
          pVVar7 = (Value *)v8::Object::Get(pOVar17,uVar5,lVar6);
          if (pVVar7 == (Value *)0x0) goto LAB_01248c68;
          uVar16 = v8::Value::IsObject(pVVar7);
          if ((uVar16 & 1) == 0) {
            pcVar15 = "Argument 0 must be a function type with \'results\'";
          }
          else {
            pVVar9 = (Value *)v8::Object::Get((Object *)pVVar7,uVar5,this_00 + 0x7b8);
            if (((pVVar9 == (Value *)0x0) ||
                (pUVar8 = (Uint32 *)v8::Value::ToArrayIndex(pVVar9,uVar5), pUVar8 == (Uint32 *)0x0))
               || (uVar4 = v8::Uint32::Value(pUVar8), uVar4 == 0xffffffff)) {
              pcVar15 = "Argument 0 contains results without \'length\'";
            }
            else {
              uVar18 = (ulong)uVar4;
              uVar16 = 1000;
              if ((uVar2 & 0x80) == 0) {
                uVar16 = 1;
              }
              if (uVar18 <= uVar16) {
                v8::internal::Zone::Zone
                          ((Zone *)&local_b0,*(AccountingAllocator **)(this_00 + 0x95d0),
                           "../../src/wasm/wasm-js.cc:1456");
                uVar16 = (long)(int)(uVar4 + uVar3) + 7U & 0xfffffffffffffff8;
                if ((ulong)(lStack_98 - (long)local_a0) < uVar16) {
                  puVar13 = (ulong *)v8::internal::Zone::NewExpand((Zone *)&local_b0,uVar16);
                }
                else {
                  puVar13 = local_a0;
                  local_a0 = (ulong *)((long)local_a0 + uVar16);
                }
                if (uVar3 != 0) {
                  uVar16 = 0;
                  do {
                    uVar10 = v8::Object::Get((Object *)this,uVar5,uVar16 & 0xffffffff);
                    uVar11 = FUN_0124aae4(this_00,uVar10,uVar5,local_fc,uVar2);
                    if ((uVar11 & 1) == 0) goto LAB_01248f4c;
                    if (local_fc[0] == '\0') {
                      v8::internal::wasm::ErrorThrower::TypeError
                                ((char *)&local_f8,
                                 "Argument 0 parameter type at index #%u must be a value type",
                                 uVar16 & 0xffffffff);
                      goto LAB_01248f4c;
                    }
                    uVar11 = uVar16 + 1;
                    *(char *)((long)puVar13 + uVar16 + uVar18) = local_fc[0];
                    uVar16 = uVar11;
                  } while (uVar3 != uVar11);
                }
                if (uVar4 != 0) {
                  uVar16 = 0;
                  do {
                    uVar10 = v8::Object::Get((Object *)pVVar7,uVar5,uVar16 & 0xffffffff);
                    uVar11 = FUN_0124aae4(this_00,uVar10,uVar5,local_fc,uVar2);
                    if ((uVar11 & 1) == 0) goto LAB_01248f4c;
                    if (local_fc[0] == '\0') {
                      v8::internal::wasm::ErrorThrower::TypeError
                                ((char *)&local_f8,
                                 "Argument 0 result type at index #%u must be a value type",
                                 uVar16 & 0xffffffff);
                      goto LAB_01248f4c;
                    }
                    uVar11 = uVar16 + 1;
                    *(char *)((long)puVar13 + uVar16) = local_fc[0];
                    uVar16 = uVar11;
                  } while (uVar18 != uVar11);
                }
                if ((int)param_1[2] < 2) {
                  uVar16 = v8::Value::IsFunction((Value *)(*(long *)(*param_1 + 8) + 0xa0));
                  if ((uVar16 & 1) == 0) goto LAB_01248efc;
LAB_01248eb4:
                  if ((ulong)(lStack_98 - (long)local_a0) < 0x18) {
                    puVar14 = (ulong *)v8::internal::Zone::NewExpand((Zone *)&local_b0,0x18);
                  }
                  else {
                    puVar14 = local_a0;
                    local_a0 = local_a0 + 3;
                  }
                  *puVar14 = uVar18;
                  puVar14[1] = (ulong)uVar3;
                  puVar14[2] = (ulong)puVar13;
                  if ((int)param_1[2] < 2) {
                    lVar6 = *(long *)(*param_1 + 8) + 0xa0;
                  }
                  else {
                    lVar6 = param_1[1] + -8;
                  }
                  puVar12 = (undefined8 *)v8::internal::WasmJSFunction::New(this_00,puVar14,lVar6);
                  if (puVar12 == (undefined8 *)0x0) {
                    uVar5 = *(undefined8 *)(*param_1 + 0x10);
                  }
                  else {
                    uVar5 = *puVar12;
                  }
                  *(undefined8 *)(*param_1 + 0x18) = uVar5;
                }
                else {
                  uVar16 = v8::Value::IsFunction((Value *)(param_1[1] + -8));
                  if ((uVar16 & 1) != 0) goto LAB_01248eb4;
LAB_01248efc:
                  v8::internal::wasm::ErrorThrower::TypeError
                            ((char *)&local_f8,"Argument 1 must be a function");
                }
LAB_01248f4c:
                v8::internal::Zone::~Zone((Zone *)&local_b0);
                goto LAB_01248c68;
              }
              pcVar15 = "Argument 0 contains too many results";
            }
          }
        }
        else {
          pcVar15 = "Argument 0 contains too many parameters";
        }
      }
    }
  }
  v8::internal::wasm::ErrorThrower::TypeError((char *)&local_f8,pcVar15);
LAB_01248c68:
  FUN_01249590(&local_f8);
  v8::HandleScope::~HandleScope(aHStack_c8);
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

