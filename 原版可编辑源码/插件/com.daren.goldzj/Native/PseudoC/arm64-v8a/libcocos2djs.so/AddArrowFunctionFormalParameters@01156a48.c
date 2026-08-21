
/* v8::internal::Parser::AddArrowFunctionFormalParameters(v8::internal::ParserFormalParameters*,
   v8::internal::Expression*, int) */

void __thiscall
v8::internal::Parser::AddArrowFunctionFormalParameters
          (Parser *this,ParserFormalParameters *param_1,Expression *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong *puVar4;
  Expression *pEVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  Zone *this_00;
  Expression *pEVar9;
  long lVar10;
  ulong uVar11;
  
  while( true ) {
    pEVar5 = param_2;
    uVar6 = *(uint *)(pEVar5 + 4);
    if ((uVar6 & 0x3f) != 0x1b) break;
    lVar8 = *(long *)(pEVar5 + 0x10);
    param_2 = *(Expression **)(pEVar5 + 8);
    if (*(long *)(pEVar5 + 0x18) != lVar8) {
      lVar10 = 0;
      uVar11 = 0;
      do {
        AddArrowFunctionFormalParameters(this,param_1,param_2,*(int *)(lVar8 + lVar10 + 8));
        lVar8 = *(long *)(pEVar5 + 0x10);
        uVar11 = uVar11 + 1;
        param_2 = *(Expression **)(lVar8 + lVar10);
        lVar10 = lVar10 + 0x10;
      } while (uVar11 < (ulong)(*(long *)(pEVar5 + 0x18) - lVar8 >> 4));
    }
  }
  pEVar9 = pEVar5;
  if ((uVar6 & 0x3f) == 0x1a) {
    pEVar9 = *(Expression **)(pEVar5 + 0x10);
    AddArrowFunctionFormalParameters(this,param_1,*(Expression **)(pEVar5 + 8),*(int *)pEVar5);
    uVar6 = *(uint *)(pEVar9 + 4);
  }
  uVar1 = uVar6 & 0x3f;
  if (uVar1 == 0x2d) {
    pEVar9 = *(Expression **)(pEVar9 + 0x10);
    param_1[8] = (ParserFormalParameters)0x1;
    uVar6 = *(uint *)(pEVar9 + 4);
  }
  if ((uVar6 & 0x3f) == 0x18) {
    pEVar5 = *(Expression **)(pEVar9 + 8);
    uVar11 = *(ulong *)(pEVar9 + 0x10);
  }
  else {
    uVar11 = 0;
    pEVar5 = pEVar9;
  }
  if ((uVar1 == 0x2d) || (uVar11 != 0)) {
    iVar7 = *(int *)(param_1 + 0x10);
  }
  else {
    iVar2 = *(int *)(param_1 + 0xc);
    iVar7 = *(int *)(param_1 + 0x10);
    if (iVar2 == *(int *)(param_1 + 0x10)) {
      *(int *)(param_1 + 0xc) = iVar2 + 1;
      iVar7 = iVar2;
    }
  }
  *(int *)(param_1 + 0x10) = iVar7 + 1;
  this_00 = (Zone *)**(undefined8 **)param_1;
  puVar4 = *(ulong **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar4) < 0x20) {
    puVar4 = (ulong *)Zone::NewExpand(this_00,0x20);
  }
  else {
    *(ulong **)(this_00 + 0x10) = puVar4 + 4;
  }
  uVar3 = *(undefined4 *)**(undefined8 **)(this + 0xf8);
  *puVar4 = uVar11 | uVar1 == 0x2d;
  puVar4[1] = (ulong)pEVar5;
  *(undefined4 *)(puVar4 + 2) = uVar3;
  *(int *)((long)puVar4 + 0x14) = param_3;
  puVar4[3] = 0;
  **(long **)(param_1 + 0x20) = (long)puVar4;
  *(ulong **)(param_1 + 0x20) = puVar4 + 3;
  return;
}

