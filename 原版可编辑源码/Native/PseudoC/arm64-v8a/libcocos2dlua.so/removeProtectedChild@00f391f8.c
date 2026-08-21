
/* cocos2d::ProtectedNode::removeProtectedChild(cocos2d::Node*, bool) */

void __thiscall
cocos2d::ProtectedNode::removeProtectedChild(ProtectedNode *this,Node *param_1,bool param_2)

{
  undefined8 *__dest;
  size_t __n;
  long *plVar1;
  long *plVar2;
  long lVar3;
  Node *pNVar4;
  long *plVar5;
  long *plVar6;
  
  plVar2 = *(long **)(this + 0x2f8);
  plVar1 = *(long **)(this + 0x300);
  if (plVar2 != plVar1) {
                    /* try { // try from 00f39218 to 0103921f has its CatchHandler @ 00f3924c */
    pNVar4 = (Node *)*plVar2;
    plVar5 = plVar2;
                    /* try { // try from 00f39220 to 01039267 has its CatchHandler @ 00f391f0 */
    while ((plVar6 = plVar5, pNVar4 != param_1 &&
           (plVar5 = plVar5 + 1, plVar6 = plVar1, plVar1 != plVar5))) {
      pNVar4 = (Node *)*plVar5;
    }
    lVar3 = (long)plVar6 - (long)plVar2 >> 3;
    if (plVar6 == plVar1) {
      lVar3 = -1;
    }
    if (lVar3 != -1) {
      if (this[0x1f8] != (ProtectedNode)0x0) {
        (**(code **)(*(long *)param_1 + 0x338))(param_1);
        (**(code **)(*(long *)param_1 + 0x330))(param_1);
      }
      if (param_2) {
        (**(code **)(*(long *)param_1 + 0x340))(param_1);
      }
      (**(code **)(*(long *)param_1 + 600))(param_1,0);
      __dest = (undefined8 *)(*(long *)(this + 0x2f8) + lVar3 * 8);
      Ref::release((Ref *)*__dest);
      __n = *(long *)(this + 0x300) - (long)(__dest + 1);
      if (__n != 0) {
        memmove(__dest,__dest + 1,__n);
      }
      *(undefined8 **)(this + 0x300) = __dest + ((long)__n >> 3);
    }
  }
  return;
}

