
/* cocos2d::__NotificationCenter::__NotificationCenter() */

void __thiscall cocos2d::__NotificationCenter::__NotificationCenter(__NotificationCenter *this)

{
  Ref *this_00;
  
  Ref::Ref((Ref *)this);
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined ***)this = &PTR____NotificationCenter_01724c88;
  this_00 = (Ref *)__Array::createWithCapacity(3);
                    /* try { // try from 00ffd398 to 010fd3a3 has its CatchHandler @ 00ffd6d4 */
  *(Ref **)(this + 0x28) = this_00;
  Ref::retain(this_00);
  return;
}

