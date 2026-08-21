
/* v8::internal::compiler::PrototypePropertyDependency::IsValid() const */

bool __thiscall
v8::internal::compiler::PrototypePropertyDependency::IsValid(PrototypePropertyDependency *this)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  ulong *puVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  puVar4 = (ulong *)JSFunctionRef::object((JSFunctionRef *)(this + 8));
  uVar7 = *puVar4;
  uVar6 = uVar7 & 0xffffffff00000000;
  uVar8 = uVar6 | 9;
  if ((((*(char *)(uVar8 + *(uint *)(uVar7 - 1)) < '\0') &&
       ((((*(byte *)(uVar8 + *(uint *)(uVar7 - 1)) & 1) != 0 ||
         (*(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar6 + *(uint *)(uVar7 + 0x1b) + -1)) == 0xa2))
        || (*(uint *)(uVar7 + 0x1b) != *(uint *)(uVar6 + 0xa8))))) &&
      (((*(char *)(uVar8 + *(uint *)(uVar7 - 1)) < '\0' &&
        ((*(byte *)(uVar8 + *(uint *)(uVar7 - 1)) >> 6 & 1) != 0)) ||
       (((*(uint *)((uVar6 | *(uint *)(uVar7 + 0xb)) + 0x1b) & 0x1f) - 0xd & 0xff) < 4)))) &&
     ((*(byte *)(uVar8 + *(uint *)(uVar7 - 1)) & 1) == 0)) {
    if ((*(byte *)(uVar8 + *(uint *)(uVar7 - 1)) & 1) == 0) {
      uVar7 = uVar6 | *(uint *)(uVar7 + 0x1b);
      if (*(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0xa2) {
        uVar7 = (ulong)*(uint *)(uVar7 + 0xf);
      }
    }
    else {
      uVar2 = *(uint *)((uVar6 | 0x13) + (ulong)*(uint *)(uVar7 - 1));
      uVar7 = uVar6 | uVar2;
      if ((uVar2 & 1) != 0) {
        do {
          if (*(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0xa2) break;
          puVar1 = (uint *)(uVar7 + 0x13);
          uVar7 = uVar6 | *puVar1;
        } while ((*puVar1 & 1) != 0);
      }
    }
    piVar5 = (int *)ObjectRef::object((ObjectRef *)(this + 0x18));
    bVar3 = (int)uVar7 == *piVar5;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

