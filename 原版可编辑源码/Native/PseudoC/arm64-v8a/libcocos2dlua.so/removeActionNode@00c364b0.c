
/* cocostudio::ActionObject::removeActionNode(cocostudio::ActionNode*) */

void __thiscall cocostudio::ActionObject::removeActionNode(ActionObject *this,ActionNode *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t __n;
  undefined8 *__dest;
  
  if (param_1 != (ActionNode *)0x0) {
    __dest = *(undefined8 **)(this + 0x28);
    puVar2 = *(undefined8 **)(this + 0x30);
    if (__dest != puVar2) {
      if ((ActionNode *)*__dest != param_1) {
        do {
          if (puVar2 + -1 == __dest) {
            return;
          }
          puVar1 = __dest + 1;
          __dest = __dest + 1;
        } while ((ActionNode *)*puVar1 != param_1);
      }
      if (__dest != puVar2) {
        __n = (long)puVar2 - (long)(__dest + 1);
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
        }
        *(undefined8 **)(this + 0x30) = __dest + ((long)__n >> 3);
        cocos2d::Ref::release((Ref *)param_1);
        return;
      }
    }
  }
  return;
}

