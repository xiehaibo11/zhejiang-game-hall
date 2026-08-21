
/* cocos2d::Image::initWithImageFile(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

uint __thiscall cocos2d::Image::initWithImageFile(Image *this,basic_string *param_1)

{
  Image *pIVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  uchar *puVar6;
  long lVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar4 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar4 + 0x50))(&local_50,plVar4,param_1);
  pIVar1 = this + 0x158;
  if (((byte)this[0x158] & 1) == 0) {
    *(undefined2 *)pIVar1 = 0;
  }
  else {
    **(undefined1 **)(this + 0x168) = 0;
    *(undefined8 *)(this + 0x160) = 0;
    if (((byte)this[0x158] & 1) != 0) {
      operator_delete(*(void **)(this + 0x168));
      *(undefined8 *)(this + 0x158) = 0;
    }
  }
  *(undefined8 *)(this + 0x168) = local_40;
  *(undefined8 *)(this + 0x160) = uStack_48;
  *(undefined8 *)pIVar1 = local_50;
  plVar4 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar4 + 0x28))(&local_50,plVar4,pIVar1);
  uVar5 = Data::isNull((Data *)&local_50);
  if ((uVar5 & 1) == 0) {
    puVar6 = (uchar *)Data::getBytes((Data *)&local_50);
    lVar7 = Data::getSize((Data *)&local_50);
    uVar3 = initWithImageData(this,puVar6,lVar7);
  }
  else {
    uVar3 = 0;
  }
  Data::~Data((Data *)&local_50);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

