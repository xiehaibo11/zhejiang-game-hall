
/* cocos2d::NavMeshDebugDraw::end() */

void __thiscall cocos2d::NavMeshDebugDraw::end(NavMeshDebugDraw *this)

{
  long *plVar1;
  long lVar2;
  NavMeshDebugDraw *pNVar3;
  
  pNVar3 = this + 0x38;
  lVar2 = *(long *)pNVar3;
  if (lVar2 != 0) {
    *(short *)(lVar2 + 8) =
         (short)((uint)(*(int *)(this + 0x10) - *(int *)(this + 8)) >> 2) * 0x6db7;
    plVar1 = *(long **)(this + 0x28);
    if (plVar1 == *(long **)(this + 0x30)) {
      std::__ndk1::
      vector<cocos2d::NavMeshDebugDraw::Primitive*,std::__ndk1::allocator<cocos2d::NavMeshDebugDraw::Primitive*>>
      ::__push_back_slow_path<cocos2d::NavMeshDebugDraw::Primitive*const&>
                ((vector<cocos2d::NavMeshDebugDraw::Primitive*,std::__ndk1::allocator<cocos2d::NavMeshDebugDraw::Primitive*>>
                  *)(this + 0x20),(Primitive **)pNVar3);
    }
    else {
      *plVar1 = lVar2;
      *(long **)(this + 0x28) = plVar1 + 1;
                    /* catch() { ... } // from try @ 0101dc94 with catch @ 0101dc64 */
    }
    *(undefined8 *)pNVar3 = 0;
  }
  return;
}

