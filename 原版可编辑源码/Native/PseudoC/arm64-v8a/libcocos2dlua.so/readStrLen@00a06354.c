
/* universe::network::OStream::readStrLen() */

uint __thiscall universe::network::OStream::readStrLen(OStream *this)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(this + 0x10);
  if (*(long *)(this + 8) == lVar6) {
    pcVar4 = (char *)Translated::getInstance();
    lVar6 = *(long *)(this + 8);
    lVar7 = *(long *)(this + 0x10);
    uVar5 = 1;
  }
  else {
    bVar2 = *(byte *)(*(long *)this + lVar6);
    *(long *)(this + 0x10) = lVar6 + 1;
    if (bVar2 != 0xff) {
      return (uint)bVar2;
    }
    lVar6 = *(long *)(this + 0x10);
    if ((ulong)(*(long *)(this + 8) - lVar6) < 2) {
      pcVar4 = (char *)Translated::getInstance();
      lVar6 = *(long *)(this + 8);
      lVar7 = *(long *)(this + 0x10);
      uVar5 = 2;
    }
    else {
      uVar3 = *(ushort *)(*(long *)this + lVar6);
      *(long *)(this + 0x10) = lVar6 + 2;
      if (uVar3 != 0xffff) {
        return (uint)uVar3;
      }
      lVar6 = *(long *)(this + 0x10);
      if (3 < (ulong)(*(long *)(this + 8) - lVar6)) {
        uVar1 = *(uint *)(*(long *)this + lVar6);
        *(long *)(this + 0x10) = lVar6 + 4;
        return uVar1;
      }
      pcVar4 = (char *)Translated::getInstance();
      lVar6 = *(long *)(this + 8);
      lVar7 = *(long *)(this + 0x10);
      uVar5 = 4;
    }
  }
  Translated::log(pcVar4,&DAT_012f87ed,uVar5,lVar6 - lVar7);
  return 0;
}

