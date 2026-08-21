
/* cocosbuilder::CCBReader::getOwnerOutletNames() */

void cocosbuilder::CCBReader::getOwnerOutletNames(void)

{
  Value *this;
  long lVar1;
  long in_x0;
  vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *in_x8;
  basic_string *pbVar2;
  Value aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::reserve
            (in_x8,(*(long *)(in_x0 + 200) - *(long *)(in_x0 + 0xc0) >> 3) * -0x5555555555555555);
  pbVar2 = *(basic_string **)(in_x0 + 0xc0);
  if (pbVar2 != *(basic_string **)(in_x0 + 200)) {
    do {
      cocos2d::Value::Value(aVStack_58,pbVar2);
      this = *(Value **)(in_x8 + 8);
      if (this < *(Value **)(in_x8 + 0x10)) {
        cocos2d::Value::Value(this,aVStack_58);
        *(Value **)(in_x8 + 8) = this + 0x10;
      }
      else {
        std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
        __push_back_slow_path<cocos2d::Value>(in_x8,aVStack_58);
      }
      cocos2d::Value::~Value(aVStack_58);
      pbVar2 = pbVar2 + 0x18;
    } while (pbVar2 != *(basic_string **)(in_x0 + 200));
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

