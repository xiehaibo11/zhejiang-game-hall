
/* v8::internal::compiler::JSObjectRef::RawFastDoublePropertyAsBitsAt(v8::internal::FieldIndex)
   const */

undefined8 __thiscall
v8::internal::compiler::JSObjectRef::RawFastDoublePropertyAsBitsAt(JSObjectRef *this,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    puVar3 = (undefined8 *)((param_2 & 0x1fff) + *(long *)**(undefined8 **)this + -1);
  }
  else {
    lVar2 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar2 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(ushort *)(*(long *)(lVar2 + 0x10) + 0x18) < 0xaa) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsJSObject()");
    }
    if (((uint)param_2 >> 0xd & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","index.is_inobject()");
    }
    lVar1 = *(long *)(lVar2 + 0x28);
    uVar4 = (ulong)(int)(((uint)param_2 >> 2 & 0x7ff) - ((uint)(param_2 >> 0x1c) & 0x1f));
    if ((ulong)(*(long *)(lVar2 + 0x30) - lVar1 >> 4) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","static_cast<size_t>(property_index) < inobject_fields_.size()");
    }
    if (*(long *)(lVar1 + uVar4 * 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsDouble()");
    }
    puVar3 = (undefined8 *)(lVar1 + uVar4 * 0x10 + 8);
  }
  return *puVar3;
}

