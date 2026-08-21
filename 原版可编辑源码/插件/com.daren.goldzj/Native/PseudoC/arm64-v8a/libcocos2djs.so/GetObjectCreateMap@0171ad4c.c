
/* v8::internal::compiler::JSObjectRef::GetObjectCreateMap() const */

void v8::internal::compiler::JSObjectRef::GetObjectCreateMap(void)

{
  short sVar1;
  ObjectRef *in_x0;
  long lVar2;
  JSObjectData *this;
  undefined8 *puVar3;
  undefined8 *in_x8;
  ulong uVar4;
  long local_30;
  undefined8 uStack_28;
  
  if (*(int *)(*(undefined8 **)in_x0 + 1) == 2) {
    lVar2 = Map::TryGetObjectCreateMap(**(undefined8 **)(in_x0 + 8),**(undefined8 **)in_x0);
    if (lVar2 == 0) {
LAB_0171ae04:
      *in_x8 = 0;
      in_x8[1] = 0;
      in_x8[2] = 0;
      return;
    }
    ObjectRef::ObjectRef((ObjectRef *)&local_30,*(undefined8 *)(in_x0 + 8),lVar2,0);
  }
  else {
    this = (JSObjectData *)ObjectRef::data(in_x0);
    if (*(int *)(this + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(ushort *)(*(long *)(this + 0x10) + 0x18) < 0xaa) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsJSObject()");
    }
    local_30 = JSObjectData::object_create_map(this,*(JSHeapBroker **)(in_x0 + 8));
    if (local_30 == 0) goto LAB_0171ae04;
    uStack_28 = *(undefined8 *)(in_x0 + 8);
  }
  puVar3 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_30);
  if (*(int *)(puVar3 + 1) == 2) {
    uVar4 = *(ulong *)*puVar3;
    if ((uVar4 & 1) == 0) goto LAB_0171ae54;
    sVar1 = *(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1));
  }
  else {
    if (*(int *)(puVar3 + 1) == 0) goto LAB_0171ae54;
    sVar1 = *(short *)(puVar3[2] + 0x18);
  }
  if (sVar1 == 0xa2) {
    *(undefined1 *)in_x8 = 1;
    in_x8[2] = uStack_28;
    in_x8[1] = local_30;
    return;
  }
LAB_0171ae54:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsMap()");
}

