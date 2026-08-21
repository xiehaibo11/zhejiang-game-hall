
/* v8::internal::compiler::PersistentMap<v8::internal::compiler::Variable,
   v8::internal::compiler::Node*, v8::base::hash<v8::internal::compiler::Variable>
   >::iterator::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall
v8::internal::compiler::
PersistentMap<v8::internal::compiler::Variable,v8::internal::compiler::Node*,v8::base::hash<v8::internal::compiler::Variable>>
::iterator::operator++(iterator *this)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  iterator *piVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint local_2c;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  lVar6 = *(long *)(this + 0x10);
  do {
    if (lVar6 == 0) break;
    if (*(long *)(lVar6 + 0x18) != 0) {
      lVar10 = *(long *)(this + 8);
      plVar7 = *(long **)(lVar10 + 8);
      if (*(long **)(lVar10 + 8) == (long *)0x0) {
        while( true ) {
          plVar5 = *(long **)(lVar10 + 0x10);
          if (*plVar5 == lVar10) break;
          lVar10 = *(long *)(lVar10 + 0x10);
        }
      }
      else {
        do {
          plVar5 = plVar7;
          plVar7 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      *(long **)(this + 8) = plVar5;
      if (plVar5 != (long *)(*(long *)(lVar6 + 0x18) + 8)) break;
    }
    uVar4 = *(uint *)this;
    if (uVar4 == 0) {
LAB_016b9274:
      *(undefined4 *)this = 0;
      *(undefined4 *)(this + 0x14) = 0;
      *(undefined8 *)(this + 0xc) = 0;
      *(ulong *)(this + 4) = (ulong)local_2c;
      break;
    }
    piVar8 = this + 0x10 + (long)(int)uVar4 * 8;
    while( true ) {
      uVar1 = uVar4 - 1;
      *(uint *)this = uVar1;
      if ((-1 < *(int *)(lVar6 + 0x14) << (ulong)(uVar1 & 0x1f)) &&
         (lVar10 = *(long *)piVar8, lVar10 != 0)) break;
      piVar8 = piVar8 + -8;
      uVar4 = uVar1;
      if (uVar1 == 0) goto LAB_016b9274;
    }
    *(uint *)this = uVar4;
    if ((int)uVar4 < (int)*(char *)(lVar10 + 0x10)) {
      do {
        lVar9 = *(long *)(lVar10 + (long)(int)uVar4 * 8 + 0x20);
        lVar6 = lVar10;
        lVar11 = lVar9;
        if ((*(int *)(lVar10 + 0x14) << (ulong)(uVar4 & 0x1f) < 0) &&
           (lVar6 = lVar9, lVar11 = lVar10, lVar9 == 0)) {
          *(undefined8 *)(this + (long)(int)uVar4 * 8 + 0x18) = 0;
        }
        else {
          *(long *)(this + (long)(int)uVar4 * 8 + 0x18) = lVar11;
          lVar10 = lVar6;
        }
        uVar4 = *(int *)this + 1;
        *(uint *)this = uVar4;
      } while ((int)uVar4 < (int)*(char *)(lVar10 + 0x10));
    }
    *(long *)(this + 0x10) = lVar10;
    if (*(long **)(lVar10 + 0x18) == (long *)0x0) {
LAB_016b925c:
      plVar7 = (long *)(lVar10 + 8);
    }
    else {
      lVar6 = **(long **)(lVar10 + 0x18);
      *(long *)(this + 8) = lVar6;
      if (*(long *)(lVar10 + 0x18) == 0) goto LAB_016b925c;
      plVar7 = (long *)(lVar6 + 0x28);
    }
    lVar6 = lVar10;
  } while (*(long *)(this + 0x118) == *plVar7);
  if (*(long *)(lVar2 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

