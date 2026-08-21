
void FUN_01247d34(long *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  Isolate *pIVar7;
  ulong *puVar8;
  Isolate *local_88;
  char *pcStack_80;
  int local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  HandleScope aHStack_58 [24];
  
  pIVar7 = *(Isolate **)(*param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_58,pIVar7);
  local_78 = 0;
  local_68 = 0;
  uStack_60 = 0;
  pcStack_80 = "WebAssembly.Memory.type()";
  local_70 = 0;
  if ((int)param_1[2] < 1) {
    uVar6 = *(ulong *)(*(long *)(*param_1 + 8) + 0xa0);
  }
  else {
    uVar6 = *(ulong *)param_1[1];
  }
  local_88 = pIVar7;
  if (((uVar6 & 1) == 0) ||
     (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x435)) {
    v8::internal::wasm::ErrorThrower::TypeError
              ((char *)&local_88,"Argument 0 must be a WebAssembly.Memory");
    if (local_78 == 0) {
LAB_01247df0:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
  }
  else {
    if ((int)param_1[2] < 1) {
      puVar8 = (ulong *)(*(long *)(*param_1 + 8) + 0xa0);
    }
    else {
      puVar8 = (ulong *)param_1[1];
    }
    if (puVar8 == (ulong *)0x0) goto LAB_01247df0;
    uVar6 = *puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb);
    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar7 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar7 + 0x95a8)) {
        puVar4 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)pIVar7);
      }
      *(ulong **)(pIVar7 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar6;
    }
    else {
      puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar6);
      uVar6 = *puVar4;
    }
    uVar3 = *(uint *)(*puVar8 + 0xf);
    uVar1 = 0;
    if (-1 < (int)uVar3) {
      uVar1 = uVar3 >> 1 & 0xff;
    }
    puVar5 = (undefined8 *)
             v8::internal::wasm::GetTypeForMemory
                       (pIVar7,*(ulong *)(uVar6 + 0xb) >> 0x10,
                        (ulong)(uVar3 >> 0x1f) ^ 1 | (ulong)(uVar1 | (uVar3 >> 9) << 8) << 0x20);
    puVar2 = (undefined8 *)(*param_1 + 0x10);
    if (puVar5 != (undefined8 *)0x0) {
      puVar2 = puVar5;
    }
    *(undefined8 *)(*param_1 + 0x18) = *puVar2;
  }
  FUN_01249590(&local_88);
  v8::HandleScope::~HandleScope(aHStack_58);
  return;
}

