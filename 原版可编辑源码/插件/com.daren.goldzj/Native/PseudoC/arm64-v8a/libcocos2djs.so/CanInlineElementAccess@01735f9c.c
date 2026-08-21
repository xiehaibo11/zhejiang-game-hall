
/* v8::internal::compiler::CanInlineElementAccess(v8::internal::compiler::MapRef const&) */

bool v8::internal::compiler::CanInlineElementAccess(MapRef *param_1)

{
  byte bVar1;
  long lVar2;
  ushort *puVar3;
  byte *pbVar4;
  
  if (*(int *)(*(undefined8 **)param_1 + 1) == 2) {
    puVar3 = (ushort *)(*(long *)**(undefined8 **)param_1 + 7);
  }
  else {
    lVar2 = ObjectRef::data((ObjectRef *)param_1);
    if (*(int *)(lVar2 + 8) != 1) goto LAB_01736140;
    if (*(short *)(*(long *)(lVar2 + 0x10) + 0x18) != 0xa2) goto LAB_01736154;
    puVar3 = (ushort *)(lVar2 + 0x18);
  }
  if (0xa9 < *puVar3) {
    if (*(int *)(*(undefined8 **)param_1 + 1) == 2) {
      bVar1 = *(byte *)(*(long *)**(undefined8 **)param_1 + 9);
    }
    else {
      lVar2 = ObjectRef::data((ObjectRef *)param_1);
      if (*(int *)(lVar2 + 8) != 1) goto LAB_01736140;
      if (*(short *)(*(long *)(lVar2 + 0x10) + 0x18) != 0xa2) goto LAB_01736154;
      bVar1 = *(byte *)(lVar2 + 0x20);
    }
    if ((bVar1 >> 5 & 1) != 0) {
      return false;
    }
    if (*(int *)(*(undefined8 **)param_1 + 1) == 2) {
      bVar1 = *(byte *)(*(long *)**(undefined8 **)param_1 + 9);
    }
    else {
      lVar2 = ObjectRef::data((ObjectRef *)param_1);
      if (*(int *)(lVar2 + 8) != 1) goto LAB_01736140;
      if (*(short *)(*(long *)(lVar2 + 0x10) + 0x18) != 0xa2) goto LAB_01736154;
      bVar1 = *(byte *)(lVar2 + 0x20);
    }
    if ((bVar1 >> 3 & 1) == 0) {
      if (*(int *)(*(undefined8 **)param_1 + 1) == 2) {
        pbVar4 = (byte *)(*(long *)**(undefined8 **)param_1 + 10);
      }
      else {
        lVar2 = ObjectRef::data((ObjectRef *)param_1);
        if (*(int *)(lVar2 + 8) != 1) {
LAB_01736140:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
        }
        if (*(short *)(*(long *)(lVar2 + 0x10) + 0x18) != 0xa2) {
LAB_01736154:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IsMap()");
        }
        pbVar4 = (byte *)(lVar2 + 0x21);
      }
      bVar1 = *pbVar4;
      if (0x2f < bVar1) {
        return (bVar1 & 0xf0) != 0xd0 && (byte)((bVar1 >> 3) - 0x11) < 0xb;
      }
      return true;
    }
  }
  return false;
}

