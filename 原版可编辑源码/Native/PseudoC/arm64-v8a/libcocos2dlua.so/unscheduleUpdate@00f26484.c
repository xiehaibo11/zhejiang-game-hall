
/* cocos2d::Node::unscheduleUpdate() */

void __thiscall cocos2d::Node::unscheduleUpdate(Node *this)

{
  undefined8 *puVar1;
  
  Scheduler::unscheduleUpdate(*(Scheduler **)(this + 0x1e0),this);
  if (*(int *)(this + 0x204) != 0) {
    puVar1 = (undefined8 *)ScriptEngineManager::getInstance();
    (**(code **)(*(long *)*puVar1 + 0x50))((long *)*puVar1,*(undefined4 *)(this + 0x204));
    *(undefined4 *)(this + 0x204) = 0;
  }
  return;
}

