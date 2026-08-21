
void cpBodyActivate(long param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((param_1 != 0) && (iVar3 = cpBodyGetType(param_1), iVar3 == 0)) {
    lVar4 = *(long *)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0xb0) = 0;
    if ((lVar4 != 0) && (cVar2 = cpBodyIsSleeping(lVar4), cVar2 != '\0')) {
      lVar6 = *(long *)(lVar4 + 0x80);
      lVar5 = lVar4;
      do {
        lVar7 = *(long *)(lVar5 + 0xa8);
        *(undefined4 *)(lVar5 + 0xb0) = 0;
        *(undefined8 *)(lVar5 + 0xa0) = 0;
        *(undefined8 *)(lVar5 + 0xa8) = 0;
        cpSpaceActivateBody(lVar6);
        lVar5 = lVar7;
      } while (lVar7 != 0);
      cpArrayDeleteObj(*(undefined8 *)(lVar6 + 0x50),lVar4);
    }
    lVar4 = *(long *)(param_1 + 0x90);
    while (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 0x30);
      if (*(long *)(lVar4 + 0x28) != param_1) {
        plVar1 = (long *)(lVar4 + 0x28);
      }
      lVar5 = *plVar1;
      iVar3 = cpBodyGetType(lVar5);
      if (iVar3 != 2) {
        *(undefined4 *)(lVar5 + 0xb0) = 0;
      }
      plVar1 = (long *)(lVar4 + 0x38);
      if (*(long *)(lVar4 + 0x28) != param_1) {
        plVar1 = (long *)(lVar4 + 0x48);
      }
      lVar4 = *plVar1;
    }
  }
  return;
}

