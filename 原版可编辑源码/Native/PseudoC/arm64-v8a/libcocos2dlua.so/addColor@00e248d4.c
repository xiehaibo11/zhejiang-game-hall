
/* cocos2d::PUColorAffector::addColor(float, cocos2d::Vec4 const&) */

void __thiscall
cocos2d::PUColorAffector::addColor(PUColorAffector *this,float param_1,Vec4 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float local_3c [3];
  float *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = local_3c;
  local_3c[0] = param_1;
                    /* try { // try from 00e24918 to 00f2492b has its CatchHandler @ 00e24e1c */
  lVar2 = std::__ndk1::
          __tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
          ::
          __emplace_unique_key_args<float,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<float_const&>,std::__ndk1::tuple<>>
                    ((float *)(this + 0xb0),(piecewise_construct_t *)local_3c,(tuple *)&DAT_01422da0
                     ,(tuple *)&local_30);
  uVar3 = *(undefined8 *)param_2;
  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00e24934 to 00f24947 has its CatchHandler @ 00e24e20 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

