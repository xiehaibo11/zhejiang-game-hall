
void FUN_0124850c(long *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  Value *pVVar5;
  BigInt *this;
  char *pcVar6;
  double dVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  Value *pVVar11;
  ulong uVar12;
  Isolate *this_00;
  float fVar13;
  undefined1 auVar14 [16];
  ulong local_80;
  Isolate *local_78;
  char *pcStack_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  HandleScope aHStack_48 [24];
  
  this_00 = *(Isolate **)(*param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_48,this_00);
  uVar4 = v8::Isolate::GetCurrentContext(this_00);
  local_68 = 0;
  local_58 = 0;
  uStack_50 = 0;
  pcStack_70 = "set WebAssembly.Global.value";
  local_60 = 0;
  pVVar11 = (Value *)param_1[1];
  uVar8 = *(ulong *)(pVVar11 + 8);
  local_78 = this_00;
  if (((uVar8 & 1) == 0) ||
     (uVar9 = uVar8 & 0xffffffff00000000,
     *(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x433)) {
    v8::internal::wasm::ErrorThrower::TypeError
              ((char *)&local_78,"Receiver is not a %s","WebAssembly.Global");
    goto LAB_012485b0;
  }
  if ((*(uint *)(uVar8 + 0x17) >> 9 & 1) == 0) {
    pcVar6 = "Can\'t set the value of an immutable global.";
    goto LAB_0124858c;
  }
  iVar2 = (int)param_1[2];
  pVVar5 = pVVar11;
  if (iVar2 < 1) {
    pVVar5 = (Value *)(*(long *)(*param_1 + 8) + 0xa0);
  }
  uVar10 = *(ulong *)pVVar5;
  if ((((uVar10 & 3) == 1) &&
      (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (long)*(int *)(uVar10 - 1)) == 0x43)) &&
     ((*(uint *)(uVar10 + 0x17) & 0xfffffffe) == 10)) {
    pcVar6 = "Argument 0 is required";
    goto LAB_0124858c;
  }
  switch(*(uint *)(uVar8 + 0x17) >> 1 & 0xff) {
  case 1:
    pVVar5 = pVVar11;
    if (iVar2 < 1) {
      pVVar5 = (Value *)(*(long *)(*param_1 + 8) + 0xa0);
    }
    uVar8 = v8::Value::Int32Value(pVVar5,uVar4);
    if ((uVar8 & 0xff) != 0) {
      uVar9 = *(ulong *)(pVVar11 + 8);
      *(int *)(*(long *)((uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 0xb)) + 0x13) +
              (long)(*(int *)(uVar9 + 0x13) >> 1)) = (int)(uVar8 >> 0x20);
    }
    break;
  case 2:
    uVar3 = v8::internal::wasm::WasmFeatures::FromIsolate((Isolate *)this_00);
    if ((uVar3 >> 6 & 1) != 0) {
      if ((int)param_1[2] < 1) {
        pVVar5 = (Value *)(*(long *)(*param_1 + 8) + 0xa0);
      }
      else {
        pVVar5 = (Value *)param_1[1];
      }
      this = (BigInt *)v8::Value::ToBigInt(pVVar5,uVar4);
      if (this != (BigInt *)0x0) {
        uVar8 = *(ulong *)(pVVar11 + 8);
        uVar4 = v8::BigInt::Int64Value(this,(bool *)0x0);
        *(undefined8 *)
         (*(long *)((uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 0xb)) + 0x13) +
         (long)(*(int *)(uVar8 + 0x13) >> 1)) = uVar4;
      }
      break;
    }
    pcVar6 = "Can\'t set the value of i64 WebAssembly.Global";
    goto LAB_0124858c;
  case 3:
    pVVar5 = pVVar11;
    if (iVar2 < 1) {
      pVVar5 = (Value *)(*(long *)(*param_1 + 8) + 0xa0);
    }
    auVar14 = v8::Value::NumberValue(pVVar5,uVar4);
    dVar7 = auVar14._8_8_;
    if ((auVar14._0_8_ & 0xff) != 0) {
      uVar8 = *(ulong *)(pVVar11 + 8);
      if (dVar7 <= 3.4028234663852886e+38) {
        if (dVar7 < -3.4028234663852886e+38) {
          if (-3.4028235677973362e+38 <= dVar7) {
            fVar13 = -3.4028235e+38;
          }
          else {
            fVar13 = -INFINITY;
          }
        }
        else {
          fVar13 = (float)dVar7;
        }
      }
      else if (dVar7 <= 3.4028235677973362e+38) {
        fVar13 = 3.4028235e+38;
      }
      else {
        fVar13 = INFINITY;
      }
      *(float *)(*(long *)((uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 0xb)) + 0x13) +
                (long)(*(int *)(uVar8 + 0x13) >> 1)) = fVar13;
    }
    break;
  case 4:
    pVVar5 = pVVar11;
    if (iVar2 < 1) {
      pVVar5 = (Value *)(*(long *)(*param_1 + 8) + 0xa0);
    }
    auVar14 = v8::Value::NumberValue(pVVar5,uVar4);
    if ((auVar14._0_8_ & 0xff) != 0) {
      uVar8 = *(ulong *)(pVVar11 + 8);
      *(long *)(*(long *)((uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 0xb)) + 0x13) +
               (long)(*(int *)(uVar8 + 0x13) >> 1)) = auVar14._8_8_;
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 6:
  case 9:
    if (iVar2 < 1) {
      pVVar11 = (Value *)(*(long *)(*param_1 + 8) + 0xa0);
    }
    uVar3 = *(uint *)(uVar8 + 0xf);
    uVar10 = *(ulong *)pVVar11;
    uVar12 = uVar9 | uVar3;
    lVar1 = uVar12 + (long)(int)((*(uint *)(uVar8 + 0x13) & 0x7ffffffe) << 1);
    *(int *)(lVar1 + 7) = (int)uVar10;
    if ((uVar10 & 1) != 0) {
      uVar8 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
      lVar1 = lVar1 + 7;
      if (((uint)uVar8 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar12,lVar1,uVar10);
        uVar8 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar8 & 0x18) != 0) &&
         ((*(byte *)((uVar9 | (ulong)uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar12,lVar1,uVar10);
      }
    }
    break;
  case 7:
    if (iVar2 < 1) {
      pVVar11 = (Value *)(*(long *)(*param_1 + 8) + 0xa0);
    }
    local_80 = uVar8;
    uVar8 = v8::internal::WasmGlobalObject::SetFuncRef
                      ((WasmGlobalObject *)&local_80,this_00,pVVar11);
    if ((uVar8 & 1) != 0) break;
    pcVar6 = "value of an anyfunc reference must be either null or an exported function";
LAB_0124858c:
    v8::internal::wasm::ErrorThrower::TypeError((char *)&local_78,pcVar6);
  }
LAB_012485b0:
  FUN_01249590(&local_78);
  v8::HandleScope::~HandleScope(aHStack_48);
  return;
}

