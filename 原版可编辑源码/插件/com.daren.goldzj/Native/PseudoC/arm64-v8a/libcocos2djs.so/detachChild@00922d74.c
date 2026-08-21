
/* cocos2d::renderer::NodeProxy::detachChild(cocos2d::renderer::NodeProxy*, long) */

void __thiscall
cocos2d::renderer::NodeProxy::detachChild(NodeProxy *this,NodeProxy *param_1,long param_2)

{
  undefined8 *__dest;
  size_t __n;
  
  *(undefined8 *)(param_1 + 0xe8) = 0;
  __dest = (undefined8 *)(*(long *)(this + 0xf0) + param_2 * 8);
  Ref::release((Ref *)*__dest);
  __n = *(long *)(this + 0xf8) - (long)(__dest + 1);
  if (__n != 0) {
    memmove(__dest,__dest + 1,__n);
  }
  *(undefined8 **)(this + 0xf8) = __dest + ((long)__n >> 3);
  return;
}

