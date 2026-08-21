
/* cocostudio::timeline::BoneNode::removeFromSkinList(cocos2d::Node*) */

void __thiscall cocostudio::timeline::BoneNode::removeFromSkinList(BoneNode *this,Node *param_1)

{
  undefined8 *puVar1;
  size_t __n;
  undefined8 *puVar2;
  undefined8 *__dest;
  
  __dest = *(undefined8 **)(this + 0x390);
  puVar2 = *(undefined8 **)(this + 0x398);
  if (__dest != puVar2) {
    if ((Node *)*__dest != param_1) {
      do {
        if (puVar2 + -1 == __dest) {
          return;
        }
        puVar1 = __dest + 1;
        __dest = __dest + 1;
      } while ((Node *)*puVar1 != param_1);
    }
    if (__dest != puVar2) {
      __n = (long)puVar2 - (long)(__dest + 1);
      if (__n != 0) {
        memmove(__dest,__dest + 1,__n);
      }
      *(undefined8 **)(this + 0x398) = __dest + ((long)__n >> 3);
      cocos2d::Ref::release((Ref *)param_1);
      return;
    }
  }
  return;
}

