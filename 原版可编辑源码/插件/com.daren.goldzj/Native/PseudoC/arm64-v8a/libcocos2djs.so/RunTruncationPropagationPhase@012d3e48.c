
/* v8::internal::compiler::RepresentationSelector::RunTruncationPropagationPhase() */

void __thiscall
v8::internal::compiler::RepresentationSelector::RunTruncationPropagationPhase
          (RepresentationSelector *this)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 local_68;
  
  if (FLAG_trace_representation != '\0') {
    PrintF("--{Propagation phase}--\n");
  }
  *(undefined4 *)(this + 0x78) = 0;
  EnqueueInitial(this,*(Node **)(**(long **)this + 0x10));
  lVar4 = *(long *)(this + 0xc0);
  while (lVar4 != 0) {
    uVar5 = *(ulong *)(this + 0xb8);
    puVar3 = *(undefined8 **)(this + 0x90);
    lVar10 = *(long *)(this + 0x18);
    plVar7 = *(long **)(*(long *)((long)puVar3 + (uVar5 >> 6 & 0x3fffffffffffff8)) +
                       (uVar5 & 0x1ff) * 8);
    uVar5 = uVar5 + 1;
    uVar1 = *(uint *)((long)plVar7 + 0x14);
    *(ulong *)(this + 0xb8) = uVar5;
    *(long *)(this + 0xc0) = lVar4 + -1;
    uVar9 = (ulong)uVar1 & 0xffffff;
    if (0x3ff < uVar5) {
      puVar6 = (undefined8 *)*puVar3;
      if ((*(long *)(this + 0xd0) == 0) || (*(ulong *)(*(long *)(this + 0xd0) + 8) < 0x201)) {
        puVar6[1] = 0x200;
        *puVar6 = *(undefined8 *)(this + 0xd0);
        puVar3 = *(undefined8 **)(this + 0x90);
        uVar5 = *(ulong *)(this + 0xb8);
        *(undefined8 **)(this + 0xd0) = puVar6;
      }
      *(undefined8 **)(this + 0x90) = puVar3 + 1;
      *(ulong *)(this + 0xb8) = uVar5 - 0x200;
    }
    *(undefined1 *)(lVar10 + uVar9 * 0x28) = 2;
    if (FLAG_trace_representation != '\0') {
      uVar1 = *(uint *)((long)plVar7 + 0x14);
      local_68 = *(undefined8 *)(lVar10 + uVar9 * 0x28 + 4);
      uVar8 = *(undefined8 *)(*plVar7 + 8);
      uVar2 = Truncation::description((Truncation *)&local_68);
      PrintF(" visit #%d: %s (trunc: %s)\n",(ulong)(uVar1 & 0xffffff),uVar8,uVar2);
    }
    VisitNode(this,plVar7,*(undefined8 *)(lVar10 + uVar9 * 0x28 + 4),0);
    lVar4 = *(long *)(this + 0xc0);
  }
  return;
}

