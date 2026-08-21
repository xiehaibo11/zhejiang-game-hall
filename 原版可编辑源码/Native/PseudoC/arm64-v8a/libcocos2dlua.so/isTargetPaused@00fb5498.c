
/* cocos2d::Scheduler::isTargetPaused(void*) */

bool __thiscall cocos2d::Scheduler::isTargetPaused(Scheduler *this,void *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  
  uVar6 = (uint)param_1;
  uVar7 = (uint)((ulong)param_1 >> 0x20);
  if (*(long *)(this + 0x60) != 0) {
    iVar1 = (uVar7 >> 0x18) * 0x1000000 + -0x61c88647 + (uVar7 >> 0x10 & 0xff) * 0x10000 +
            (uVar7 >> 8 & 0xff) * 0x100 + (uVar7 & 0xff);
    uVar2 = (((uVar6 & 0xff000000) + 0x9f49bac2) - iVar1) + (uVar6 & 0xff0000) + (uVar6 & 0xff00) +
            (uVar6 & 0xff) ^ 0x7f76d;
    uVar3 = (iVar1 + 0x1124109) - uVar2 ^ uVar2 << 8;
    uVar4 = (-0x1124109 - uVar2) - uVar3 ^ uVar3 >> 0xd;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 >> 0xc;
    plVar9 = *(long **)(*(long *)(this + 0x60) + 0x28);
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 << 0x10;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 5;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 >> 3;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 << 10;
    for (lVar8 = *(long *)(*plVar9 +
                          (ulong)(((uVar4 - uVar2) - uVar3 ^ uVar3 >> 0xf) & (int)plVar9[1] - 1U) *
                          0x10); lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x48)) {
      lVar8 = lVar8 - plVar9[4];
      if ((*(int *)(lVar8 + 0x58) == 8) && ((void *)**(undefined8 **)(lVar8 + 0x50) == param_1)) {
        cVar5 = *(char *)(lVar8 + 0x20);
        goto LAB_00fb56d4;
      }
    }
  }
  if (*(long *)(this + 0x40) != 0) {
    iVar1 = (uVar7 >> 0x18) * 0x1000000 + -0x61c88647 + (uVar7 >> 0x10 & 0xff) * 0x10000 +
            (uVar7 >> 8 & 0xff) * 0x100 + (uVar7 & 0xff);
    uVar6 = (((uVar6 & 0xff000000) + 0x9f49bac2) - iVar1) + (uVar6 & 0xff0000) + (uVar6 & 0xff00) +
            (uVar6 & 0xff) ^ 0x7f76d;
    uVar7 = (iVar1 + 0x1124109) - uVar6 ^ uVar6 << 8;
    uVar2 = (-0x1124109 - uVar6) - uVar7 ^ uVar7 >> 0xd;
    uVar6 = (uVar6 - uVar7) - uVar2 ^ uVar2 >> 0xc;
    plVar9 = *(long **)(*(long *)(this + 0x40) + 0x50);
    uVar7 = (uVar7 - uVar2) - uVar6 ^ uVar6 << 0x10;
    uVar2 = (uVar2 - uVar6) - uVar7 ^ uVar7 >> 5;
    uVar6 = (uVar6 - uVar7) - uVar2 ^ uVar2 >> 3;
    uVar7 = (uVar7 - uVar2) - uVar6 ^ uVar6 << 10;
    for (lVar8 = *(long *)(*plVar9 +
                          (ulong)(((uVar2 - uVar6) - uVar7 ^ uVar7 >> 0xf) & (int)plVar9[1] - 1U) *
                          0x10); lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x70)) {
      lVar8 = lVar8 - plVar9[4];
      if ((*(int *)(lVar8 + 0x80) == 8) && ((void *)**(undefined8 **)(lVar8 + 0x78) == param_1)) {
        cVar5 = *(char *)(*(long *)(lVar8 + 8) + 0x4c);
LAB_00fb56d4:
        return cVar5 != '\0';
      }
    }
  }
  return false;
}

