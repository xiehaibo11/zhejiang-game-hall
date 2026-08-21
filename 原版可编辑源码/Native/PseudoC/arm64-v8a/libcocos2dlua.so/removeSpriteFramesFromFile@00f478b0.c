
/* cocos2d::SpriteFrameCache::removeSpriteFramesFromFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::SpriteFrameCache::removeSpriteFramesFromFile(SpriteFrameCache *this,basic_string *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long *plVar4;
  void *pvVar5;
  byte local_78 [16];
  void *local_68;
  void *local_60 [2];
  undefined8 *local_50;
  long local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar4 + 0x50))(local_78,plVar4,param_1);
  plVar4 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar4 + 0xc0))(local_60,plVar4,local_78);
  pvVar2 = local_60[0];
  puVar3 = local_50;
  if (local_48 != 0) {
    removeSpriteFramesFromDictionary(this,(unordered_map *)local_60);
    PlistFramesCache::erasePlistIndex((PlistFramesCache *)(this + 0x50),param_1);
    pvVar2 = local_60[0];
    puVar3 = local_50;
  }
  while (puVar3 != (void *)0x0) {
    pvVar5 = (void *)*puVar3;
    local_60[0] = pvVar2;
    cocos2d::Value::~Value((Value *)(puVar3 + 5));
    if ((*(byte *)(puVar3 + 2) & 1) != 0) {
      operator_delete((void *)puVar3[4]);
    }
    operator_delete(puVar3);
    pvVar2 = local_60[0];
    puVar3 = pvVar5;
  }
  local_60[0] = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

