
/* cocos2d::Texture2D::addSpriteFrameCapInset(cocos2d::SpriteFrame*, cocos2d::Rect const&) */

void __thiscall
cocos2d::Texture2D::addSpriteFrameCapInset(Texture2D *this,SpriteFrame *param_1,Rect *param_2)

{
  long lVar1;
  long lVar2;
  Rect *this_00;
  SpriteFrame *local_60 [2];
  undefined1 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = *(Rect **)(this + 0x58);
  local_60[0] = param_1;
  if (this_00 == (Rect *)0x0) {
    this_00 = operator_new(0x38,(nothrow_t *)&std::nothrow);
    if (this_00 != (Rect *)0x0) {
                    /* try { // try from 00fecd74 to 010ecd83 has its CatchHandler @ 00fecf98 */
      Rect::Rect(this_00);
      *(undefined8 *)(this_00 + 0x18) = 0;
      *(undefined8 *)(this_00 + 0x10) = 0;
      *(undefined8 *)(this_00 + 0x28) = 0;
      *(undefined8 *)(this_00 + 0x20) = 0;
      *(undefined4 *)(this_00 + 0x30) = 0x3f800000;
      param_1 = local_60[0];
    }
    *(Rect **)(this + 0x58) = this_00;
  }
  if (param_1 != (SpriteFrame *)0x0) {
                    /* try { // try from 00fecd28 to 010ecd2b has its CatchHandler @ 00fecfec */
                    /* try { // try from 00fecd38 to 010ecd43 has its CatchHandler @ 00fed008 */
    local_50 = (undefined1 *)local_60;
                    /* try { // try from 00fecd44 to 010ecd4f has its CatchHandler @ 00fecff0 */
    lVar2 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::__unordered_map_hasher<cocos2d::SpriteFrame*,std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::hash<cocos2d::SpriteFrame*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::SpriteFrame*,std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::equal_to<cocos2d::SpriteFrame*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>>>
            ::
            __emplace_unique_key_args<cocos2d::SpriteFrame*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::SpriteFrame*const&>,std::__ndk1::tuple<>>
                      ((SpriteFrame **)(this_00 + 0x10),(piecewise_construct_t *)local_60,
                       (tuple *)&DAT_0144d8cd,(tuple *)&local_50);
    this_00 = (Rect *)(lVar2 + 0x18);
  }
  Rect::operator=(this_00,param_2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

