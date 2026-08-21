
/* v8::internal::compiler::LoopFinderImpl::PrintLoop(v8::internal::compiler::LoopTree::Loop*) */

void __thiscall
v8::internal::compiler::LoopFinderImpl::PrintLoop(LoopFinderImpl *this,Loop *param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  
  if (0 < *(int *)(param_1 + 8)) {
    iVar7 = 0;
    do {
      PrintF("  ");
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 8));
  }
  PrintF("Loop depth = %d ");
  uVar2 = *(uint *)(param_1 + 0x30);
  uVar8 = (ulong)uVar2;
  if ((int)uVar2 < *(int *)(param_1 + 0x34)) {
    uVar4 = (long)(int)uVar2;
    do {
      uVar8 = uVar4 + 1;
      PrintF(" H#%d",(ulong)(*(uint *)(*(long *)(*(long *)(*(long *)(this + 200) + 0x68) + uVar4 * 8
                                                ) + 0x14) & 0xffffff));
      uVar4 = uVar8;
    } while ((long)uVar8 < (long)*(int *)(param_1 + 0x34));
  }
  if ((int)uVar8 < *(int *)(param_1 + 0x38)) {
    uVar4 = (long)(int)uVar8;
    do {
      uVar8 = uVar4 + 1;
      PrintF(" B#%d",(ulong)(*(uint *)(*(long *)(*(long *)(*(long *)(this + 200) + 0x68) + uVar4 * 8
                                                ) + 0x14) & 0xffffff));
      uVar4 = uVar8;
    } while ((long)uVar8 < (long)*(int *)(param_1 + 0x38));
  }
  if ((int)uVar8 < *(int *)(param_1 + 0x3c)) {
    lVar5 = (long)(int)uVar8;
    do {
      lVar1 = lVar5 + 1;
      PrintF(" E#%d",(ulong)(*(uint *)(*(long *)(*(long *)(*(long *)(this + 200) + 0x68) + lVar5 * 8
                                                ) + 0x14) & 0xffffff));
      lVar5 = lVar1;
    } while (lVar1 < *(int *)(param_1 + 0x3c));
  }
  PrintF("\n");
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  for (puVar6 = *(undefined8 **)(param_1 + 0x10); puVar6 != puVar3; puVar6 = puVar6 + 1) {
    PrintLoop(this,(Loop *)*puVar6);
  }
  return;
}

