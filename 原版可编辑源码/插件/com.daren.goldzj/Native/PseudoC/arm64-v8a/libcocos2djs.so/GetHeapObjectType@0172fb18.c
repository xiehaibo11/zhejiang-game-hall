
/* v8::internal::compiler::HeapObjectRef::GetHeapObjectType() const */

ulong __thiscall v8::internal::compiler::HeapObjectRef::GetHeapObjectType(HeapObjectRef *this)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  byte *pbVar5;
  ushort *puVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  MapRef local_50 [16];
  ObjectRef local_40 [16];
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar7 = *(ulong *)**(undefined8 **)this;
    uVar1 = *(uint *)(uVar7 - 1);
    uVar7 = uVar7 & 0xffffffff00000000 | (ulong)uVar1;
    bVar2 = *(byte *)(uVar7 + 9);
    uVar4 = *(ushort *)(uVar7 + 7);
    uVar10 = (ulong)uVar4;
    uVar11 = (ulong)(bVar2 & 2 | bVar2 >> 4 & 1);
    if (uVar4 == 0x43) {
      lVar8 = **(long **)(this + 8);
      if (uVar1 == *(uint *)(lVar8 + 0x358)) {
        uVar7 = 2;
        uVar10 = 0x43;
      }
      else if (uVar1 == *(uint *)(lVar8 + 0x368)) {
        uVar7 = 3;
        uVar10 = 0x43;
      }
      else if (uVar1 == *(uint *)(lVar8 + 0x370)) {
        uVar7 = 1;
        uVar10 = 0x43;
      }
      else if (uVar1 == *(uint *)(lVar8 + 0x360)) {
        uVar7 = 4;
        uVar10 = 0x43;
      }
      else {
        uVar10 = 0x43;
        uVar9 = 5;
        if (uVar1 != *(uint *)(lVar8 + 0x378)) {
          uVar9 = 6;
        }
        uVar7 = (ulong)uVar9;
      }
    }
    else {
      uVar7 = 0;
    }
  }
  else {
    local_40 = (ObjectRef  [16])map(this);
    if (*(int *)(local_40._0_8_ + 1) == 2) {
      pbVar5 = (byte *)(*(long *)*local_40._0_8_ + 9);
    }
    else {
      lVar8 = ObjectRef::data(local_40);
      if (*(int *)(lVar8 + 8) != 1) goto LAB_0172fd34;
      if (*(short *)(*(long *)(lVar8 + 0x10) + 0x18) != 0xa2) goto LAB_0172fd48;
      pbVar5 = (byte *)(lVar8 + 0x20);
    }
    bVar2 = *pbVar5;
    auVar12 = map(this);
    local_40 = (ObjectRef  [16])auVar12;
    if (*(int *)(auVar12._0_8_ + 1) == 2) {
      pbVar5 = (byte *)(*(long *)*auVar12._0_8_ + 9);
    }
    else {
      lVar8 = ObjectRef::data(local_40);
      if (*(int *)(lVar8 + 8) != 1) goto LAB_0172fd34;
      if (*(short *)(*(long *)(lVar8 + 0x10) + 0x18) != 0xa2) goto LAB_0172fd48;
      pbVar5 = (byte *)(lVar8 + 0x20);
    }
    bVar3 = *pbVar5;
    auVar12 = map(this);
    local_40 = (ObjectRef  [16])auVar12;
    if (*(int *)(auVar12._0_8_ + 1) == 2) {
      puVar6 = (ushort *)(*(long *)*auVar12._0_8_ + 7);
    }
    else {
      lVar8 = ObjectRef::data(local_40);
      if (*(int *)(lVar8 + 8) != 1) {
LAB_0172fd34:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
      }
      if (*(short *)(*(long *)(lVar8 + 0x10) + 0x18) != 0xa2) {
LAB_0172fd48:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsMap()");
      }
      puVar6 = (ushort *)(lVar8 + 0x18);
    }
    uVar10 = (ulong)*puVar6;
    uVar11 = (ulong)(bVar3 & 2 | bVar2 >> 4 & 1);
    local_50 = (MapRef  [16])map(this);
    uVar7 = MapRef::oddball_type(local_50);
  }
  return uVar10 | (uVar7 & 0xff) << 0x10 | uVar11 << 0x20;
}

