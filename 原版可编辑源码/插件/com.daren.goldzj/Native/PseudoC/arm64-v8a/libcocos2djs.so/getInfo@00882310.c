
/* cocos2d::Configuration::getInfo() const */

void __thiscall cocos2d::Configuration::getInfo(Configuration *this)

{
  long lVar1;
  Value aVStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  cocos2d::Value::Value(aVStack_38,(unordered_map *)(this + 0x48));
  cocos2d::Value::getDescription();
  cocos2d::Value::~Value(aVStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

