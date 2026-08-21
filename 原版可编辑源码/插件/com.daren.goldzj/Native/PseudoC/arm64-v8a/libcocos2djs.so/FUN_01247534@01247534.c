
void FUN_01247534(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong *puVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  Isolate *pIVar8;
  double dVar9;
  Isolate *local_68;
  char *pcStack_60;
  int local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  HandleScope aHStack_38 [24];
  
  pIVar8 = *(Isolate **)(*param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_38,pIVar8);
  local_58 = 0;
  local_48 = 0;
  uStack_40 = 0;
  pcStack_60 = "WebAssembly.Table.type()";
  local_50 = 0;
  if ((int)param_1[2] < 1) {
    uVar6 = *(ulong *)(*(long *)(*param_1 + 8) + 0xa0);
  }
  else {
    uVar6 = *(ulong *)param_1[1];
  }
  local_68 = pIVar8;
  if (((uVar6 & 1) == 0) ||
     (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x437)) {
    v8::internal::wasm::ErrorThrower::TypeError
              ((char *)&local_68,"Argument 0 must be a WebAssembly.Table");
    if (local_58 == 0) {
LAB_012475e8:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    goto LAB_01247694;
  }
  if ((int)param_1[2] < 1) {
    puVar4 = (ulong *)(*(long *)(*param_1 + 8) + 0xa0);
  }
  else {
    puVar4 = (ulong *)param_1[1];
  }
  if (puVar4 == (ulong *)0x0) goto LAB_012475e8;
  uVar6 = *puVar4;
  uVar5 = *(uint *)(uVar6 + 0x13);
  if ((uVar5 & 1) == 0) {
    dVar9 = (double)((int)uVar5 >> 1);
LAB_0124764c:
    uVar5 = (uint)(long)dVar9 & 0xffffff00;
    uVar7 = (uint)(long)dVar9 & 0xff;
    uVar3 = 1;
  }
  else {
    if (uVar5 != *(uint *)((uVar6 & 0xffffffff00000000) + 0xa0)) {
      dVar9 = *(double *)((uVar6 & 0xffffffff00000000 | (ulong)uVar5) + 3);
      goto LAB_0124764c;
    }
    uVar3 = 0;
    uVar7 = 0;
    uVar5 = 0;
  }
  puVar2 = (undefined8 *)
           v8::internal::wasm::GetTypeForTable
                     (pIVar8,*(uint *)(uVar6 + 0x1b) >> 1,*(int *)(uVar6 + 0xf) >> 1,
                      uVar3 | (ulong)(uVar5 | uVar7) << 0x20);
  puVar1 = (undefined8 *)(*param_1 + 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
  }
  *(undefined8 *)(*param_1 + 0x18) = *puVar1;
LAB_01247694:
  FUN_01249590(&local_68);
  v8::HandleScope::~HandleScope(aHStack_38);
  return;
}

