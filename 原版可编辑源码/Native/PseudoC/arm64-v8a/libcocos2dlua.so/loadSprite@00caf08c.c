
/* cocos2d::CSLoader::loadSprite(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

Node * __thiscall cocos2d::CSLoader::loadSprite(CSLoader *this,GenericValue *param_1)

{
  long lVar1;
  DictionaryHelper *pDVar2;
  char *pcVar3;
  SpriteFrameCache *this_00;
  SpriteFrame *pSVar4;
  CSLoader *this_01;
  CSLoader *this_02;
  CSLoader *extraout_x0;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  ulong local_68;
  undefined1 *local_58;
  ulong local_50 [2];
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pDVar2 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  pcVar7 = "fileName";
  pcVar3 = (char *)cocostudio::DictionaryHelper::getStringValue_json
                             (pDVar2,param_1,"fileName",(char *)0x0);
  if (pcVar3 == (char *)0x0) {
    this_02 = (CSLoader *)Sprite::create();
    this_01 = this_02;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               local_50,pcVar3);
    this_00 = (SpriteFrameCache *)SpriteFrameCache::getInstance();
    pSVar4 = (SpriteFrame *)SpriteFrameCache::getSpriteFrameByName(this_00,(basic_string *)local_50)
    ;
    if (pSVar4 == (SpriteFrame *)0x0) {
      std::__ndk1::operator+
                ((__ndk1 *)(this + 0x58),(basic_string *)local_50,(basic_string *)pcVar7);
      if ((local_50[0] & 1) != 0) {
        *local_40 = 0;
        local_50[1] = 0;
        if ((local_50[0] & 1) != 0) {
          operator_delete(local_40);
        }
      }
      local_50[0] = local_68;
      local_40 = local_58;
      this_01 = (CSLoader *)Sprite::create((basic_string *)local_50);
    }
    else {
      this_01 = (CSLoader *)Sprite::createWithSpriteFrame(pSVar4);
    }
    if (this_01 == (CSLoader *)0x0) {
      this_01 = (CSLoader *)Sprite::create();
    }
    this_02 = this_01;
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
      this_02 = extraout_x0;
    }
  }
  initNode(this_02,(Node *)this_01,param_1);
  pDVar2 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  uVar5 = cocostudio::DictionaryHelper::getBooleanValue_json(pDVar2,param_1,"flipX",false);
  pDVar2 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  uVar6 = cocostudio::DictionaryHelper::getBooleanValue_json(pDVar2,param_1,"flipY",false);
  if ((uVar5 & 1) != 0) {
    Sprite::setFlippedX((Sprite *)this_01,true);
  }
  if ((uVar6 & 1) != 0) {
    Sprite::setFlippedY((Sprite *)this_01,true);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (Node *)this_01;
}

