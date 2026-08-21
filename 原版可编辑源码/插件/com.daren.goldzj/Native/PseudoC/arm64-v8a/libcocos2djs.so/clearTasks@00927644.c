
/* cocos2d::renderer::ParallelTask::clearTasks() */

void __thiscall cocos2d::renderer::ParallelTask::clearTasks(ParallelTask *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  lVar3 = *(long *)(this + 8);
  lVar1 = *(long *)(this + 0x10) - lVar3;
  if (lVar1 == 0) {
    return;
  }
  uVar5 = 0;
  do {
    plVar7 = *(long **)(lVar3 + uVar5 * 0x18);
    plVar6 = (long *)(lVar3 + uVar5 * 0x18 + 8);
    plVar8 = (long *)*plVar6;
joined_r0x009276a0:
    if (plVar8 != plVar7) {
      plVar2 = (long *)plVar8[-2];
      plVar8 = plVar8 + -6;
      if (plVar8 != plVar2) break;
      pcVar4 = *(code **)(*plVar2 + 0x20);
      goto LAB_009276cc;
    }
    uVar5 = uVar5 + 1;
    *plVar6 = (long)plVar7;
    if ((ulong)((lVar1 >> 3) * -0x5555555555555555) <= uVar5) {
      return;
    }
    lVar3 = *(long *)(this + 8);
  } while( true );
  if (plVar2 != (long *)0x0) {
    pcVar4 = *(code **)(*plVar2 + 0x28);
LAB_009276cc:
    (*pcVar4)();
  }
  goto joined_r0x009276a0;
}

