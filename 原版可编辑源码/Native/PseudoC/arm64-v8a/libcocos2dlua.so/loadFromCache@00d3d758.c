
/* cocos2d::Sprite3D::loadFromCache(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::Sprite3D::loadFromCache(Sprite3D *this,basic_string *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  Ref *this_00;
  GLProgramState *pGVar4;
  undefined8 uVar5;
  NodeData *pNVar6;
  undefined8 *puVar7;
  Mesh *pMVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  Ref *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((Sprite3DCache::_cacheInstance ==
       (__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>>>
        *)0x0) &&
     (Sprite3DCache::_cacheInstance = operator_new(0x28,(nothrow_t *)&std::nothrow),
     Sprite3DCache::_cacheInstance !=
     (__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>>>
      *)0x0)) {
    *(undefined8 *)(Sprite3DCache::_cacheInstance + 8) = 0;
    *(undefined8 *)Sprite3DCache::_cacheInstance = 0;
    *(undefined8 *)(Sprite3DCache::_cacheInstance + 0x18) = 0;
    *(undefined8 *)(Sprite3DCache::_cacheInstance + 0x10) = 0;
    *(undefined4 *)(Sprite3DCache::_cacheInstance + 0x20) = 0x3f800000;
  }
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    (Sprite3DCache::_cacheInstance,param_1);
  uVar5 = 0;
  if (lVar3 != 0) {
    plVar9 = *(long **)(lVar3 + 0x28);
    if (plVar9 == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar10 = (undefined8 *)*plVar9;
      puVar1 = (undefined8 *)plVar9[1];
      if (puVar10 != puVar1) {
        do {
          local_50 = (Ref *)*puVar10;
          puVar7 = *(undefined8 **)(this + 0x310);
          if (puVar7 == *(undefined8 **)(this + 0x318)) {
            std::__ndk1::
            vector<cocos2d::MeshVertexData*,std::__ndk1::allocator<cocos2d::MeshVertexData*>>::
            __push_back_slow_path<cocos2d::MeshVertexData*const&>
                      ((vector<cocos2d::MeshVertexData*,std::__ndk1::allocator<cocos2d::MeshVertexData*>>
                        *)(this + 0x308),(MeshVertexData **)&local_50);
          }
          else {
            *puVar7 = local_50;
            *(undefined8 **)(this + 0x310) = puVar7 + 1;
          }
          Ref::retain(local_50);
          puVar10 = puVar10 + 1;
        } while (puVar1 != puVar10);
      }
      this_00 = (Ref *)Skeleton3D::create((vector *)(plVar9[6] + 8));
      *(Ref **)(this + 0x300) = this_00;
      if (this_00 != (Ref *)0x0) {
        Ref::retain(this_00);
      }
      lVar3 = plVar9[6];
      puVar10 = *(undefined8 **)(lVar3 + 0x20);
      puVar1 = *(undefined8 **)(lVar3 + 0x28);
      if (puVar10 != puVar1) {
        lVar3 = (long)puVar1 - (long)puVar10;
        pNVar6 = (NodeData *)*puVar10;
        while( true ) {
          if (pNVar6 != (NodeData *)0x0) {
            createNode(this,pNVar6,(Node *)this,(MaterialDatas *)plVar9[7],lVar3 == 8);
          }
          puVar10 = puVar10 + 1;
          if (puVar1 == puVar10) break;
          pNVar6 = (NodeData *)*puVar10;
        }
        lVar3 = plVar9[6];
      }
      puVar1 = *(undefined8 **)(lVar3 + 0x10);
      for (puVar10 = *(undefined8 **)(lVar3 + 8); puVar10 != puVar1; puVar10 = puVar10 + 1) {
        if ((NodeData *)*puVar10 != (NodeData *)0x0) {
          createAttachSprite3DNode(this,(NodeData *)*puVar10,(MaterialDatas *)plVar9[7]);
        }
      }
      lVar3 = *(long *)(this + 0x358) - (long)*(undefined8 **)(this + 0x350);
      if (0 < lVar3) {
        pMVar8 = (Mesh *)**(undefined8 **)(this + 0x350);
        pGVar4 = (GLProgramState *)GLProgramState::clone(*(GLProgramState **)plVar9[3]);
        Mesh::setGLProgramState(pMVar8,pGVar4);
        if (8 < lVar3) {
          lVar11 = 1;
          do {
            pMVar8 = *(Mesh **)(*(long *)(this + 0x350) + lVar11 * 8);
            pGVar4 = (GLProgramState *)
                     GLProgramState::clone(*(GLProgramState **)(plVar9[3] + lVar11 * 8));
            Mesh::setGLProgramState(pMVar8,pGVar4);
            lVar11 = lVar11 + 1;
          } while (lVar11 < lVar3 >> 3);
        }
      }
      uVar5 = 1;
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

