
/* cocos2d::AnimationCache::parseVersion1(std::__ndk1::unordered_map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::Value,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, cocos2d::Value> > > const&)
    */

void __thiscall cocos2d::AnimationCache::parseVersion1(AnimationCache *this,unordered_map *param_1)

{
  basic_string *pbVar1;
  long lVar2;
  long lVar3;
  AnimationFrame *pAVar4;
  undefined8 *puVar5;
  SpriteFrameCache *this_00;
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
  *this_01;
  long lVar6;
  long *plVar7;
  SpriteFrame *pSVar8;
  Ref *this_02;
  Ref *pRVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  void *pvVar13;
  float fVar14;
  undefined8 *local_c0;
  undefined8 *puStack_b8;
  undefined8 *local_b0;
  AnimationFrame *local_a0;
  undefined8 uStack_98;
  void *local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
                    /* try { // try from 00eecbc4 to 00fecbff has its CatchHandler @ 00eecbc4
                       catch() { ... } // from try @ 00eecbc4 with catch @ 00eecbc4
                       catch() { ... } // from try @ 00eecc14 with catch @ 00eecbc4 */
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  this_00 = (SpriteFrameCache *)SpriteFrameCache::getInstance();
  plVar12 = *(long **)(param_1 + 0x10);
  do {
    if (plVar12 == (long *)0x0) {
                    /* catch() { ... } // from try @ 00eece98 with catch @ 00eecee4 */
      if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* try { // try from 00eecf00 to 00fecf43 has its CatchHandler @ 00eecf00
                       catch() { ... } // from try @ 00eecf00 with catch @ 00eecf00
                       catch() { ... } // from try @ 00eed0a4 with catch @ 00eecf00 */
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this_01 = (__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               *)cocos2d::Value::asValueMap((Value *)(plVar12 + 5));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_a0,"frames");
    lVar6 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      (this_01,(basic_string *)&local_a0);
                    /* catch() { ... } // from try @ 00eecc00 with catch @ 00eecc4c */
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007d44e0("unordered_map::at: key not found");
    }
    plVar7 = (long *)cocos2d::Value::asValueVector((Value *)(lVar6 + 0x28));
    if (((ulong)local_a0 & 1) != 0) {
                    /* try { // try from 00eecc68 to 00fecca3 has its CatchHandler @ 00eecc68
                       catch() { ... } // from try @ 00eecc68 with catch @ 00eecc68
                       catch() { ... } // from try @ 00eeccb8 with catch @ 00eecc68 */
      operator_delete(local_90);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_a0,"delay");
    lVar6 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      (this_01,(basic_string *)&local_a0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007d44e0("unordered_map::at: key not found");
    }
    fVar14 = (float)cocos2d::Value::asFloat((Value *)(lVar6 + 0x28));
    if (((ulong)local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
                    /* try { // try from 00eecca4 to 00feccb7 has its CatchHandler @ 00eeccf0 */
    puVar10 = puStack_b8;
    if (*plVar7 != plVar7[1]) {
      lVar6 = plVar7[1] - *plVar7;
      puStack_b8 = (undefined8 *)0x0;
      local_b0 = (undefined8 *)0x0;
                    /* try { // try from 00eeccb8 to 00fecd0b has its CatchHandler @ 00eecc68 */
      local_c0 = (undefined8 *)0x0;
      if (lVar6 != 0) {
        if ((ulong)(lVar6 >> 4) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        puStack_b8 = operator_new(lVar6 >> 1);
        local_b0 = puStack_b8 + (lVar6 >> 4);
      }
                    /* catch() { ... } // from try @ 00eecca4 with catch @ 00eeccf0 */
      lVar6 = *plVar7;
      lVar2 = plVar7[1];
      local_c0 = puStack_b8;
      if (lVar6 == lVar2) {
LAB_00eecd08:
        puVar10 = local_c0;
        puVar11 = puStack_b8;
        puVar5 = puStack_b8;
                    /* try { // try from 00eecd0c to 00fecd47 has its CatchHandler @ 00eecd0c
                       catch() { ... } // from try @ 00eecd0c with catch @ 00eecd0c
                       catch() { ... } // from try @ 00eecd5c with catch @ 00eecd0c */
        if (local_c0 != puStack_b8) {
LAB_00eecea8:
          do {
                    /* try { // try from 00eeceac to 00feceff has its CatchHandler @ 00eece5c */
            Ref::release((Ref *)*puVar10);
            puVar10 = puVar10 + 1;
            puVar5 = local_c0;
          } while (puVar11 != puVar10);
        }
      }
      else {
        do {
          cocos2d::Value::asString();
                    /* try { // try from 00eecd48 to 00fecd5b has its CatchHandler @ 00eecd94 */
          pSVar8 = (SpriteFrame *)
                   SpriteFrameCache::getSpriteFrameByName(this_00,(basic_string *)&local_a0);
          if (((ulong)local_a0 & 1) != 0) {
                    /* try { // try from 00eecd5c to 00fecdaf has its CatchHandler @ 00eecd0c */
            operator_delete(local_90);
          }
          if (pSVar8 != (SpriteFrame *)0x0) {
            uStack_98 = 0;
            local_a0 = (AnimationFrame *)0x0;
            uStack_88 = 0;
            local_90 = (void *)0x0;
            local_80 = 0x3f800000;
            pRVar9 = (Ref *)AnimationFrame::create(pSVar8,1.0,(unordered_map *)&local_a0);
            pAVar4 = local_a0;
            puVar10 = local_90;
            while (puVar10 != (void *)0x0) {
              pvVar13 = (void *)*puVar10;
              local_a0 = pAVar4;
              cocos2d::Value::~Value((Value *)(puVar10 + 5));
                    /* try { // try from 00eecdb0 to 00fecdeb has its CatchHandler @ 00eecdb0
                       catch() { ... } // from try @ 00eecdb0 with catch @ 00eecdb0
                       catch() { ... } // from try @ 00eece00 with catch @ 00eecdb0 */
              if ((*(byte *)(puVar10 + 2) & 1) != 0) {
                operator_delete((void *)puVar10[4]);
              }
                    /* catch() { ... } // from try @ 00eecd48 with catch @ 00eecd94 */
              operator_delete(puVar10);
              pAVar4 = local_a0;
              puVar10 = pvVar13;
            }
            local_a0 = (AnimationFrame *)0x0;
            if (pAVar4 != (AnimationFrame *)0x0) {
              operator_delete(pAVar4);
            }
            local_a0 = (AnimationFrame *)pRVar9;
            if (puStack_b8 == local_b0) {
                    /* try { // try from 00eecdec to 00fecdff has its CatchHandler @ 00eece38 */
              std::__ndk1::
              vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>>::
              __push_back_slow_path<cocos2d::AnimationFrame*const&>
                        ((vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>>
                          *)&local_c0,&local_a0);
            }
            else {
              *puStack_b8 = pRVar9;
              puStack_b8 = puStack_b8 + 1;
            }
            Ref::retain((Ref *)local_a0);
          }
          lVar6 = lVar6 + 0x10;
        } while (lVar6 != lVar2);
        if (local_c0 == puStack_b8) goto LAB_00eecd08;
                    /* try { // try from 00eece00 to 00fece53 has its CatchHandler @ 00eecdb0 */
        this_02 = (Ref *)Animation::create((Vector *)&local_c0,fVar14,1);
        pRVar9 = s_sharedAnimationCache;
                    /* catch() { ... } // from try @ 00eecdec with catch @ 00eece38 */
        if ((s_sharedAnimationCache == (Ref *)0x0) &&
           (pRVar9 = operator_new(0x50,(nothrow_t *)&std::nothrow), pRVar9 != (Ref *)0x0)) {
          Ref::Ref(pRVar9);
          *(undefined8 *)(pRVar9 + 0x30) = 0;
          *(undefined8 *)(pRVar9 + 0x28) = 0;
          *(undefined8 *)(pRVar9 + 0x40) = 0;
          *(undefined8 *)(pRVar9 + 0x38) = 0;
          *(undefined ***)pRVar9 = &PTR__AnimationCache_016fa4f0;
          *(undefined4 *)(pRVar9 + 0x48) = 0x3f800000;
        }
        s_sharedAnimationCache = pRVar9;
        pRVar9 = s_sharedAnimationCache;
        local_a0 = (AnimationFrame *)this_02;
        Ref::retain(this_02);
        pbVar1 = (basic_string *)(plVar12 + 2);
        Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation*>
        ::erase((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation*>
                 *)(pRVar9 + 0x28),pbVar1);
                    /* try { // try from 00eece98 to 00feceab has its CatchHandler @ 00eecee4 */
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation*>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,cocos2d::Animation*&>
                  ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation*>>>
                    *)(pRVar9 + 0x28),pbVar1,pbVar1,(Animation **)&local_a0);
        puVar10 = local_c0;
        puVar11 = puStack_b8;
        puVar5 = puStack_b8;
        if (local_c0 != puStack_b8) goto LAB_00eecea8;
      }
      puStack_b8 = puVar5;
      puVar10 = local_c0;
      if (puStack_b8 != (undefined8 *)0x0) {
        operator_delete(puStack_b8);
        puVar10 = puStack_b8;
      }
    }
    puStack_b8 = puVar10;
    plVar12 = (long *)*plVar12;
  } while( true );
}

