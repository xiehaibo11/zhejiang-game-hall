
/* cocos2d::CSLoader::loadNodeWithContent(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

Ref * __thiscall cocos2d::CSLoader::loadNodeWithContent(CSLoader *this,basic_string *param_1)

{
  long lVar1;
  int iVar2;
  DictionaryHelper *pDVar3;
  char *pcVar4;
  size_t sVar5;
  SpriteFrameCache *this_00;
  GenericValue *pGVar6;
  Ref *this_01;
  basic_string *pbVar7;
  int iVar8;
  basic_string *local_118;
  basic_string *pbStack_110;
  undefined1 *local_108;
  basic_string *local_100;
  undefined8 uStack_f8;
  undefined1 *local_f0;
  basic_string *local_e0;
  basic_string *pbStack_d8;
  undefined1 *local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  puStack_a8 = (undefined8 *)0x0;
  local_b0 = 0;
  uStack_98 = 0;
  puStack_a0 = (undefined8 *)0x0;
  uStack_b8 = 0;
  local_c0 = 0;
  local_70 = 0x400;
  local_68 = 0;
  local_60 = 0;
  puStack_a8 = operator_new(0x28);
  puStack_a8[3] = 0;
  puStack_a8[4] = 0;
  puStack_a8[1] = 0x10000;
  puStack_a8[2] = 0;
  *puStack_a8 = 0;
  local_e0 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    local_e0 = param_1 + 1;
  }
  pbStack_d8 = local_e0;
  puStack_a0 = puStack_a8;
  rapidjson::
  GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
  ::ParseStream<0u,rapidjson::UTF8<char>,rapidjson::GenericStringStream<rapidjson::UTF8<char>>>
            ((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
              *)&local_c0,(GenericStringStream *)&local_e0);
  pDVar3 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  pcVar4 = (char *)cocostudio::DictionaryHelper::getStringValue_json
                             (pDVar3,(GenericValue *)&local_c0,"cocos2dVersion","");
  sVar5 = strlen(pcVar4);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x70),pcVar4,sVar5);
  pDVar3 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  iVar2 = cocostudio::DictionaryHelper::getArrayCount_json
                    (pDVar3,(GenericValue *)&local_c0,"textures",0);
  if (0 < iVar2) {
    iVar8 = 0;
    do {
      pDVar3 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
      pcVar4 = (char *)cocostudio::DictionaryHelper::getStringValueFromArray_json
                                 (pDVar3,(GenericValue *)&local_c0,"textures",iVar8,(char *)0x0);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_e0,pcVar4);
      pDVar3 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
      pbVar7 = (basic_string *)"texturesPng";
      pcVar4 = (char *)cocostudio::DictionaryHelper::getStringValueFromArray_json
                                 (pDVar3,(GenericValue *)&local_c0,"texturesPng",iVar8,(char *)0x0);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_100,pcVar4);
      std::__ndk1::operator+((__ndk1 *)(this + 0x58),(basic_string *)&local_e0,pbVar7);
      if (((ulong)local_e0 & 1) != 0) {
        *local_d0 = 0;
        pbStack_d8 = (basic_string *)0x0;
        if (((ulong)local_e0 & 1) != 0) {
          operator_delete(local_d0);
        }
      }
      pbStack_d8 = pbStack_110;
      local_e0 = local_118;
      local_d0 = local_108;
      std::__ndk1::operator+((__ndk1 *)(this + 0x58),(basic_string *)&local_100,pbVar7);
      if (((ulong)local_100 & 1) != 0) {
        *local_f0 = 0;
        uStack_f8 = 0;
        if (((ulong)local_100 & 1) != 0) {
          operator_delete(local_f0);
        }
      }
      local_100 = local_118;
      local_f0 = local_108;
      this_00 = (SpriteFrameCache *)SpriteFrameCache::getInstance();
      SpriteFrameCache::addSpriteFramesWithFile
                (this_00,(basic_string *)&local_e0,(basic_string *)&local_100);
      if (((ulong)local_100 & 1) != 0) {
        operator_delete(local_f0);
      }
      if (((ulong)local_e0 & 1) != 0) {
        operator_delete(local_d0);
      }
      iVar8 = iVar8 + 1;
    } while (iVar2 != iVar8);
  }
  pDVar3 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  pGVar6 = (GenericValue *)
           cocostudio::DictionaryHelper::getSubDictionary_json
                     (pDVar3,(GenericValue *)&local_c0,"nodeTree");
  this_01 = (Ref *)loadNode(this,pGVar6);
  Ref::release(this_01);
  rapidjson::
  GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
  ::~GenericDocument((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                      *)&local_c0);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_01;
}

