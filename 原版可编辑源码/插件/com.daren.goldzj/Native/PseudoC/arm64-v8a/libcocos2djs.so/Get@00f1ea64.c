
/* v8::internal::MaterializedObjectStore::Get(unsigned long) */

ulong * __thiscall
v8::internal::MaterializedObjectStore::Get(MaterializedObjectStore *this,ulong param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  int iVar7;
  
  puVar1 = *(ulong **)(this + 8);
  puVar4 = *(ulong **)(this + 0x10);
  if (puVar4 == puVar1) {
LAB_00f1eb04:
    puVar2 = (ulong *)0x0;
  }
  else {
    puVar5 = puVar1;
    if (*puVar1 != param_1) {
      do {
        if (puVar4 + -1 == puVar5) goto LAB_00f1eb04;
        puVar2 = puVar5 + 1;
        puVar5 = puVar5 + 1;
      } while (*puVar2 != param_1);
    }
    puVar2 = (ulong *)0x0;
    if (puVar5 != puVar4) {
      iVar7 = (int)((ulong)((long)puVar5 - (long)puVar1) >> 3);
      if (iVar7 != -1) {
        pIVar3 = *(Isolate **)this;
        uVar6 = *(ulong *)(pIVar3 + 0xf60);
        if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar4 = *(ulong **)(pIVar3 + 0x95a0);
          if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
            puVar4 = (ulong *)HandleScope::Extend(pIVar3);
          }
          *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
          *puVar4 = uVar6;
        }
        else {
          puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar6);
          uVar6 = *puVar4;
        }
        if (*(int *)(uVar6 + 3) >> 1 <= iVar7) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","array->length() > index");
        }
        pIVar3 = *(Isolate **)this;
        uVar6 = uVar6 & 0xffffffff00000000 |
                (ulong)*(uint *)(uVar6 + (long)(int)((ulong)((long)puVar5 - (long)puVar1) >> 1) + 7)
        ;
        if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar2 = *(ulong **)(pIVar3 + 0x95a0);
          if (puVar2 == *(ulong **)(pIVar3 + 0x95a8)) {
            puVar2 = (ulong *)HandleScope::Extend(pIVar3);
          }
          *(ulong **)(pIVar3 + 0x95a0) = puVar2 + 1;
          *puVar2 = uVar6;
        }
        else {
          puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar6);
        }
      }
    }
  }
  return puVar2;
}

