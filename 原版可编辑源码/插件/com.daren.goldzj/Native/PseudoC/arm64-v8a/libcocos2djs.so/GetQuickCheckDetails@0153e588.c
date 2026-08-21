
/* v8::internal::ChoiceNode::GetQuickCheckDetails(v8::internal::QuickCheckDetails*,
   v8::internal::RegExpCompiler*, int, bool) */

void __thiscall
v8::internal::ChoiceNode::GetQuickCheckDetails
          (ChoiceNode *this,QuickCheckDetails *param_1,RegExpCompiler *param_2,int param_3,
          bool param_4)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  long *plVar7;
  QuickCheckDetails *pQVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  ushort uVar12;
  ulong uVar13;
  undefined4 local_88;
  undefined4 uStack_84;
  char acStack_80 [2];
  undefined4 uStack_7e;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined4 local_78;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined2 uStack_72;
  undefined2 uStack_70;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  char local_64;
  
  if (param_4) {
    bVar6 = true;
  }
  else {
    bVar6 = this[0x40] != (ChoiceNode)0x0;
  }
  uVar2 = *(uint *)((long)*(undefined8 **)(this + 0x38) + 0xc);
  plVar7 = *(long **)**(undefined8 **)(this + 0x38);
  (**(code **)(*plVar7 + 0x28))(plVar7,param_1,param_2,param_3,bVar6);
  if (1 < (int)uVar2) {
    lVar9 = ((long)param_3 + (long)param_3 * 2) * 2;
    uVar13 = 1;
    do {
      local_88 = *(undefined4 *)param_1;
      acStack_80[0] = '\0';
      uStack_7e = 0;
      uStack_7a = 0;
      local_78 = 0;
      uStack_74 = 0;
      uStack_72 = 0;
      uStack_70 = 0;
      uStack_6e = 0;
      uStack_84 = 0;
      local_64 = '\0';
      uStack_6c = 0;
      uStack_68 = 0;
      plVar7 = *(long **)(**(long **)(this + 0x38) + uVar13 * 0x10);
      (**(code **)(*plVar7 + 0x28))(plVar7,&local_88,param_2,param_3,bVar6);
      if (local_64 == '\0') {
        if (param_1[0x24] == (QuickCheckDetails)0x0) {
          pQVar8 = param_1 + lVar9 + 4;
          pcVar10 = acStack_80 + lVar9;
          lVar11 = (long)param_3;
          if (param_3 < *(int *)param_1) {
            do {
              uVar3 = *(ushort *)pQVar8;
              uVar5 = *(ushort *)(pcVar10 + -4);
              uVar4 = *(ushort *)(pQVar8 + 2);
              uVar12 = *(ushort *)(pcVar10 + -2);
              if (((uVar3 != uVar5) || (uVar4 != uVar12)) ||
                 (uVar12 = uVar4, uVar1 = uVar3, *pcVar10 == '\0')) {
                pQVar8[4] = (QuickCheckDetails)0x0;
                uVar1 = uVar5;
              }
              uVar1 = uVar1 & uVar3;
              *(ushort *)(pcVar10 + -2) = uVar12 & uVar1;
              *(ushort *)pQVar8 = uVar1 & (uVar1 & uVar4 ^ uVar12 & uVar1 ^ 0xffff);
              *(ushort *)(pQVar8 + 2) = uVar12 & uVar1 & uVar4;
              lVar11 = lVar11 + 1;
              pQVar8 = pQVar8 + 6;
              pcVar10 = pcVar10 + 6;
            } while (lVar11 < *(int *)param_1);
          }
        }
        else {
          *(ulong *)(param_1 + 0x1d) = (ulong)CONCAT43(uStack_68,uStack_6c._1_3_);
          *(ulong *)(param_1 + 8) =
               CONCAT17(uStack_79,
                        CONCAT16(uStack_7a,CONCAT42(uStack_7e,CONCAT11(acStack_80[1],acStack_80[0]))
                                ));
          *(ulong *)param_1 = CONCAT44(uStack_84,local_88);
          *(ulong *)(param_1 + 0x18) =
               CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT12(uStack_6e,uStack_70)));
          *(ulong *)(param_1 + 0x10) =
               CONCAT26(uStack_72,CONCAT15(uStack_73,CONCAT14(uStack_74,local_78)));
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar2);
  }
  return;
}

