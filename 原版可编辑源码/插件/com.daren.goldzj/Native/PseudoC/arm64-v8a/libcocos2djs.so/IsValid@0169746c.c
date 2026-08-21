
/* v8::internal::compiler::FieldTypeDependency::IsValid() const */

bool __thiscall v8::internal::compiler::FieldTypeDependency::IsValid(FieldTypeDependency *this)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  int *piVar4;
  ulong uVar5;
  
  puVar3 = (ulong *)MapRef::object((MapRef *)(this + 8));
  piVar4 = (int *)ObjectRef::object((ObjectRef *)(this + 0x20));
  uVar5 = *puVar3 & 0xffffffff00000000;
  iVar1 = *piVar4;
  iVar2 = Map::UnwrapFieldType
                    (uVar5 | *(uint *)((uVar5 | *(uint *)(*puVar3 + 0x17)) +
                                       (*(long *)(this + 0x18) * 0xc00000000 + 0x1000000000 >> 0x20)
                                      + 7));
  return iVar1 == iVar2;
}

