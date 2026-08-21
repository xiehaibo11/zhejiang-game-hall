
/* universe::network::GuoPengFei::onReadAlloc(unsigned long) */

long __thiscall universe::network::GuoPengFei::onReadAlloc(GuoPengFei *this,ulong param_1)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if (this[0x4a0] != (GuoPengFei)0x0) {
    pcVar2 = (char *)Translated::getInstance();
    Translated::log(pcVar2,"GuoPengFei: delete 5");
  }
  lVar4 = *(long *)(this + 0x390);
  lVar5 = *(long *)(this + 0x380);
  uVar6 = *(long *)(this + 0x398) - lVar4;
  if (uVar6 - lVar5 < param_1) {
    uVar3 = (ulong)(((double)(param_1 - (uVar6 - lVar5) >> 0x10) + 1.0) * 65536.0);
    uVar1 = uVar6 + uVar3;
    if (uVar6 < uVar1) {
      std::__ndk1::vector<char,std::__ndk1::allocator<char>>::__append
                ((vector<char,std::__ndk1::allocator<char>> *)(this + 0x390),uVar3);
      lVar4 = *(long *)(this + 0x390);
      lVar5 = *(long *)(this + 0x380);
    }
    else if (uVar6 != uVar1) {
      *(ulong *)(this + 0x398) = lVar4 + uVar1;
    }
  }
  return lVar4 + lVar5;
}

