
/* v8::internal::compiler::SharedFunctionInfoData::SharedFunctionInfoData(v8::internal::compiler::JSHeapBroker*,
   v8::internal::compiler::ObjectData**, v8::internal::Handle<v8::internal::SharedFunctionInfo>) */

void __thiscall
v8::internal::compiler::SharedFunctionInfoData::SharedFunctionInfoData
          (SharedFunctionInfoData *this,JSHeapBroker *param_1,undefined8 param_3,ulong *param_4)

{
  uint *puVar1;
  SharedFunctionInfoData SVar2;
  byte bVar3;
  undefined4 uVar4;
  Isolate *pIVar5;
  ulong *puVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong local_28;
  
  HeapObjectData::HeapObjectData();
  if ((*(uint *)(*param_4 + 3) & 1) == 0) {
    iVar8 = *(int *)(*param_4 + 3) >> 1;
  }
  else {
    iVar8 = -1;
  }
  *(int *)(this + 0x18) = iVar8;
  uVar12 = *(uint *)(*param_4 + 7);
  pIVar5 = (Isolate *)(*param_4 & 0xffffffff00000000);
  if (((uVar12 & 1) == 0) ||
     (local_28 = (ulong)pIVar5 | (ulong)uVar12,
     *(short *)(((ulong)pIVar5 | 7) + (ulong)*(uint *)(local_28 - 1)) != 0x83)) {
    local_28 = ScopeInfo::Empty(pIVar5);
  }
  uVar4 = ScopeInfo::ContextHeaderLength((ScopeInfo *)&local_28);
  *(undefined4 *)(this + 0x1c) = uVar4;
  puVar1 = (uint *)(*param_4 + 3);
  uVar12 = *puVar1;
  uVar9 = *param_4 & 0xffffffff00000000;
  if ((((uVar12 & 1) == 0) ||
      (*(short *)((uVar9 | 7) + (ulong)*(uint *)((uVar9 | uVar12) - 1)) != 0x86)) &&
     ((uVar12 = *puVar1, (uVar12 & 1) == 0 ||
      (*(short *)((uVar9 | 7) + (ulong)*(uint *)((uVar9 | uVar12) - 1)) != 0x61)))) {
    lVar7 = 0;
  }
  else {
    uVar9 = *param_4;
    uVar11 = uVar9 & 0xffffffff00000000;
    uVar14 = uVar11 | *(uint *)(uVar9 + 0xf);
    uVar13 = uVar11 | 7;
    if ((*(short *)(uVar13 + *(uint *)(uVar14 - 1)) == 0x5b) &&
       (*(short *)(uVar13 + *(uint *)((uVar11 | *(uint *)(uVar14 + 0x13)) - 1)) == 0x86)) {
      uVar12 = *(uint *)(uVar14 + 0xf);
    }
    else {
      uVar12 = *(uint *)(uVar9 + 3);
      if (((uVar12 & 1) == 0) || (*(short *)(uVar13 + *(uint *)((uVar11 | uVar12) - 1)) != 0x86)) {
        uVar12 = *(uint *)((uVar11 | *(uint *)(uVar9 + 3)) + 3);
      }
      else {
        uVar12 = *(uint *)(uVar9 + 3);
      }
    }
    pIVar5 = *(Isolate **)param_1;
    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar6 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar11 | uVar12;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar11 | uVar12);
    }
    lVar7 = JSHeapBroker::GetOrCreateData(param_1,puVar6);
    if (*(int *)(lVar7 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar7 + 0x10) + 0x18) != 0x86) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsBytecodeArray()");
    }
  }
  *(long *)(this + 0x20) = lVar7;
  *(uint *)(this + 0x28) = (uint)*(ushort *)(*param_4 + 0x15);
  this[0x2c] = (SharedFunctionInfoData)((byte)(*(uint *)(*param_4 + 0x1b) >> 0xb) & 1);
  *(uint *)(this + 0x30) = (*(uint *)(*param_4 + 0x1b) >> 0xf & 0x1f) + 0xa9;
  this[0x34] = (SharedFunctionInfoData)((byte)*(undefined4 *)(*param_4 + 0x1b) & 0x1f);
  this[0x35] = (SharedFunctionInfoData)((byte)(*(uint *)(*param_4 + 0x1b) >> 6) & 1);
  this[0x36] = (SharedFunctionInfoData)((byte)(*(uint *)(*param_4 + 0x1b) >> 5) & 1);
  local_28 = *param_4;
  bVar3 = SharedFunctionInfo::HasBreakInfo((SharedFunctionInfo *)&local_28);
  this[0x37] = (SharedFunctionInfoData)(bVar3 & 1);
  this[0x38] = (SharedFunctionInfoData)(~(byte)*(undefined4 *)(*param_4 + 3) & 1);
  this[0x39] = (SharedFunctionInfoData)((byte)((uint)*(undefined4 *)(*param_4 + 0x1b) >> 0x19) & 1);
  puVar1 = (uint *)(*param_4 + 3);
  uVar12 = *puVar1;
  uVar9 = *param_4 & 0xffffffff00000000;
  if (((uVar12 & 1) == 0) ||
     (*(short *)((uVar9 | 7) + (ulong)*(uint *)((uVar9 | uVar12) - 1)) != 0x86)) {
    uVar12 = *puVar1;
    if ((uVar12 & 1) == 0) {
      SVar2 = (SharedFunctionInfoData)0x0;
    }
    else {
      SVar2 = (SharedFunctionInfoData)
              (*(short *)((uVar9 | 7) + (ulong)*(uint *)((uVar9 | uVar12) - 1)) == 0x61);
    }
  }
  else {
    SVar2 = (SharedFunctionInfoData)0x1;
  }
  this[0x3a] = SVar2;
  this[0x3b] = (SharedFunctionInfoData)((byte)((uint)*(undefined4 *)(*param_4 + 0x1b) >> 0x1e) & 1);
  local_28 = *param_4;
  uVar4 = SharedFunctionInfo::GetInlineability((SharedFunctionInfo *)&local_28);
  *(undefined4 *)(this + 0x3c) = uVar4;
  local_28 = *param_4;
  uVar4 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_28);
  *(undefined4 *)(this + 0x40) = uVar4;
  uVar12 = *(uint *)(*param_4 + 3);
  if (uVar12 == 0x84) {
    SVar2 = (SharedFunctionInfoData)0x0;
  }
  else if ((uVar12 & 1) == 0) {
    SVar2 = (SharedFunctionInfoData)0x1;
  }
  else {
    uVar9 = *param_4 & 0xffffffff00000000;
    SVar2 = (SharedFunctionInfoData)
            (1 < *(ushort *)((uVar9 | 7) + (ulong)*(uint *)((uVar9 | uVar12) - 1)) - 0x95);
  }
  this[0x44] = SVar2;
  uVar9 = *param_4 & 0xffffffff00000000;
  local_28 = uVar9 | *(uint *)(*param_4 + 0xf);
  if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(local_28 - 1)) == 0x5b) {
    local_28 = uVar9 | *(uint *)(local_28 + 0xb);
  }
  if (((local_28 & 1) == 0) || ((int)local_28 != *(int *)((local_28 & 0xffffffff00000000) + 0xa0)))
  {
    bVar3 = Script::IsUserJavaScript((Script *)&local_28);
    SVar2 = (SharedFunctionInfoData)(bVar3 & 1);
  }
  else {
    SVar2 = (SharedFunctionInfoData)0x0;
  }
  this[0x45] = SVar2;
  *(undefined8 *)(this + 0x48) = 0;
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(SharedFunctionInfoData **)(this + 0x50) = this + 0x58;
  *(undefined8 *)(this + 0x60) = uVar10;
  return;
}

