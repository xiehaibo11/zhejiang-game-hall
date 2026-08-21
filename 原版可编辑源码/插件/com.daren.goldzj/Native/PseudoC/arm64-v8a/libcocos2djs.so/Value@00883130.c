
/* cocos2d::Value::Value(std::__ndk1::vector<cocos2d::Value, std::__ndk1::allocator<cocos2d::Value>
   > const&) */

void __thiscall cocos2d::Value::Value(Value *this,vector *param_1)

{
  vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *this_00;
  
  *(undefined4 *)(this + 8) = 8;
  this_00 = operator_new(0x18,(nothrow_t *)&std::nothrow);
  if (this_00 == (vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)0x0) {
    *(undefined8 *)this = 0;
  }
  else {
    *(undefined8 *)(this_00 + 8) = 0;
    *(undefined8 *)(this_00 + 0x10) = 0;
    *(undefined8 *)this_00 = 0;
    *(vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> **)this = this_00;
    if (this_00 == (vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)param_1) {
      return;
    }
  }
  std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
  assign<cocos2d::Value*>(this_00,*(Value **)param_1,*(Value **)(param_1 + 8));
  return;
}

