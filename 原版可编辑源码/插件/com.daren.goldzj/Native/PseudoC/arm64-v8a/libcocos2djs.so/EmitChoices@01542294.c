
/* v8::internal::ChoiceNode::EmitChoices(v8::internal::RegExpCompiler*,
   v8::internal::AlternativeGenerationList*, int, v8::internal::Trace*, v8::internal::PreloadState*)
    */

void __thiscall
v8::internal::ChoiceNode::EmitChoices
          (ChoiceNode *this,RegExpCompiler *param_1,AlternativeGenerationList *param_2,int param_3,
          Trace *param_4,PreloadState *param_5)

{
  uint uVar1;
  RegExpCompiler *pRVar2;
  undefined4 uVar3;
  PreloadState PVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined4 *puVar9;
  code *pcVar10;
  uint uVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  QuickCheckDetails *pQVar20;
  QuickCheckDetails *pQVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 local_d0;
  long lStack_c8;
  QuickCheckDetails *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  uVar16 = *(uint *)(param_5 + 8);
  plVar19 = *(long **)(param_1 + 0x28);
  plVar7 = plVar19;
  if (uVar16 == 0xffffffff) {
    lVar18 = 0x1a;
    if (*(int *)(param_4 + 0x5c) == 0) {
      lVar18 = 0x1b;
    }
    uVar16 = (uint)(byte)this[lVar18];
    *(uint *)(param_5 + 8) = uVar16;
    plVar7 = *(long **)(param_1 + 0x28);
  }
  uVar11 = uVar16;
  if (3 < (int)uVar16) {
    uVar11 = 4;
  }
  uVar8 = (**(code **)(*plVar7 + 0x20))();
  if ((uVar8 & 1) == 0) {
    if (0 < (int)uVar11) {
      uVar16 = 1;
    }
  }
  else {
    uVar1 = 2;
    if (uVar11 != 3) {
      uVar1 = uVar11;
    }
    if (1 < (int)uVar11) {
      uVar16 = 2;
    }
    if (param_1[0x30] != (RegExpCompiler)0x0) {
      uVar16 = uVar1;
    }
  }
  *(uint *)(param_5 + 4) = uVar16;
  uVar11 = *(uint *)(param_4 + 0x28);
  *param_5 = (PreloadState)(uVar11 == uVar16);
  param_5[1] = (PreloadState)(uVar11 == uVar16);
  plVar7 = *(long **)(this + 0x38);
  iVar5 = *(int *)((long)plVar7 + 0xc);
  if (iVar5 <= param_3) {
    return;
  }
  lVar17 = (long)param_3;
  lVar15 = (long)iVar5 + -1;
  iVar6 = 0;
  lVar18 = lVar17;
  if (iVar5 != 0) {
    iVar6 = *(int *)(param_4 + 0x58) / iVar5;
  }
  do {
    puVar14 = (undefined8 *)(*plVar7 + lVar18 * 0x10);
    pRVar2 = (RegExpCompiler *)*puVar14;
    plVar7 = (long *)puVar14[1];
    pQVar20 = *(QuickCheckDetails **)(*(long *)param_2 + lVar18 * 8);
    pQVar21 = pQVar20 + 0x14;
    *(uint *)pQVar21 = uVar16;
    if (plVar7 == (long *)0x0) {
      uVar16 = 0;
    }
    else {
      uVar16 = *(uint *)((long)plVar7 + 0xc);
    }
    lStack_c8 = *(long *)(param_4 + 8);
    local_d0 = *(undefined8 *)param_4;
    uStack_b8 = *(undefined8 *)(param_4 + 0x18);
    local_c0 = *(QuickCheckDetails **)(param_4 + 0x10);
    uVar25 = *(undefined8 *)(param_4 + 0x48);
    uVar24 = *(undefined8 *)(param_4 + 0x40);
    uVar8 = *(ulong *)(param_4 + 0x58);
    uVar23 = *(undefined8 *)(param_4 + 0x50);
    local_b0 = *(undefined8 *)(param_4 + 0x20);
    uVar26 = *(undefined8 *)(param_4 + 0x38);
    local_a0 = *(ulong *)(param_4 + 0x30);
    PVar4 = *param_5;
    if (PVar4 == (PreloadState)0x0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined4 *)(param_5 + 4);
    }
    uStack_a8._4_4_ = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x28) >> 0x20);
    if (param_5[1] != (PreloadState)0x0) {
      uStack_a8._4_4_ = *(undefined4 *)(param_5 + 4);
    }
    uStack_a8 = CONCAT44(uStack_a8._4_4_,uVar12);
    uVar13 = local_a0 & 0xffffffff;
    puVar14 = &uStack_98;
    if (0 < (int)local_a0) {
      do {
        *(undefined4 *)((long)puVar14 + -4) = 0;
        *(undefined1 *)puVar14 = 0;
        uVar13 = uVar13 - 1;
        puVar14 = (undefined8 *)((long)puVar14 + 6);
      } while (uVar13 != 0);
    }
    local_a0 = local_a0 & 0xffffffff00000000;
    local_78 = uVar8;
    if (this[0x40] != (ChoiceNode)0x0) {
      local_78 = uVar8 & 0xffffffff;
    }
    if (lVar18 != lVar15) {
      local_c0 = pQVar20 + 0xc;
    }
    *(PreloadState *)(pQVar20 + 8) = PVar4;
    uStack_98 = uVar26;
    local_90 = uVar24;
    uStack_88 = uVar25;
    uStack_80 = uVar23;
    if (((param_1[0x33] == (RegExpCompiler)0x0) ||
        (uVar8 = (**(code **)(*(long *)this + 0x58))(this,lVar18 == 0), (uVar8 & 1) == 0)) ||
       (uVar8 = RegExpNode::EmitQuickCheck
                          (pRVar2,(Trace *)param_1,param_4,SUB81(&local_d0,0),
                           (Label *)(ulong)(byte)param_5[1],pQVar20,SUB81(pQVar21,0),
                           (ChoiceNode *)(ulong)(lVar18 != lVar15)), (uVar8 & 1) == 0)) {
      if (pQVar20[0x38] == (QuickCheckDetails)0x0) {
        if (lVar18 != lVar17) {
          pQVar20[8] = (QuickCheckDetails)0x0;
          uStack_a8 = uStack_a8 & 0xffffffff00000000;
        }
        goto joined_r0x0154254c;
      }
      if (lVar18 == lVar15) {
        pQVar20 = *(QuickCheckDetails **)(param_4 + 0x10);
        pcVar10 = *(code **)(*plVar19 + 0xe0);
        goto LAB_015425ec;
      }
    }
    else {
      *(undefined2 *)param_5 = 0x101;
      if (lVar18 == lVar15) {
        (**(code **)(*plVar19 + 0x40))(plVar19,pQVar20);
        uStack_98 = *(undefined8 *)(pQVar20 + 0x1c);
        local_a0 = *(ulong *)pQVar21;
        local_90 = *(undefined8 *)(pQVar20 + 0x24);
        uStack_a8 = CONCAT44(*(undefined4 *)(param_5 + 4),*(undefined4 *)(param_5 + 4));
joined_r0x0154254c:
        if (lStack_c8 != 0) {
          uVar8 = local_78 >> 0x20;
          local_78 = CONCAT44((int)uVar8,iVar6);
        }
        if (0 < (int)uVar16) {
          lVar22 = 0;
          do {
            puVar9 = *(undefined4 **)(*plVar7 + lVar22);
            if (puVar9[1] == 1) {
              uVar12 = *puVar9;
              uVar3 = puVar9[2];
              pcVar10 = *(code **)(*plVar19 + 0xf0);
LAB_01542584:
              (*pcVar10)(plVar19,uVar12,uVar3,local_c0);
            }
            else if (puVar9[1] == 0) {
              uVar12 = *puVar9;
              uVar3 = puVar9[2];
              pcVar10 = *(code **)(*plVar19 + 0xe8);
              goto LAB_01542584;
            }
            lVar22 = lVar22 + 8;
          } while ((ulong)uVar16 * 8 - lVar22 != 0);
        }
        (**(code **)(*(long *)pRVar2 + 0x18))(pRVar2,param_1,&local_d0);
        *param_5 = (PreloadState)0x0;
      }
      pQVar20 = pQVar20 + 0xc;
      pcVar10 = *(code **)(*plVar19 + 0x40);
LAB_015425ec:
      (*pcVar10)(plVar19,pQVar20);
    }
    if (iVar5 == (int)(lVar18 + 1)) {
      return;
    }
    plVar7 = *(long **)(this + 0x38);
    uVar16 = *(uint *)(param_5 + 4);
    lVar18 = lVar18 + 1;
  } while( true );
}

