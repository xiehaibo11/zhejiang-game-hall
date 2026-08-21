
/* v8::internal::ChoiceNode::EmitOutOfLineContinuation(v8::internal::RegExpCompiler*,
   v8::internal::Trace*, v8::internal::GuardedAlternative, v8::internal::AlternativeGeneration*,
   int, bool) */

void v8::internal::ChoiceNode::EmitOutOfLineContinuation
               (long param_1,long param_2,uint *param_3,long *param_4,long *param_5,int *param_6,
               int param_7,uint param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_c0;
  undefined8 uStack_b8;
  int *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  int iStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined5 uStack_78;
  undefined3 uStack_73;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  ulong uStack_68;
  undefined8 local_48;
  
  if (0 < *param_6) {
    plVar6 = *(long **)(param_2 + 0x28);
    (**(code **)(*plVar6 + 0x40))(plVar6,param_6);
    local_a0 = *(undefined8 *)(param_3 + 8);
    uStack_68 = *(ulong *)(param_3 + 0x16);
    uStack_b8 = *(undefined8 *)(param_3 + 2);
    local_c0 = *(undefined8 *)param_3;
    uStack_a8 = *(undefined8 *)(param_3 + 6);
    uStack_6b = (undefined3)((ulong)*(undefined8 *)(param_3 + 0x14) >> 0x28);
    _iStack_98 = CONCAT44((int)((ulong)*(undefined8 *)(param_3 + 10) >> 0x20),param_7);
    local_80 = *(undefined8 *)(param_6 + 9);
    uStack_88 = *(undefined8 *)(param_6 + 7);
    local_90 = *(undefined8 *)(param_6 + 5);
    uStack_70 = (undefined5)((ulong)*(undefined8 *)((long)param_6 + 0x31) >> 0x18);
    uStack_78 = (undefined5)*(undefined8 *)(param_6 + 0xb);
    uStack_73 = (undefined3)((ulong)*(undefined8 *)(param_6 + 0xb) >> 0x28);
    if (*(char *)(param_1 + 0x40) != '\0') {
      uStack_68 = uStack_68 & 0xffffffff;
    }
    if (param_5 == (long *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)((long)param_5 + 0xc);
    }
    if ((param_8 & 1) == 0) {
      param_6 = param_6 + 3;
      local_b0 = param_6;
      if (0 < (int)uVar3) {
        lVar7 = 0;
        do {
          puVar4 = *(undefined4 **)(*param_5 + lVar7);
          if (puVar4[1] == 1) {
            uVar1 = *puVar4;
            uVar2 = puVar4[2];
            pcVar5 = *(code **)(*plVar6 + 0xf0);
LAB_015427f0:
            (*pcVar5)(plVar6,uVar1,uVar2,param_6);
          }
          else if (puVar4[1] == 0) {
            uVar1 = *puVar4;
            uVar2 = puVar4[2];
            pcVar5 = *(code **)(*plVar6 + 0xe8);
            goto LAB_015427f0;
          }
          lVar7 = lVar7 + 8;
        } while ((ulong)uVar3 * 8 - lVar7 != 0);
      }
      (**(code **)(*param_4 + 0x18))(param_4,param_2,&local_c0);
    }
    else {
      local_b0 = (int *)&local_48;
      local_48 = 0;
      if (0 < (int)uVar3) {
        lVar7 = 0;
        do {
          puVar4 = *(undefined4 **)(*param_5 + lVar7);
          if (puVar4[1] == 1) {
            uVar1 = *puVar4;
            uVar2 = puVar4[2];
            pcVar5 = *(code **)(*plVar6 + 0xf0);
LAB_01542714:
            (*pcVar5)(plVar6,uVar1,uVar2,local_b0);
          }
          else if (puVar4[1] == 0) {
            uVar1 = *puVar4;
            uVar2 = puVar4[2];
            pcVar5 = *(code **)(*plVar6 + 0xe8);
            goto LAB_01542714;
          }
          lVar7 = lVar7 + 8;
        } while ((ulong)uVar3 * 8 - lVar7 != 0);
      }
      (**(code **)(*param_4 + 0x18))(param_4,param_2,&local_c0);
      (**(code **)(*plVar6 + 0x40))(plVar6,&local_48);
      RegExpMacroAssembler::LoadCurrentCharacter
                ((int)plVar6,(Label *)(ulong)*param_3,false,0,param_7);
      (**(code **)(*plVar6 + 0xe0))(plVar6,param_6 + 3);
    }
  }
  return;
}

