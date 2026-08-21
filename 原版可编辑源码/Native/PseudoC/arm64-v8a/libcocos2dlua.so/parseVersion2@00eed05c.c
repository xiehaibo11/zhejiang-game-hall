
/* cocos2d::AnimationCache::parseVersion2(std::__ndk1::unordered_map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::Value,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, cocos2d::Value> > > const&)
    */

void __thiscall cocos2d::AnimationCache::parseVersion2(AnimationCache *this,unordered_map *param_1)

{
  undefined8 *puVar1;
  Value *this_00;
  Value *pVVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  uint uVar7;
  SpriteFrameCache *this_01;
  basic_string *pbVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  basic_string *pbVar12;
  SpriteFrame *pSVar13;
  Ref *this_02;
  Ref *pRVar14;
  undefined1 *puVar15;
  long lVar16;
  long *plVar17;
  float fVar18;
  Ref *local_f0 [2];
  void *local_e0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_d8 [2];
  void *local_c8;
  undefined8 *local_c0;
  undefined8 *puStack_b8;
  undefined8 *local_b0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [16];
  void *local_98;
  Ref **local_88;
  long local_80;
  
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 00eed094 to 00fed0a3 has its CatchHandler @ 00eed128 */
  this_01 = (SpriteFrameCache *)SpriteFrameCache::getInstance();
  plVar17 = *(long **)(param_1 + 0x10);
  if (plVar17 != (long *)0x0) {
                    /* try { // try from 00eed0a4 to 00fed197 has its CatchHandler @ 00eecf00 */
    do {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(local_a8,(basic_string *)(plVar17 + 2));
      pbVar8 = (basic_string *)cocos2d::Value::asValueMap((Value *)(plVar17 + 5));
                    /* catch() { ... } // from try @ 00eecf74 with catch @ 00eed0f4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_c0,"loops");
      local_d8[0] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)&local_c0;
                    /* catch() { ... } // from try @ 00eecf44 with catch @ 00eed114 */
      lVar9 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
              ::
              __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                        (pbVar8,(piecewise_construct_t *)&local_c0,(tuple *)&DAT_01439b22,
                         (tuple *)local_d8);
      if (((ulong)local_c0 & 1) != 0) {
                    /* catch() { ... } // from try @ 00eecff8 with catch @ 00eed128
                       catch() { ... } // from try @ 00eed094 with catch @ 00eed128 */
        operator_delete(local_b0);
      }
                    /* catch() { ... } // from try @ 00eed01c with catch @ 00eed138 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_c0,"restoreOriginalFrame");
      local_d8[0] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)&local_c0;
      lVar10 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         (pbVar8,(piecewise_construct_t *)&local_c0,(tuple *)&DAT_01439b22,
                          (tuple *)local_d8);
      bVar6 = cocos2d::Value::asBool((Value *)(lVar10 + 0x28));
      if (((ulong)local_c0 & 1) != 0) {
        operator_delete(local_b0);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_c0,"frames");
      local_d8[0] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)&local_c0;
                    /* try { // try from 00eed198 to 00fed1d3 has its CatchHandler @ 00eed198
                       catch() { ... } // from try @ 00eed198 with catch @ 00eed198
                       catch() { ... } // from try @ 00eed1e8 with catch @ 00eed198 */
      lVar10 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         (pbVar8,(piecewise_construct_t *)&local_c0,(tuple *)&DAT_01439b22,
                          (tuple *)local_d8);
      plVar11 = (long *)cocos2d::Value::asValueVector((Value *)(lVar10 + 0x28));
      if (((ulong)local_c0 & 1) != 0) {
        operator_delete(local_b0);
      }
      if (*plVar11 != plVar11[1]) {
        lVar16 = plVar11[1] - *plVar11;
        lVar10 = lVar16 * 0x10000000;
                    /* try { // try from 00eed1d4 to 00fed1e7 has its CatchHandler @ 00eed220 */
        puStack_b8 = (undefined8 *)0x0;
        local_b0 = (undefined8 *)0x0;
        local_c0 = (undefined8 *)0x0;
        if (lVar10 != 0) {
          uVar3 = lVar16 * 0x10000000 >> 0x20;
                    /* try { // try from 00eed1e8 to 00fed23b has its CatchHandler @ 00eed198 */
          if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          puStack_b8 = operator_new(lVar10 >> 0x1d);
          local_b0 = puStack_b8 + uVar3;
        }
        pVVar2 = (Value *)plVar11[1];
        local_c0 = puStack_b8;
        for (this_00 = (Value *)*plVar11; this_00 != pVVar2; this_00 = this_00 + 0x10) {
          pbVar12 = (basic_string *)cocos2d::Value::asValueMap(this_00);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)local_f0,"spriteframe");
                    /* try { // try from 00eed23c to 00fed277 has its CatchHandler @ 00eed23c
                       catch() { ... } // from try @ 00eed23c with catch @ 00eed23c
                       catch() { ... } // from try @ 00eed28c with catch @ 00eed23c */
          local_88 = local_f0;
          std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar12,(piecewise_construct_t *)local_f0,(tuple *)&DAT_01439b22,
                     (tuple *)&local_88);
          cocos2d::Value::asString();
          if (((ulong)local_f0[0] & 1) != 0) {
            operator_delete(local_e0);
          }
                    /* try { // try from 00eed278 to 00fed28b has its CatchHandler @ 00eed2c4 */
          pSVar13 = (SpriteFrame *)
                    SpriteFrameCache::getSpriteFrameByName(this_01,(basic_string *)local_d8);
          if (pSVar13 != (SpriteFrame *)0x0) {
                    /* try { // try from 00eed28c to 00fed2df has its CatchHandler @ 00eed23c */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)local_f0,"delayUnits");
            local_88 = local_f0;
            lVar10 = std::__ndk1::
                     __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                     ::
                     __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                               (pbVar12,(piecewise_construct_t *)local_f0,(tuple *)&DAT_01439b22,
                                (tuple *)&local_88);
            fVar18 = (float)cocos2d::Value::asFloat((Value *)(lVar10 + 0x28));
                    /* catch() { ... } // from try @ 00eed278 with catch @ 00eed2c4 */
            if (((ulong)local_f0[0] & 1) != 0) {
              operator_delete(local_e0);
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)local_f0,"notification");
                    /* try { // try from 00eed2e0 to 00fed333 has its CatchHandler @ 00eed2e0
                       catch() { ... } // from try @ 00eed2e0 with catch @ 00eed2e0
                       catch() { ... } // from try @ 00eed344 with catch @ 00eed2e0 */
            local_88 = local_f0;
            lVar10 = std::__ndk1::
                     __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                     ::
                     __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                               (pbVar12,(piecewise_construct_t *)local_f0,(tuple *)&DAT_01439b22,
                                (tuple *)&local_88);
            if (((ulong)local_f0[0] & 1) != 0) {
              operator_delete(local_e0);
            }
            puVar15 = ValueMapNull;
            if (*(int *)(lVar10 + 0x30) == 9) {
              puVar15 = (undefined1 *)cocos2d::Value::asValueMap((Value *)(lVar10 + 0x28));
            }
                    /* try { // try from 00eed334 to 00fed343 has its CatchHandler @ 00eed37c */
            local_f0[0] = (Ref *)AnimationFrame::create(pSVar13,fVar18,(unordered_map *)puVar15);
                    /* try { // try from 00eed344 to 00fed397 has its CatchHandler @ 00eed2e0 */
            if (puStack_b8 == local_b0) {
              std::__ndk1::
              vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>>::
              __push_back_slow_path<cocos2d::AnimationFrame*const&>
                        ((vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>>
                          *)&local_c0,(AnimationFrame **)local_f0);
            }
            else {
              *puStack_b8 = local_f0[0];
              puStack_b8 = puStack_b8 + 1;
            }
            Ref::retain(local_f0[0]);
          }
          if (((ulong)local_d8[0] & 1) != 0) {
            operator_delete(local_c8);
                    /* catch() { ... } // from try @ 00eed334 with catch @ 00eed37c */
          }
                    /* catch() { ... } // from try @ 00eed1d4 with catch @ 00eed220 */
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )local_d8,"delayPerUnit");
        local_f0[0] = (Ref *)local_d8;
                    /* try { // try from 00eed398 to 00fed3cb has its CatchHandler @ 00eed398
                       catch() { ... } // from try @ 00eed398 with catch @ 00eed398
                       catch() { ... } // from try @ 00eed3dc with catch @ 00eed398 */
        lVar10 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                 ::
                 __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                           (pbVar8,(piecewise_construct_t *)local_d8,(tuple *)&DAT_01439b22,
                            (tuple *)local_f0);
        fVar18 = (float)cocos2d::Value::asFloat((Value *)(lVar10 + 0x28));
        if (((ulong)local_d8[0] & 1) != 0) {
                    /* try { // try from 00eed3cc to 00fed3db has its CatchHandler @ 00eed410 */
          operator_delete(local_c8);
        }
        if (*(int *)(lVar9 + 0x30) == 0) {
          uVar7 = 1;
        }
        else {
                    /* try { // try from 00eed3dc to 00fed42b has its CatchHandler @ 00eed398 */
          uVar7 = cocos2d::Value::asInt((Value *)(lVar9 + 0x28));
        }
        this_02 = (Ref *)Animation::create((Vector *)&local_c0,fVar18,uVar7);
        this_02[0x58] = (Ref)(bVar6 & 1);
                    /* catch() { ... } // from try @ 00eed3cc with catch @ 00eed410 */
        pRVar14 = s_sharedAnimationCache;
                    /* try { // try from 00eed42c to 00fed45f has its CatchHandler @ 00eed42c
                       catch() { ... } // from try @ 00eed42c with catch @ 00eed42c
                       catch() { ... } // from try @ 00eed470 with catch @ 00eed42c */
        if ((s_sharedAnimationCache == (Ref *)0x0) &&
           (pRVar14 = operator_new(0x50,(nothrow_t *)&std::nothrow), pRVar14 != (Ref *)0x0)) {
          Ref::Ref(pRVar14);
          *(undefined8 *)(pRVar14 + 0x30) = 0;
          *(undefined8 *)(pRVar14 + 0x28) = 0;
          *(undefined8 *)(pRVar14 + 0x40) = 0;
          *(undefined8 *)(pRVar14 + 0x38) = 0;
          *(undefined ***)pRVar14 = &PTR__AnimationCache_016fa4f0;
          *(undefined4 *)(pRVar14 + 0x48) = 0x3f800000;
        }
        s_sharedAnimationCache = pRVar14;
        pRVar14 = s_sharedAnimationCache;
        local_d8[0] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)this_02;
        Ref::retain(this_02);
                    /* try { // try from 00eed470 to 00fed4bf has its CatchHandler @ 00eed42c */
        Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation*>
        ::erase((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation*>
                 *)(pRVar14 + 0x28),(basic_string *)local_a8);
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation*>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,cocos2d::Animation*&>
                  ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation*>>>
                    *)(pRVar14 + 0x28),(basic_string *)local_a8,(basic_string *)local_a8,
                   (Animation **)local_d8);
        puVar5 = puStack_b8;
        for (puVar1 = local_c0; puVar1 != puVar5; puVar1 = puVar1 + 1) {
                    /* catch() { ... } // from try @ 00eed460 with catch @ 00eed4a4 */
          Ref::release((Ref *)*puVar1);
        }
        puStack_b8 = local_c0;
        if (local_c0 != (undefined8 *)0x0) {
          operator_delete(local_c0);
        }
      }
      if (((byte)local_a8[0] & 1) != 0) {
        operator_delete(local_98);
      }
      plVar17 = (long *)*plVar17;
    } while (plVar17 != (long *)0x0);
  }
  if (*(long *)(lVar4 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

