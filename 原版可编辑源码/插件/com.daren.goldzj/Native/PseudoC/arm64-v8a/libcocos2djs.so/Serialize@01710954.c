
/* v8::internal::compiler::JSBoundFunctionData::Serialize(v8::internal::compiler::JSHeapBroker*) */

void __thiscall
v8::internal::compiler::JSBoundFunctionData::Serialize
          (JSBoundFunctionData *this,JSHeapBroker *param_1)

{
  int iVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  JSFunctionData *this_00;
  FixedArrayData *this_01;
  undefined8 uVar4;
  ulong uVar5;
  ulong *puVar6;
  long local_28;
  
  if (this[0xb0] != (JSBoundFunctionData)0x0) {
    return;
  }
  this[0xb0] = (JSBoundFunctionData)0x1;
  TraceScope::TraceScope((TraceScope *)&local_28,param_1,this,"JSBoundFunctionData::Serialize");
  puVar6 = *(ulong **)this;
  pIVar2 = *(Isolate **)param_1;
  uVar5 = *puVar6 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar6 + 0xb);
  if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar5;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar5);
  }
  this_00 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar3);
  *(JSFunctionData **)(this + 0xb8) = this_00;
  iVar1 = *(int *)(this_00 + 8);
  if (iVar1 != 0) {
    if (iVar1 == 2) {
      uVar5 = **(ulong **)this_00;
      if ((uVar5 & 1) != 0) {
        if (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x438)
        goto LAB_01710bc0;
LAB_01710a34:
        if (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x439)
        goto LAB_01710bc0;
      }
    }
    else if (*(short *)(*(long *)(this_00 + 0x10) + 0x18) == 0x438) {
      if (iVar1 != 1) goto LAB_01710bc0;
      Serialize((JSBoundFunctionData *)this_00,param_1);
    }
    else if (iVar1 == 2) {
      uVar5 = **(ulong **)this_00;
      if ((uVar5 & 1) != 0) goto LAB_01710a34;
    }
    else if (*(short *)(*(long *)(this_00 + 0x10) + 0x18) == 0x439) {
      if (iVar1 != 1) goto LAB_01710bc0;
      JSFunctionData::Serialize(this_00,param_1);
    }
  }
  pIVar2 = *(Isolate **)param_1;
  uVar5 = *puVar6 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar6 + 0x13);
  if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar5;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar5);
  }
  this_01 = (FixedArrayData *)JSHeapBroker::GetOrCreateData(param_1,puVar3);
  if (*(int *)(this_01 + 8) == 1) {
    if (*(ushort *)(*(long *)(this_01 + 0x10) + 0x18) - 0x76 < 0xf) {
      *(FixedArrayData **)(this + 200) = this_01;
      FixedArrayData::SerializeContents(this_01,param_1);
      pIVar2 = *(Isolate **)param_1;
      uVar5 = *puVar6 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar6 + 0xf);
      if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar6 = *(ulong **)(pIVar2 + 0x95a0);
        if (puVar6 == *(ulong **)(pIVar2 + 0x95a8)) {
          puVar6 = (ulong *)HandleScope::Extend(pIVar2);
        }
        *(ulong **)(pIVar2 + 0x95a0) = puVar6 + 1;
        *puVar6 = uVar5;
      }
      else {
        puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar5);
      }
      uVar4 = JSHeapBroker::GetOrCreateData(param_1,puVar6);
      *(undefined8 *)(this + 0xc0) = uVar4;
      *(int *)(local_28 + 0x170) = *(int *)(local_28 + 0x170) + -1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsFixedArray()");
  }
LAB_01710bc0:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
}

