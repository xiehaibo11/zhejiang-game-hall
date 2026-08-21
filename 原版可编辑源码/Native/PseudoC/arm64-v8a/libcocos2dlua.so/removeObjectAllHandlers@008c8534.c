
/* cocos2d::ScriptHandlerMgr::removeObjectAllHandlers(void*) */

void __thiscall
cocos2d::ScriptHandlerMgr::removeObjectAllHandlers(ScriptHandlerMgr *this,void *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  __tree_node_base *p_Var4;
  long *plVar5;
  __tree_node_base *p_Var6;
  long lVar7;
  __tree_node_base *p_Var8;
  
  if ((param_1 != (void *)0x0) && (*(long *)(this + 0x18) != 0)) {
    p_Var4 = (__tree_node_base *)(this + 0x10);
    p_Var6 = *(__tree_node_base **)p_Var4;
    p_Var8 = p_Var4;
    if (p_Var6 != (__tree_node_base *)0x0) {
      do {
        if (*(void **)(p_Var6 + 0x20) >= param_1) {
          p_Var8 = p_Var6;
        }
        p_Var6 = *(__tree_node_base **)(p_Var6 + (ulong)(*(void **)(p_Var6 + 0x20) < param_1) * 8);
      } while (p_Var6 != (__tree_node_base *)0x0);
      if ((p_Var8 != p_Var4) && (*(void **)(p_Var8 + 0x20) <= param_1)) {
        lVar7 = *(long *)(p_Var8 + 0x28);
        lVar1 = *(long *)(p_Var8 + 0x30);
        if (lVar7 != lVar1) {
          do {
            plVar2 = (long *)LuaEngine::getInstance();
            (**(code **)(*plVar2 + 0x50))(plVar2,*(undefined4 *)(lVar7 + 4));
            lVar7 = lVar7 + 8;
          } while (lVar1 != lVar7);
          *(undefined8 *)(p_Var8 + 0x30) = *(undefined8 *)(p_Var8 + 0x28);
        }
        plVar2 = *(long **)(p_Var8 + 8);
        if (*(long **)(p_Var8 + 8) == (long *)0x0) {
          p_Var4 = p_Var8 + 0x10;
          plVar5 = *(long **)p_Var4;
          if ((__tree_node_base *)*plVar5 != p_Var8) {
            do {
              lVar7 = *(long *)p_Var4;
              p_Var4 = (__tree_node_base *)(lVar7 + 0x10);
              plVar5 = *(long **)p_Var4;
            } while (*plVar5 != lVar7);
          }
        }
        else {
          do {
            plVar5 = plVar2;
            plVar2 = (long *)*plVar5;
          } while ((long *)*plVar5 != (long *)0x0);
        }
        if (*(__tree_node_base **)(this + 8) == p_Var8) {
          *(long **)(this + 8) = plVar5;
        }
        *(long *)(this + 0x18) = *(long *)(this + 0x18) + -1;
        std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(this + 0x10),p_Var8);
        pvVar3 = *(void **)(p_Var8 + 0x28);
        if (pvVar3 != (void *)0x0) {
          *(void **)(p_Var8 + 0x30) = pvVar3;
          operator_delete(pvVar3);
        }
        operator_delete(p_Var8);
        return;
      }
    }
  }
  return;
}

