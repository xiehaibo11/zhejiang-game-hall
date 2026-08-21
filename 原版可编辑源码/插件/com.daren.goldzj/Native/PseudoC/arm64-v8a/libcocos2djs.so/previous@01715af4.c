
/* v8::internal::compiler::ContextRef::previous(unsigned long*,
   v8::internal::compiler::SerializationPolicy) const */

undefined1  [16] __thiscall
v8::internal::compiler::ContextRef::previous(ContextRef *this,long *param_1,undefined4 param_3)

{
  uint uVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  Isolate *pIVar4;
  ulong *puVar5;
  ContextData *pCVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long local_40;
  undefined8 uStack_38;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar11 = *(ulong *)**(undefined8 **)this;
    if (*param_1 != 0) {
      lVar7 = *param_1 + -1;
      do {
        if (((*(uint *)(uVar11 + 0xb) & 1) == 0) ||
           (uVar8 = uVar11 & 0xffffffff00000000,
           9 < *(ushort *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | *(uint *)(uVar11 + 0xb)) - 1)) -
               0x88)) break;
        uVar1 = *(uint *)(uVar11 + 0xb);
        *param_1 = lVar7;
        lVar7 = lVar7 + -1;
        uVar11 = uVar8 | uVar1;
      } while (lVar7 != -1);
    }
    puVar9 = *(undefined8 **)(this + 8);
    pIVar4 = (Isolate *)*puVar9;
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar11;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar11);
    }
    ObjectRef::ObjectRef((ObjectRef *)&local_40,puVar9,puVar5,0);
  }
  else {
    pCVar6 = (ContextData *)ObjectRef::data((ObjectRef *)this);
    if (*(int *)(pCVar6 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (9 < *(ushort *)(*(long *)(pCVar6 + 0x10) + 0x18) - 0x88) goto LAB_01715c94;
    uVar10 = *(undefined8 *)(this + 8);
    local_40 = ContextData::previous(pCVar6,uVar10,param_1,param_3);
    uStack_38 = uVar10;
    if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(data_) != nullptr");
    }
  }
  puVar9 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_40);
  if (*(int *)(puVar9 + 1) == 2) {
    uVar11 = *(ulong *)*puVar9;
    if ((uVar11 & 1) == 0) goto LAB_01715c94;
    uVar2 = *(ushort *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1));
  }
  else {
    if (*(int *)(puVar9 + 1) == 0) goto LAB_01715c94;
    uVar2 = *(ushort *)(puVar9[2] + 0x18);
  }
  if (uVar2 - 0x88 < 10) {
    auVar3._8_8_ = uStack_38;
    auVar3._0_8_ = local_40;
    return auVar3;
  }
LAB_01715c94:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsContext()");
}

