
/* universe::network::AUpdates::writeStrLen(unsigned long const&) */

void __thiscall universe::network::AUpdates::writeStrLen(AUpdates *this,ulong *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = *param_1;
  if (uVar5 < 0xff) {
    if (*(long *)(this + 8) != *(long *)(this + 0x10)) {
      *(char *)(*(long *)this + *(long *)(this + 0x10)) = (char)uVar5;
      lVar3 = *(long *)(this + 0x10) + 1;
      goto LAB_00a05c98;
    }
    pcVar1 = (char *)Translated::getInstance();
    lVar3 = *(long *)(this + 8);
    lVar4 = *(long *)(this + 0x10);
    uVar2 = 1;
  }
  else {
    if (*(long *)(this + 8) == *(long *)(this + 0x10)) {
      pcVar1 = (char *)Translated::getInstance();
      Translated::log(pcVar1,&LAB_012f87ac,1,*(long *)(this + 8) - *(long *)(this + 0x10));
    }
    else {
      *(undefined1 *)(*(long *)this + *(long *)(this + 0x10)) = 0xff;
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    }
    if (uVar5 < 0xffff) {
      if (1 < (ulong)(*(long *)(this + 8) - *(long *)(this + 0x10))) {
        *(short *)(*(long *)this + *(long *)(this + 0x10)) = (short)*param_1;
        lVar3 = *(long *)(this + 0x10) + 2;
LAB_00a05c98:
        *(long *)(this + 0x10) = lVar3;
        return;
      }
      pcVar1 = (char *)Translated::getInstance();
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(this + 0x10);
      uVar2 = 2;
    }
    else {
      if ((ulong)(*(long *)(this + 8) - *(long *)(this + 0x10)) < 2) {
        pcVar1 = (char *)Translated::getInstance();
        Translated::log(pcVar1,&LAB_012f87ac,2,*(long *)(this + 8) - *(long *)(this + 0x10));
        lVar3 = *(long *)(this + 0x10);
      }
      else {
        *(undefined2 *)(*(long *)this + *(long *)(this + 0x10)) = 0xffff;
        lVar3 = *(long *)(this + 0x10) + 2;
        *(long *)(this + 0x10) = lVar3;
      }
      if (3 < (ulong)(*(long *)(this + 8) - lVar3)) {
        *(int *)(*(long *)this + lVar3) = (int)*param_1;
        lVar3 = *(long *)(this + 0x10) + 4;
        goto LAB_00a05c98;
      }
      pcVar1 = (char *)Translated::getInstance();
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(this + 0x10);
      uVar2 = 4;
    }
  }
  Translated::log(pcVar1,&LAB_012f87ac,uVar2,lVar3 - lVar4);
  return;
}

