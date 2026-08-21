
/* v8::debug::Script::GetSourceOffset(v8::debug::Location const&) const */

uint __thiscall v8::debug::Script::GetSourceOffset(Script *this,Location *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar6 = *(long *)this;
  if ((*(uint *)(lVar6 + 0x17) & 0xfffffffe) == 6) {
    return *(uint *)(param_1 + 4);
  }
  uVar8 = *(uint *)(param_1 + 4);
  uVar3 = *(int *)param_1 - (*(int *)(lVar6 + 0xb) >> 1);
  if ((int)uVar3 < 1) {
    uVar8 = uVar8 - (*(int *)(lVar6 + 0xf) >> 1);
    uVar8 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
  }
  internal::Script::InitLineEnds(this);
  uVar2 = *(uint *)(*(ulong *)this + 0x1b);
  if ((uVar2 & 1) != 0) {
    pIVar4 = (Isolate *)(*(ulong *)this & 0xffffffff00000000);
    uVar7 = (ulong)pIVar4 | (ulong)uVar2;
    if (*(ushort *)(((ulong)pIVar4 | 7) + (ulong)*(uint *)(uVar7 - 1)) - 0x76 < 0xf) {
      if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)(pIVar4 + 0x95a0);
        if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
          puVar5 = (ulong *)internal::HandleScope::Extend(pIVar4);
        }
        *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
        *puVar5 = uVar7;
      }
      else {
        puVar5 = (ulong *)internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar7);
        uVar7 = *puVar5;
      }
      iVar1 = *(int *)(uVar7 + 3) >> 1;
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","line_ends->length()");
      }
      uVar2 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
      if (iVar1 <= (int)uVar2) {
        return *(int *)(uVar7 + (long)(iVar1 * 4 + -4) + 7) >> 1;
      }
      iVar1 = uVar2 * 4;
      uVar2 = *(int *)(uVar7 + 7 + (long)iVar1) >> 1;
      if (0 < (int)uVar3) {
        iVar1 = uVar8 + (*(int *)(uVar7 + 7 + (long)(iVar1 + -4)) >> 1);
        if ((int)uVar2 <= iVar1) {
          return uVar2;
        }
        return iVar1 + 1;
      }
      if ((int)uVar2 < (int)uVar8) {
        return uVar2;
      }
      return uVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","script->line_ends().IsFixedArray()");
}

