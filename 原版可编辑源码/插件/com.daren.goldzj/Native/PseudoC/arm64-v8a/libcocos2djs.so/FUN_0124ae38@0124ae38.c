
void FUN_0124ae38(long *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  Isolate *pIVar7;
  long lVar8;
  long lVar9;
  Isolate *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  HandleScope aHStack_48 [24];
  
  pIVar7 = *(Isolate **)(*param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_48,pIVar7);
  local_68 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lVar9 = param_1[1];
  uVar6 = *(ulong *)(lVar9 + 8);
  local_78 = pIVar7;
  uStack_70 = param_2;
  if (((uVar6 & 1) == 0) ||
     (pIVar3 = (Isolate *)(uVar6 & 0xffffffff00000000),
     *(short *)(((ulong)pIVar3 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x433)) {
    v8::internal::wasm::ErrorThrower::TypeError
              ((char *)&local_78,"Receiver is not a %s","WebAssembly.Global");
    goto LAB_0124af28;
  }
  uVar2 = *(uint *)(uVar6 + 0x17) >> 1 & 0xff;
  if (8 < uVar2 - 1) {
switchD_0124aec8_caseD_5:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  lVar8 = *param_1;
  switch(uVar2) {
  case 1:
    iVar1 = *(int *)(*(long *)(((ulong)pIVar3 | (ulong)*(uint *)(uVar6 + 0xb)) + 0x13) +
                    (long)(*(int *)(uVar6 + 0x13) >> 1));
    if ((long)iVar1 + 0x40000000U >> 0x1f == 0) {
      *(long *)(lVar8 + 0x18) = (long)iVar1 << 1;
      goto LAB_0124af28;
    }
    puVar5 = (undefined8 *)v8::Integer::New(*(Isolate **)(lVar8 + 8),iVar1);
    break;
  case 2:
    uVar2 = v8::internal::wasm::WasmFeatures::FromIsolate((Isolate *)pIVar7);
    if ((uVar2 >> 6 & 1) == 0) {
      v8::internal::wasm::ErrorThrower::TypeError
                ((char *)&local_78,"Can\'t get the value of i64 WebAssembly.Global");
      goto LAB_0124af28;
    }
    uVar6 = *(ulong *)(lVar9 + 8);
    puVar5 = (undefined8 *)
             v8::BigInt::New(pIVar7,*(long *)(*(long *)((uVar6 & 0xffffffff00000000 |
                                                        (ulong)*(uint *)(uVar6 + 0xb)) + 0x13) +
                                             (long)(*(int *)(uVar6 + 0x13) >> 1)));
    break;
  case 3:
    puVar5 = (undefined8 *)
             v8::Number::New(*(Isolate **)(lVar8 + 8),
                             (double)*(float *)(*(long *)(((ulong)pIVar3 |
                                                          (ulong)*(uint *)(uVar6 + 0xb)) + 0x13) +
                                               (long)(*(int *)(uVar6 + 0x13) >> 1)));
    break;
  case 4:
    puVar5 = (undefined8 *)
             v8::Number::New(*(Isolate **)(lVar8 + 8),
                             *(double *)
                              (*(long *)(((ulong)pIVar3 | (ulong)*(uint *)(uVar6 + 0xb)) + 0x13) +
                              (long)(*(int *)(uVar6 + 0x13) >> 1)));
    if (puVar5 == (undefined8 *)0x0) goto LAB_0124b060;
    goto LAB_0124b028;
  case 5:
  case 8:
    goto switchD_0124aec8_caseD_5;
  default:
    uVar6 = (ulong)pIVar3 |
            (ulong)*(uint *)(((ulong)pIVar3 | (ulong)*(uint *)(uVar6 + 0xf)) +
                             (long)(int)((*(uint *)(uVar6 + 0x13) & 0x7ffffffe) << 1) + 7);
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar4 = (ulong *)v8::internal::HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar6;
    }
    else {
      puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar6);
    }
    if (puVar4 != (ulong *)0x0) {
      *(ulong *)(lVar8 + 0x18) = *puVar4;
      goto LAB_0124af28;
    }
    goto LAB_0124b060;
  }
  if (puVar5 == (undefined8 *)0x0) {
LAB_0124b060:
    *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(lVar8 + 0x10);
  }
  else {
LAB_0124b028:
    *(undefined8 *)(lVar8 + 0x18) = *puVar5;
  }
LAB_0124af28:
  FUN_01249590(&local_78);
  v8::HandleScope::~HandleScope(aHStack_48);
  return;
}

