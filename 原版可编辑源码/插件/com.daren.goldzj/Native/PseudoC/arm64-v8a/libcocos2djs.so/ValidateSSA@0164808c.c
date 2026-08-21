
/* v8::internal::compiler::InstructionSequence::ValidateSSA() const */

void __thiscall v8::internal::compiler::InstructionSequence::ValidateSSA(InstructionSequence *this)

{
  int iVar1;
  long lVar2;
  Zone *this_00;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  void *pvVar12;
  void *__s;
  uint uVar13;
  ulong uVar14;
  
  iVar10 = *(int *)(this + 0xd0);
  if (iVar10 < 0x41) {
    __s = (void *)0x0;
    uVar13 = 1;
  }
  else {
    this_00 = *(Zone **)(this + 8);
    iVar1 = iVar10 + 0x3e;
    if (-1 < iVar10 + -1) {
      iVar1 = iVar10 + -1;
    }
    __s = *(void **)(this_00 + 0x10);
    uVar13 = (iVar1 >> 6) + 1;
    uVar14 = (ulong)uVar13;
    uVar9 = uVar14 * 8;
    if (uVar9 < (ulong)(*(long *)(this_00 + 0x18) - (long)__s) ||
        uVar9 - (*(long *)(this_00 + 0x18) - (long)__s) == 0) {
      *(void **)(this_00 + 0x10) = (void *)((long)__s + uVar9);
    }
    else {
      __s = (void *)Zone::NewExpand(this_00,uVar9);
    }
    if (uVar13 < 2) {
      uVar14 = 1;
    }
    memset(__s,0,uVar14 << 3);
  }
  lVar5 = *(long *)(this + 0x88);
  if (*(long *)(this + 0x90) != lVar5) {
    uVar14 = *(ulong *)(this + 0xb0);
    lVar2 = *(long *)(this + 0xb8);
    plVar4 = (long *)(lVar5 + (uVar14 >> 6 & 0x3fffffffffffff8));
    lVar5 = *(long *)(lVar5 + (lVar2 + uVar14 >> 6 & 0x3fffffffffffff8));
    plVar6 = (long *)(*plVar4 + (uVar14 & 0x1ff) * 8);
    while ((long *)(lVar5 + (lVar2 + uVar14 & 0x1ff) * 8) != plVar6) {
      lVar7 = *plVar6;
      uVar9 = (ulong)*(byte *)(lVar7 + 4);
      if (*(byte *)(lVar7 + 4) != 0) {
        uVar8 = 0;
        do {
          uVar11 = *(ulong *)(lVar7 + 0x28 + uVar8 * 8) >> 3;
          iVar10 = (int)uVar11;
          pvVar12 = __s;
          if (uVar13 != 1) {
            iVar1 = iVar10 + 0x3f;
            if (-1 < iVar10) {
              iVar1 = iVar10;
            }
            pvVar12 = *(void **)((long)__s + (long)(iVar1 >> 6) * 8);
          }
          iVar1 = iVar10 + 0x3f;
          if (-1 < iVar10) {
            iVar1 = iVar10;
          }
          uVar3 = 1L << (uVar11 & 0x3f);
          if (((ulong)pvVar12 & uVar3) != 0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","!definitions.Contains(vreg)");
          }
          if (uVar13 == 1) {
            __s = (void *)(1L << (uVar11 & 0x3f) | (ulong)__s);
          }
          else {
            uVar9 = -(ulong)((uint)(iVar1 >> 6) >> 0x1f) & 0xfffffff800000000 |
                    (ulong)(uint)(iVar1 >> 6) << 3;
            *(ulong *)((long)__s + uVar9) = *(ulong *)((long)__s + uVar9) | uVar3;
            uVar9 = (ulong)*(byte *)(lVar7 + 4);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar9);
      }
      plVar6 = plVar6 + 1;
      if ((long)plVar6 - *plVar4 == 0x1000) {
        plVar4 = plVar4 + 1;
        plVar6 = (long *)*plVar4;
      }
    }
  }
  return;
}

