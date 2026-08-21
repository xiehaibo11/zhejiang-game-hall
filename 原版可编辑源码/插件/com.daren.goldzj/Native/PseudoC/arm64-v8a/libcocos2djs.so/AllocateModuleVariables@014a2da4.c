
/* v8::internal::ModuleScope::AllocateModuleVariables() */

void __thiscall v8::internal::ModuleScope::AllocateModuleVariables(ModuleScope *this)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  lVar4 = *(long *)(this + 0xe0);
  plVar5 = *(long **)(lVar4 + 0x80);
  if (plVar5 != (long *)(lVar4 + 0x88)) {
    do {
      uVar1 = *(uint *)(plVar5[4] + 0x18) >> 3;
      while( true ) {
        uVar1 = *(int *)(this + 0x28) - 1U & uVar1;
        if (*(long *)(*(long *)(this + 0x20) + (ulong)uVar1 * 0x18) == plVar5[4]) break;
        uVar1 = uVar1 + 1;
      }
      lVar6 = *(long *)(*(long *)(this + 0x20) + (ulong)uVar1 * 0x18 + 8);
      uVar2 = *(undefined4 *)(plVar5[5] + 0x24);
      *(ushort *)(lVar6 + 0x28) = *(ushort *)(lVar6 + 0x28) & 0xfcff | 0x280;
      *(undefined4 *)(lVar6 + 0x20) = uVar2;
      plVar7 = (long *)plVar5[1];
      if ((long *)plVar5[1] == (long *)0x0) {
        plVar7 = plVar5 + 2;
        plVar8 = (long *)*plVar7;
        if ((long *)*plVar8 != plVar5) {
          do {
            lVar6 = *plVar7;
            plVar7 = (long *)(lVar6 + 0x10);
            plVar8 = (long *)*plVar7;
          } while (*plVar8 != lVar6);
        }
      }
      else {
        do {
          plVar8 = plVar7;
          plVar7 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
      plVar5 = plVar8;
    } while (plVar8 != (long *)(lVar4 + 0x88));
    lVar4 = *(long *)(this + 0xe0);
  }
  plVar5 = *(long **)(lVar4 + 0x60);
  while (plVar5 != (long *)(lVar4 + 0x68)) {
    uVar1 = *(uint *)(plVar5[4] + 0x18) >> 3;
    while( true ) {
      uVar1 = *(int *)(this + 0x28) - 1U & uVar1;
      if (*(long *)(*(long *)(this + 0x20) + (ulong)uVar1 * 0x18) == plVar5[4]) break;
      uVar1 = uVar1 + 1;
    }
    lVar6 = *(long *)(*(long *)(this + 0x20) + (ulong)uVar1 * 0x18 + 8);
    uVar2 = *(undefined4 *)(plVar5[5] + 0x24);
    *(ushort *)(lVar6 + 0x28) = *(ushort *)(lVar6 + 0x28) & 0xfcff | 0x280;
    *(undefined4 *)(lVar6 + 0x20) = uVar2;
    plVar7 = (long *)plVar5[1];
    if ((long *)plVar5[1] == (long *)0x0) {
      plVar7 = plVar5 + 2;
      bVar3 = *(long **)*plVar7 != plVar5;
      plVar5 = (long *)*plVar7;
      if (bVar3) {
        do {
          lVar6 = *plVar7;
          plVar7 = (long *)(lVar6 + 0x10);
          plVar5 = (long *)*plVar7;
        } while (*plVar5 != lVar6);
      }
    }
    else {
      do {
        plVar5 = plVar7;
        plVar7 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  return;
}

