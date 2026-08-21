
/* cocos2d::BatchSprite3D::init(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::BatchSprite3D::init(BatchSprite3D *this,basic_string *param_1,basic_string *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  basic_string *pbVar4;
  long lVar5;
  bool bVar6;
  NodeDatas *pNVar7;
  MaterialDatas *pMVar8;
  MeshDatas *pMVar9;
  bool bVar10;
  ulong uVar11;
  undefined *puVar12;
  Ref *pRVar13;
  undefined8 uVar14;
  Material *pMVar15;
  long lVar16;
  NodeData *pNVar17;
  long lVar18;
  NodeDatas *local_a8;
  MaterialDatas *local_a0;
  MeshDatas *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  basic_string *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  local_a0 = (MaterialDatas *)0x0;
  local_98 = (MeshDatas *)0x0;
  local_a8 = (NodeDatas *)0x0;
  if ((BatchSprite3DCache::_cacheInstance == (BatchSprite3DCache *)0x0) &&
     (BatchSprite3DCache::_cacheInstance = operator_new(0x18,(nothrow_t *)&std::nothrow),
     BatchSprite3DCache::_cacheInstance != (BatchSprite3DCache *)0x0)) {
    *(undefined8 *)(BatchSprite3DCache::_cacheInstance + 8) = 0;
    *(undefined8 *)(BatchSprite3DCache::_cacheInstance + 0x10) = 0;
    *(BatchSprite3DCache **)BatchSprite3DCache::_cacheInstance =
         BatchSprite3DCache::_cacheInstance + 8;
  }
  uVar11 = BatchSprite3DCache::addBatchSprite3DData
                     (BatchSprite3DCache::_cacheInstance,param_1,&local_a8,&local_98,&local_a0);
  pMVar9 = local_98;
  if ((uVar11 & 1) != 0) {
    uVar11 = (ulong)((byte)*param_2 >> 1);
    if (((byte)*param_2 & 1) != 0) {
      uVar11 = *(ulong *)(param_2 + 8);
    }
    if (uVar11 != 0) {
      lVar16 = *(long *)(**(long **)local_98 + 0x70);
      lVar2 = *(long *)(**(long **)local_98 + 0x78);
      if (lVar16 == lVar2) {
        bVar6 = false;
      }
      else {
        bVar6 = false;
        do {
          lVar18 = lVar16 + 0x10;
          bVar10 = *(int *)(lVar16 + 8) - 9U < 2;
          bVar6 = (bool)(bVar6 | bVar10);
          if (bVar10) break;
          lVar16 = lVar18;
        } while (lVar2 != lVar18);
      }
      puVar12 = (undefined *)
                std::__ndk1::
                __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BatchMesh*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BatchMesh*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BatchMesh*>>>
                ::
                find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                          ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BatchMesh*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BatchMesh*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BatchMesh*>>>
                            *)&pGlobalBatchMeshMap,param_2);
      if (puVar12 == &DAT_01787360) {
        local_78 = (undefined8 *)0x0;
        local_70 = (undefined8 *)0x0;
        local_80 = (undefined8 *)0x0;
        uStack_88 = 0xc00000000;
        local_90 = 0x140600000003;
        std::__ndk1::
        vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>::
        __push_back_slow_path<cocos2d::MeshVertexAttrib_const&>
                  ((vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>
                    *)&local_80,(MeshVertexAttrib *)&local_90);
        uStack_88 = 0xc00000006;
        local_90 = 0x140600000003;
        if (local_78 == local_70) {
          std::__ndk1::
          vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>::
          __push_back_slow_path<cocos2d::MeshVertexAttrib_const&>
                    ((vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>
                      *)&local_80,(MeshVertexAttrib *)&local_90);
        }
        else {
          local_78[1] = 0xc00000006;
          *local_78 = 0x140600000003;
          local_78 = local_78 + 2;
        }
        if (bVar6) {
          uStack_88 = 0xc00000009;
          local_90 = 0x140600000003;
          if (local_78 == local_70) {
            std::__ndk1::
            vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>::
            __push_back_slow_path<cocos2d::MeshVertexAttrib_const&>
                      ((vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>
                        *)&local_80,(MeshVertexAttrib *)&local_90);
          }
          else {
            local_78[1] = 0xc00000009;
            *local_78 = 0x140600000003;
            local_78 = local_78 + 2;
          }
          uStack_88 = 0xc0000000a;
          local_90 = 0x140600000003;
          if (local_78 == local_70) {
            std::__ndk1::
            vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>::
            __push_back_slow_path<cocos2d::MeshVertexAttrib_const&>
                      ((vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>
                        *)&local_80,(MeshVertexAttrib *)&local_90);
          }
          else {
            local_78[1] = 0xc0000000a;
            *local_78 = 0x140600000003;
            local_78 = local_78 + 2;
          }
        }
        uStack_88 = 0x800000002;
        local_90 = 0x140600000002;
        if (local_78 == local_70) {
          std::__ndk1::
          vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>::
          __push_back_slow_path<cocos2d::MeshVertexAttrib_const&>
                    ((vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>
                      *)&local_80,(MeshVertexAttrib *)&local_90);
        }
        else {
          local_78[1] = 0x800000002;
          *local_78 = 0x140600000002;
          local_78 = local_78 + 2;
        }
        pMVar15 = (Material *)Sprite3DMaterial::createWithFilename(param_2);
        pRVar13 = (Ref *)BatchMesh::create(pMVar15,(vector *)&local_80,40000,60000,200);
        if (pRVar13 != (Ref *)0x0) {
          Ref::retain(pRVar13);
        }
        local_60 = param_2;
        lVar16 = std::__ndk1::
                 __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BatchMesh*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BatchMesh*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BatchMesh*>>>
                 ::
                 __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                           ((basic_string *)&pGlobalBatchMeshMap,(piecewise_construct_t *)param_2,
                            (tuple *)&DAT_01418dee,(tuple *)&local_60);
        *(Ref **)(lVar16 + 0x38) = pRVar13;
        *(Ref **)(this + 0x338) = pRVar13;
        if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (pRVar13 + 0x28) !=
            (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            param_2) {
          uVar11 = *(ulong *)(param_2 + 8);
          pbVar4 = *(basic_string **)(param_2 + 0x10);
          if (((byte)*param_2 & 1) == 0) {
            pbVar4 = param_2 + 1;
            uVar11 = (ulong)((byte)*param_2 >> 1);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(pRVar13 + 0x28),(char *)pbVar4,uVar11);
        }
        if (local_80 != (undefined8 *)0x0) {
          local_78 = local_80;
          operator_delete(local_80);
        }
        pRVar13 = *(Ref **)(this + 0x338);
      }
      else {
        pRVar13 = *(Ref **)(puVar12 + 0x38);
        *(Ref **)(this + 0x338) = pRVar13;
      }
      if (pRVar13 != (Ref *)0x0) {
        Ref::retain(pRVar13);
      }
      pMVar8 = local_a0;
      pNVar7 = local_a8;
      puVar1 = *(undefined8 **)(local_a8 + 0x20);
      puVar3 = *(undefined8 **)(local_a8 + 0x28);
      if (puVar1 != puVar3) {
        pNVar17 = (NodeData *)*puVar1;
        while( true ) {
          if (pNVar17 != (NodeData *)0x0) {
            createNode(this,pNVar17,pMVar9,pMVar8,
                       *(long *)(pNVar7 + 0x28) - *(long *)(pNVar7 + 0x20) == 8);
          }
          puVar1 = puVar1 + 1;
          if (puVar3 == puVar1) break;
          pNVar17 = (NodeData *)*puVar1;
        }
      }
      uVar14 = 1;
      goto LAB_00d16688;
    }
  }
  uVar14 = 0;
LAB_00d16688:
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar14);
}

