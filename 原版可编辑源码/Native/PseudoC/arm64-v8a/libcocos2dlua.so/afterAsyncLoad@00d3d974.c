
/* cocos2d::Sprite3D::afterAsyncLoad(void*) */

void __thiscall cocos2d::Sprite3D::afterAsyncLoad(Sprite3D *this,void *param_1)

{
  basic_string *pbVar1;
  ulong uVar2;
  undefined8 *puVar3;
  basic_string bVar4;
  long lVar5;
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>>>
  *p_Var6;
  vector<cocos2d::MeshVertexData*,std::__ndk1::allocator<cocos2d::MeshVertexData*>> *this_00;
  void *pvVar7;
  Director *this_01;
  TextureCache *this_02;
  Texture2D *pTVar8;
  MeshVertexData **ppMVar9;
  MeshVertexData **ppMVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  void *pvVar16;
  MeshData *pMVar17;
  undefined8 *puVar18;
  void *pvVar19;
  undefined1 auVar20 [16];
  undefined8 local_78;
  basic_string *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  Ref::autorelease((Ref *)this);
  if (param_1 != (void *)0x0) {
    if (*(char *)((long)param_1 + 0x38) != '\0') {
      puVar13 = *(undefined8 **)(this + 0x350);
      puVar15 = *(undefined8 **)(this + 0x358);
      if (puVar13 != puVar15) {
        do {
          puVar18 = puVar13 + 1;
          Ref::release((Ref *)*puVar13);
          puVar13 = puVar18;
        } while (puVar15 != puVar18);
        puVar13 = *(undefined8 **)(this + 0x350);
      }
      puVar15 = *(undefined8 **)(this + 0x308);
      puVar18 = *(undefined8 **)(this + 0x310);
      *(undefined8 **)(this + 0x358) = puVar13;
      if (puVar15 != puVar18) {
        do {
          puVar13 = puVar15 + 1;
          Ref::release((Ref *)*puVar15);
          puVar15 = puVar13;
        } while (puVar18 != puVar13);
        puVar15 = *(undefined8 **)(this + 0x308);
      }
      *(undefined8 **)(this + 0x310) = puVar15;
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
          pvVar19 = (void *)*puVar13;
          if ((*(byte *)(puVar13 + 2) & 1) != 0) {
            operator_delete((void *)puVar13[4]);
          }
          operator_delete(puVar13);
          puVar13 = pvVar19;
        }
        lVar11 = *(long *)(this + 0x328);
        *(undefined8 *)(this + 0x330) = 0;
        if (lVar11 != 0) {
          lVar12 = 0;
          do {
            *(undefined8 *)(*(long *)(this + 800) + lVar12 * 8) = 0;
            lVar12 = lVar12 + 1;
          } while (lVar11 != lVar12);
        }
        *(undefined8 *)(this + 0x338) = 0;
      }
      puVar13 = (undefined8 *)((long)param_1 + 0x70);
      initFrom(this,*(NodeDatas **)((long)param_1 + 0x80),(MeshDatas *)*puVar13,
               *(MaterialDatas **)((long)param_1 + 0x78));
                    /* catch() { ... } // from try @ 00d3db04 with catch @ 00d3dad4 */
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
      pbVar1 = (basic_string *)((long)param_1 + 0x40);
                    /* try { // try from 00d3dafc to 00e3db03 has its CatchHandler @ 00d3db78 */
      lVar11 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>>>
               ::
               find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                         (Sprite3DCache::_cacheInstance,pbVar1);
                    /* try { // try from 00d3db04 to 00e3db93 has its CatchHandler @ 00d3dad4 */
      if ((lVar11 == 0) || (*(long *)(lVar11 + 0x28) == 0)) {
        this_00 = operator_new(0x40,(nothrow_t *)&std::nothrow);
        *(undefined8 *)(this_00 + 8) = 0;
        *(undefined8 *)this_00 = 0;
        *(undefined8 *)(this_00 + 0x18) = 0;
        *(undefined8 *)(this_00 + 0x10) = 0;
        *(undefined8 *)(this_00 + 0x28) = 0;
        *(undefined8 *)(this_00 + 0x20) = 0;
        auVar20 = NEON_ext(*(undefined1 (*) [16])((long)param_1 + 0x78),
                           *(undefined1 (*) [16])((long)param_1 + 0x78),8,1);
                    /* catch() { ... } // from try @ 00d3dafc with catch @ 00d3db78 */
        *(long *)(this_00 + 0x38) = auVar20._8_8_;
        *(long *)(this_00 + 0x30) = auVar20._0_8_;
        if (this + 0x308 != (Sprite3D *)this_00) {
          ppMVar9 = *(MeshVertexData ***)(this + 0x308);
          ppMVar10 = *(MeshVertexData ***)(this + 0x310);
          *(undefined8 *)(this_00 + 8) = 0;
          std::__ndk1::
          vector<cocos2d::MeshVertexData*,std::__ndk1::allocator<cocos2d::MeshVertexData*>>::
          assign<cocos2d::MeshVertexData**>(this_00,ppMVar9,ppMVar10);
          puVar18 = *(undefined8 **)(this_00 + 8);
          for (puVar15 = *(undefined8 **)this_00; puVar15 != puVar18; puVar15 = puVar15 + 1) {
            Ref::retain((Ref *)*puVar15);
          }
        }
        puVar15 = *(undefined8 **)(this + 0x350);
        puVar18 = *(undefined8 **)(this + 0x358);
        if (puVar15 != puVar18) {
          do {
            local_70 = (basic_string *)Mesh::getGLProgramState((Mesh *)*puVar15);
            puVar3 = *(undefined8 **)(this_00 + 0x20);
            if (puVar3 == *(undefined8 **)(this_00 + 0x28)) {
              std::__ndk1::
              vector<cocos2d::GLProgramState*,std::__ndk1::allocator<cocos2d::GLProgramState*>>::
              __push_back_slow_path<cocos2d::GLProgramState*const&>
                        ((vector<cocos2d::GLProgramState*,std::__ndk1::allocator<cocos2d::GLProgramState*>>
                          *)(this_00 + 0x18),(GLProgramState **)&local_70);
            }
            else {
              *puVar3 = local_70;
              *(undefined8 **)(this_00 + 0x20) = puVar3 + 1;
            }
            Ref::retain((Ref *)local_70);
            puVar15 = puVar15 + 1;
          } while (puVar18 != puVar15);
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
        p_Var6 = Sprite3DCache::_cacheInstance;
        lVar11 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>>>
                 ::
                 find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                           (Sprite3DCache::_cacheInstance,pbVar1);
        if (lVar11 == 0) {
          local_70 = pbVar1;
          lVar11 = std::__ndk1::
                   __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DCache::Sprite3DData*>>>
                   ::
                   __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                             ((basic_string *)p_Var6,(piecewise_construct_t *)pbVar1,
                              (tuple *)&DAT_01419632,(tuple *)&local_70);
          *(vector<cocos2d::MeshVertexData*,std::__ndk1::allocator<cocos2d::MeshVertexData*>> **)
           (lVar11 + 0x28) = this_00;
        }
        plVar14 = (long *)*puVar13;
        if (plVar14 != (long *)0x0) {
          puVar15 = (undefined8 *)*plVar14;
          puVar18 = (undefined8 *)plVar14[1];
          if (puVar15 == puVar18) {
            plVar14[1] = (long)puVar15;
          }
          else {
            do {
              pMVar17 = (MeshData *)*puVar15;
              if (pMVar17 != (MeshData *)0x0) {
                MeshData::~MeshData(pMVar17);
                operator_delete(pMVar17);
              }
              puVar15 = puVar15 + 1;
            } while (puVar18 != puVar15);
            puVar15 = (undefined8 *)*plVar14;
                    /* try { // try from 00d3dcdc to 00e3dce3 has its CatchHandler @ 00d3dd80 */
            plVar14[1] = (long)puVar15;
          }
          if (puVar15 != (undefined8 *)0x0) {
            plVar14[1] = (long)puVar15;
            operator_delete(puVar15);
          }
          operator_delete(plVar14);
        }
        *puVar13 = 0;
        *(undefined8 *)((long)param_1 + 0x78) = 0;
        *(undefined8 *)((long)param_1 + 0x80) = 0;
                    /* catch() { ... } // from try @ 00d3dd08 with catch @ 00d3dcac */
      }
      else {
        plVar14 = (long *)*puVar13;
        if (plVar14 != (long *)0x0) {
          puVar13 = (undefined8 *)*plVar14;
          puVar15 = (undefined8 *)plVar14[1];
          if (puVar13 != puVar15) {
            do {
              pMVar17 = (MeshData *)*puVar13;
              if (pMVar17 != (MeshData *)0x0) {
                MeshData::~MeshData(pMVar17);
                operator_delete(pMVar17);
              }
              puVar13 = puVar13 + 1;
            } while (puVar15 != puVar13);
            puVar13 = (undefined8 *)*plVar14;
          }
          plVar14[1] = (long)puVar13;
          if (puVar13 != (undefined8 *)0x0) {
            plVar14[1] = (long)puVar13;
            operator_delete(puVar13);
          }
                    /* try { // try from 00d3dd00 to 00e3dd07 has its CatchHandler @ 00d3dd7c */
          operator_delete(plVar14);
        }
                    /* try { // try from 00d3dd08 to 00e3dd9b has its CatchHandler @ 00d3dcac */
        puVar13 = *(undefined8 **)((long)param_1 + 0x78);
        *(undefined8 *)((long)param_1 + 0x70) = 0;
        if (puVar13 != (undefined8 *)0x0) {
          pvVar19 = (void *)*puVar13;
          if (pvVar19 != (void *)0x0) {
            pvVar16 = (void *)puVar13[1];
            pvVar7 = pvVar19;
            if (pvVar16 != pvVar19) {
              do {
                pvVar16 = (void *)((long)pvVar16 + -0x30);
                FUN_0090b07c(puVar13 + 2,pvVar16);
              } while (pvVar19 != pvVar16);
              pvVar7 = (void *)*puVar13;
            }
            puVar13[1] = pvVar19;
            operator_delete(pvVar7);
          }
          operator_delete(puVar13);
        }
        *(undefined8 *)((long)param_1 + 0x78) = 0;
        if (*(long **)((long)param_1 + 0x80) != (long *)0x0) {
          (**(code **)(**(long **)((long)param_1 + 0x80) + 8))();
        }
      }
                    /* catch() { ... } // from try @ 00d3dd00 with catch @ 00d3dd7c */
      bVar4 = *(basic_string *)((long)param_1 + 0x58);
                    /* catch() { ... } // from try @ 00d3dcdc with catch @ 00d3dd80 */
      *(undefined8 *)((long)param_1 + 0x80) = 0;
      uVar2 = (ulong)((byte)bVar4 >> 1);
      if (((byte)bVar4 & 1) != 0) {
        uVar2 = *(ulong *)((long)param_1 + 0x60);
      }
      if (uVar2 != 0) {
        this_01 = (Director *)Director::getInstance();
        this_02 = (TextureCache *)Director::getTextureCache(this_01);
        pTVar8 = (Texture2D *)TextureCache::addImage(this_02,(basic_string *)((long)param_1 + 0x58))
        ;
        puVar15 = *(undefined8 **)(this + 0x358);
        for (puVar13 = *(undefined8 **)(this + 0x350); puVar13 != puVar15; puVar13 = puVar13 + 1) {
          Mesh::setTexture((Mesh *)*puVar13,pTVar8);
        }
      }
    }
    local_78 = *(undefined8 *)((long)param_1 + 0x30);
    plVar14 = *(long **)((long)param_1 + 0x20);
    local_70 = (basic_string *)this;
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_009d64e4();
    }
    (**(code **)(*plVar14 + 0x30))(plVar14,&local_70,&local_78);
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

