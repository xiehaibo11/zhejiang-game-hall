
/* std::__ndk1::enable_if<__is_forward_iterator<cocos2d::Vec3*>::value&&is_constructible<cocos2d::Vec3,
   std::__ndk1::iterator_traits<cocos2d::Vec3*>::reference>::value, void>::type
   std::__ndk1::vector<cocos2d::Vec3, std::__ndk1::allocator<cocos2d::Vec3>
   >::assign<cocos2d::Vec3*>(cocos2d::Vec3*, cocos2d::Vec3*) */

void __thiscall
std::__ndk1::vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>>::assign<cocos2d::Vec3*>
          (vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>> *this,Vec3 *param_1,
          Vec3 *param_2)

{
  Vec3 *__src;
  size_t sVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong __n;
  void *pvVar6;
  ulong uVar7;
  
  lVar2 = *(long *)(this + 0x10);
  pvVar6 = *(void **)this;
  __n = (long)param_2 - (long)param_1;
  uVar7 = ((long)__n >> 2) * -0x5555555555555555;
  lVar4 = lVar2 - (long)pvVar6 >> 2;
                    /* try { // try from 00e384e8 to 00f384f3 has its CatchHandler @ 00e39680 */
  if (uVar7 < (ulong)(lVar4 * -0x5555555555555555) || uVar7 + lVar4 * 0x5555555555555555 == 0) {
                    /* try { // try from 00e385a8 to 00f385cb has its CatchHandler @ 00e396e8 */
    lVar2 = *(long *)(this + 8) - (long)pvVar6 >> 2;
    __src = param_1 + (*(long *)(this + 8) - (long)pvVar6);
    if (uVar7 < (ulong)(lVar2 * -0x5555555555555555) || uVar7 + lVar2 * 0x5555555555555555 == 0) {
      __src = param_2;
    }
    sVar1 = (long)__src - (long)param_1;
    if (sVar1 != 0) {
      memmove(pvVar6,param_1,sVar1);
    }
    if (uVar7 < (ulong)(lVar2 * -0x5555555555555555) || uVar7 + lVar2 * 0x5555555555555555 == 0) {
      *(void **)(this + 8) = (void *)((long)pvVar6 + ((long)sVar1 >> 2) * 4);
    }
    else {
      pvVar6 = *(void **)(this + 8);
      sVar1 = (long)param_2 - (long)__src;
      if (0 < (long)sVar1) {
        memcpy(pvVar6,__src,sVar1);
        pvVar6 = (void *)((long)pvVar6 + (sVar1 / 0xc) * 0xc);
      }
      *(void **)(this + 8) = pvVar6;
    }
  }
  else {
    if (pvVar6 != (void *)0x0) {
                    /* try { // try from 00e384f4 to 00f38517 has its CatchHandler @ 00e3967c */
      *(void **)(this + 8) = pvVar6;
      operator_delete(pvVar6);
      lVar2 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (0x1555555555555555 < uVar7) {
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
    uVar5 = 0x1555555555555555;
    if (((ulong)((lVar2 >> 2) * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) &&
       (uVar3 = (lVar2 >> 2) * 0x5555555555555556, uVar5 = uVar7, uVar7 <= uVar3)) {
      uVar5 = uVar3;
    }
    pvVar6 = operator_new(uVar5 * 0xc);
    *(void **)this = pvVar6;
    *(void **)(this + 8) = pvVar6;
    *(void **)(this + 0x10) = (void *)((long)pvVar6 + uVar5 * 0xc);
    if (0 < (long)__n) {
      memcpy(pvVar6,param_1,__n);
      pvVar6 = (void *)((long)pvVar6 + (__n / 0xc) * 0xc);
    }
                    /* try { // try from 00e38598 to 00f385a3 has its CatchHandler @ 00e396ec */
    *(void **)(this + 8) = pvVar6;
  }
                    /* try { // try from 00e38640 to 00f3864b has its CatchHandler @ 00e396c8 */
  return;
}

