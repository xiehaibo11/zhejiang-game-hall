
/* v8::internal::AssertionNode::EmitBoundaryCheck(v8::internal::RegExpCompiler*,
   v8::internal::Trace*) */

void __thiscall
v8::internal::AssertionNode::EmitBoundaryCheck
          (AssertionNode *this,RegExpCompiler *param_1,Trace *param_2)

{
  int iVar1;
  bool bVar2;
  Zone *this_00;
  ulong uVar3;
  BoyerMooreLookahead *this_01;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_38;
  
  iVar1 = *(int *)(param_2 + 0x5c);
  plVar6 = *(long **)(param_1 + 0x28);
  if (*(long *)(this + (ulong)(iVar1 == 0) * 8 + 0x20) == 0) {
    lVar7 = 0x1a;
    if (iVar1 == 0) {
      lVar7 = 0x1b;
    }
    uVar4 = (uint)(byte)this[lVar7];
    if (7 < uVar4) {
      uVar4 = 8;
    }
    if (uVar4 == 0) {
      iVar1 = *(int *)(this + 0x40);
      goto LAB_0153eb00;
    }
    this_00 = *(Zone **)(this + 0x30);
    lVar7 = plVar6[3];
    this_01 = *(BoyerMooreLookahead **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x20) {
      this_01 = (BoyerMooreLookahead *)Zone::NewExpand(this_00,0x20);
    }
    else {
      *(BoyerMooreLookahead **)(this_00 + 0x10) = this_01 + 0x20;
    }
    BoyerMooreLookahead::BoyerMooreLookahead(this_01,uVar4,param_1,*(Zone **)(this + 0x30));
    (**(code **)(*(long *)this + 0x48))(this,lVar7,0,200,this_01,iVar1 == 0);
    puVar5 = *(undefined8 **)(this_01 + 0x18);
  }
  else {
    puVar5 = *(undefined8 **)(*(long *)(this + (ulong)(iVar1 == 0) * 8 + 0x20) + 0x18);
  }
  if (*(int *)(*(long *)*puVar5 + 0x14) == 1) {
    bVar2 = *(int *)(this + 0x40) == 2;
  }
  else {
    iVar1 = *(int *)(this + 0x40);
    if (*(int *)(*(long *)*puVar5 + 0x14) != 2) {
LAB_0153eb00:
      local_38 = 0;
      local_58 = 0;
      if (*(int *)(param_2 + 0x28) != 1) {
        RegExpMacroAssembler::LoadCurrentCharacter
                  ((int)plVar6,(Label *)(ulong)*(uint *)param_2,
                   (bool)((char)&stack0xffffffffffffffb0 + '\x18'),1,1);
      }
      uVar3 = (**(code **)(*plVar6 + 200))(plVar6,0x57,&local_58);
      if ((uVar3 & 1) == 0) {
        (**(code **)(*plVar6 + 0x58))(plVar6,0x7a,&local_38);
        (**(code **)(*plVar6 + 0x60))(plVar6,0x30,&local_38);
        (**(code **)(*plVar6 + 0x58))(plVar6,0x60,&local_58);
        (**(code **)(*plVar6 + 0x60))(plVar6,0x3a,&local_58);
        (**(code **)(*plVar6 + 0x60))(plVar6,0x41,&local_38);
        (**(code **)(*plVar6 + 0x60))(plVar6,0x5b,&local_58);
        (**(code **)(*plVar6 + 0x48))(plVar6,0x5f,&local_58);
      }
      (**(code **)(*plVar6 + 0x40))(plVar6,&local_38);
      local_60 = 0;
      BacktrackIfPrevious(this,param_1,param_2,iVar1 != 2);
      (**(code **)(*plVar6 + 0xe0))(plVar6,&local_60);
      (**(code **)(*plVar6 + 0x40))(plVar6,&local_58);
      BacktrackIfPrevious(this,param_1,param_2,iVar1 == 2);
      (**(code **)(*plVar6 + 0x40))(plVar6,&local_60);
      return;
    }
    bVar2 = iVar1 != 2;
  }
  BacktrackIfPrevious(this,param_1,param_2,bVar2);
  return;
}

