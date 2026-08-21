
/* cocos2d::Scheduler::schedulePerFrame(std::__ndk1::function<void (float)> const&, void*, int,
   bool) */

void __thiscall
cocos2d::Scheduler::schedulePerFrame
          (Scheduler *this,function *param_1,void *param_2,int param_3,bool param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  Scheduler *pSVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  
  if (*(long *)(this + 0x40) != 0) {
    uVar7 = (uint)param_2;
    iVar1 = (int)((ulong)param_2 >> 0x20) + -0x61c88647;
    uVar7 = ((uVar7 & 0xff000000) - iVar1) + (uVar7 & 0xff0000) + (uVar7 & 0xff00) + (uVar7 & 0xff)
            + 0x9f49bac2 ^ 0x7f76d;
    uVar2 = (iVar1 - uVar7) + 0x1124109 ^ uVar7 << 8;
    uVar3 = 0xfeedbef7 - (uVar7 + uVar2) ^ uVar2 >> 0xd;
    uVar7 = (uVar7 - uVar2) - uVar3 ^ uVar3 >> 0xc;
    plVar5 = *(long **)(*(long *)(this + 0x40) + 0x50);
    uVar2 = (uVar2 - uVar3) - uVar7 ^ uVar7 << 0x10;
    uVar3 = (uVar3 - uVar7) - uVar2 ^ uVar2 >> 5;
    uVar7 = (uVar7 - uVar2) - uVar3 ^ uVar3 >> 3;
    uVar2 = (uVar2 - uVar3) - uVar7 ^ uVar7 << 10;
    for (lVar6 = *(long *)(*plVar5 +
                          (ulong)(((uVar3 - uVar7) - uVar2 ^ uVar2 >> 0xf) & (int)plVar5[1] - 1U) *
                          0x10); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x70)) {
      lVar6 = lVar6 - plVar5[4];
      if ((*(int *)(lVar6 + 0x80) == 8) && ((void *)**(undefined8 **)(lVar6 + 0x78) == param_2)) {
        if (*(int *)(*(long *)(lVar6 + 8) + 0x48) == param_3) {
          return;
        }
        unscheduleUpdate(this,param_2);
        break;
      }
    }
  }
  if (param_3 == 0) {
    appendIn(this,(_listEntry **)(this + 0x30),param_1,param_2,param_4);
    return;
  }
  if (param_3 < 0) {
    pSVar4 = this + 0x28;
  }
  else {
    pSVar4 = this + 0x38;
  }
  priorityIn(this,(_listEntry **)pSVar4,param_1,param_2,param_3,param_4);
  return;
}

