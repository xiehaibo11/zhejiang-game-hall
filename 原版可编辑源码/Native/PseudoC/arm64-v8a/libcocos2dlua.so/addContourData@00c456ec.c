
/* cocostudio::ColliderDetector::addContourData(cocostudio::ContourData*) */

void __thiscall
cocostudio::ColliderDetector::addContourData(ColliderDetector *this,ContourData *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Ref *this_00;
  ulong uVar5;
  ColliderBody *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  this_00 = operator_new(0x48,(nothrow_t *)&std::nothrow);
  if (this_00 != (Ref *)0x0) {
    cocos2d::Ref::Ref(this_00);
    *(undefined8 *)(this_00 + 0x30) = 0;
    *(undefined8 *)(this_00 + 0x38) = 0;
    *(undefined ***)this_00 = &PTR__ColliderBody_016c9d08;
    *(undefined8 *)(this_00 + 0x28) = 0;
    *(ContourData **)(this_00 + 0x40) = param_1;
    if (param_1 != (ContourData *)0x0) {
      cocos2d::Ref::retain((Ref *)param_1);
    }
  }
  puVar1 = *(undefined8 **)(this + 0x30);
  local_50 = (ColliderBody *)this_00;
  if (puVar1 == *(undefined8 **)(this + 0x38)) {
    std::__ndk1::vector<cocostudio::ColliderBody*,std::__ndk1::allocator<cocostudio::ColliderBody*>>
    ::__push_back_slow_path<cocostudio::ColliderBody*const&>
              ((vector<cocostudio::ColliderBody*,std::__ndk1::allocator<cocostudio::ColliderBody*>>
                *)(this + 0x28),&local_50);
  }
  else {
    *puVar1 = this_00;
    *(undefined8 **)(this + 0x30) = puVar1 + 1;
  }
  cocos2d::Ref::retain((Ref *)local_50);
  cocos2d::Ref::release(this_00);
  lVar2 = *(long *)(param_1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 - lVar2 != 0) {
    uVar5 = 0;
    do {
      local_50 = (ColliderBody *)0x0;
      puVar1 = *(undefined8 **)(this_00 + 0x30);
      if (puVar1 < *(undefined8 **)(this_00 + 0x38)) {
        *puVar1 = 0;
        *(undefined8 **)(this_00 + 0x30) = puVar1 + 1;
      }
      else {
        std::__ndk1::vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>>::
        __push_back_slow_path<cocos2d::Vec2>
                  ((vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>> *)(this_00 + 0x28),
                   (Vec2 *)&local_50);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulong)(lVar3 - lVar2 >> 3));
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

