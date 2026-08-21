
/* cocos2d::FontAtlas::reinit() */

void __thiscall cocos2d::FontAtlas::reinit(FontAtlas *this)

{
  long lVar1;
  Texture2D *this_00;
  void *__s;
  long lVar2;
  undefined4 uVar3;
  ulong __n;
  float fVar4;
  undefined8 local_70 [2];
  undefined1 *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(void **)(this + 0xa0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xa0));
    *(undefined8 *)(this + 0xa0) = 0;
  }
  this_00 = operator_new(0x88,(nothrow_t *)&std::nothrow);
  if (this_00 != (Texture2D *)0x0) {
    Texture2D::Texture2D(this_00);
  }
  __n = 0x40000;
  *(undefined4 *)(this + 0xa8) = 0x40000;
  fVar4 = *(float *)(*(long *)(this + 0x88) + 0x5c);
  if (0.0 < fVar4) {
                    /* try { // try from 00efcab8 to 00ffcac3 has its CatchHandler @ 00efcbd8 */
    __n = 0x80000;
    *(undefined4 *)(this + 0xa8) = 0x80000;
    *(float *)(this + 0x78) = fVar4 + fVar4 + *(float *)(this + 0x78);
  }
  __s = operator_new__(__n,(nothrow_t *)&std::nothrow);
  *(void **)(this + 0xa0) = __s;
  memset(__s,0,__n);
  uVar3 = 7;
  if (fVar4 <= 0.0) {
    uVar3 = 5;
  }
  Size::Size((Size *)&local_60,512.0,512.0);
                    /* try { // try from 00efcb28 to 00ffcb2f has its CatchHandler @ 00efcbc0 */
  Texture2D::initWithData(this_00,__s,__n,uVar3,0x200,0x200,&local_60);
                    /* try { // try from 00efcb30 to 00ffcbab has its CatchHandler @ 00efc954 */
  Ref::retain((Ref *)this_00);
  local_70[0] = 0;
  local_60 = (undefined1 *)local_70;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::__unordered_map_hasher<long,std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::hash<long>,true>,std::__ndk1::__unordered_map_equal<long,std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::equal_to<long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>>>
          ::
          __emplace_unique_key_args<long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<long&&>,std::__ndk1::tuple<>>
                    ((long *)(this + 0x28),(piecewise_construct_t *)local_70,(tuple *)&DAT_0143a342,
                     (tuple *)&local_60);
  *(Texture2D **)(lVar2 + 0x18) = this_00;
  Ref::release((Ref *)this_00);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

