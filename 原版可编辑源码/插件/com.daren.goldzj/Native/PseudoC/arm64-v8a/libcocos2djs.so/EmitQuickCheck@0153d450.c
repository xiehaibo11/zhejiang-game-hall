
/* v8::internal::RegExpNode::EmitQuickCheck(v8::internal::RegExpCompiler*, v8::internal::Trace*,
   v8::internal::Trace*, bool, v8::internal::Label*, v8::internal::QuickCheckDetails*, bool,
   v8::internal::ChoiceNode*) */

undefined8
v8::internal::RegExpNode::EmitQuickCheck
          (RegExpCompiler *param_1,Trace *param_2,Trace *param_3,bool param_4,Label *param_5,
          QuickCheckDetails *param_6,bool param_7,ChoiceNode *param_8)

{
  Trace TVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  uint *puVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  uint uVar9;
  code *pcVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  long *plVar15;
  
  puVar8 = (uint *)(ulong)param_7;
  puVar5 = (uint *)(ulong)param_4;
  if (*puVar8 == 0) {
    return 0;
  }
  (**(code **)(*(long *)param_1 + 0x28))(param_1,puVar8,param_2,0,puVar5[0x17] == 0);
  if ((char)puVar8[9] != '\0') {
    return 0;
  }
  TVar1 = param_2[0x30];
  uVar6 = *puVar8;
  uVar7 = (ulong)uVar6;
  uVar9 = 0xff;
  if (TVar1 == (Trace)0x0) {
    uVar9 = 0xffff;
  }
  puVar8[7] = 0;
  puVar8[8] = 0;
  if ((int)uVar6 < 1) {
    return 0;
  }
  uVar13 = 0;
  uVar14 = 0;
  bVar4 = false;
  uVar11 = 0;
  iVar12 = 8;
  puVar2 = puVar8;
  if (TVar1 == (Trace)0x0) {
    iVar12 = 0x10;
  }
  do {
    uVar3 = puVar2[1];
    uVar14 = (uVar9 & (ushort)uVar3) << (ulong)(uVar11 & 0x1f) | uVar14;
    puVar8[7] = uVar14;
    uVar7 = uVar7 - 1;
    bVar4 = (bool)(bVar4 | ((ushort)uVar3 & 0xff) != 0);
    uVar3 = uVar11 & 0x1f;
    uVar11 = uVar11 + iVar12;
    uVar13 = (uVar9 & *(ushort *)((long)puVar2 + 6)) << (ulong)uVar3 | uVar13;
    puVar8[8] = uVar13;
    puVar2 = (uint *)((long)puVar2 + 6);
  } while (uVar7 != 0);
  if (!bVar4) {
    return 0;
  }
  plVar15 = *(long **)(param_2 + 0x28);
  if (puVar5[10] != uVar6) {
    RegExpMacroAssembler::LoadCurrentCharacter
              ((int)plVar15,(Label *)(ulong)*puVar5,SUB81(*(undefined8 *)(param_3 + 0x10),0),
               ~(uint)param_5 & 1,uVar6);
    uVar6 = *puVar8;
  }
  if (uVar6 == 2) {
    if (param_2[0x30] != (Trace)0x0) {
      bVar4 = ((uVar14 ^ 0xffffffff) & 0xffff) != 0;
      goto joined_r0x0153d620;
    }
  }
  else if (uVar6 == 1) {
    uVar9 = 0xffff;
    if (param_2[0x30] != (Trace)0x0) {
      uVar9 = 0xff;
    }
    uVar14 = uVar9 & uVar14;
    bVar4 = uVar14 != uVar9;
    goto joined_r0x0153d620;
  }
  bVar4 = uVar14 != 0xffffffff;
joined_r0x0153d620:
  if (((ulong)param_8 & 1) == 0) {
    param_6 = *(QuickCheckDetails **)(puVar5 + 4);
    if (bVar4) {
      (**(code **)(*plVar15 + 0x98))(plVar15,uVar13,uVar14);
      return 1;
    }
    pcVar10 = *(code **)(*plVar15 + 0x90);
  }
  else {
    if (bVar4) {
      (**(code **)(*plVar15 + 0x50))(plVar15,uVar13,uVar14,param_6);
      return 1;
    }
    pcVar10 = *(code **)(*plVar15 + 0x48);
  }
  (*pcVar10)(plVar15,uVar13,param_6);
  return 1;
}

