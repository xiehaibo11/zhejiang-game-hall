
/* cocos2d::Scheduler::unscheduleAllForTarget(void*) */

void __thiscall cocos2d::Scheduler::unscheduleAllForTarget(Scheduler *this,void *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  _hashSelectorEntry *p_Var4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  lVar5 = tpidr_el0;
  lVar8 = *(long *)(lVar5 + 0x28);
  if ((param_1 != (void *)0x0) && (*(long *)this != 0)) {
    uVar7 = (uint)param_1;
    iVar1 = (int)(((ulong)param_1 & 0xffffffffff000000) >> 0x20);
    uVar7 = (((int)((ulong)param_1 & 0xffffffffff000000) + -0x60b6453e) - (iVar1 + -0x61c88647)) +
            (uVar7 & 0xff0000) + (uVar7 & 0xff00) + (uVar7 & 0xff) ^ 0x7f76d;
    uVar2 = (iVar1 + -0x60b6453e) - uVar7 ^ uVar7 << 8;
    uVar3 = (-0x1124109 - uVar7) - uVar2 ^ uVar2 >> 0xd;
    uVar7 = (uVar7 - uVar2) - uVar3 ^ uVar3 >> 0xc;
    plVar9 = *(long **)(*(long *)this + 0x28);
    uVar2 = (uVar2 - uVar3) - uVar7 ^ uVar7 << 0x10;
    uVar3 = (uVar3 - uVar7) - uVar2 ^ uVar2 >> 5;
    uVar7 = (uVar7 - uVar2) - uVar3 ^ uVar3 >> 3;
    uVar2 = (uVar2 - uVar3) - uVar7 ^ uVar7 << 10;
    lVar10 = *(long *)(*plVar9 +
                      (ulong)(((uVar3 - uVar7) - uVar2 ^ uVar2 >> 0xf) & (int)plVar9[1] - 1U) * 0x10
                      );
    if (lVar10 != 0) {
      while (p_Var4 = (_hashSelectorEntry *)(lVar10 - plVar9[4]),
            p_Var4 != (_hashSelectorEntry *)0x0) {
        if ((*(int *)(p_Var4 + 0x58) == 8) && ((void *)**(undefined8 **)(p_Var4 + 0x50) == param_1))
        {
          uVar6 = ccArrayContainsObject(*(_ccArray **)p_Var4,*(Ref **)(p_Var4 + 0x18));
          if (((uVar6 & 1) != 0) && (p_Var4[0x20] == (_hashSelectorEntry)0x0)) {
            Ref::retain(*(Ref **)(p_Var4 + 0x18));
            p_Var4[0x20] = (_hashSelectorEntry)0x1;
          }
          ccArrayRemoveAllObjects(*(_ccArray **)p_Var4);
          if (*(_hashSelectorEntry **)(this + 8) == p_Var4) {
            this[0x10] = (Scheduler)0x1;
          }
          else {
            removeHashElement(this,p_Var4);
          }
          break;
        }
        lVar10 = *(long *)(p_Var4 + 0x48);
        if (lVar10 == 0) break;
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

