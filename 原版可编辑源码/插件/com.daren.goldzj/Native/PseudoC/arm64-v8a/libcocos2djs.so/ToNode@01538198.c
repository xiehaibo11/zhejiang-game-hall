
/* v8::internal::RegExpAlternative::ToNode(v8::internal::RegExpCompiler*, v8::internal::RegExpNode*)
    */

RegExpNode * __thiscall
v8::internal::RegExpAlternative::ToNode
          (RegExpAlternative *this,RegExpCompiler *param_1,RegExpNode *param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 local_50;
  long *plStack_48;
  
  plVar7 = *(long **)(this + 8);
  local_50 = *(undefined8 *)(param_1 + 0x448);
  uVar3 = (ulong)*(uint *)((long)plVar7 + 0xc);
  plStack_48 = plVar7;
  if (0 < (int)*(uint *)((long)plVar7 + 0xc)) {
    uVar6 = 0;
    iVar4 = -1;
    do {
      uVar3 = (**(code **)(**(long **)(*plVar7 + uVar6 * 8) + 0x80))();
      if (iVar4 == -1) {
        iVar4 = (int)uVar6;
        if ((uVar3 & 1) == 0) {
          iVar4 = -1;
        }
      }
      else if ((uVar3 & 1) == 0) {
        if (1 < (int)uVar6 - iVar4) {
          FUN_015397d8(&local_50,iVar4,uVar6 & 0xffffffff);
        }
        iVar4 = -1;
      }
      iVar1 = *(int *)((long)plVar7 + 0xc);
      uVar3 = (ulong)iVar1;
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)uVar3);
    if ((iVar4 != -1) && (1 < iVar1 - iVar4)) {
      FUN_015397d8(&local_50,iVar4,iVar1);
      uVar3 = (ulong)*(uint *)((long)plVar7 + 0xc);
    }
  }
  if (param_1[0x34] == (RegExpCompiler)0x0) {
    if (0 < (int)uVar3) {
      uVar3 = uVar3 & 0xffffffff;
      do {
        uVar6 = uVar3 - 1;
        plVar2 = *(long **)(*plVar7 + uVar3 * 8 + -8);
        param_2 = (RegExpNode *)(**(code **)(*plVar2 + 0x18))(plVar2,param_1,param_2);
        uVar3 = uVar6;
      } while (0 < (long)uVar6);
    }
  }
  else if (0 < (int)uVar3) {
    lVar5 = 0;
    do {
      plVar2 = *(long **)(*plVar7 + lVar5 * 8);
      param_2 = (RegExpNode *)(**(code **)(*plVar2 + 0x18))(plVar2,param_1,param_2);
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)plVar7 + 0xc));
  }
  return param_2;
}

