
/* cocos2d::PUBehaviourManager::createBehaviour(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined8 __thiscall
cocos2d::PUBehaviourManager::createBehaviour(PUBehaviourManager *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string bVar2;
  int iVar3;
  undefined8 uVar4;
  basic_string *__s1;
  
  bVar2 = *param_1;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 == 5) {
    __s1 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      __s1 = param_1 + 1;
    }
    iVar3 = memcmp(__s1,"Slave",5);
    if (iVar3 == 0) {
      uVar4 = PUSlaveBehaviour::create();
      return uVar4;
    }
  }
  return 0;
}

