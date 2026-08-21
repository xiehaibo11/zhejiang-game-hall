
/* v8::internal::compiler::SharedFunctionInfoRef::function_template_info() const */

void v8::internal::compiler::SharedFunctionInfoRef::function_template_info(void)

{
  uint uVar1;
  undefined8 uVar2;
  short sVar3;
  ObjectRef *in_x0;
  Isolate *pIVar4;
  ulong *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 *in_x8;
  ulong uVar8;
  long local_40;
  undefined8 uStack_38;
  
  if (*(int *)(*(undefined8 **)in_x0 + 1) == 2) {
    uVar8 = *(ulong *)**(undefined8 **)in_x0;
    uVar1 = *(uint *)(uVar8 + 3);
    if (((uVar1 & 1) == 0) ||
       (uVar8 = uVar8 & 0xffffffff00000000,
       *(short *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar1) - 1)) != 0x4e)) {
LAB_01735290:
      *in_x8 = 0;
      in_x8[8] = 0;
      return;
    }
    uVar2 = *(undefined8 *)(in_x0 + 8);
    uVar8 = *(ulong *)**(undefined8 **)in_x0 & 0xffffffff00000000 |
            (ulong)*(uint *)(*(ulong *)**(undefined8 **)in_x0 + 3);
    pIVar4 = (Isolate *)**(undefined8 **)(in_x0 + 8);
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
    ObjectRef::ObjectRef((ObjectRef *)&local_40,uVar2,puVar5,0);
  }
  else {
    lVar6 = ObjectRef::data(in_x0);
    if (*(int *)(lVar6 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar6 + 0x10) + 0x18) != 0xa6) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsSharedFunctionInfo()");
    }
    local_40 = *(long *)(lVar6 + 0x48);
    if (local_40 == 0) goto LAB_01735290;
    uStack_38 = *(undefined8 *)(in_x0 + 8);
  }
  puVar7 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_40);
  if (*(int *)(puVar7 + 1) == 2) {
    uVar8 = *(ulong *)*puVar7;
    if ((uVar8 & 1) == 0) goto LAB_01735348;
    sVar3 = *(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1));
  }
  else {
    if (*(int *)(puVar7 + 1) == 0) goto LAB_01735348;
    sVar3 = *(short *)(puVar7[2] + 0x18);
  }
  if (sVar3 == 0x4e) {
    *in_x8 = 1;
    *(undefined8 *)(in_x8 + 0x10) = uStack_38;
    *(long *)(in_x8 + 8) = local_40;
    return;
  }
LAB_01735348:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsFunctionTemplateInfo()");
}

