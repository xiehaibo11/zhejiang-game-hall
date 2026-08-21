
/* v8::internal::compiler::CheckpointElimination::ReduceCheckpoint(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::CheckpointElimination::ReduceCheckpoint
          (CheckpointElimination *this,Node *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  Node *pNVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar2 = (undefined8 *)NodeProperties::GetFrameStateInput(param_1);
  if (*(short *)((Operator *)*puVar2 + 0x10) == 0x29) {
    lVar3 = FrameStateInfoOf((Operator *)*puVar2);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 != 0) {
      pNVar4 = (Node *)NodeProperties::GetEffectInput(param_1,0);
      lVar6 = *(long *)pNVar4;
      bVar1 = *(byte *)(lVar6 + 0x12);
      while( true ) {
        if ((bVar1 >> 4 & 1) == 0) {
          return 0;
        }
        if (*(int *)(lVar6 + 0x18) != 1) {
          return 0;
        }
        if (*(short *)(lVar6 + 0x10) == 0x26) break;
        pNVar4 = (Node *)NodeProperties::GetEffectInput(pNVar4,0);
        lVar6 = *(long *)pNVar4;
        bVar1 = *(byte *)(lVar6 + 0x12);
      }
      puVar2 = (undefined8 *)NodeProperties::GetFrameStateInput(pNVar4);
      if (*(short *)((Operator *)*puVar2 + 0x10) == 0x29) {
        lVar6 = FrameStateInfoOf((Operator *)*puVar2);
        if (*(long *)(lVar6 + 0x10) == lVar3) {
LAB_01680fac:
          uVar5 = NodeProperties::GetEffectInput(param_1,0);
          return uVar5;
        }
      }
      else if (lVar3 == 0) goto LAB_01680fac;
    }
  }
  return 0;
}

