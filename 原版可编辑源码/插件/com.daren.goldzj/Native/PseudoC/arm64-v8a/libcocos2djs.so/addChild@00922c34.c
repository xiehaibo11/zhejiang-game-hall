
/* cocos2d::renderer::NodeProxy::addChild(cocos2d::renderer::NodeProxy*) */

void __thiscall cocos2d::renderer::NodeProxy::addChild(NodeProxy *this,NodeProxy *param_1)

{
  long lVar1;
  NodeProxy *pNVar2;
  void *__dest;
  undefined8 *__src;
  size_t __n;
  undefined8 *puVar3;
  undefined8 *puVar4;
  NodeProxy *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((param_1 != (NodeProxy *)0x0) && (pNVar2 = this, *(long *)(param_1 + 0xe8) == 0)) {
    for (; pNVar2 != (NodeProxy *)0x0; pNVar2 = *(NodeProxy **)(pNVar2 + 0xe8)) {
      if (pNVar2 == param_1) goto LAB_00922d40;
    }
    __src = *(undefined8 **)(this + 0xf0);
    puVar3 = *(undefined8 **)(this + 0xf8);
    puVar4 = puVar3;
    if ((__src == puVar3) &&
       (puVar4 = __src, (ulong)(*(long *)(this + 0x100) - (long)__src >> 3) < 4)) {
      __n = (long)puVar3 - (long)__src;
      __dest = operator_new(0x20);
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *(void **)(this + 0xf0) = __dest;
      *(undefined8 **)(this + 0xf8) = (undefined8 *)((long)__dest + __n);
      *(long *)(this + 0x100) = (long)__dest + 0x20;
      puVar4 = (undefined8 *)((long)__dest + __n);
      if (__src != (undefined8 *)0x0) {
        operator_delete(__src);
        puVar4 = *(undefined8 **)(this + 0xf8);
      }
    }
    local_70 = param_1;
    if (puVar4 == *(undefined8 **)(this + 0x100)) {
      std::__ndk1::
      vector<cocos2d::renderer::NodeProxy*,std::__ndk1::allocator<cocos2d::renderer::NodeProxy*>>::
      __push_back_slow_path<cocos2d::renderer::NodeProxy*const&>
                ((vector<cocos2d::renderer::NodeProxy*,std::__ndk1::allocator<cocos2d::renderer::NodeProxy*>>
                  *)(this + 0xf0),&local_70);
    }
    else {
      *puVar4 = param_1;
      *(long *)(this + 0xf8) = *(long *)(this + 0xf8) + 8;
    }
    Ref::retain((Ref *)local_70);
    *(NodeProxy **)(param_1 + 0xe8) = this;
  }
LAB_00922d40:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

