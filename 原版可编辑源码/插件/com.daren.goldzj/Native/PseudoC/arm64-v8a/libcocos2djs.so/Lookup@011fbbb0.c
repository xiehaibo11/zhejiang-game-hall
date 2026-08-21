
/* v8::internal::IdentityMapBase::Lookup(unsigned long) const */

ulong __thiscall v8::internal::IdentityMapBase::Lookup(IdentityMapBase *this,ulong param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  
  if (*(ulong *)(*(long *)(this + 0x10) + -0x7cb0) == param_1) goto LAB_011fbd38;
  uVar2 = base::hash_value(param_1);
  uVar4 = *(ulong *)(*(long *)(this + 0x10) + -0x7cb0);
  uVar2 = *(uint *)(this + 0x24) & uVar2;
  if ((int)uVar2 < *(int *)(this + 0x20)) {
    uVar3 = (ulong)(int)uVar2;
    do {
      uVar7 = *(ulong *)(*(long *)(this + 0x28) + uVar3 * 8);
      if (uVar7 == param_1) goto LAB_011fbd24;
      if (uVar7 == uVar4) goto LAB_011fbc5c;
      uVar3 = uVar3 + 1;
    } while ((long)*(int *)(this + 0x20) != uVar3);
  }
  if (0 < (int)uVar2) {
    uVar3 = 0;
    do {
      uVar7 = *(ulong *)(*(long *)(this + 0x28) + uVar3 * 8);
      if (uVar7 == param_1) goto LAB_011fbd24;
    } while ((uVar7 != uVar4) && (uVar3 = uVar3 + 1, uVar2 != uVar3));
  }
LAB_011fbc5c:
  uVar3 = 0xffffffff;
  goto LAB_011fbc60;
LAB_011fbd24:
  if (-1 < (int)uVar3) {
    return uVar3;
  }
LAB_011fbc60:
  if (*(int *)(this + 0x18) != *(int *)(*(long *)(this + 0x10) + 0x1b4)) {
    Rehash(this);
    if (*(ulong *)(*(long *)(this + 0x10) + -0x7cb0) == param_1) {
LAB_011fbd38:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","address != ReadOnlyRoots(heap_).not_mapped_symbol().ptr()");
    }
    uVar2 = base::hash_value(param_1);
    uVar2 = *(uint *)(this + 0x24) & uVar2;
    if ((int)uVar2 < *(int *)(this + 0x20)) {
      lVar5 = (long)*(int *)(this + 0x20) - (long)(int)uVar2;
      puVar6 = (ulong *)(*(long *)(this + 0x28) + (long)(int)uVar2 * 8);
      uVar1 = uVar2;
      do {
        if (*puVar6 == param_1) {
          return (ulong)uVar1;
        }
        if (*puVar6 == *(ulong *)(*(long *)(this + 0x10) + -0x7cb0)) goto LAB_011fbd1c;
        uVar1 = uVar1 + 1;
        lVar5 = lVar5 + -1;
        puVar6 = puVar6 + 1;
      } while (lVar5 != 0);
    }
    if (0 < (int)uVar2) {
      uVar4 = 0;
      do {
        uVar3 = *(ulong *)(*(long *)(this + 0x28) + uVar4 * 8);
        if (uVar3 == param_1) {
          return uVar4;
        }
      } while ((uVar3 != *(ulong *)(*(long *)(this + 0x10) + -0x7cb0)) &&
              (uVar4 = uVar4 + 1, uVar2 != uVar4));
    }
LAB_011fbd1c:
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

