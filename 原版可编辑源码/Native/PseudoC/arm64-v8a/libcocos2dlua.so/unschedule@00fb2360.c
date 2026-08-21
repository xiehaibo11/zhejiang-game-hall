
/* cocos2d::Scheduler::unschedule(void (cocos2d::Ref::*)(float), cocos2d::Ref*) */

void cocos2d::Scheduler::unschedule(_func_void_float *param_1,Ref *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  Ref *this;
  ulong in_x2;
  uint uVar5;
  long in_x3;
  long *plVar6;
  long lVar7;
  _hashSelectorEntry *p_Var8;
  long lVar9;
  _ccArray *local_70;
  
  if (in_x3 == 0) {
    return;
  }
  if ((param_2 == (Ref *)0x0) && (in_x2 == 0 || (in_x2 & 1) == 0)) {
    return;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    return;
  }
  uVar5 = (uint)in_x3;
  iVar1 = (int)((ulong)in_x3 >> 0x20) + -0x61c88647;
  uVar5 = ((uVar5 & 0xff000000) - iVar1) + (uVar5 & 0xff0000) + (uVar5 & 0xff00) + (uVar5 & 0xff) +
          0x9f49bac2 ^ 0x7f76d;
  uVar2 = (iVar1 - uVar5) + 0x1124109 ^ uVar5 << 8;
  uVar3 = 0xfeedbef7 - (uVar5 + uVar2) ^ uVar2 >> 0xd;
  uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar3 >> 0xc;
  plVar6 = *(long **)(*(long *)(param_1 + 0x60) + 0x28);
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar5 << 0x10;
  uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar2 >> 5;
  uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar3 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar5 << 10;
  lVar7 = *(long *)(*plVar6 +
                   (ulong)(((uVar3 - uVar5) - uVar2 ^ uVar2 >> 0xf) & (int)plVar6[1] - 1U) * 0x10);
  while( true ) {
    if (lVar7 == 0) {
      return;
    }
    p_Var8 = (_hashSelectorEntry *)(lVar7 - plVar6[4]);
    if ((*(int *)(p_Var8 + 0x58) == 8) && (**(long **)(p_Var8 + 0x50) == in_x3)) break;
    lVar7 = *(long *)(p_Var8 + 0x48);
  }
  local_70 = *(_ccArray **)p_Var8;
  lVar7 = *(long *)local_70;
  if (lVar7 < 1) {
    return;
  }
  lVar9 = 0;
  plVar6 = *(long **)(local_70 + 0x10);
  lVar4 = *plVar6;
  if (lVar4 != 0) goto LAB_00fb2518;
  do {
    do {
      do {
        lVar9 = lVar9 + 1;
        if (lVar7 <= lVar9) {
          return;
        }
        lVar4 = plVar6[lVar9];
      } while (lVar4 == 0);
LAB_00fb2518:
      this = (Ref *)__dynamic_cast(lVar4,&Ref::typeinfo,&TimerTargetSelector::typeinfo,0);
    } while (this == (Ref *)0x0);
  } while ((param_2 != *(Ref **)(this + 0x58)) ||
          (in_x2 != *(ulong *)(this + 0x60) &&
           ((((uint)*(ulong *)(this + 0x60) | (uint)in_x2) & 1) != 0 || param_2 != (Ref *)0x0)));
  if ((*(Ref **)(p_Var8 + 0x18) == this) && (this[0x48] == (Ref)0x0)) {
    Ref::retain(this);
    this[0x48] = (Ref)0x1;
    local_70 = *(_ccArray **)p_Var8;
  }
  ccArrayRemoveObjectAtIndex(local_70,lVar9,true);
  if ((int)lVar9 <= *(int *)(p_Var8 + 0x10)) {
    *(int *)(p_Var8 + 0x10) = *(int *)(p_Var8 + 0x10) + -1;
  }
  if (**(long **)p_Var8 == 0) {
    if (*(_hashSelectorEntry **)(param_1 + 0x68) != p_Var8) {
      removeHashElement((Scheduler *)param_1,p_Var8);
      return;
    }
    param_1[0x70] = (code)0x1;
  }
  return;
}

