
/* cocos2d::Sprite3D::initWithFile(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::Sprite3D::initWithFile(Sprite3D *this,basic_string *param_1)

{
  long lVar1;
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>>>
  *p_Var2;
  ulong uVar3;
  undefined8 uVar4;
  MeshDatas *pMVar5;
  MaterialDatas *pMVar6;
  Sprite3D *this_00;
  vector<cocos2d::MeshVertexData*,std::__ndk1::allocator<cocos2d::MeshVertexData*>> *this_01;
  void *pvVar7;
  MeshVertexData **ppMVar8;
  MeshVertexData **ppMVar9;
  long lVar10;
  long lVar11;
  void *pvVar12;
  undefined8 *puVar13;
  long *plVar14;
  void *pvVar15;
  undefined8 *puVar16;
  MeshDatas *pMVar17;
  undefined8 *puVar18;
  MeshData *pMVar19;
  MaterialDatas *pMVar20;
  basic_string *local_80;
  Size aSStack_78 [16];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  puVar13 = *(undefined8 **)(this + 0x350);
  puVar16 = *(undefined8 **)(this + 0x358);
  this[0x3c0] = (Sprite3D)0x1;
  if (puVar13 != puVar16) {
    do {
      puVar18 = puVar13 + 1;
      Ref::release((Ref *)*puVar13);
      puVar13 = puVar18;
    } while (puVar16 != puVar18);
    puVar13 = *(undefined8 **)(this + 0x350);
  }
  puVar16 = *(undefined8 **)(this + 0x308);
  puVar18 = *(undefined8 **)(this + 0x310);
  *(undefined8 **)(this + 0x358) = puVar13;
  if (puVar16 != puVar18) {
    do {
      puVar13 = puVar16 + 1;
      Ref::release((Ref *)*puVar16);
      puVar16 = puVar13;
    } while (puVar18 != puVar13);
    puVar16 = *(undefined8 **)(this + 0x308);
  }
  *(undefined8 **)(this + 0x310) = puVar16;
  if (*(Ref **)(this + 0x300) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x300));
    *(undefined8 *)(this + 0x300) = 0;
  }
  for (plVar14 = *(long **)(this + 0x330); plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
    (**(code **)(*(long *)this + 0x280))(this,plVar14[5],1);
  }
  if (*(long *)(this + 0x338) != 0) {
    puVar13 = *(void **)(this + 0x330);
    while (puVar13 != (void *)0x0) {
      pvVar15 = (void *)*puVar13;
      if ((*(byte *)(puVar13 + 2) & 1) != 0) {
        operator_delete((void *)puVar13[4]);
      }
      operator_delete(puVar13);
      puVar13 = pvVar15;
    }
    lVar10 = *(long *)(this + 0x328);
    *(undefined8 *)(this + 0x330) = 0;
    if (lVar10 != 0) {
      lVar11 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 800) + lVar11 * 8) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar10 != lVar11);
    }
    *(undefined8 *)(this + 0x338) = 0;
  }
  uVar3 = loadFromCache(this,param_1);
  if ((uVar3 & 1) == 0) {
    pMVar5 = operator_new(0x18,(nothrow_t *)&std::nothrow);
    if (pMVar5 == (MeshDatas *)0x0) {
      pMVar17 = (MeshDatas *)0x0;
    }
    else {
      *(undefined8 *)pMVar5 = 0;
      *(undefined8 *)(pMVar5 + 8) = 0;
      *(undefined8 *)(pMVar5 + 0x10) = 0;
      pMVar17 = pMVar5;
    }
    pMVar6 = operator_new(0x18,(nothrow_t *)&std::nothrow);
    if (pMVar6 == (MaterialDatas *)0x0) {
      pMVar20 = (MaterialDatas *)0x0;
    }
    else {
      *(undefined8 *)pMVar6 = 0;
      *(undefined8 *)(pMVar6 + 8) = 0;
      *(undefined8 *)(pMVar6 + 0x10) = 0;
      pMVar20 = pMVar6;
    }
    this_00 = operator_new(0x38,(nothrow_t *)&std::nothrow);
    if (this_00 != (Sprite3D *)0x0) {
      *(undefined8 *)(this_00 + 0x10) = 0;
      *(undefined8 *)(this_00 + 8) = 0;
      *(undefined8 *)(this_00 + 0x20) = 0;
      *(undefined8 *)(this_00 + 0x18) = 0;
      *(undefined ***)this_00 = &PTR__NodeDatas_016d2d18;
      *(undefined8 *)(this_00 + 0x30) = 0;
      *(undefined8 *)(this_00 + 0x28) = 0;
    }
    uVar3 = loadFromFile(this_00,param_1,(NodeDatas *)this_00,pMVar17,pMVar20);
    if ((uVar3 & 1) == 0) {
      if (pMVar17 != (MeshDatas *)0x0) {
        puVar13 = *(undefined8 **)pMVar17;
        puVar16 = *(undefined8 **)(pMVar17 + 8);
        if (puVar13 == puVar16) {
          *(undefined8 **)(pMVar17 + 8) = puVar13;
        }
        else {
          do {
            pMVar19 = (MeshData *)*puVar13;
            if (pMVar19 != (MeshData *)0x0) {
              MeshData::~MeshData(pMVar19);
              operator_delete(pMVar19);
            }
            puVar13 = puVar13 + 1;
          } while (puVar16 != puVar13);
          puVar13 = *(undefined8 **)pMVar17;
                    /* try { // try from 00d3d1e8 to 00e3d2bf has its CatchHandler @ 00d3d0ac */
          *(undefined8 **)(pMVar17 + 8) = puVar13;
        }
        if (puVar13 != (undefined8 *)0x0) {
          *(undefined8 **)(pMVar17 + 8) = puVar13;
          operator_delete(puVar13);
        }
        operator_delete(pMVar5);
      }
      if (pMVar20 != (MaterialDatas *)0x0) {
        pvVar15 = *(void **)pMVar20;
        if (pvVar15 != (void *)0x0) {
          pvVar12 = *(void **)(pMVar20 + 8);
          pvVar7 = pvVar15;
          if (pvVar12 != pvVar15) {
            do {
              pvVar12 = (void *)((long)pvVar12 + -0x30);
              FUN_0090b07c(pMVar20 + 0x10,pvVar12);
                    /* try { // try from 00d3d0ac to 00e3d1ab has its CatchHandler @ 00d3d0ac
                       catch() { ... } // from try @ 00d3d0ac with catch @ 00d3d0ac
                       catch() { ... } // from try @ 00d3d1e8 with catch @ 00d3d0ac */
            } while (pvVar15 != pvVar12);
            pvVar7 = *(void **)pMVar20;
          }
          *(void **)(pMVar20 + 8) = pvVar15;
          operator_delete(pvVar7);
        }
        operator_delete(pMVar6);
      }
      if (this_00 != (Sprite3D *)0x0) {
        (**(code **)(*(long *)this_00 + 8))(this_00);
      }
      uVar4 = 0;
    }
    else {
      initFrom(this,(NodeDatas *)this_00,pMVar17,pMVar20);
      this_01 = operator_new(0x40,(nothrow_t *)&std::nothrow);
      *(undefined8 *)(this_01 + 8) = 0;
      *(undefined8 *)this_01 = 0;
      *(undefined8 *)(this_01 + 0x18) = 0;
      *(undefined8 *)(this_01 + 0x10) = 0;
      *(undefined8 *)(this_01 + 0x28) = 0;
      *(undefined8 *)(this_01 + 0x20) = 0;
      *(Sprite3D **)(this_01 + 0x30) = this_00;
      *(MaterialDatas **)(this_01 + 0x38) = pMVar6;
      if (this + 0x308 != (Sprite3D *)this_01) {
        ppMVar8 = *(MeshVertexData ***)(this + 0x308);
        ppMVar9 = *(MeshVertexData ***)(this + 0x310);
        *(undefined8 *)(this_01 + 8) = 0;
        std::__ndk1::
        vector<cocos2d::MeshVertexData*,std::__ndk1::allocator<cocos2d::MeshVertexData*>>::
        assign<cocos2d::MeshVertexData**>(this_01,ppMVar8,ppMVar9);
        puVar16 = *(undefined8 **)(this_01 + 8);
        for (puVar13 = *(undefined8 **)this_01; puVar13 != puVar16; puVar13 = puVar13 + 1) {
          Ref::retain((Ref *)*puVar13);
        }
      }
      puVar13 = *(undefined8 **)(this + 0x350);
      puVar16 = *(undefined8 **)(this + 0x358);
      if (puVar13 != puVar16) {
        do {
          local_80 = (basic_string *)Mesh::getGLProgramState((Mesh *)*puVar13);
          puVar18 = *(undefined8 **)(this_01 + 0x20);
          if (puVar18 == *(undefined8 **)(this_01 + 0x28)) {
            std::__ndk1::
            vector<cocos2d::GLProgramState*,std::__ndk1::allocator<cocos2d::GLProgramState*>>::
            __push_back_slow_path<cocos2d::GLProgramState*const&>
                      ((vector<cocos2d::GLProgramState*,std::__ndk1::allocator<cocos2d::GLProgramState*>>
                        *)(this_01 + 0x18),(GLProgramState **)&local_80);
          }
          else {
            *puVar18 = local_80;
            *(undefined8 **)(this_01 + 0x20) = puVar18 + 1;
          }
          Ref::retain((Ref *)local_80);
          puVar13 = puVar13 + 1;
        } while (puVar16 != puVar13);
      }
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
      p_Var2 = Sprite3DCache::_cacheInstance;
      lVar10 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>>>
               ::
               find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                         (Sprite3DCache::_cacheInstance,param_1);
      if (lVar10 == 0) {
        local_80 = param_1;
        lVar10 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>>>
                 ::
                 __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                           ((basic_string *)p_Var2,(piecewise_construct_t *)param_1,
                            (tuple *)&DAT_01419632,(tuple *)&local_80);
        *(vector<cocos2d::MeshVertexData*,std::__ndk1::allocator<cocos2d::MeshVertexData*>> **)
         (lVar10 + 0x28) = this_01;
      }
      puVar13 = *(undefined8 **)pMVar17;
      puVar16 = *(undefined8 **)(pMVar17 + 8);
      if (puVar13 == puVar16) {
        *(undefined8 **)(pMVar17 + 8) = puVar13;
      }
      else {
        do {
          pMVar19 = (MeshData *)*puVar13;
                    /* try { // try from 00d3d1bc to 00e3d1c7 has its CatchHandler @ 00d3d264 */
          if (pMVar19 != (MeshData *)0x0) {
            MeshData::~MeshData(pMVar19);
            operator_delete(pMVar19);
          }
                    /* try { // try from 00d3d1ac to 00e3d1b3 has its CatchHandler @ 00d3d274 */
          puVar13 = puVar13 + 1;
        } while (puVar16 != puVar13);
        puVar13 = *(undefined8 **)pMVar17;
        *(undefined8 **)(pMVar17 + 8) = puVar13;
      }
                    /* try { // try from 00d3d1dc to 00e3d1e7 has its CatchHandler @ 00d3d278 */
      if (puVar13 != (undefined8 *)0x0) {
        *(undefined8 **)(pMVar17 + 8) = puVar13;
        operator_delete(puVar13);
      }
      operator_delete(pMVar5);
      (**(code **)(*(long *)this + 0x370))(&local_80,this);
      Size::operator=((Size *)(this + 0x80),aSStack_78);
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 1;
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

