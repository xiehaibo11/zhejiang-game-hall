
/* cocos2d::TTFLabelAtlasCache::load(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, float, cocos2d::LabelLayoutInfo*) */

void cocos2d::TTFLabelAtlasCache::load(basic_string *param_1,float param_2,LabelLayoutInfo *param_3)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  __shared_weak_count *this;
  ulong uVar6;
  __shared_weak_count *p_Var7;
  LabelLayoutInfo *in_x2;
  undefined8 *in_x8;
  long lVar8;
  TTFLabelAtals *this_00;
  __shared_weak_count *p_Var9;
  basic_string local_90 [16];
  void *local_80;
  tuple atStack_78 [8];
  undefined1 *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  cacheKeyFor(param_1,(int)param_3,(LabelLayoutInfo *)(ulong)(uint)(int)param_2);
                    /* try { // try from 009b2494 to 00ab24c7 has its CatchHandler @ 009b2494
                       catch() { ... } // from try @ 009b2494 with catch @ 009b2494
                       catch() { ... } // from try @ 009b24dc with catch @ 009b2494 */
  local_70 = local_90;
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::weak_ptr<cocos2d::TTFLabelAtals>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::weak_ptr<cocos2d::TTFLabelAtals>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::weak_ptr<cocos2d::TTFLabelAtals>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::weak_ptr<cocos2d::TTFLabelAtals>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::weak_ptr<cocos2d::TTFLabelAtals>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::weak_ptr<cocos2d::TTFLabelAtals>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::weak_ptr<cocos2d::TTFLabelAtals>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::weak_ptr<cocos2d::TTFLabelAtals>>>>
                      *)param_1,local_90,(piecewise_construct_t *)&DAT_0188ab92,(tuple *)&local_70,
                     atStack_78);
  if (*(__shared_weak_count **)(lVar5 + 0x30) == (__shared_weak_count *)0x0) {
    p_Var7 = (__shared_weak_count *)0x0;
LAB_009b24d0:
    this = operator_new(0x60);
                    /* try { // try from 009b24d8 to 00ab24db has its CatchHandler @ 009b24f0 */
    *(undefined8 *)(this + 0x10) = 0;
                    /* try { // try from 009b24dc to 00ab2513 has its CatchHandler @ 009b2494 */
    this_00 = (TTFLabelAtals *)(this + 0x18);
                    /* catch() { ... } // from try @ 009b24d8 with catch @ 009b24f0 */
    p_Var9 = this + 8;
    *(undefined8 *)p_Var9 = 0;
    *(undefined ***)this = &PTR____shared_ptr_emplace_01c6ad38;
                    /* catch() { ... } // from try @ 009b24c8 with catch @ 009b2500 */
    TTFLabelAtals::TTFLabelAtals(this_00,(basic_string *)param_3,(float)(int)param_2,in_x2);
    if (p_Var7 != (__shared_weak_count *)0x0) {
                    /* try { // try from 009b2514 to 00ab254b has its CatchHandler @ 009b2514
                       catch() { ... } // from try @ 009b2514 with catch @ 009b2514
                       catch() { ... } // from try @ 009b2554 with catch @ 009b2514 */
      p_Var1 = p_Var7 + 8;
      do {
        lVar8 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*(long *)p_Var7 + 0x10))(p_Var7);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var7);
      }
    }
    uVar6 = TTFLabelAtals::init(this_00);
                    /* try { // try from 009b254c to 00ab2553 has its CatchHandler @ 009b2564 */
    if ((uVar6 & 1) == 0) {
      *in_x8 = 0;
      in_x8[1] = 0;
      do {
        lVar5 = *(long *)p_Var9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var9,0x10);
        if (bVar3) {
          *(long *)p_Var9 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*(long *)this + 0x10))(this);
        std::__ndk1::__shared_weak_count::__release_weak(this);
      }
      goto joined_r0x009b25a4;
    }
    p_Var7 = this + 0x10;
    do {
                    /* try { // try from 009b2554 to 00ab2577 has its CatchHandler @ 009b2514 */
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var7,0x10);
      if (bVar3) {
        *(long *)p_Var7 = *(long *)p_Var7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
                    /* catch() { ... } // from try @ 009b254c with catch @ 009b2564 */
    p_Var7 = *(__shared_weak_count **)(lVar5 + 0x30);
    *(TTFLabelAtals **)(lVar5 + 0x28) = this_00;
    *(__shared_weak_count **)(lVar5 + 0x30) = this;
    if (p_Var7 != (__shared_weak_count *)0x0) {
      std::__ndk1::__shared_weak_count::__release_weak(p_Var7);
    }
  }
  else {
    this = (__shared_weak_count *)
           std::__ndk1::__shared_weak_count::lock(*(__shared_weak_count **)(lVar5 + 0x30));
    p_Var7 = this;
    if ((this == (__shared_weak_count *)0x0) ||
       (this_00 = *(TTFLabelAtals **)(lVar5 + 0x28), this_00 == (TTFLabelAtals *)0x0))
    goto LAB_009b24d0;
  }
  *in_x8 = this_00;
  in_x8[1] = this;
joined_r0x009b25a4:
  if (((byte)local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 009b25d4 to 00ab262b has its CatchHandler @ 009b25d4
                       catch() { ... } // from try @ 009b25d4 with catch @ 009b25d4
                       catch() { ... } // from try @ 009b26c0 with catch @ 009b25d4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

