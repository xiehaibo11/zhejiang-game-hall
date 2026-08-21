
/* cocostudio::Armature::onEnter() */

void __thiscall cocostudio::Armature::onEnter(Armature *this)

{
  ulong uVar1;
  
  if ((*(int *)(this + 0x208) == 2) &&
     (uVar1 = cocos2d::ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,0),
     (uVar1 & 1) != 0)) {
    return;
  }
  cocos2d::Node::onEnter((Node *)this);
  cocos2d::Node::scheduleUpdate((Node *)this);
  return;
}

