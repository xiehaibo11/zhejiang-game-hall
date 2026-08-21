
/* v8::internal::compiler::JSFunctionData::Serialize(v8::internal::compiler::JSHeapBroker*) */

void __thiscall
v8::internal::compiler::JSFunctionData::Serialize(JSFunctionData *this,JSHeapBroker *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  long lVar6;
  undefined8 uVar7;
  MapData *this_00;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong local_48;
  long local_28;
  
  if (this[0xb4] != (JSFunctionData)0x0) {
    return;
  }
  this[0xb4] = (JSFunctionData)0x1;
  TraceScope::TraceScope((TraceScope *)&local_28,param_1,this,"JSFunctionData::Serialize");
  puVar10 = *(ulong **)this;
  pIVar4 = *(Isolate **)param_1;
  uVar9 = *puVar10 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar10 + 0xf);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar9;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar9);
  }
  lVar6 = JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(lVar6 + 8) == 1) {
    if (9 < *(ushort *)(*(long *)(lVar6 + 0x10) + 0x18) - 0x88) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsContext()");
    }
    *(long *)(this + 0xb8) = lVar6;
    uVar9 = *puVar10 & 0xffffffff00000000;
    pIVar4 = *(Isolate **)param_1;
    uVar9 = uVar9 | *(uint *)((uVar9 | *(uint *)((uVar9 | *(uint *)(*puVar10 + 0xf)) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar9;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar9);
    }
    lVar6 = JSHeapBroker::GetOrCreateData(param_1,puVar5);
    if (*(int *)(lVar6 + 8) == 1) {
      if (*(short *)(*(long *)(lVar6 + 0x10) + 0x18) != 0x8f) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsNativeContext()");
      }
      *(long *)(this + 0xc0) = lVar6;
      pIVar4 = *(Isolate **)param_1;
      uVar9 = *puVar10 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar10 + 0xb);
      if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)(pIVar4 + 0x95a0);
        if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
          puVar5 = (ulong *)HandleScope::Extend(pIVar4);
        }
        *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
        *puVar5 = uVar9;
      }
      else {
        puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar9);
      }
      lVar6 = JSHeapBroker::GetOrCreateData(param_1,puVar5);
      if (*(int *)(lVar6 + 8) == 1) {
        if (*(short *)(*(long *)(lVar6 + 0x10) + 0x18) != 0xa6) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IsSharedFunctionInfo()");
        }
        *(long *)(this + 0xd8) = lVar6;
        if (this[0xb0] == (JSFunctionData)0x0) {
          lVar6 = 0;
        }
        else {
          pIVar4 = *(Isolate **)param_1;
          uVar9 = *puVar10 & 0xffffffff00000000;
          uVar9 = uVar9 | *(uint *)((uVar9 | *(uint *)(*puVar10 + 0x13)) + 3);
          if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar5 = *(ulong **)(pIVar4 + 0x95a0);
            if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
              puVar5 = (ulong *)HandleScope::Extend(pIVar4);
            }
            *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
            *puVar5 = uVar9;
          }
          else {
            puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar9);
          }
          lVar6 = JSHeapBroker::GetOrCreateData(param_1,puVar5);
          if (*(int *)(lVar6 + 8) != 1) goto LAB_0170e9b0;
          if (*(short *)(*(long *)(lVar6 + 0x10) + 0x18) != 0x9f) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","IsFeedbackVector()");
          }
        }
        *(long *)(this + 0xe0) = lVar6;
        if (this[0xb1] == (JSFunctionData)0x0) {
          lVar6 = 0;
        }
        else {
          pIVar4 = *(Isolate **)param_1;
          uVar9 = *puVar10 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar10 + 0x1b);
          if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar5 = *(ulong **)(pIVar4 + 0x95a0);
            if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
              puVar5 = (ulong *)HandleScope::Extend(pIVar4);
            }
            *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
            *puVar5 = uVar9;
          }
          else {
            puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar9);
          }
          lVar6 = JSHeapBroker::GetOrCreateData(param_1,puVar5);
          if (*(int *)(lVar6 + 8) != 1) goto LAB_0170e9b0;
          if (*(short *)(*(long *)(lVar6 + 0x10) + 0x18) != 0xa2) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","IsMap()");
          }
        }
        *(long *)(this + 200) = lVar6;
        if (this[0xb2] == (JSFunctionData)0x0) {
          *(undefined8 *)(this + 0xd0) = 0;
        }
        else {
          uVar8 = *puVar10;
          uVar9 = uVar8 & 0xffffffff00000000;
          if ((*(byte *)((uVar9 | 9) + (ulong)*(uint *)(uVar8 - 1)) & 1) == 0) {
            uVar8 = uVar9 | *(uint *)(uVar8 + 0x1b);
            if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0xa2) {
              uVar8 = uVar9 | *(uint *)(uVar8 + 0xf);
            }
          }
          else {
            uVar2 = *(uint *)((uVar9 | 0x13) + (ulong)*(uint *)(uVar8 - 1));
            uVar8 = uVar9 | uVar2;
            if ((uVar2 & 1) != 0) {
              do {
                if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0xa2) break;
                puVar1 = (uint *)(uVar8 + 0x13);
                uVar8 = uVar9 | *puVar1;
              } while ((*puVar1 & 1) != 0);
            }
          }
          pIVar4 = *(Isolate **)param_1;
          if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar5 = *(ulong **)(pIVar4 + 0x95a0);
            if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
              puVar5 = (ulong *)HandleScope::Extend(pIVar4);
            }
            *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
            *puVar5 = uVar8;
          }
          else {
            puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar8);
          }
          uVar7 = JSHeapBroker::GetOrCreateData(param_1,puVar5);
          lVar6 = *(long *)(this + 200);
          *(undefined8 *)(this + 0xd0) = uVar7;
        }
        if (lVar6 != 0) {
          local_48 = *puVar10;
          uVar3 = JSFunction::ComputeInstanceSizeWithMinSlack
                            ((JSFunction *)&local_48,*(Isolate **)param_1);
          this_00 = *(MapData **)(this + 200);
          *(undefined4 *)(this + 0xe8) = uVar3;
          if (*(short *)(this_00 + 0x18) == 0x423) {
            MapData::SerializeElementsKindGeneralizations(this_00,param_1);
            this_00 = *(MapData **)(this + 200);
          }
          MapData::SerializeConstructor(this_00,param_1);
          MapData::SerializePrototype(*(MapData **)(this + 200),param_1);
        }
        *(int *)(local_28 + 0x170) = *(int *)(local_28 + 0x170) + -1;
        return;
      }
    }
  }
LAB_0170e9b0:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
}

