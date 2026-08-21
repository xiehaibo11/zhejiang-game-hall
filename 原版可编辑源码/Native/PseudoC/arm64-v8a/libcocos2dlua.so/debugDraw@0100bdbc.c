
/* cocos2d::PhysicsWorld::debugDraw() */

void __thiscall cocos2d::PhysicsWorld::debugDraw(PhysicsWorld *this)

{
  long lVar1;
  Ref *this_00;
  long lVar2;
  code *local_98;
  code *pcStack_90;
  code *local_88;
  code *pcStack_80;
  code *local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  code *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  DrawNode *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = *(DrawNode **)(this + 0x78);
  if (local_30 == (DrawNode *)0x0) {
    this_00 = (Ref *)DrawNode::create(2.0);
    *(Ref **)(this + 0x78) = this_00;
    this_00[0x453] = (Ref)0x1;
    Ref::retain(this_00);
    lVar2 = Director::getInstance();
    (**(code **)(**(long **)(lVar2 + 0x158) + 0x208))
              (*(long **)(lVar2 + 0x158),*(undefined8 *)(this + 0x78));
    local_30 = *(DrawNode **)(this + 0x78);
  }
  local_98 = FUN_0100becc;
  pcStack_90 = FUN_0100c090;
  local_88 = FUN_0100c12c;
  pcStack_80 = FUN_0100c1d4;
  local_78 = FUN_0100c37c;
  local_70 = *(undefined4 *)(this + 0x80);
  uStack_64 = 0x3f80000000000000;
  local_6c = 0x3f800000;
  local_58 = FUN_0100c400;
  uStack_48 = 0x3f80000000000000;
  local_50 = 0x3f40000000000000;
  local_34 = 0x3f800000;
  local_40 = 0;
  local_3c = 0x3f80000000000000;
  if (local_30 != (DrawNode *)0x0) {
    DrawNode::clear(local_30);
    cpSpaceDebugDraw(*(undefined8 *)(this + 0x28),&local_98);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

