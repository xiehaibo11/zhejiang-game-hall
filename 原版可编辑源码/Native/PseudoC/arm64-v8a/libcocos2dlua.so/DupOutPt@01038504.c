
/* ClipperLib::DupOutPt(ClipperLib::OutPt*, bool) */

void ClipperLib::DupOutPt(OutPt *param_1,bool param_2)

{
  undefined4 *puVar1;
  OutPt *pOVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar1 = operator_new(0x28);
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(puVar1 + 2) = uVar5;
  *puVar1 = *(undefined4 *)param_1;
  if (param_2) {
    pOVar2 = param_1 + 0x18;
    lVar3 = *(long *)pOVar2;
    *(long *)(puVar1 + 6) = lVar3;
    *(OutPt **)(puVar1 + 8) = param_1;
    puVar4 = (undefined8 *)(lVar3 + 0x20);
  }
  else {
    pOVar2 = param_1 + 0x20;
    lVar3 = *(long *)pOVar2;
    *(OutPt **)(puVar1 + 6) = param_1;
    *(long *)(puVar1 + 8) = lVar3;
    puVar4 = (undefined8 *)(lVar3 + 0x18);
  }
  *puVar4 = puVar1;
  *(undefined4 **)pOVar2 = puVar1;
  return;
}

