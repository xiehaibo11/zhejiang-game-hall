
/* v8::internal::compiler::RepresentationSelector::Run(v8::internal::compiler::SimplifiedLowering*)
    */

void __thiscall
v8::internal::compiler::RepresentationSelector::Run
          (RepresentationSelector *this,SimplifiedLowering *param_1)

{
  undefined8 uVar1;
  Node *pNVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  Node *pNVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  SourcePositionTable *this_00;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  RunTruncationPropagationPhase(this);
  RunTypePropagationPhase(this);
  if (FLAG_trace_representation != '\0') {
    PrintF("--{Simplified lowering phase}--\n");
  }
  puVar5 = *(undefined8 **)(this + 0x38);
  *(undefined4 *)(this + 0x78) = 2;
  if (puVar5 != *(undefined8 **)(this + 0x40)) {
    do {
      pNVar8 = (Node *)*puVar5;
      lVar7 = *(long *)(this + 0x18);
      uVar11 = (ulong)*(uint *)(pNVar8 + 0x14) & 0xffffff;
      if (FLAG_trace_representation != '\0') {
        PrintF(" visit #%d: %s\n",uVar11,*(undefined8 *)(*(long *)pNVar8 + 8));
      }
      this_00 = *(SourcePositionTable **)(this + 0x128);
      uVar4 = SourcePositionTable::GetSourcePosition(this_00,pNVar8);
      uVar14 = *(undefined8 *)(this_00 + 0x10);
      if ((uVar4 & 0x7fffffffffff) != 0) {
        *(ulong *)(this_00 + 0x10) = uVar4;
      }
      lVar12 = *(long *)(this + 0x130);
      if (lVar12 == 0) {
        VisitNode(this,pNVar8,*(undefined8 *)(lVar7 + uVar11 * 0x28 + 4),param_1);
      }
      else {
        uVar16 = *(undefined8 *)(lVar12 + 0x18);
        uVar15 = *(undefined8 *)(lVar12 + 0x10);
        uVar3 = *(uint *)(pNVar8 + 0x14);
        uVar13 = *(undefined8 *)(lVar12 + 0x20);
        uVar1 = *(undefined8 *)(lVar12 + 0x28);
        *(undefined4 *)(lVar12 + 0x20) = 1;
        *(ulong *)(lVar12 + 0x28) = (ulong)uVar3 & 0xffffff;
        *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)(lVar12 + 0x30);
        *(char **)(lVar12 + 0x18) = "simplified lowering";
        VisitNode(this,pNVar8,*(undefined8 *)(lVar7 + uVar11 * 0x28 + 4),param_1);
        *(undefined8 *)(lVar12 + 0x20) = uVar13;
        *(undefined8 *)(lVar12 + 0x28) = uVar1;
        *(undefined8 *)(lVar12 + 0x18) = uVar16;
        *(undefined8 *)(lVar12 + 0x10) = uVar15;
      }
      *(undefined8 *)(this_00 + 0x10) = uVar14;
      puVar5 = puVar5 + 1;
    } while (puVar5 != *(undefined8 **)(this + 0x40));
  }
  puVar5 = *(undefined8 **)(this + 0x60);
  puVar9 = *(undefined8 **)(this + 0x58);
  while( true ) {
    if (puVar9 == puVar5) {
      return;
    }
    puVar10 = puVar9 + 2;
    pNVar8 = (Node *)*puVar9;
    pNVar2 = (Node *)puVar9[1];
    Node::ReplaceUses(pNVar8,pNVar2);
    Node::Kill(pNVar8);
    puVar5 = *(undefined8 **)(this + 0x60);
    puVar6 = puVar10;
    if (puVar10 == puVar5) break;
    do {
      if ((Node *)puVar6[1] == pNVar8) {
        puVar6[1] = pNVar2;
        puVar5 = *(undefined8 **)(this + 0x60);
      }
      puVar6 = puVar6 + 2;
      puVar9 = puVar10;
    } while (puVar6 != puVar5);
  }
  return;
}

