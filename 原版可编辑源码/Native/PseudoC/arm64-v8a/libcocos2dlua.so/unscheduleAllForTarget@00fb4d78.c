
/* cocos2d::Scheduler::unscheduleAllForTarget(void*) */

void __thiscall cocos2d::Scheduler::unscheduleAllForTarget(Scheduler *this,void *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  _hashSelectorEntry *p_Var8;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  if (*(long *)(this + 0x60) != 0) {
    uVar7 = (uint)param_1;
    iVar1 = (int)(((ulong)param_1 & 0xffffffffff000000) >> 0x20) + -0x61c88647;
    uVar7 = ((int)((ulong)param_1 & 0xffffffffff000000) - iVar1) + (uVar7 & 0xff0000) +
            (uVar7 & 0xff00) + (uVar7 & 0xff) + 0x9f49bac2 ^ 0x7f76d;
    uVar2 = (iVar1 - uVar7) + 0x1124109 ^ uVar7 << 8;
    uVar3 = 0xfeedbef7 - (uVar7 + uVar2) ^ uVar2 >> 0xd;
    uVar7 = (uVar7 - uVar2) - uVar3 ^ uVar3 >> 0xc;
    plVar5 = *(long **)(*(long *)(this + 0x60) + 0x28);
    uVar2 = (uVar2 - uVar3) - uVar7 ^ uVar7 << 0x10;
    uVar3 = (uVar3 - uVar7) - uVar2 ^ uVar2 >> 5;
    uVar7 = (uVar7 - uVar2) - uVar3 ^ uVar3 >> 3;
    uVar2 = (uVar2 - uVar3) - uVar7 ^ uVar7 << 10;
    lVar6 = *(long *)(*plVar5 +
                     (ulong)(((uVar3 - uVar7) - uVar2 ^ uVar2 >> 0xf) & (int)plVar5[1] - 1U) * 0x10)
    ;
    while (lVar6 != 0) {
      p_Var8 = (_hashSelectorEntry *)(lVar6 - plVar5[4]);
      if ((*(int *)(p_Var8 + 0x58) == 8) && ((void *)**(undefined8 **)(p_Var8 + 0x50) == param_1)) {
        uVar4 = ccArrayContainsObject(*(_ccArray **)p_Var8,*(Ref **)(p_Var8 + 0x18));
        if (((uVar4 & 1) != 0) && ((*(Ref **)(p_Var8 + 0x18))[0x48] == (Ref)0x0)) {
          Ref::retain(*(Ref **)(p_Var8 + 0x18));
          *(undefined1 *)(*(long *)(p_Var8 + 0x18) + 0x48) = 1;
        }
        ccArrayRemoveAllObjects(*(_ccArray **)p_Var8);
        if (*(_hashSelectorEntry **)(this + 0x68) == p_Var8) {
          this[0x70] = (Scheduler)0x1;
        }
        else {
          removeHashElement(this,p_Var8);
        }
        break;
      }
      lVar6 = *(long *)(p_Var8 + 0x48);
    }
  }
  unscheduleUpdate(this,param_1);
  return;
}

