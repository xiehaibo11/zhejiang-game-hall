
/* cocos2d::Scheduler::pauseTarget(void*) */

void __thiscall cocos2d::Scheduler::pauseTarget(Scheduler *this,void *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  
  uVar5 = (uint)param_1;
  uVar6 = (uint)((ulong)param_1 >> 0x20);
  if (*(long *)(this + 0x60) != 0) {
    iVar1 = (uVar6 >> 0x18) * 0x1000000 + -0x61c88647 + (uVar6 >> 0x10 & 0xff) * 0x10000 +
            (uVar6 >> 8 & 0xff) * 0x100 + (uVar6 & 0xff);
    uVar2 = (((uVar5 & 0xff000000) + 0x9f49bac2) - iVar1) + (uVar5 & 0xff0000) + (uVar5 & 0xff00) +
            (uVar5 & 0xff) ^ 0x7f76d;
    uVar3 = (iVar1 + 0x1124109) - uVar2 ^ uVar2 << 8;
    uVar4 = (-0x1124109 - uVar2) - uVar3 ^ uVar3 >> 0xd;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 >> 0xc;
    plVar8 = *(long **)(*(long *)(this + 0x60) + 0x28);
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 << 0x10;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 5;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 >> 3;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 << 10;
    for (lVar7 = *(long *)(*plVar8 +
                          (ulong)(((uVar4 - uVar2) - uVar3 ^ uVar3 >> 0xf) & (int)plVar8[1] - 1U) *
                          0x10); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x48)) {
      lVar7 = lVar7 - plVar8[4];
      if ((*(int *)(lVar7 + 0x58) == 8) && ((void *)**(undefined8 **)(lVar7 + 0x50) == param_1)) {
        *(undefined1 *)(lVar7 + 0x20) = 1;
        lVar7 = *(long *)(this + 0x40);
        goto joined_r0x00fb544c;
      }
    }
  }
  lVar7 = *(long *)(this + 0x40);
joined_r0x00fb544c:
  if (lVar7 != 0) {
    iVar1 = (uVar6 >> 0x18) * 0x1000000 + -0x61c88647 + (uVar6 >> 0x10 & 0xff) * 0x10000 +
            (uVar6 >> 8 & 0xff) * 0x100 + (uVar6 & 0xff);
    uVar5 = (((uVar5 & 0xff000000) + 0x9f49bac2) - iVar1) + (uVar5 & 0xff0000) + (uVar5 & 0xff00) +
            (uVar5 & 0xff) ^ 0x7f76d;
    uVar6 = (iVar1 + 0x1124109) - uVar5 ^ uVar5 << 8;
    uVar2 = (-0x1124109 - uVar5) - uVar6 ^ uVar6 >> 0xd;
    uVar5 = (uVar5 - uVar6) - uVar2 ^ uVar2 >> 0xc;
    plVar8 = *(long **)(lVar7 + 0x50);
    uVar6 = (uVar6 - uVar2) - uVar5 ^ uVar5 << 0x10;
    uVar2 = (uVar2 - uVar5) - uVar6 ^ uVar6 >> 5;
    uVar5 = (uVar5 - uVar6) - uVar2 ^ uVar2 >> 3;
    uVar6 = (uVar6 - uVar2) - uVar5 ^ uVar5 << 10;
    for (lVar7 = *(long *)(*plVar8 +
                          (ulong)(((uVar2 - uVar5) - uVar6 ^ uVar6 >> 0xf) & (int)plVar8[1] - 1U) *
                          0x10); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x70)) {
      lVar7 = lVar7 - plVar8[4];
      if ((*(int *)(lVar7 + 0x80) == 8) && ((void *)**(undefined8 **)(lVar7 + 0x78) == param_1)) {
        *(undefined1 *)(*(long *)(lVar7 + 8) + 0x4c) = 1;
        return;
      }
    }
  }
  return;
}

