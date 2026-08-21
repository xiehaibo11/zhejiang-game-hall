
/* v8::internal::compiler::FunctionTemplateInfoRef::call_code() const */

void v8::internal::compiler::FunctionTemplateInfoRef::call_code(void)

{
  short sVar1;
  ObjectRef *in_x0;
  Isolate *pIVar2;
  ulong *puVar3;
  long lVar4;
  undefined1 *in_x8;
  ulong uVar5;
  undefined8 *puVar6;
  long local_40;
  undefined8 uStack_38;
  
  if (*(int *)(*(undefined8 **)in_x0 + 1) == 2) {
    puVar6 = *(undefined8 **)(in_x0 + 8);
    uVar5 = *(ulong *)**(undefined8 **)in_x0;
    pIVar2 = (Isolate *)*puVar6;
    uVar5 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0x17);
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
    ObjectRef::ObjectRef((ObjectRef *)&local_40,puVar6,puVar3,0);
  }
  else {
    lVar4 = ObjectRef::data(in_x0);
    if (*(int *)(lVar4 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar4 + 0x10) + 0x18) != 0x4e) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsFunctionTemplateInfo()");
    }
    local_40 = *(long *)(lVar4 + 0x20);
    if (local_40 == 0) {
      *in_x8 = 0;
      in_x8[8] = 0;
      return;
    }
    uStack_38 = *(undefined8 *)(in_x0 + 8);
  }
  puVar6 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_40);
  if (*(int *)(puVar6 + 1) == 2) {
    uVar5 = *(ulong *)*puVar6;
    if ((uVar5 & 1) == 0) goto LAB_0172c064;
    sVar1 = *(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1));
  }
  else {
    if (*(int *)(puVar6 + 1) == 0) goto LAB_0172c064;
    sVar1 = *(short *)(puVar6[2] + 0x18);
  }
  if (sVar1 == 0x59) {
    *in_x8 = 1;
    *(undefined8 *)(in_x8 + 0x10) = uStack_38;
    *(long *)(in_x8 + 8) = local_40;
    return;
  }
LAB_0172c064:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsCallHandlerInfo()");
}

