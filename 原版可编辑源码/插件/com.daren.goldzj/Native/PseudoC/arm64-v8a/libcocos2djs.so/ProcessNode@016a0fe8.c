
/* v8::internal::compiler::EffectControlLinearizer::ProcessNode(v8::internal::compiler::Node*,
   v8::internal::compiler::Node**) */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::ProcessNode
          (EffectControlLinearizer *this,Node *param_1,Node **param_2)

{
  Graph *this_00;
  uint uVar1;
  EffectControlLinearizer EVar2;
  ulong uVar3;
  Operator *pOVar4;
  Node *pNVar5;
  long lVar6;
  SourcePositionTable *this_01;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  Node *local_48;
  
  this_01 = *(SourcePositionTable **)(this + 0x28);
  uVar3 = SourcePositionTable::GetSourcePosition(this_01,param_1);
  uVar8 = *(undefined8 *)(this_01 + 0x10);
  if ((uVar3 & 0x7fffffffffff) != 0) {
    *(ulong *)(this_01 + 0x10) = uVar3;
  }
  lVar9 = *(long *)(this + 0x30);
  if (lVar9 == 0) {
    puStack_68 = &DAT_0189703a;
    local_70 = &DAT_0189703a;
    uStack_78 = 0x8000000000000000;
    local_80 = 0x8000000000000000;
  }
  else {
    puStack_68 = *(undefined1 **)(lVar9 + 0x18);
    local_70 = *(undefined1 **)(lVar9 + 0x10);
    uVar1 = *(uint *)(param_1 + 0x14);
    uStack_78 = *(undefined8 *)(lVar9 + 0x28);
    local_80 = *(undefined8 *)(lVar9 + 0x20);
    *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar9 + 0x30);
    *(char **)(lVar9 + 0x18) = "process node";
    *(undefined4 *)(lVar9 + 0x20) = 1;
    *(ulong *)(lVar9 + 0x28) = (ulong)uVar1 & 0xffffff;
  }
  puVar11 = *(undefined8 **)this;
  lVar10 = *(long *)(this + 0x58);
  if (puVar11[0x2c] == 0) {
    this_00 = (Graph *)*puVar11;
    pOVar4 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar11[1]);
    local_48 = (Node *)0x0;
    lVar6 = Graph::NewNode(this_00,pOVar4,0,&local_48,false);
    puVar11[0x2c] = lVar6;
    if (lVar10 != lVar6) goto LAB_016a10a4;
LAB_016a1144:
    lVar10 = *(long *)param_1;
    if (0 < *(int *)(lVar10 + 0x18)) {
      NodeProperties::ReplaceEffectInput(param_1,*(Node **)(this + 0x58),0);
      lVar10 = *(long *)param_1;
    }
    if (0 < *(int *)(lVar10 + 0x1c)) {
      iVar7 = 0;
      do {
        NodeProperties::ReplaceControlInput(param_1,*(Node **)(this + 0x60),iVar7);
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(*(long *)param_1 + 0x1c));
    }
  }
  else {
    if (lVar10 == puVar11[0x2c]) goto LAB_016a1144;
LAB_016a10a4:
    uVar3 = TryWireInStateEffect(this,param_1,*param_2);
    if ((uVar3 & 1) != 0) goto joined_r0x016a126c;
    if ((this[0x20] == (EffectControlLinearizer)0x0) &&
       ((*(byte *)(*(long *)param_1 + 0x12) >> 4 & 1) == 0)) {
      *param_2 = (Node *)0x0;
      *(Node **)(this + 0x70) = param_1;
    }
    pOVar4 = *(Operator **)param_1;
    switch(*(undefined2 *)(pOVar4 + 0x10)) {
    case 0x26:
      pNVar5 = (Node *)NodeProperties::GetFrameStateInput(param_1);
      *param_2 = pNVar5;
      if (lVar9 == 0) goto LAB_016a11cc;
      goto LAB_016a11bc;
    case 0x27:
      EVar2 = (EffectControlLinearizer)RegionObservabilityOf(pOVar4);
      this[0x20] = EVar2;
      break;
    case 0x28:
      this[0x20] = (EffectControlLinearizer)0x0;
      break;
    default:
      if (0 < *(int *)(pOVar4 + 0x18)) {
        NodeProperties::ReplaceEffectInput(param_1,*(Node **)(this + 0x58),0);
        pOVar4 = *(Operator **)param_1;
      }
      if (0 < *(int *)(pOVar4 + 0x1c)) {
        iVar7 = 0;
        do {
          NodeProperties::ReplaceControlInput(param_1,*(Node **)(this + 0x60),iVar7);
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(*(long *)param_1 + 0x1c));
      }
      GraphAssembler::AddNode((GraphAssembler *)(this + 0x38),param_1);
      if (*(short *)(*(long *)param_1 + 0x10) == 0x3b) {
        GraphAssembler::ConnectUnreachableToEnd((GraphAssembler *)(this + 0x38));
      }
      goto joined_r0x016a126c;
    case 0x3a:
      break;
    }
    FUN_016a25a4(param_1);
  }
joined_r0x016a126c:
  if (lVar9 != 0) {
LAB_016a11bc:
    *(undefined1 **)(lVar9 + 0x18) = puStack_68;
    *(undefined1 **)(lVar9 + 0x10) = local_70;
    *(undefined8 *)(lVar9 + 0x28) = uStack_78;
    *(undefined8 *)(lVar9 + 0x20) = local_80;
  }
LAB_016a11cc:
  *(undefined8 *)(this_01 + 0x10) = uVar8;
  return;
}

