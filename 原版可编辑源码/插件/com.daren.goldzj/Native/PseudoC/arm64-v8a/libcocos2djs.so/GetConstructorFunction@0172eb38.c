
/* v8::internal::compiler::NativeContextRef::GetConstructorFunction(v8::internal::compiler::MapRef
   const&) const */

void v8::internal::compiler::NativeContextRef::GetConstructorFunction(MapRef *param_1)

{
  int iVar1;
  long lVar2;
  ObjectRef *in_x1;
  undefined1 *in_x8;
  ushort *puVar3;
  undefined1 auVar4 [16];
  
  if (*(int *)(*(undefined8 **)in_x1 + 1) == 2) {
    puVar3 = (ushort *)(*(long *)**(undefined8 **)in_x1 + 7);
  }
  else {
    lVar2 = ObjectRef::data(in_x1);
    if (*(int *)(lVar2 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar2 + 0x10) + 0x18) != 0xa2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
    puVar3 = (ushort *)(lVar2 + 0x18);
  }
  if (0x43 < *puVar3) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","map.IsPrimitiveMap()");
  }
  iVar1 = MapRef::constructor_function_index((MapRef *)in_x1);
  if (iVar1 < 0x7a) {
    if (iVar1 == 0) {
      *in_x8 = 0;
      in_x8[8] = 0;
      return;
    }
    if (iVar1 == 0x1a) {
      auVar4 = bigint_function((NativeContextRef *)param_1);
    }
    else {
      if (iVar1 != 0x1d) {
LAB_0172ec80:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      auVar4 = boolean_function((NativeContextRef *)param_1);
    }
  }
  else if (iVar1 == 0x7a) {
    auVar4 = number_function((NativeContextRef *)param_1);
  }
  else if (iVar1 == 0xc1) {
    auVar4 = string_function((NativeContextRef *)param_1);
  }
  else {
    if (iVar1 != 0xc3) goto LAB_0172ec80;
    auVar4 = symbol_function((NativeContextRef *)param_1);
  }
  *in_x8 = 1;
  *(undefined1 (*) [16])(in_x8 + 8) = auVar4;
  return;
}

