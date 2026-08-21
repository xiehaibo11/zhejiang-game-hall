
/* v8::internal::compiler::BytecodeGraphBuilder::MakeNode(v8::internal::compiler::Operator const*,
   int, v8::internal::compiler::Node* const*, bool) */

long * __thiscall
v8::internal::compiler::BytecodeGraphBuilder::MakeNode
          (BytecodeGraphBuilder *this,Operator *param_1,int param_2,Node **param_3,bool param_4)

{
  Node **ppNVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  Graph *this_00;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  Zone *this_01;
  Node *pNVar10;
  Operator *pOVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  Node **__dest;
  ulong uVar15;
  long lVar16;
  long lVar17;
  Node **ppNVar18;
  undefined8 *puVar19;
  Node *local_70;
  Node *pNStack_68;
  
  uVar7 = OperatorProperties::HasContextInput(param_1);
  uVar8 = OperatorProperties::HasFrameStateInput(param_1);
  iVar4 = *(int *)(param_1 + 0x18);
  iVar5 = *(int *)(param_1 + 0x1c);
  if (((((uVar7 & 1) == 0) && ((uVar8 & 1) == 0)) && (iVar5 != 1)) && (iVar4 != 1)) {
    plVar9 = (long *)Graph::NewNode((Graph *)**(undefined8 **)(this + 0x10),param_1,param_2,param_3,
                                    param_4);
    return plVar9;
  }
  iVar3 = (uVar7 & 1) + param_2 + (uVar8 & 1);
  lVar17 = *(long *)(this + 0x138);
  if (iVar5 == 1) {
    iVar3 = iVar3 + 1;
  }
  if (iVar4 == 1) {
    iVar3 = iVar3 + 1;
  }
  if (*(int *)(this + 0x154) < iVar3) {
    this_01 = *(Zone **)(this + 8);
    uVar2 = iVar3 + *(int *)(this + 0x154) + 0x40;
    __dest = *(Node ***)(this_01 + 0x10);
    uVar15 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3;
    if ((ulong)(*(long *)(this_01 + 0x18) - (long)__dest) < uVar15) {
      __dest = (Node **)Zone::NewExpand(this_01,uVar15);
    }
    else {
      *(ulong *)(this_01 + 0x10) = (long)__dest + uVar15;
    }
    *(uint *)(this + 0x154) = uVar2;
    *(Node ***)(this + 0x158) = __dest;
  }
  else {
    __dest = *(Node ***)(this + 0x158);
  }
  if (0 < param_2) {
    memcpy(__dest,param_3,(long)(param_2 << 3));
  }
  ppNVar1 = __dest + param_2;
  if ((uVar7 & 1) != 0) {
    uVar15 = OperatorProperties::NeedsExactContext(param_1);
    if ((uVar15 & 1) == 0) {
      pNStack_68 = *(Node **)(this + 0x20);
      local_70 = *(Node **)(this + 0x18);
      pNVar10 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),(ObjectRef *)&local_70);
    }
    else {
      pNVar10 = *(Node **)(*(long *)(this + 0xa8) + 0x10);
    }
    *ppNVar1 = pNVar10;
    ppNVar1 = ppNVar1 + 1;
  }
  ppNVar18 = ppNVar1;
  if ((uVar8 & 1) != 0) {
    puVar19 = *(undefined8 **)(this + 0x10);
    pNVar10 = (Node *)puVar19[0x2c];
    if (pNVar10 == (Node *)0x0) {
      this_00 = (Graph *)*puVar19;
      pOVar11 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar19[1]);
      local_70 = (Node *)0x0;
      pNVar10 = (Node *)Graph::NewNode(this_00,pOVar11,0,&local_70,false);
      puVar19[0x2c] = pNVar10;
    }
    ppNVar18 = ppNVar1 + 1;
    *ppNVar1 = pNVar10;
  }
  if (iVar4 == 1) {
    *ppNVar18 = *(Node **)(*(long *)(this + 0xa8) + 0x20);
    ppNVar18 = ppNVar18 + 1;
  }
  if (iVar5 == 1) {
    *ppNVar18 = *(Node **)(*(long *)(this + 0xa8) + 0x18);
  }
  pNVar10 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 0x10),param_1,iVar3,__dest,
                                   param_4);
  lVar16 = *(long *)pNVar10;
  if (0 < *(int *)(lVar16 + 0x28)) {
    *(Node **)(*(long *)(this + 0xa8) + 0x18) = pNVar10;
    lVar16 = *(long *)pNVar10;
  }
  if (*(char *)(lVar16 + 0x24) != '\0') {
    *(Node **)(*(long *)(this + 0xa8) + 0x20) = pNVar10;
    lVar16 = *(long *)pNVar10;
  }
  uVar7 = (uint)*(byte *)(lVar16 + 0x12);
  if ((lVar17 != 0) && ((*(byte *)(lVar16 + 0x12) >> 5 & 1) == 0)) {
    uVar15 = (*(long *)(this + 0x138) + *(long *)(this + 0x130)) - 1;
    lVar16 = *(long *)(*(long *)(this + 0x108) + (uVar15 >> 5 & 0x7fffffffffffff8)) +
             (uVar15 & 0xff) * 0x10;
    iVar5 = *(int *)(lVar16 + 8);
    uVar6 = *(undefined4 *)(lVar16 + 0xc);
    uVar12 = Environment::Copy(*(Environment **)(this + 0xa8));
    pOVar11 = (Operator *)
              CommonOperatorBuilder::IfException
                        (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8));
    local_70 = *(Node **)(*(long *)(this + 0xa8) + 0x20);
    pNStack_68 = pNVar10;
    uVar13 = Graph::NewNode((Graph *)**(undefined8 **)(this + 0x10),pOVar11,2,&local_70,false);
    uVar14 = Environment::LookupRegister(*(Environment **)(this + 0xa8),uVar6);
    *(undefined8 *)(*(long *)(this + 0xa8) + 0x18) = uVar13;
    *(undefined8 *)(*(long *)(this + 0xa8) + 0x20) = uVar13;
    lVar16 = *(long *)(this + 0xa8);
    if ((ulong)(*(long *)(lVar16 + 0x30) - *(long *)(lVar16 + 0x28) >> 3) <=
        (ulong)(long)*(int *)(lVar16 + 0x5c)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(*(long *)(lVar16 + 0x28) + (long)*(int *)(lVar16 + 0x5c) * 8) = uVar13;
    *(undefined8 *)(*(long *)(this + 0xa8) + 0x10) = uVar14;
    MergeIntoSuccessorEnvironment(this,iVar5);
    *(undefined8 *)(this + 0xa8) = uVar12;
    uVar7 = (uint)*(byte *)(*(long *)pNVar10 + 0x12);
  }
  if ((lVar17 != 0) && ((uVar7 >> 5 & 1) == 0)) {
    pOVar11 = (Operator *)
              CommonOperatorBuilder::IfSuccess
                        (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8));
    local_70 = pNVar10;
    uVar12 = Graph::NewNode((Graph *)**(undefined8 **)(this + 0x10),pOVar11,1,&local_70,false);
    *(undefined8 *)(*(long *)(this + 0xa8) + 0x18) = uVar12;
  }
  if ((iVar4 == 1) && ((*(byte *)(*(long *)pNVar10 + 0x12) >> 4 & 1) == 0)) {
    this[0x160] = (BytecodeGraphBuilder)0x1;
  }
  return (long *)pNVar10;
}

