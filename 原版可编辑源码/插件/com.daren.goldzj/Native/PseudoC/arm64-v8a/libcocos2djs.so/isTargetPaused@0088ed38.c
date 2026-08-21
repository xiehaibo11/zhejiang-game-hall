
/* cocos2d::Scheduler::isTargetPaused(void*) */

void __thiscall cocos2d::Scheduler::isTargetPaused(Scheduler *this,void *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  
  uVar5 = (uint)param_1;
  iVar6 = (int)((ulong)param_1 >> 0x20);
  lVar3 = tpidr_el0;
  if (*(long *)this != 0) {
    uVar5 = (((uVar5 & 0xff000000) + 0x9f49bac2) - (iVar6 + -0x61c88647)) + (uVar5 & 0xff0000) +
            (uVar5 & 0xff00) + (uVar5 & 0xff) ^ 0x7f76d;
    uVar1 = (iVar6 + -0x60b6453e) - uVar5 ^ uVar5 << 8;
    uVar2 = (-0x1124109 - uVar5) - uVar1 ^ uVar1 >> 0xd;
    uVar5 = (uVar5 - uVar1) - uVar2 ^ uVar2 >> 0xc;
    plVar7 = *(long **)(*(long *)this + 0x28);
    uVar1 = (uVar1 - uVar2) - uVar5 ^ uVar5 << 0x10;
    uVar2 = (uVar2 - uVar5) - uVar1 ^ uVar1 >> 5;
    uVar5 = (uVar5 - uVar1) - uVar2 ^ uVar2 >> 3;
    uVar1 = (uVar1 - uVar2) - uVar5 ^ uVar5 << 10;
    lVar8 = *(long *)(*plVar7 +
                     (ulong)(((uVar2 - uVar5) - uVar1 ^ uVar1 >> 0xf) & (int)plVar7[1] - 1U) * 0x10)
    ;
    if (lVar8 != 0) {
      for (lVar8 = lVar8 - plVar7[4]; lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x48) - plVar7[4]) {
        if ((*(int *)(lVar8 + 0x58) == 8) && ((void *)**(undefined8 **)(lVar8 + 0x50) == param_1)) {
          bVar4 = *(char *)(lVar8 + 0x21) != '\0';
          goto LAB_0088ee6c;
        }
        if (*(long *)(lVar8 + 0x48) == 0) break;
      }
    }
  }
  bVar4 = false;
LAB_0088ee6c:
  if (*(long *)(lVar3 + 0x28) != *(long *)(lVar3 + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar4);
  }
  return;
}

