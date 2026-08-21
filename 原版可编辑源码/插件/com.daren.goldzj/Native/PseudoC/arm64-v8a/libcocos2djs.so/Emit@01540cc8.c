
/* v8::internal::ChoiceNode::Emit(v8::internal::RegExpCompiler*, v8::internal::Trace*) */

void __thiscall
v8::internal::ChoiceNode::Emit(ChoiceNode *this,RegExpCompiler *param_1,Trace *param_2)

{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  Malloced *this_00;
  void *extraout_x1;
  void *extraout_x1_00;
  void *pvVar8;
  void *extraout_x1_01;
  undefined8 *puVar9;
  int iVar10;
  ChoiceNode *pCVar11;
  long lVar12;
  int iVar13;
  undefined8 local_3a0;
  long lStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 local_348;
  long local_340;
  int local_334;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined8 local_c8;
  undefined4 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined4 local_96;
  undefined1 local_92;
  undefined4 local_90;
  undefined1 local_8c;
  undefined4 local_8a;
  undefined1 local_86;
  undefined8 local_84;
  undefined1 local_7c;
  undefined8 local_78;
  PreloadState aPStack_70 [4];
  undefined4 local_6c;
  undefined4 local_68;
  
  uVar2 = *(uint *)((long)*(undefined8 **)(this + 0x38) + 0xc);
  if ((uVar2 == 1) && (puVar9 = (undefined8 *)**(undefined8 **)(this + 0x38), puVar9[1] == 0)) {
    plVar6 = (long *)*puVar9;
                    /* WARNING: Could not recover jumptable at 0x01540e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x18))(plVar6,param_1,param_2);
    return;
  }
  iVar4 = RegExpNode::LimitVersions((RegExpNode *)this,param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  if ((*(int *)(param_2 + 0x58) == 0) && (*(long *)(param_2 + 8) != 0)) {
    Trace::Flush(param_2,param_1,(RegExpNode *)this);
    return;
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  local_68 = 0xffffffff;
  local_d4 = 0;
  local_d8 = 0;
  local_96 = 0;
  local_92 = 0;
  local_90 = 0;
  local_8c = 0;
  local_8a = 0;
  local_86 = 0;
  local_7c = 0;
  local_c8 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_a0 = 0;
  local_a8 = 0;
  local_84 = 0;
  puStack_c0 = &local_d8;
  local_98 = 0;
  local_78 = 0xffffffff00000064;
  if (this[0x40] != (ChoiceNode)0x0) {
    local_78 = 100;
  }
  pCVar11 = *(ChoiceNode **)**(undefined8 **)(this + 0x38);
  if (pCVar11 == this) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    iVar13 = 0x66;
    do {
      iVar13 = iVar13 + -1;
      iVar10 = -0x80000000;
      if ((iVar13 == 0) ||
         (iVar5 = (**(code **)(*(long *)pCVar11 + 0x38))(pCVar11), iVar5 == -0x80000000))
      goto LAB_01540e74;
      pCVar11 = *(ChoiceNode **)(pCVar11 + 0x38);
      iVar4 = iVar5 + iVar4;
    } while (pCVar11 != this);
  }
  uVar7 = (**(code **)(*(long *)this + 0x60))(this);
  iVar10 = -iVar4;
  if ((uVar7 & 1) == 0) {
    iVar10 = iVar4;
  }
LAB_01540e74:
  AlternativeGenerationList::AlternativeGenerationList
            ((AlternativeGenerationList *)&local_340,uVar2,*(Zone **)(this + 0x30));
  if (((int)uVar2 < 2) || (iVar10 == -0x80000000)) {
    local_3a0 = 0;
    (**(code **)(**(long **)(param_1 + 0x28) + 0x40))(*(long **)(param_1 + 0x28),&local_3a0);
    local_68 = EmitOptimizedUnanchoredSearch((RegExpCompiler *)this,(Trace *)param_1);
    EmitChoices(this,param_1,(AlternativeGenerationList *)&local_340,0,param_2,aPStack_70);
    pvVar8 = extraout_x1;
    if ((int)uVar2 < 1) goto LAB_01540fb0;
  }
  else {
    param_2 = (Trace *)EmitGreedyLoop(this,param_1,param_2,(AlternativeGenerationList *)&local_340,
                                      aPStack_70,(GreedyLoopState *)&local_d8,iVar10);
  }
  lVar12 = 0;
  iVar4 = 0;
  if (uVar2 != 0) {
    iVar4 = *(int *)(param_2 + 0x58) / (int)uVar2;
  }
  uVar7 = 0;
  do {
    lStack_398 = *(long *)(param_2 + 8);
    local_3a0 = *(undefined8 *)param_2;
    uStack_388 = *(undefined8 *)(param_2 + 0x18);
    uStack_390 = *(undefined8 *)(param_2 + 0x10);
    uStack_358 = *(undefined8 *)(param_2 + 0x48);
    local_360 = *(undefined8 *)(param_2 + 0x40);
    local_348 = *(undefined8 *)(param_2 + 0x58);
    uStack_350 = *(undefined8 *)(param_2 + 0x50);
    uStack_378 = *(undefined8 *)(param_2 + 0x28);
    local_380 = *(undefined8 *)(param_2 + 0x20);
    uStack_368 = *(undefined8 *)(param_2 + 0x38);
    uStack_370 = *(undefined8 *)(param_2 + 0x30);
    if (lStack_398 != 0) {
      uVar1 = (ulong)local_348 >> 0x20;
      local_348 = CONCAT44((int)uVar1,iVar4);
    }
    uVar1 = uVar7 + 1;
    if (uVar2 - 1 == uVar7) {
      bVar3 = false;
    }
    else {
      bVar3 = *(char *)(*(long *)(local_340 + uVar7 * 8 + 8) + 8) != '\0';
    }
    EmitOutOfLineContinuation
              (this,param_1,&local_3a0,*(undefined8 *)(**(long **)(this + 0x38) + lVar12),
               ((undefined8 *)(**(long **)(this + 0x38) + lVar12))[1],
               *(undefined8 *)(local_340 + uVar7 * 8),local_6c,bVar3);
    lVar12 = lVar12 + 0x10;
    pvVar8 = extraout_x1_00;
    uVar7 = uVar1;
  } while (uVar2 != uVar1);
LAB_01540fb0:
  if (10 < local_334) {
    lVar12 = 10;
    do {
      this_00 = *(Malloced **)(local_340 + lVar12 * 8);
      if (this_00 != (Malloced *)0x0) {
        Malloced::operator_delete(this_00,pvVar8);
        pvVar8 = extraout_x1_01;
      }
      *(undefined8 *)(local_340 + lVar12 * 8) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < local_334);
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  return;
}

