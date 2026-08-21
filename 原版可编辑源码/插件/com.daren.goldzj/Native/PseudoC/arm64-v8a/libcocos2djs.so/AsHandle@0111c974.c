
/* v8::internal::InternalizedStringKey::AsHandle(v8::internal::Isolate*) */

undefined8 __thiscall
v8::internal::InternalizedStringKey::AsHandle(InternalizedStringKey *this,Isolate *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  
  puVar1 = (undefined8 *)
           Factory::InternalizedStringMapForString((Factory *)param_1,*(undefined8 *)(this + 0x10));
  if (puVar1 != (undefined8 *)0x0) {
    uVar6 = **(ulong **)(this + 0x10);
    iVar5 = (int)*puVar1;
    if (iVar5 != 0) {
      Heap::VerifyObjectLayoutChange((Heap *)(uVar6 & 0xffffffff00000000 | 0x8850),uVar6,*puVar1);
    }
    *(int *)(uVar6 - 1) = iVar5;
    return *(undefined8 *)(this + 0x10);
  }
  if (FLAG_thin_strings == '\0') {
    puVar3 = *(ulong **)(this + 0x10);
  }
  else {
    puVar3 = *(ulong **)(this + 0x10);
    uVar6 = *puVar3;
    uVar4 = uVar6 & 0xffffffff00000000 | 7;
    if (((*(ushort *)(uVar4 + *(uint *)(uVar6 - 1)) < 0x40) &&
        ((*(ushort *)(uVar4 + *(uint *)(uVar6 - 1)) & 7) == 2)) &&
       ((*(byte *)(uVar4 + *(uint *)(uVar6 - 1)) >> 3 & 1) != 0)) {
      uVar2 = Factory::InternalizeExternalString<v8::internal::ExternalOneByteString>
                        ((Factory *)param_1);
      return uVar2;
    }
    if (((*(ushort *)(uVar4 + *(uint *)(uVar6 - 1)) < 0x40) &&
        ((*(ushort *)(uVar4 + *(uint *)(uVar6 - 1)) & 7) == 2)) &&
       ((*(byte *)(uVar4 + *(uint *)(uVar6 - 1)) >> 3 & 1) == 0)) {
      uVar2 = Factory::InternalizeExternalString<v8::internal::ExternalTwoByteString>
                        ((Factory *)param_1);
      return uVar2;
    }
  }
  uVar2 = Factory::NewInternalizedStringImpl
                    (param_1,puVar3,*(undefined4 *)(*puVar3 + 7),*(undefined4 *)(*puVar3 + 3));
  return uVar2;
}

