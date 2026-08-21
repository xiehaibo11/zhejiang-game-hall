
/* v8::internal::compiler::MapRef::oddball_type() const */

undefined4 __thiscall v8::internal::compiler::MapRef::oddball_type(MapRef *this)

{
  short sVar1;
  undefined8 *puVar2;
  short *psVar3;
  ulong uVar4;
  long lVar5;
  long local_30 [2];
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    psVar3 = (short *)(*(long *)**(undefined8 **)this + 7);
  }
  else {
    lVar5 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar5 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar5 + 0x10) + 0x18) != 0xa2) goto LAB_0172229c;
    psVar3 = (short *)(lVar5 + 0x18);
  }
  if (*psVar3 != 0x43) {
    return 0;
  }
  lVar5 = **(long **)(this + 8);
  ObjectRef::ObjectRef((ObjectRef *)local_30,*(long **)(this + 8),lVar5 + 0x358,0);
  puVar2 = (undefined8 *)ObjectRef::data((ObjectRef *)local_30);
  if (*(int *)(puVar2 + 1) == 2) {
    uVar4 = *(ulong *)*puVar2;
    if ((uVar4 & 1) == 0) goto LAB_0172229c;
    sVar1 = *(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1));
  }
  else {
    if (*(int *)(puVar2 + 1) == 0) goto LAB_0172229c;
    sVar1 = *(short *)(puVar2[2] + 0x18);
  }
  if (sVar1 == 0xa2) {
    if (*(long *)this == local_30[0]) {
      return 2;
    }
    ObjectRef::ObjectRef((ObjectRef *)local_30,*(undefined8 *)(this + 8),lVar5 + 0x368,0);
    puVar2 = (undefined8 *)ObjectRef::data((ObjectRef *)local_30);
    if (*(int *)(puVar2 + 1) == 2) {
      uVar4 = *(ulong *)*puVar2;
      if ((uVar4 & 1) == 0) goto LAB_0172229c;
      sVar1 = *(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1));
    }
    else {
      if (*(int *)(puVar2 + 1) == 0) goto LAB_0172229c;
      sVar1 = *(short *)(puVar2[2] + 0x18);
    }
    if (sVar1 == 0xa2) {
      if (*(long *)this == local_30[0]) {
        return 3;
      }
      ObjectRef::ObjectRef((ObjectRef *)local_30,*(undefined8 *)(this + 8),lVar5 + 0x370,0);
      puVar2 = (undefined8 *)ObjectRef::data((ObjectRef *)local_30);
      if (*(int *)(puVar2 + 1) == 2) {
        uVar4 = *(ulong *)*puVar2;
        if ((uVar4 & 1) == 0) goto LAB_0172229c;
        sVar1 = *(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1));
      }
      else {
        if (*(int *)(puVar2 + 1) == 0) goto LAB_0172229c;
        sVar1 = *(short *)(puVar2[2] + 0x18);
      }
      if (sVar1 == 0xa2) {
        if (*(long *)this == local_30[0]) {
          return 1;
        }
        ObjectRef::ObjectRef((ObjectRef *)local_30,*(undefined8 *)(this + 8),lVar5 + 0x360,0);
        puVar2 = (undefined8 *)ObjectRef::data((ObjectRef *)local_30);
        if (*(int *)(puVar2 + 1) == 2) {
          uVar4 = *(ulong *)*puVar2;
          if ((uVar4 & 1) == 0) goto LAB_0172229c;
          sVar1 = *(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1));
        }
        else {
          if (*(int *)(puVar2 + 1) == 0) goto LAB_0172229c;
          sVar1 = *(short *)(puVar2[2] + 0x18);
        }
        if (sVar1 == 0xa2) {
          if (*(long *)this == local_30[0]) {
            return 4;
          }
          ObjectRef::ObjectRef((ObjectRef *)local_30,*(undefined8 *)(this + 8),lVar5 + 0x378,0);
          puVar2 = (undefined8 *)ObjectRef::data((ObjectRef *)local_30);
          if (*(int *)(puVar2 + 1) == 2) {
            uVar4 = *(ulong *)*puVar2;
            if ((uVar4 & 1) == 0) goto LAB_0172229c;
            sVar1 = *(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1));
          }
          else {
            if (*(int *)(puVar2 + 1) == 0) goto LAB_0172229c;
            sVar1 = *(short *)(puVar2[2] + 0x18);
          }
          if (sVar1 == 0xa2) {
            if (*(long *)this == local_30[0]) {
              return 5;
            }
            return 6;
          }
        }
      }
    }
  }
LAB_0172229c:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsMap()");
}

