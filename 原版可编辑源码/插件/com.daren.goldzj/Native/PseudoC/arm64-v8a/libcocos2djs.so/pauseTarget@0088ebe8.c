
/* cocos2d::Scheduler::pauseTarget(void*) */

void __thiscall cocos2d::Scheduler::pauseTarget(Scheduler *this,void *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  uVar4 = (uint)param_1;
  iVar5 = (int)((ulong)param_1 >> 0x20);
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  if (*(long *)this != 0) {
    uVar4 = (((uVar4 & 0xff000000) + 0x9f49bac2) - (iVar5 + -0x61c88647)) + (uVar4 & 0xff0000) +
            (uVar4 & 0xff00) + (uVar4 & 0xff) ^ 0x7f76d;
    uVar1 = (iVar5 + -0x60b6453e) - uVar4 ^ uVar4 << 8;
    uVar2 = (-0x1124109 - uVar4) - uVar1 ^ uVar1 >> 0xd;
    uVar4 = (uVar4 - uVar1) - uVar2 ^ uVar2 >> 0xc;
    plVar7 = *(long **)(*(long *)this + 0x28);
    uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar4 << 0x10;
    uVar2 = (uVar2 - uVar4) - uVar1 ^ uVar1 >> 5;
    uVar4 = (uVar4 - uVar1) - uVar2 ^ uVar2 >> 3;
    uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar4 << 10;
    lVar8 = *(long *)(*plVar7 +
                     (ulong)(((uVar2 - uVar4) - uVar1 ^ uVar1 >> 0xf) & (int)plVar7[1] - 1U) * 0x10)
    ;
    while( true ) {
      if ((lVar8 == 0) || (lVar8 = lVar8 - plVar7[4], lVar8 == 0)) goto LAB_0088ed18;
      if ((*(int *)(lVar8 + 0x58) == 8) && ((void *)**(undefined8 **)(lVar8 + 0x50) == param_1))
      break;
      lVar8 = *(long *)(lVar8 + 0x48);
    }
    *(undefined1 *)(lVar8 + 0x21) = 1;
  }
LAB_0088ed18:
  if (*(long *)(lVar3 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

