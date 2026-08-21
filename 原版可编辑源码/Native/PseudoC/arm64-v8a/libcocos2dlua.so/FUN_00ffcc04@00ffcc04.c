
__Array * FUN_00ffcc04(undefined8 *param_1)

{
  Value *this;
  Value *pVVar1;
  long lVar2;
  __Array *this_00;
  __String *this_01;
  basic_string local_60 [16];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this_00 = operator_new(0x38,(nothrow_t *)&std::nothrow);
  if (this_00 != (__Array *)0x0) {
    cocos2d::__Array::__Array(this_00);
  }
  cocos2d::__Array::init(this_00);
  pVVar1 = (Value *)param_1[1];
  for (this = (Value *)*param_1; this != pVVar1; this = this + 0x10) {
                    /* try { // try from 00ffcc9c to 010fcc9f has its CatchHandler @ 00ffcd64 */
    if (*(int *)(this + 8) == 8) {
      cocos2d::Value::asValueVector(this);
                    /* try { // try from 00ffcc74 to 010fcc83 has its CatchHandler @ 00ffcd5c */
      this_01 = (__String *)FUN_00ffcc04();
    }
    else if (*(int *)(this + 8) == 9) {
      cocos2d::Value::asValueMap(this);
      this_01 = (__String *)FUN_00ffc204();
    }
    else {
      this_01 = operator_new(0x48,(nothrow_t *)&std::nothrow);
      if (this_01 != (__String *)0x0) {
        cocos2d::Value::asString();
        cocos2d::__String::__String(this_01,local_60);
        if (((byte)local_60[0] & 1) != 0) {
          operator_delete(local_50);
        }
      }
    }
    cocos2d::__Array::addObject(this_00,(Ref *)this_01);
                    /* try { // try from 00ffcc8c to 010fcc8f has its CatchHandler @ 00ffcd60 */
    cocos2d::Ref::release((Ref *)this_01);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

