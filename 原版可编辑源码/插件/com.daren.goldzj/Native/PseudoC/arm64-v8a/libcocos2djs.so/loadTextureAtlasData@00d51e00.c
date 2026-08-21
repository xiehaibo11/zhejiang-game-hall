
/* dragonBones::CCFactory::loadTextureAtlasData(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, float) */

undefined8 __thiscall
dragonBones::CCFactory::loadTextureAtlasData
          (CCFactory *this,basic_string *param_1,basic_string *param_2,float param_3)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  CCFactory *pCVar6;
  byte local_60;
  undefined7 uStack_5f;
  ulong uStack_58;
  char *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  plVar4 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar4 + 0x40))(&local_60,plVar4,param_1);
  pCVar6 = this + 0x58;
  if (((byte)*pCVar6 & 1) == 0) {
    *(undefined2 *)pCVar6 = 0;
  }
  else {
    **(undefined1 **)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    if (((byte)this[0x58] & 1) != 0) {
      operator_delete(*(void **)(this + 0x68));
      *(undefined8 *)(this + 0x58) = 0;
    }
  }
  *(char **)(this + 0x68) = local_50;
  *(ulong *)(this + 0x60) = uStack_58;
  *(ulong *)pCVar6 = CONCAT71(uStack_5f,local_60);
  plVar4 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar4 + 0x18))(&local_60,plVar4,pCVar6);
  uVar1 = (ulong)(local_60 >> 1);
  if ((local_60 & 1) != 0) {
    uVar1 = uStack_58;
  }
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    pcVar2 = (char *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pcVar2 = local_50;
    }
    uVar5 = BaseFactory::parseTextureAtlasData
                      ((BaseFactory *)this,pcVar2,(void *)0x0,param_2,param_3);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

