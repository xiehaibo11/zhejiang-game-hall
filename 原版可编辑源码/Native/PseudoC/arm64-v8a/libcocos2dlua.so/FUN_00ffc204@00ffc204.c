
Ref * FUN_00ffc204(long param_1)

{
  long lVar1;
  Ref *this;
  __String *this_00;
  long *plVar2;
  basic_string local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = operator_new(0x40,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    cocos2d::Ref::Ref(this);
    *(undefined4 *)(this + 0x38) = 0;
    *(undefined ***)this = &PTR____Dictionary_01724bf8;
    *(undefined ***)(this + 0x28) = &PTR_clone_01724c28;
    *(undefined8 *)(this + 0x30) = 0;
  }
  for (plVar2 = *(long **)(param_1 + 0x10); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    if (*(int *)(plVar2 + 6) == 8) {
      cocos2d::Value::asValueVector((Value *)(plVar2 + 5));
      this_00 = (__String *)FUN_00ffcc04();
    }
    else if (*(int *)(plVar2 + 6) == 9) {
      cocos2d::Value::asValueMap((Value *)(plVar2 + 5));
      this_00 = (__String *)FUN_00ffc204();
    }
    else {
      this_00 = operator_new(0x48,(nothrow_t *)&std::nothrow);
      if (this_00 != (__String *)0x0) {
        cocos2d::Value::asString();
        cocos2d::__String::__String(this_00,local_60);
        if (((byte)local_60[0] & 1) != 0) {
          operator_delete(local_50);
        }
      }
    }
    cocos2d::__Dictionary::setObject
              ((__Dictionary *)this,(Ref *)this_00,(basic_string *)(plVar2 + 2));
    cocos2d::Ref::release((Ref *)this_00);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

