
/* v8::internal::compiler::MapRef::IsFixedCowArrayMap() const */

bool __thiscall v8::internal::compiler::MapRef::IsFixedCowArrayMap(MapRef *this)

{
  short sVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long local_30 [2];
  
  ObjectRef::ObjectRef((ObjectRef *)local_30,*(long **)(this + 8),**(long **)(this + 8) + 0xe8,0);
  puVar2 = (undefined8 *)ObjectRef::data((ObjectRef *)local_30);
  if (*(int *)(puVar2 + 1) == 2) {
    uVar3 = *(ulong *)*puVar2;
    if ((uVar3 & 1) == 0) goto LAB_017237dc;
    sVar1 = *(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1));
  }
  else {
    if (*(int *)(puVar2 + 1) == 0) goto LAB_017237dc;
    sVar1 = *(short *)(puVar2[2] + 0x18);
  }
  if (sVar1 == 0xa2) {
    return *(long *)this == local_30[0];
  }
LAB_017237dc:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsMap()");
}

