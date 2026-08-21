
/* v8::internal::compiler::MapRef::CanBeDeprecated() const */

bool __thiscall v8::internal::compiler::MapRef::CanBeDeprecated(MapRef *this)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar4 = *(ulong *)**(undefined8 **)this;
    uVar3 = (ulong)(*(uint *)(uVar4 + 0xb) >> 10) & 0x3ff;
    if ((int)uVar3 != 0) {
      uVar5 = 0x1000000000;
      do {
        uVar1 = *(uint *)((uVar5 >> 0x20 | 3) +
                         (uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0x17)));
        if ((((uVar1 >> 9 & 1) == 0) && ((uVar1 >> 7 & 7) != 2)) || ((uVar1 & 6) == 4)) {
          return true;
        }
        uVar3 = uVar3 - 1;
        uVar5 = uVar5 + 0xc00000000;
      } while (uVar3 != 0);
    }
    return false;
  }
  lVar2 = ObjectRef::data((ObjectRef *)this);
  if (*(int *)(lVar2 + 8) != 1) {
LAB_0172df0c:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
  }
  if (*(short *)(*(long *)(lVar2 + 0x10) + 0x18) == 0xa2) {
    if ((*(uint *)(lVar2 + 0x24) & 0xffc00) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","NumberOfOwnDescriptors() > 0");
    }
    lVar2 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar2 + 8) != 1) goto LAB_0172df0c;
    if (*(short *)(*(long *)(lVar2 + 0x10) + 0x18) == 0xa2) {
      return *(char *)(lVar2 + 0x28) != '\0';
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsMap()");
}

