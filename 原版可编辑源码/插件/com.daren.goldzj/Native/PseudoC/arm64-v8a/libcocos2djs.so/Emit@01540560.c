
/* v8::internal::TextNode::Emit(v8::internal::RegExpCompiler*, v8::internal::Trace*) */

void __thiscall v8::internal::TextNode::Emit(TextNode *this,RegExpCompiler *param_1,Trace *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  int local_34;
  
  iVar3 = RegExpNode::LimitVersions((RegExpNode *)this,param_1,param_2);
  if (iVar3 != 0) {
    lVar6 = **(long **)(this + 0x40);
    lVar7 = (long)*(int *)((long)*(long **)(this + 0x40) + 0xc) + -1;
    piVar1 = (int *)(lVar6 + lVar7 * 0x10);
    iVar3 = piVar1[1];
    iVar4 = *(int *)param_2;
    iVar5 = 1;
    if (iVar3 != 1) {
      if (iVar3 != 0) goto LAB_015407e4;
      iVar5 = *(int *)(*(long *)(lVar6 + lVar7 * 0x10 + 8) + 0x10);
    }
    if (*piVar1 + iVar4 + iVar5 < 0x8000) {
      if (param_1[0x30] != (RegExpCompiler)0x0) {
        local_a0 = local_a0 & 0xffffffff00000000;
        TextEmitPass(this,param_1,0,0,param_2,0,&local_a0);
        iVar4 = *(int *)param_2;
      }
      local_34 = iVar4 + *(int *)(param_2 + 0x2c) + -1;
      bVar2 = *(int *)(param_2 + 0x28) == 1;
      if (bVar2) {
        TextEmitPass(this,param_1,1,1,param_2,0,&local_34);
        TextEmitPass(this,param_1,2,1,param_2,0,&local_34);
        TextEmitPass(this,param_1,3,1,param_2,0,&local_34);
        TextEmitPass(this,param_1,4,1,param_2,0,&local_34);
      }
      TextEmitPass(this,param_1,1,0,param_2,bVar2,&local_34);
      TextEmitPass(this,param_1,2,0,param_2,bVar2,&local_34);
      TextEmitPass(this,param_1,3,0,param_2,bVar2,&local_34);
      TextEmitPass(this,param_1,4,0,param_2,bVar2,&local_34);
      uStack_98 = *(undefined8 *)(param_2 + 8);
      local_a0 = *(ulong *)param_2;
      uStack_88 = *(undefined8 *)(param_2 + 0x18);
      uStack_90 = *(undefined8 *)(param_2 + 0x10);
      uStack_58 = *(undefined8 *)(param_2 + 0x48);
      local_60 = *(undefined8 *)(param_2 + 0x40);
      uStack_48 = *(undefined8 *)(param_2 + 0x58);
      uStack_50 = *(undefined8 *)(param_2 + 0x50);
      uStack_78 = *(undefined8 *)(param_2 + 0x28);
      local_80 = *(undefined8 *)(param_2 + 0x20);
      uStack_68 = *(undefined8 *)(param_2 + 0x38);
      uStack_70 = *(undefined8 *)(param_2 + 0x30);
      lVar6 = **(long **)(this + 0x40);
      lVar7 = (long)*(int *)((long)*(long **)(this + 0x40) + 0xc) + -1;
      piVar1 = (int *)(lVar6 + lVar7 * 0x10);
      iVar4 = piVar1[1];
      iVar3 = 1;
      if (iVar4 != 1) {
        if (iVar4 != 0) {
LAB_015407e4:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        iVar3 = *(int *)(*(long *)(lVar6 + lVar7 * 0x10 + 8) + 0x10);
      }
      iVar3 = iVar3 + *piVar1;
      iVar4 = -iVar3;
      if (this[0x48] == (TextNode)0x0) {
        iVar4 = iVar3;
      }
      Trace::AdvanceCurrentPositionInTrace((Trace *)&local_a0,iVar4,param_1);
      uStack_48 = CONCAT44(-((byte)this[0x48] & 1),(undefined4)uStack_48);
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      (**(code **)(**(long **)(this + 0x38) + 0x18))(*(long **)(this + 0x38),param_1,&local_a0);
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
    }
    else {
      param_1[0x31] = (RegExpCompiler)0x1;
    }
  }
  return;
}

