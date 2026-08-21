
void FUN_01247edc(long *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  Value *pVVar6;
  undefined8 uVar7;
  ulong *puVar8;
  BigInt *this;
  char *pcVar9;
  double dVar10;
  undefined4 uVar11;
  ulong uVar12;
  ulong uVar13;
  Object *pOVar14;
  ulong uVar15;
  Isolate *this_00;
  ulong uVar16;
  float fVar17;
  undefined1 auVar18 [16];
  Isolate *local_a8;
  char *pcStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  HandleScope aHStack_78 [24];
  char *local_60;
  undefined8 uStack_58;
  byte local_34 [4];
  
  this_00 = *(Isolate **)(*param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_78,this_00);
  local_98 = 0;
  local_88 = 0;
  uStack_80 = 0;
  pcStack_a0 = "WebAssembly.Global()";
  local_90 = 0;
  uVar13 = *(ulong *)(*param_1 + 0x28);
  local_a8 = this_00;
  if ((((uVar13 & 3) == 1) &&
      (*(short *)((uVar13 & 0xffffffff00000000 | 7) + (long)*(int *)(uVar13 - 1)) == 0x43)) &&
     ((*(uint *)(uVar13 + 0x17) & 0xfffffffe) == 10)) {
    pcVar9 = "WebAssembly.Global must be invoked with \'new\'";
  }
  else {
    if ((int)param_1[2] < 1) {
      uVar13 = v8::Value::IsObject((Value *)(*(long *)(*param_1 + 8) + 0xa0));
    }
    else {
      uVar13 = v8::Value::IsObject((Value *)param_1[1]);
    }
    if ((uVar13 & 1) == 0) {
      pcVar9 = "Argument 0 must be a global descriptor";
    }
    else {
      uVar4 = v8::Isolate::GetCurrentContext(this_00);
      if ((int)param_1[2] < 1) {
        pOVar14 = (Object *)(*(long *)(*param_1 + 8) + 0xa0);
      }
      else {
        pOVar14 = (Object *)param_1[1];
      }
      uVar2 = v8::internal::wasm::WasmFeatures::FromIsolate((Isolate *)this_00);
      uStack_58 = __strlen_chk("mutable",8);
      local_60 = "mutable";
      lVar5 = v8::internal::Factory::NewStringFromOneByte(this_00,&local_60,0);
      if (lVar5 == 0) {
LAB_012484d4:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
      pVVar6 = (Value *)v8::Object::Get(pOVar14,uVar4,lVar5);
      if (pVVar6 == (Value *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = v8::Value::BooleanValue(pVVar6,this_00);
      }
      uStack_58 = __strlen_chk("value",6);
      local_60 = "value";
      lVar5 = v8::internal::Factory::NewStringFromOneByte(this_00,&local_60,0);
      if (lVar5 == 0) goto LAB_012484d4;
      uVar7 = v8::Object::Get(pOVar14,uVar4,lVar5);
      uVar13 = FUN_0124aae4(this_00,uVar7,uVar4,local_34,uVar2);
      if ((uVar13 & 1) == 0) goto LAB_012484a8;
      if (local_34[0] != 0) {
        puVar8 = (ulong *)v8::internal::WasmGlobalObject::New(this_00,0,0,local_34[0],0,uVar3 & 1);
        if (puVar8 == (ulong *)0x0) {
          v8::internal::wasm::ErrorThrower::RangeError
                    ((char *)&local_a8,"could not allocate memory");
          goto LAB_012484a8;
        }
        iVar1 = (int)param_1[2];
        if (iVar1 < 2) {
          pVVar6 = (Value *)(*(long *)(*param_1 + 8) + 0xa0);
        }
        else {
          pVVar6 = (Value *)(param_1[1] + -8);
        }
        switch(local_34[0]) {
        case 1:
          uVar13 = *(ulong *)pVVar6;
          if ((((uVar13 & 3) == 1) &&
              (*(short *)((uVar13 & 0xffffffff00000000 | 7) + (long)*(int *)(uVar13 - 1)) == 0x43))
             && ((*(uint *)(uVar13 + 0x17) & 0xfffffffe) == 10)) {
            uVar11 = 0;
          }
          else {
            pVVar6 = (Value *)v8::Value::ToInt32(pVVar6,uVar4);
            if ((pVVar6 == (Value *)0x0) ||
               (uVar13 = v8::Value::Int32Value(pVVar6,uVar4), (uVar13 & 0xff) == 0))
            goto LAB_012484a8;
            uVar11 = (undefined4)(uVar13 >> 0x20);
          }
          uVar13 = *puVar8;
          *(undefined4 *)
           (*(long *)((uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 + 0xb)) + 0x13) +
           (long)(*(int *)(uVar13 + 0x13) >> 1)) = uVar11;
          break;
        case 2:
          uVar13 = *(ulong *)pVVar6;
          if ((((uVar13 & 3) == 1) &&
              (*(short *)((uVar13 & 0xffffffff00000000 | 7) + (long)*(int *)(uVar13 - 1)) == 0x43))
             && ((*(uint *)(uVar13 + 0x17) & 0xfffffffe) == 10)) {
            uVar4 = 0;
          }
          else {
            if ((uVar2 >> 6 & 1) == 0) {
              pcVar9 = "Can\'t set the value of i64 WebAssembly.Global";
              goto LAB_01247fc0;
            }
            this = (BigInt *)v8::Value::ToBigInt(pVVar6,uVar4);
            if (this == (BigInt *)0x0) goto LAB_012484a8;
            uVar4 = v8::BigInt::Int64Value(this,(bool *)0x0);
          }
          uVar13 = *puVar8;
          *(undefined8 *)
           (*(long *)((uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 + 0xb)) + 0x13) +
           (long)(*(int *)(uVar13 + 0x13) >> 1)) = uVar4;
          break;
        case 3:
          uVar13 = *(ulong *)pVVar6;
          if ((((uVar13 & 3) != 1) ||
              (*(short *)((uVar13 & 0xffffffff00000000 | 7) + (long)*(int *)(uVar13 - 1)) != 0x43))
             || (fVar17 = 0.0, (*(uint *)(uVar13 + 0x17) & 0xfffffffe) != 10)) {
            pVVar6 = (Value *)v8::Value::ToNumber(pVVar6,uVar4);
            if (pVVar6 == (Value *)0x0) goto LAB_012484a8;
            auVar18 = v8::Value::NumberValue(pVVar6,uVar4);
            dVar10 = auVar18._8_8_;
            if ((auVar18._0_8_ & 0xff) == 0) goto LAB_012484a8;
            if (dVar10 <= 3.4028234663852886e+38) {
              if (-3.4028234663852886e+38 <= dVar10) {
                fVar17 = (float)dVar10;
              }
              else if (-3.4028235677973362e+38 <= dVar10) {
                fVar17 = -3.4028235e+38;
              }
              else {
                fVar17 = -INFINITY;
              }
            }
            else if (dVar10 <= 3.4028235677973362e+38) {
              fVar17 = 3.4028235e+38;
            }
            else {
              fVar17 = INFINITY;
            }
          }
          uVar13 = *puVar8;
          *(float *)(*(long *)((uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 + 0xb)) + 0x13
                              ) + (long)(*(int *)(uVar13 + 0x13) >> 1)) = fVar17;
          break;
        case 4:
          uVar13 = *(ulong *)pVVar6;
          if ((((uVar13 & 3) == 1) &&
              (*(short *)((uVar13 & 0xffffffff00000000 | 7) + (long)*(int *)(uVar13 - 1)) == 0x43))
             && ((*(uint *)(uVar13 + 0x17) & 0xfffffffe) == 10)) {
            uVar4 = 0;
          }
          else {
            pVVar6 = (Value *)v8::Value::ToNumber(pVVar6,uVar4);
            if (pVVar6 == (Value *)0x0) goto LAB_012484a8;
            auVar18 = v8::Value::NumberValue(pVVar6,uVar4);
            uVar4 = auVar18._8_8_;
            if ((auVar18._0_8_ & 0xff) == 0) goto LAB_012484a8;
          }
          uVar13 = *puVar8;
          *(undefined8 *)
           (*(long *)((uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 + 0xb)) + 0x13) +
           (long)(*(int *)(uVar13 + 0x13) >> 1)) = uVar4;
          break;
        default:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        case 6:
        case 9:
          uVar13 = *puVar8;
          if (iVar1 < 2) {
            uVar3 = *(uint *)(uVar13 + 0xf);
            uVar2 = *(uint *)(uVar13 + 0x13);
            uVar15 = *(ulong *)(this_00 + 0xb0);
          }
          else {
            uVar3 = *(uint *)(uVar13 + 0xf);
            uVar2 = *(uint *)(uVar13 + 0x13);
            uVar15 = *(ulong *)pVVar6;
          }
          uVar16 = uVar13 & 0xffffffff00000000 | (ulong)uVar3;
          lVar5 = uVar16 + (long)(int)((uVar2 & 0x7ffffffe) << 1);
          *(int *)(lVar5 + 7) = (int)uVar15;
          if ((uVar15 & 1) != 0) {
            uVar12 = *(ulong *)((uVar15 & 0xfffffffffffc0000) + 8);
            lVar5 = lVar5 + 7;
            if (((uint)uVar12 >> 0x12 & 1) != 0) {
              v8::internal::Heap_MarkingBarrierSlow(uVar16,lVar5,uVar15);
              uVar12 = *(ulong *)(uVar15 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar12 & 0x18) != 0) &&
               ((*(byte *)((uVar13 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000) + 8) &
                0x18) == 0)) {
              v8::internal::Heap_GenerationalBarrierSlow(uVar16,lVar5,uVar15);
            }
          }
          break;
        case 7:
          if (iVar1 < 2) {
            local_60 = (char *)*puVar8;
            v8::internal::WasmGlobalObject::SetFuncRef
                      ((WasmGlobalObject *)&local_60,this_00,this_00 + 0xb0);
          }
          else {
            local_60 = (char *)*puVar8;
            uVar13 = v8::internal::WasmGlobalObject::SetFuncRef
                               ((WasmGlobalObject *)&local_60,this_00);
            if ((uVar13 & 1) == 0) {
              v8::internal::wasm::ErrorThrower::TypeError
                        ((char *)&local_a8,
                         "The value of anyfunc globals must be null or an exported function");
            }
          }
        }
        *(ulong *)(*param_1 + 0x18) = *puVar8;
        goto LAB_012484a8;
      }
      pcVar9 = "Descriptor property \'value\' must be \'i32\', \'i64\', \'f32\', or \'f64\'";
    }
  }
LAB_01247fc0:
  v8::internal::wasm::ErrorThrower::TypeError((char *)&local_a8,pcVar9);
LAB_012484a8:
  FUN_01249590(&local_a8);
  v8::HandleScope::~HandleScope(aHStack_78);
  return;
}

