
/* v8::internal::compiler::JSGlobalObjectRef::GetPropertyCell(v8::internal::compiler::NameRef
   const&, v8::internal::compiler::SerializationPolicy) const */

void v8::internal::compiler::JSGlobalObjectRef::GetPropertyCell
               (undefined1 *param_1_00,ObjectRef *param_1,ObjectRef *param_3,undefined4 param_4)

{
  short sVar1;
  JSGlobalObjectData *pJVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long local_50;
  undefined8 uStack_48;
  
  if (*(int *)(*(long *)param_1 + 8) == 2) {
    FUN_01712e9c(param_1_00,*(undefined8 *)(param_1 + 8),**(undefined8 **)param_3);
    return;
  }
  pJVar2 = (JSGlobalObjectData *)ObjectRef::data(param_1);
  if (*(int *)(pJVar2 + 8) != 1) {
LAB_01735f4c:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
  }
  if (*(short *)(*(long *)(pJVar2 + 0x10) + 0x18) != 0xaa) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsJSGlobalObject()");
  }
  uVar6 = *(undefined8 *)(param_1 + 8);
  lVar3 = ObjectRef::data(param_3);
  if (*(int *)(lVar3 + 8) != 1) goto LAB_01735f4c;
  if (0x40 < *(ushort *)(*(long *)(lVar3 + 0x10) + 0x18)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsName()",lVar3);
  }
  local_50 = JSGlobalObjectData::GetPropertyCell(pJVar2,uVar6,lVar3,param_4);
  if (local_50 == 0) {
    *param_1_00 = 0;
    param_1_00[8] = 0;
  }
  else {
    uStack_48 = *(undefined8 *)(param_1 + 8);
    puVar4 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_50);
    if (*(int *)(puVar4 + 1) == 2) {
      uVar5 = *(ulong *)*puVar4;
      if ((uVar5 & 1) == 0) goto LAB_01735f60;
      sVar1 = *(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1));
    }
    else {
      if (*(int *)(puVar4 + 1) == 0) goto LAB_01735f60;
      sVar1 = *(short *)(puVar4[2] + 0x18);
    }
    if (sVar1 != 0xa5) {
LAB_01735f60:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsPropertyCell()");
    }
    *param_1_00 = 1;
    *(undefined8 *)(param_1_00 + 0x10) = uStack_48;
    *(long *)(param_1_00 + 8) = local_50;
  }
  return;
}

