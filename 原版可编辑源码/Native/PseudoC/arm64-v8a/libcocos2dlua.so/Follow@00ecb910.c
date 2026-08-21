
/* cocos2d::Follow::Follow() */

void __thiscall cocos2d::Follow::Follow(Follow *this)

{
  undefined4 uVar1;
  long *plVar2;
  
  Ref::Ref((Ref *)this);
                    /* catch() { ... } // from try @ 00ecb6f4 with catch @ 00ecb928 */
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0xffffffff;
  *(undefined ***)this = &PTR__Action_016f5448;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f54a8;
  plVar2 = (long *)ScriptEngineManager::getInstance();
  uVar1 = 0;
  if ((long *)*plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*(long *)*plVar2 + 0x10))();
  }
  *(undefined4 *)(this + 0x48) = uVar1;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 100) = 0;
  *(undefined8 *)(this + 0x5c) = 0;
  *(undefined8 *)(this + 0x74) = 0;
  *(undefined8 *)(this + 0x6c) = 0;
  *(undefined ***)this = &PTR__Follow_016f5558;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f55b8;
  *(undefined8 *)(this + 0x7c) = 0;
  Rect::Rect((Rect *)(this + 0x84),(Rect *)Rect::ZERO);
  return;
}

