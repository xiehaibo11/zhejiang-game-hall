
/* v8::internal::compiler::SimdScalarLowering::LowerConvertFromFloat(v8::internal::compiler::Node*,
   bool) */

void __thiscall
v8::internal::compiler::SimdScalarLowering::LowerConvertFromFloat
          (SimdScalarLowering *this,Node *param_1,bool param_2)

{
  CommonOperatorBuilder *this_00;
  long lVar1;
  Operator *pOVar2;
  undefined8 uVar3;
  CommonOperatorBuilder *pCVar4;
  Graph *pGVar5;
  undefined8 uVar6;
  Graph *pGVar7;
  undefined8 uVar8;
  CommonOperatorBuilder *pCVar9;
  Node *pNVar10;
  undefined8 *puVar11;
  MachineOperatorBuilder *this_01;
  Zone *this_02;
  double dVar12;
  long lVar13;
  Graph *pGVar14;
  double dVar15;
  CommonOperatorBuilder *local_140;
  Graph *pGStack_138;
  undefined8 local_130;
  undefined8 local_118;
  Graph *local_110;
  CommonOperatorBuilder *pCStack_108;
  undefined8 local_100;
  undefined8 local_e8;
  Node *local_e0;
  Graph *pGStack_d8;
  undefined8 local_b8;
  undefined8 local_b0 [4];
  Node *local_90;
  CommonOperatorBuilder *pCStack_88;
  undefined8 local_80;
  
  pNVar10 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar10 = (Node *)(*(long *)pNVar10 + 0x10);
  }
  lVar1 = GetReplacementsWithType(this,*(undefined8 *)pNVar10,1);
  pGVar5 = (Graph *)**(undefined8 **)this;
  pOVar2 = (Operator *)
           CommonOperatorBuilder::Float64Constant
                     ((CommonOperatorBuilder *)(*(undefined8 **)this)[1],0.0);
  local_e0 = (Node *)0x0;
  uVar3 = Graph::NewNode(pGVar5,pOVar2,0,&local_e0,false);
  pGVar5 = (Graph *)**(undefined8 **)this;
  dVar12 = 2147483647.0;
  dVar15 = -2147483648.0;
  if (!param_2) {
    dVar15 = 0.0;
    dVar12 = 4294967295.0;
  }
  pOVar2 = (Operator *)
           CommonOperatorBuilder::Float64Constant
                     ((CommonOperatorBuilder *)(*(undefined8 **)this)[1],dVar15);
  local_e0 = (Node *)0x0;
  pCVar4 = (CommonOperatorBuilder *)Graph::NewNode(pGVar5,pOVar2,0,&local_e0,false);
  pGVar5 = (Graph *)**(undefined8 **)this;
  pOVar2 = (Operator *)
           CommonOperatorBuilder::Float64Constant
                     ((CommonOperatorBuilder *)(*(undefined8 **)this)[1],dVar12);
  local_e0 = (Node *)0x0;
  pGVar5 = (Graph *)Graph::NewNode(pGVar5,pOVar2,0,&local_e0,false);
  puVar11 = *(undefined8 **)this;
  lVar13 = 0;
  pGVar14 = (Graph *)*puVar11;
  do {
    pOVar2 = (Operator *)
             MachineOperatorBuilder::ChangeFloat32ToFloat64((MachineOperatorBuilder *)puVar11[2]);
    local_e0 = *(Node **)(lVar1 + lVar13);
    pGVar7 = (Graph *)Graph::NewNode(pGVar14,pOVar2,1,&local_e0,false);
    puVar11 = *(undefined8 **)this;
    pGVar14 = (Graph *)*puVar11;
    uVar6 = puVar11[1];
    pOVar2 = (Operator *)MachineOperatorBuilder::Float64Equal((MachineOperatorBuilder *)puVar11[2]);
    local_e0 = (Node *)pGVar7;
    pGStack_d8 = pGVar7;
    uVar8 = Graph::NewNode(pGVar14,pOVar2,2,&local_e0,false);
    Diamond::Diamond((Diamond *)&local_e0,pGVar14,uVar6,uVar8,0);
    pNVar10 = local_e0;
    pOVar2 = (Operator *)CommonOperatorBuilder::Phi((CommonOperatorBuilder *)pGStack_d8,0xc,2);
    local_100 = local_b8;
    local_110 = pGVar7;
    pCStack_108 = (CommonOperatorBuilder *)uVar3;
    pGVar7 = (Graph *)Graph::NewNode((Graph *)pNVar10,pOVar2,3,(Node **)&local_110,false);
    puVar11 = *(undefined8 **)this;
    pGVar14 = (Graph *)*puVar11;
    uVar6 = puVar11[1];
    pOVar2 = (Operator *)
             MachineOperatorBuilder::Float64LessThan((MachineOperatorBuilder *)puVar11[2]);
    local_110 = pGVar7;
    pCStack_108 = pCVar4;
    uVar8 = Graph::NewNode(pGVar14,pOVar2,2,(Node **)&local_110,false);
    Diamond::Diamond((Diamond *)&local_110,pGVar14,uVar6,uVar8,0);
    pGVar14 = local_110;
    pOVar2 = (Operator *)CommonOperatorBuilder::Phi(pCStack_108,0xc,2);
    local_130 = local_e8;
    local_140 = pCVar4;
    pGStack_138 = pGVar7;
    pCVar9 = (CommonOperatorBuilder *)Graph::NewNode(pGVar14,pOVar2,3,(Node **)&local_140,false);
    puVar11 = *(undefined8 **)this;
    pGVar14 = (Graph *)*puVar11;
    uVar6 = puVar11[1];
    pOVar2 = (Operator *)
             MachineOperatorBuilder::Float64LessThan((MachineOperatorBuilder *)puVar11[2]);
    local_140 = (CommonOperatorBuilder *)pGVar5;
    pGStack_138 = (Graph *)pCVar9;
    uVar8 = Graph::NewNode(pGVar14,pOVar2,2,(Node **)&local_140,false);
    Diamond::Diamond((Diamond *)&local_140,pGVar14,uVar6,uVar8,0);
    this_00 = local_140;
    pOVar2 = (Operator *)CommonOperatorBuilder::Phi((CommonOperatorBuilder *)pGStack_138,0xc,2);
    local_80 = local_118;
    local_90 = (Node *)pGVar5;
    pCStack_88 = pCVar9;
    pNVar10 = (Node *)Graph::NewNode((Graph *)this_00,pOVar2,3,&local_90,false);
    pNVar10 = (Node *)BuildF64Trunc(this,pNVar10);
    pGVar14 = (Graph *)**(undefined8 **)this;
    this_01 = (MachineOperatorBuilder *)(*(undefined8 **)this)[2];
    if (param_2) {
      pOVar2 = (Operator *)MachineOperatorBuilder::ChangeFloat64ToInt32(this_01);
    }
    else {
      pOVar2 = (Operator *)MachineOperatorBuilder::TruncateFloat64ToUint32(this_01);
    }
    local_90 = pNVar10;
    uVar6 = Graph::NewNode(pGVar14,pOVar2,1,&local_90,false);
    *(undefined8 *)((long)local_b0 + lVar13) = uVar6;
    puVar11 = *(undefined8 **)this;
    lVar13 = lVar13 + 8;
    pGVar14 = (Graph *)*puVar11;
  } while (lVar13 != 0x20);
  this_02 = *(Zone **)pGVar14;
  lVar1 = *(long *)(this_02 + 0x10);
  if ((ulong)(*(long *)(this_02 + 0x18) - lVar1) < 0x20) {
    lVar1 = Zone::NewExpand(this_02,0x20);
  }
  else {
    *(long *)(this_02 + 0x10) = lVar1 + 0x20;
  }
  *(long *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) = lVar1;
  **(undefined8 **)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) =
       local_b0[0];
  *(undefined8 *)
   (*(long *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) + 8) =
       local_b0[1];
  *(undefined8 *)
   (*(long *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) + 0x10)
       = local_b0[2];
  *(undefined8 *)
   (*(long *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) + 0x18)
       = local_b0[3];
  *(undefined4 *)
   (*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 0xc) = 4;
  return;
}

