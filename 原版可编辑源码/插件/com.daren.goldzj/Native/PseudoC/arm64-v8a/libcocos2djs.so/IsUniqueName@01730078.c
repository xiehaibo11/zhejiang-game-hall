
/* v8::internal::compiler::NameRef::IsUniqueName() const */

bool __thiscall v8::internal::compiler::NameRef::IsUniqueName(NameRef *this)

{
  ushort uVar1;
  short sVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  puVar4 = (undefined8 *)ObjectRef::data((ObjectRef *)this);
  if (*(int *)(puVar4 + 1) != 0) {
    if (*(int *)(puVar4 + 1) == 2) {
      uVar5 = *(ulong *)*puVar4;
      if ((uVar5 & 1) == 0) goto LAB_017300c0;
      uVar1 = *(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1));
    }
    else {
      uVar1 = *(ushort *)(puVar4[2] + 0x18);
    }
    if (uVar1 < 0x20) {
      return true;
    }
  }
LAB_017300c0:
  puVar4 = (undefined8 *)ObjectRef::data((ObjectRef *)this);
  if (*(int *)(puVar4 + 1) == 0) {
LAB_017300e4:
    bVar3 = false;
  }
  else {
    if (*(int *)(puVar4 + 1) == 2) {
      uVar5 = *(ulong *)*puVar4;
      if ((uVar5 & 1) == 0) goto LAB_017300e4;
      sVar2 = *(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1));
    }
    else {
      sVar2 = *(short *)(puVar4[2] + 0x18);
    }
    bVar3 = sVar2 == 0x40;
  }
  return bVar3;
}

