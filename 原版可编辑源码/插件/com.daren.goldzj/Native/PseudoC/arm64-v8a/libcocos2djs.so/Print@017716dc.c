
/* v8::internal::compiler::LoopFinderImpl::Print() */

void __thiscall v8::internal::compiler::LoopFinderImpl::Print(LoopFinderImpl *this)

{
  uint uVar1;
  char *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  char *pcVar6;
  bool bVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  uint uVar12;
  
  plVar3 = *(long **)(this + 0x68);
  plVar11 = *(long **)(this + 0x70);
  if (plVar3 != plVar11) {
    plVar9 = (long *)*plVar3;
    while( true ) {
      if (plVar9 != (long *)0x0) {
        uVar8 = (ulong)(*(uint *)((long)plVar9 + 0x14) & 0xffffff);
        if (0 < *(int *)(this + 0xd0)) {
          uVar12 = 0;
          do {
            uVar12 = uVar12 + 1;
            uVar1 = *(int *)(this + 0xd4) * (int)uVar8 + (uVar12 >> 5);
            uVar8 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
            uVar1 = *(uint *)(*(long *)(this + 0xe0) + uVar8);
            uVar5 = 1 << (ulong)(uVar12 & 0x1f);
            bVar7 = (*(uint *)(*(long *)(this + 0xd8) + uVar8) & uVar5) == 0;
            pcVar6 = " ";
            if (!bVar7) {
              pcVar6 = "<";
            }
            pcVar2 = "X";
            if (bVar7 || (uVar1 & uVar5) == 0) {
              pcVar2 = ">";
            }
            if ((uVar1 & uVar5) == 0) {
              pcVar2 = pcVar6;
            }
            PrintF(pcVar2);
            plVar9 = (long *)*plVar3;
            uVar8 = (ulong)(*(uint *)((long)plVar9 + 0x14) & 0xffffff);
          } while ((int)uVar12 < *(int *)(this + 0xd0));
        }
        PrintF(" #%d:%s\n",uVar8,*(undefined8 *)(*plVar9 + 8));
      }
      plVar3 = plVar3 + 2;
      if (plVar3 == plVar11) break;
      plVar9 = (long *)*plVar3;
    }
  }
  plVar3 = *(long **)(this + 0x90);
  if (*(long **)(this + 0x88) != plVar3) {
    uVar12 = 0;
    plVar11 = *(long **)(this + 0x88);
    do {
      plVar9 = plVar11 + 5;
      PrintF("Loop %d headed at #%d\n",(ulong)uVar12,(ulong)(*(uint *)(*plVar11 + 0x14) & 0xffffff))
      ;
      uVar12 = uVar12 + 1;
      plVar11 = plVar9;
    } while (plVar3 != plVar9);
  }
  puVar4 = *(undefined8 **)(*(long *)(this + 200) + 0x10);
  for (puVar10 = *(undefined8 **)(*(long *)(this + 200) + 8); puVar10 != puVar4;
      puVar10 = puVar10 + 1) {
    PrintLoop(this,(Loop *)*puVar10);
  }
  return;
}

