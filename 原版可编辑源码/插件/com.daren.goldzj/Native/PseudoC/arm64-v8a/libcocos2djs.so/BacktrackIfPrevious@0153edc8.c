
/* v8::internal::AssertionNode::BacktrackIfPrevious(v8::internal::RegExpCompiler*,
   v8::internal::Trace*, v8::internal::AssertionNode::IfPrevious) */

void __thiscall
v8::internal::AssertionNode::BacktrackIfPrevious
          (AssertionNode *this,long param_1,ulong *param_2,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long *plVar4;
  ulong local_b0;
  ulong uStack_a8;
  undefined8 *local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 local_38;
  
  local_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  plVar4 = *(long **)(param_1 + 0x28);
  uStack_68 = param_2[9];
  local_70 = param_2[8];
  uStack_58 = param_2[0xb];
  uStack_60 = param_2[10];
  uStack_a8 = param_2[1];
  local_b0 = *param_2;
  uStack_98 = param_2[3];
  local_a0 = (undefined8 *)param_2[2];
  iVar3 = (int)local_b0;
  puVar1 = &local_38;
  puVar2 = local_a0;
  if (param_4 != 0) {
    puVar1 = local_a0;
    puVar2 = &local_38;
  }
  uStack_88 = param_2[5] & 0xffffffff00000000;
  local_38 = 0;
  if ((int)local_b0 < 1) {
    (**(code **)(*plVar4 + 0x70))(plVar4,local_b0 & 0xffffffff,puVar2);
  }
  RegExpMacroAssembler::LoadCurrentCharacter
            ((int)plVar4,(Label *)(ulong)((int)local_b0 - 1),SUB81(puVar2,0),(uint)(0 < iVar3),1);
  FUN_0153eca8(plVar4,puVar1,puVar2,param_4 == 0);
  (**(code **)(*plVar4 + 0x40))(plVar4,&local_38);
  (**(code **)(**(long **)(this + 0x38) + 0x18))(*(long **)(this + 0x38),param_1,&local_b0);
  return;
}

