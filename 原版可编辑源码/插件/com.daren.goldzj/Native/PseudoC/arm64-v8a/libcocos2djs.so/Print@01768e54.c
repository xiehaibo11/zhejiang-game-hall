
/* v8::internal::compiler::LoadElimination::AbstractState::Print() const */

void __thiscall v8::internal::compiler::LoadElimination::AbstractState::Print(AbstractState *this)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (*(long *)(this + 0x208) != 0) {
    PrintF("   maps:\n");
    AbstractMaps::Print(*(AbstractMaps **)(this + 0x208));
  }
  if (*(long *)this != 0) {
    PrintF("   elements:\n");
    plVar10 = *(long **)this;
    lVar9 = 0;
    plVar6 = (long *)*plVar10;
    while( true ) {
      if (plVar6 != (long *)0x0) {
        plVar7 = *(long **)((long)plVar10 + lVar9 + 8);
        plVar1 = *(long **)((long)plVar10 + lVar9 + 0x10);
        PrintF("    #%d:%s @ #%d:%s -> #%d:%s\n",(ulong)(*(uint *)((long)plVar6 + 0x14) & 0xffffff),
               *(undefined8 *)(*plVar6 + 8),(ulong)(*(uint *)((long)plVar7 + 0x14) & 0xffffff),
               *(undefined8 *)(*plVar7 + 8),(ulong)(*(uint *)((long)plVar1 + 0x14) & 0xffffff),
               *(undefined8 *)(*plVar1 + 8));
      }
      lVar9 = lVar9 + 0x20;
      if (lVar9 == 0x100) break;
      plVar6 = *(long **)((long)plVar10 + lVar9);
    }
  }
  lVar9 = 0;
  do {
    plVar6 = *(long **)(this + lVar9 * 8 + 8);
    if (plVar6 != (long *)0x0) {
      PrintF("   field %zu:\n",lVar9);
      plVar10 = (long *)*plVar6;
      while (plVar10 != plVar6 + 1) {
        uVar2 = *(uint *)(plVar10[4] + 0x14);
        uVar3 = *(uint *)(plVar10[5] + 0x14);
        uVar11 = *(undefined8 *)(*(long *)plVar10[4] + 8);
        uVar12 = *(undefined8 *)(*(long *)plVar10[5] + 8);
        uVar5 = MachineReprToString(*(undefined1 *)(plVar10 + 6));
        PrintF("    #%d:%s -> #%d:%s [repr=%s]\n",(ulong)(uVar2 & 0xffffff),uVar11,
               (ulong)(uVar3 & 0xffffff),uVar12,uVar5);
        plVar7 = (long *)plVar10[1];
        if ((long *)plVar10[1] == (long *)0x0) {
          plVar7 = plVar10 + 2;
          bVar4 = (long *)*(long *)*plVar7 != plVar10;
          plVar10 = (long *)*plVar7;
          if (bVar4) {
            do {
              lVar8 = *plVar7;
              plVar7 = (long *)(lVar8 + 0x10);
              plVar10 = (long *)*plVar7;
            } while (*plVar10 != lVar8);
          }
        }
        else {
          do {
            plVar10 = plVar7;
            plVar7 = (long *)*plVar10;
          } while ((long *)*plVar10 != (long *)0x0);
        }
      }
    }
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0x20);
  lVar9 = 0;
  do {
    plVar6 = *(long **)(this + lVar9 * 8 + 0x108);
    if (plVar6 != (long *)0x0) {
      PrintF("   const field %zu:\n",lVar9);
      plVar10 = (long *)*plVar6;
      while (plVar10 != plVar6 + 1) {
        uVar2 = *(uint *)(plVar10[4] + 0x14);
        uVar3 = *(uint *)(plVar10[5] + 0x14);
        uVar11 = *(undefined8 *)(*(long *)plVar10[4] + 8);
        uVar12 = *(undefined8 *)(*(long *)plVar10[5] + 8);
        uVar5 = MachineReprToString(*(undefined1 *)(plVar10 + 6));
        PrintF("    #%d:%s -> #%d:%s [repr=%s]\n",(ulong)(uVar2 & 0xffffff),uVar11,
               (ulong)(uVar3 & 0xffffff),uVar12,uVar5);
        plVar7 = (long *)plVar10[1];
        if ((long *)plVar10[1] == (long *)0x0) {
          plVar7 = plVar10 + 2;
          bVar4 = (long *)*(long *)*plVar7 != plVar10;
          plVar10 = (long *)*plVar7;
          if (bVar4) {
            do {
              lVar8 = *plVar7;
              plVar7 = (long *)(lVar8 + 0x10);
              plVar10 = (long *)*plVar7;
            } while (*plVar10 != lVar8);
          }
        }
        else {
          do {
            plVar10 = plVar7;
            plVar7 = (long *)*plVar10;
          } while ((long *)*plVar10 != (long *)0x0);
        }
      }
    }
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0x20);
  return;
}

