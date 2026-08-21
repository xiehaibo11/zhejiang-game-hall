
/* cocos2d::SpriteFrameCache::addSpriteFramesWithFileContent(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::Texture2D*) */

void __thiscall
cocos2d::SpriteFrameCache::addSpriteFramesWithFileContent
          (SpriteFrameCache *this,basic_string *param_1,Texture2D *param_2)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  bool bVar5;
  long *plVar6;
  basic_string *pbVar7;
  void *pvVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [16];
  void *local_68;
  void *local_60 [2];
  undefined8 *local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar6 = (long *)FileUtils::getInstance();
  pbVar7 = *(basic_string **)(param_1 + 0x10);
  bVar5 = ((byte)*param_1 & 1) == 0;
  if (bVar5) {
    pbVar7 = param_1 + 1;
  }
  uVar1 = (uint)((byte)*param_1 >> 1);
  if (!bVar5) {
    uVar1 = *(uint *)(param_1 + 8);
  }
  (**(code **)(*plVar6 + 200))(local_60,plVar6,pbVar7,uVar1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_78,"by#addSpriteFramesWithFileContent()");
  addSpriteFramesWithDictionary((unordered_map *)this,(Texture2D *)local_60,(basic_string *)param_2)
  ;
  pvVar3 = local_60[0];
  puVar4 = local_50;
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
    pvVar3 = local_60[0];
    puVar4 = local_50;
  }
  while (puVar4 != (void *)0x0) {
    pvVar8 = (void *)*puVar4;
    local_60[0] = pvVar3;
    cocos2d::Value::~Value((Value *)(puVar4 + 5));
    if ((*(byte *)(puVar4 + 2) & 1) != 0) {
      operator_delete((void *)puVar4[4]);
    }
    operator_delete(puVar4);
    pvVar3 = local_60[0];
    puVar4 = pvVar8;
  }
  local_60[0] = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

