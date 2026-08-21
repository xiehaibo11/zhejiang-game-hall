
/* v8::internal::AssertionNode::Emit(v8::internal::RegExpCompiler*, v8::internal::Trace*) */

void __thiscall
v8::internal::AssertionNode::Emit(AssertionNode *this,RegExpCompiler *param_1,Trace *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  Trace *pTVar5;
  long lVar6;
  long *plVar7;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  pTVar5 = (Trace *)&local_a0;
  if (*(uint *)(this + 0x40) < 5) {
    plVar7 = *(long **)(param_1 + 0x28);
    switch(*(uint *)(this + 0x40)) {
    case 0:
      local_a0 = 0;
      (**(code **)(*plVar7 + 0xc0))(plVar7,*(undefined4 *)param_2,&local_a0);
      (**(code **)(*plVar7 + 0xe0))(plVar7,*(undefined8 *)(param_2 + 0x10));
      (**(code **)(*plVar7 + 0x40))(plVar7,&local_a0);
      goto LAB_0153f004;
    case 1:
      if (*(int *)(param_2 + 0x5c) != -1) {
        if (*(int *)(param_2 + 0x5c) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0153f000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar7 + 0xe0))(plVar7,*(undefined8 *)(param_2 + 0x10));
          return;
        }
        goto LAB_0153f004;
      }
      (**(code **)(*plVar7 + 0x78))(plVar7,*(undefined4 *)param_2,*(undefined8 *)(param_2 + 0x10));
      uStack_58 = *(undefined8 *)(param_2 + 0x48);
      local_60 = *(undefined8 *)(param_2 + 0x40);
      uStack_50 = *(undefined8 *)(param_2 + 0x50);
      uStack_78 = *(ulong *)(param_2 + 0x28);
      local_80 = *(undefined8 *)(param_2 + 0x20);
      uStack_68 = *(undefined8 *)(param_2 + 0x38);
      uStack_70 = *(undefined8 *)(param_2 + 0x30);
      uStack_98 = *(undefined8 *)(param_2 + 8);
      local_a0 = *(ulong *)param_2;
      uStack_88 = *(undefined8 *)(param_2 + 0x18);
      local_90 = *(undefined8 *)(param_2 + 0x10);
      uStack_48 = CONCAT44(1,(int)*(undefined8 *)(param_2 + 0x58));
      plVar3 = *(long **)(this + 0x38);
      pTVar5 = (Trace *)&local_a0;
      break;
    default:
      EmitBoundaryCheck(this,param_1,param_2);
      return;
    case 4:
      local_80 = *(undefined8 *)(param_2 + 0x20);
      uStack_68 = *(undefined8 *)(param_2 + 0x38);
      uStack_70 = *(undefined8 *)(param_2 + 0x30);
      plVar3 = *(long **)(this + 0x38);
      uStack_58 = *(undefined8 *)(param_2 + 0x48);
      local_60 = *(undefined8 *)(param_2 + 0x40);
      uStack_48 = *(undefined8 *)(param_2 + 0x58);
      uStack_50 = *(undefined8 *)(param_2 + 0x50);
      uStack_98 = *(undefined8 *)(param_2 + 8);
      local_a0 = *(ulong *)param_2;
      uStack_88 = *(undefined8 *)(param_2 + 0x18);
      local_90 = *(undefined8 *)(param_2 + 0x10);
      uStack_78 = *(ulong *)(param_2 + 0x28) & 0xffffffff00000000;
      local_28 = 0;
      iVar1 = (int)local_a0;
      if ((int)local_a0 < 1) {
        (**(code **)(*plVar7 + 0x70))(plVar7,local_a0 & 0xffffffff,&local_28);
      }
      uVar2 = local_90;
      RegExpMacroAssembler::LoadCurrentCharacter
                ((int)plVar7,(Label *)(ulong)((int)local_a0 - 1),SUB81(local_90,0),(uint)(0 < iVar1)
                 ,1);
      uVar4 = (**(code **)(*plVar7 + 200))(plVar7,0x6e,uVar2);
      if ((uVar4 & 1) == 0) {
        if (param_1[0x30] == (RegExpCompiler)0x0) {
          (**(code **)(*plVar7 + 0x50))(plVar7,0x2028,0xfffe,&local_28);
        }
        (**(code **)(*plVar7 + 0x48))(plVar7,10,&local_28);
        (**(code **)(*plVar7 + 0x90))(plVar7,0xd,local_90);
      }
      (**(code **)(*plVar7 + 0x40))(plVar7,&local_28);
      lVar6 = *plVar3;
      goto LAB_0153f124;
    }
  }
  else {
LAB_0153f004:
    plVar3 = *(long **)(this + 0x38);
    pTVar5 = param_2;
  }
  lVar6 = *plVar3;
LAB_0153f124:
  (**(code **)(lVar6 + 0x18))(plVar3,param_1,pTVar5);
  return;
}

