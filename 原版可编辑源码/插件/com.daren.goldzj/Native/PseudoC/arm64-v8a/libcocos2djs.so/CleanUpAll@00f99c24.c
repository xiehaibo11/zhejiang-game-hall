
/* v8::internal::Heap::ExternalStringTable::CleanUpAll() */

void __thiscall v8::internal::Heap::ExternalStringTable::CleanUpAll(ExternalStringTable *this)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  CleanUpYoung(this);
  puVar1 = *(ulong **)(this + 0x20);
  puVar4 = *(ulong **)(this + 0x28);
  if (puVar4 == puVar1) {
    iVar2 = 0;
    uVar6 = 0;
LAB_00f99cd8:
    uVar3 = (ulong)iVar2;
    if (uVar3 <= uVar6) {
      if (uVar6 != uVar3) {
        *(ulong **)(this + 0x28) = puVar1 + uVar3;
      }
      return;
    }
    std::__ndk1::vector<v8::internal::Object,std::__ndk1::allocator<v8::internal::Object>>::__append
              ((vector<v8::internal::Object,std::__ndk1::allocator<v8::internal::Object>> *)
               (this + 0x20),uVar3 - uVar6);
    return;
  }
  lVar5 = *(long *)this;
  uVar3 = 0;
  iVar2 = 0;
  uVar6 = *puVar1;
  if ((uVar6 & 1) != 0) goto LAB_00f99c9c;
  do {
    puVar1[iVar2] = uVar6;
    puVar1 = *(ulong **)(this + 0x20);
    puVar4 = *(ulong **)(this + 0x28);
    iVar2 = iVar2 + 1;
    do {
      uVar3 = uVar3 + 1;
      uVar6 = (long)puVar4 - (long)puVar1 >> 3;
      if (uVar6 <= uVar3) goto LAB_00f99cd8;
      uVar6 = puVar1[uVar3];
      if ((uVar6 & 1) == 0) break;
LAB_00f99c9c:
    } while (((int)uVar6 == *(int *)(lVar5 + -0x87a8)) ||
            ((uVar7 = uVar6 & 0xffffffff00000000 | 7,
             *(ushort *)(uVar7 + *(uint *)(uVar6 - 1)) < 0x40 &&
             ((*(ushort *)(uVar7 + *(uint *)(uVar6 - 1)) & 7) == 5))));
  } while( true );
}

