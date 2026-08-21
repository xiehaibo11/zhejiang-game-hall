
/* cocostudio::Armature::getNodeToParentTransform() const */

void __thiscall cocostudio::Armature::getNodeToParentTransform(Armature *this)

{
  if (this[0x10c] != (Armature)0x0) {
    this[0x31c] = (Armature)0x1;
  }
  cocos2d::Node::getNodeToParentTransform((Node *)this);
  return;
}

