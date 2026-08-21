
/* cocos2d::Node::detachChild(cocos2d::Node*, long, bool) */

void __thiscall cocos2d::Node::detachChild(Node *this,Node *param_1,long param_2,bool param_3)

{
  undefined8 *__dest;
  size_t __n;
  
                    /* try { // try from 00f25610 to 0102561f has its CatchHandler @ 00f25774 */
  if (this[0x1f8] != (Node)0x0) {
    (**(code **)(*(long *)param_1 + 0x338))(param_1);
    (**(code **)(*(long *)param_1 + 0x330))(param_1);
  }
  if (param_3) {
    (**(code **)(*(long *)param_1 + 0x340))(param_1);
  }
  (**(code **)(*(long *)param_1 + 600))(param_1,0);
  __dest = (undefined8 *)(*(long *)(this + 0x178) + param_2 * 8);
  Ref::release((Ref *)*__dest);
  __n = *(long *)(this + 0x180) - (long)(__dest + 1);
  if (__n != 0) {
    memmove(__dest,__dest + 1,__n);
  }
  *(undefined8 **)(this + 0x180) = __dest + ((long)__n >> 3);
  return;
}

