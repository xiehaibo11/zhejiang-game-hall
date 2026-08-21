
/* v8::internal::RegExpDisjunction::ToNode(v8::internal::RegExpCompiler*, v8::internal::RegExpNode*)
    */

undefined8 * __thiscall
v8::internal::RegExpDisjunction::ToNode
          (RegExpDisjunction *this,RegExpCompiler *param_1,RegExpNode *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  Zone *pZVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  
  plVar7 = *(long **)(this + 8);
  uVar8 = *(uint *)((long)plVar7 + 0xc);
  if (2 < (int)uVar8) {
    uVar1 = SortConsecutiveAtoms(this,param_1);
    if ((uVar1 & 1) != 0) {
      RationalizeConsecutiveAtoms(this,param_1);
    }
    FixSingleCharacterDisjunctions(this,param_1);
    uVar8 = *(uint *)((long)plVar7 + 0xc);
    if (uVar8 == 1) {
                    /* WARNING: Could not recover jumptable at 0x01536838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar2 = (undefined8 *)
               (**(code **)(**(long **)*plVar7 + 0x18))(*(long **)*plVar7,param_1,param_2);
      return puVar2;
    }
  }
  pZVar3 = *(Zone **)(param_1 + 0x448);
  puVar2 = *(undefined8 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar2) < 0x48) {
    puVar2 = (undefined8 *)Zone::NewExpand(pZVar3,0x48);
  }
  else {
    *(undefined8 **)(pZVar3 + 0x10) = puVar2 + 9;
  }
  pZVar3 = *(Zone **)(param_1 + 0x448);
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = pZVar3;
  *puVar2 = &PTR__RegExpNode_01cc8800;
  puVar2[1] = 0;
  plVar4 = *(long **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)plVar4) < 0x10) {
    plVar4 = (long *)Zone::NewExpand(pZVar3,0x10);
  }
  else {
    *(long **)(pZVar3 + 0x10) = plVar4 + 2;
  }
  if ((int)uVar8 < 1) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(pZVar3 + 0x10);
    uVar1 = (ulong)uVar8 * 0x10;
    if (uVar1 < (ulong)(*(long *)(pZVar3 + 0x18) - lVar6) ||
        uVar1 - (*(long *)(pZVar3 + 0x18) - lVar6) == 0) {
      *(ulong *)(pZVar3 + 0x10) = lVar6 + uVar1;
    }
    else {
      lVar6 = Zone::NewExpand(pZVar3,uVar1);
    }
  }
  *plVar4 = lVar6;
  *(uint *)(plVar4 + 1) = uVar8;
  *(undefined4 *)((long)plVar4 + 0xc) = 0;
  puVar2[7] = plVar4;
  *(undefined2 *)(puVar2 + 8) = 0;
  if (0 < (int)uVar8) {
    lVar6 = 0;
    do {
      uVar5 = (**(code **)(**(long **)(*plVar7 + lVar6) + 0x18))
                        (*(long **)(*plVar7 + lVar6),param_1,param_2);
      ChoiceNode::AddAlternative(puVar2,uVar5,0);
      lVar6 = lVar6 + 8;
    } while ((ulong)uVar8 * 8 - lVar6 != 0);
  }
  return puVar2;
}

