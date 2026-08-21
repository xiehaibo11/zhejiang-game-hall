
/* v8::internal::compiler::LoopPeeler::PeelInnerLoops(v8::internal::compiler::LoopTree::Loop*) */

void __thiscall v8::internal::compiler::LoopPeeler::PeelInnerLoops(LoopPeeler *this,Loop *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar5;
  long *plVar6;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (*(undefined8 **)(param_1 + 0x10) == puVar1) {
    if ((uint)(*(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x30)) < 0x3e9) {
      if (FLAG_trace_turbo_loop != '\0') {
        PrintF("Peeling loop with header: ");
        iVar2 = *(int *)(param_1 + 0x30);
        if (iVar2 != *(int *)(param_1 + 0x34)) {
          lVar5 = (long)*(int *)(param_1 + 0x34) * 8 + (long)iVar2 * -8;
          plVar6 = (long *)(*(long *)(*(long *)(this + 0x10) + 0x68) + (long)iVar2 * 8);
          do {
            PrintF("%i ",(ulong)(*(uint *)(*plVar6 + 0x14) & 0xffffff));
            lVar5 = lVar5 + -8;
            plVar6 = plVar6 + 1;
          } while (lVar5 != 0);
        }
        PrintF("\n");
      }
      Peel(this,param_1);
      return;
    }
  }
  else {
    do {
      puVar4 = puVar3 + 1;
      PeelInnerLoops(this,(Loop *)*puVar3);
      puVar3 = puVar4;
    } while (puVar1 != puVar4);
  }
  return;
}

