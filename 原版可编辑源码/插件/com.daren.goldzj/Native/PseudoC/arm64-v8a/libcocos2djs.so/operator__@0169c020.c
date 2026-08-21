
/* v8::internal::compiler::PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,
   v8::internal::compiler::Node*>, v8::internal::compiler::CsaLoadElimination::FieldInfo,
   v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*, v8::internal::compiler::Node*> >
   >::iterator::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall
v8::internal::compiler::
PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
::iterator::operator++(iterator *this)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  iterator *piVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  uint local_2c;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  lVar6 = *(long *)(this + 0x10);
  do {
    if (lVar6 == 0) {
LAB_0169c1b0:
      if (*(long *)(lVar2 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    if (*(long *)(lVar6 + 0x28) != 0) {
      lVar10 = *(long *)(this + 8);
      plVar9 = *(long **)(lVar10 + 8);
      if (*(long **)(lVar10 + 8) == (long *)0x0) {
        while( true ) {
          plVar5 = *(long **)(lVar10 + 0x10);
          if (*plVar5 == lVar10) break;
          lVar10 = *(long *)(lVar10 + 0x10);
        }
      }
      else {
        do {
          plVar5 = plVar9;
          plVar9 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      *(long **)(this + 8) = plVar5;
      if (plVar5 != (long *)(*(long *)(lVar6 + 0x28) + 8)) goto LAB_0169c1b0;
    }
    uVar4 = *(uint *)this;
    if (uVar4 == 0) {
LAB_0169c198:
      *(undefined4 *)this = 0;
      *(undefined4 *)(this + 0x14) = 0;
      *(undefined8 *)(this + 0xc) = 0;
      *(ulong *)(this + 4) = (ulong)local_2c;
      goto LAB_0169c1b0;
    }
    piVar7 = this + 0x10 + (long)(int)uVar4 * 8;
    while( true ) {
      uVar1 = uVar4 - 1;
      *(uint *)this = uVar1;
      if ((-1 < *(int *)(lVar6 + 0x24) << (ulong)(uVar1 & 0x1f)) &&
         (lVar10 = *(long *)piVar7, lVar10 != 0)) break;
      piVar7 = piVar7 + -8;
      uVar4 = uVar1;
      if (uVar1 == 0) goto LAB_0169c198;
    }
    *(uint *)this = uVar4;
    if ((int)uVar4 < (int)*(char *)(lVar10 + 0x20)) {
      do {
        lVar8 = *(long *)(lVar10 + (long)(int)uVar4 * 8 + 0x30);
        lVar6 = lVar10;
        lVar11 = lVar8;
        if ((*(int *)(lVar10 + 0x24) << (ulong)(uVar4 & 0x1f) < 0) &&
           (lVar6 = lVar8, lVar11 = lVar10, lVar8 == 0)) {
          *(undefined8 *)(this + (long)(int)uVar4 * 8 + 0x18) = 0;
        }
        else {
          *(long *)(this + (long)(int)uVar4 * 8 + 0x18) = lVar11;
          lVar10 = lVar6;
        }
        uVar4 = *(int *)this + 1;
        *(uint *)this = uVar4;
      } while ((int)uVar4 < (int)*(char *)(lVar10 + 0x20));
    }
    *(long *)(this + 0x10) = lVar10;
    if (*(long **)(lVar10 + 0x28) == (long *)0x0) {
LAB_0169c16c:
      plVar9 = (long *)(lVar10 + 0x10);
      piVar7 = (iterator *)(lVar10 + 0x18);
    }
    else {
      lVar6 = **(long **)(lVar10 + 0x28);
      *(long *)(this + 8) = lVar6;
      if (*(long *)(lVar10 + 0x28) == 0) goto LAB_0169c16c;
      plVar9 = (long *)(lVar6 + 0x30);
      piVar7 = (iterator *)(lVar6 + 0x38);
    }
    if ((*plVar9 != *(long *)(this + 0x118)) || (lVar6 = lVar10, *piVar7 != this[0x120]))
    goto LAB_0169c1b0;
  } while( true );
}

