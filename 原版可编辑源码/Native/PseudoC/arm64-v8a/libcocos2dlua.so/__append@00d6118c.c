
/* std::__ndk1::vector<cocos2d::V3F_C4B_T2F, std::__ndk1::allocator<cocos2d::V3F_C4B_T2F>
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<cocos2d::V3F_C4B_T2F,std::__ndk1::allocator<cocos2d::V3F_C4B_T2F>>::__append
          (vector<cocos2d::V3F_C4B_T2F,std::__ndk1::allocator<cocos2d::V3F_C4B_T2F>> *this,
          ulong param_1)

{
  Vec3 *pVVar1;
  ulong uVar2;
  void *__src;
  void *pvVar3;
  size_t __n;
  long lVar4;
  ulong uVar5;
  long lVar6;
  void *__dest;
  ulong uVar7;
  Vec3 *pVVar8;
  Vec3 *pVVar9;
  
  pVVar9 = *(Vec3 **)(this + 8);
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - (long)pVVar9 >> 3) * -0x5555555555555555)) {
    pVVar8 = pVVar9;
    if (param_1 != 0) {
                    /* try { // try from 00d612d0 to 00e612db has its CatchHandler @ 00d61520 */
      pVVar8 = pVVar9 + param_1 * 0x18;
      do {
        *(undefined8 *)pVVar9 = 0;
        *(undefined8 *)(pVVar9 + 8) = 0;
        *(undefined8 *)(pVVar9 + 0x10) = 0;
        cocos2d::Vec3::Vec3(pVVar9);
                    /* try { // try from 00d612e8 to 00e612f3 has its CatchHandler @ 00d6151c */
        cocos2d::Color4B::Color4B((Color4B *)(pVVar9 + 0xc));
        pVVar1 = pVVar9 + 0x18;
        *(undefined4 *)(pVVar9 + 0x10) = 0;
        *(undefined4 *)(pVVar9 + 0x14) = 0;
        pVVar9 = pVVar1;
      } while (pVVar8 != pVVar1);
    }
    *(Vec3 **)(this + 8) = pVVar8;
    return;
  }
                    /* try { // try from 00d611cc to 00e611d3 has its CatchHandler @ 00d6153c */
                    /* try { // try from 00d611d4 to 00e6123b has its CatchHandler @ 00d610ac */
  uVar7 = 0xaaaaaaaaaaaaaaa;
  lVar6 = (long)pVVar9 - *(long *)this >> 3;
  uVar2 = lVar6 * -0x5555555555555555 + param_1;
  if (0xaaaaaaaaaaaaaaa < uVar2) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00d61330 to 00e61337 has its CatchHandler @ 00d61598 */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar4 = *(long *)(this + 0x10) - *(long *)this >> 3;
  if ((ulong)(lVar4 * -0x5555555555555555) < 0x555555555555555) {
    uVar5 = lVar4 * 0x5555555555555556;
    uVar7 = uVar2;
    if (uVar2 <= uVar5) {
      uVar7 = uVar5;
    }
    if (uVar7 == 0) {
      pvVar3 = (void *)0x0;
      goto LAB_00d61238;
    }
  }
  pvVar3 = operator_new(uVar7 * 0x18);
LAB_00d61238:
                    /* try { // try from 00d6123c to 00e6123f has its CatchHandler @ 00d61574 */
  lVar6 = lVar6 * 8;
                    /* try { // try from 00d61244 to 00e6124f has its CatchHandler @ 00d6156c */
  pVVar9 = (Vec3 *)((long)pvVar3 + param_1 * 0x18 + lVar6);
  lVar4 = lVar6;
  do {
    pVVar8 = (Vec3 *)((long)pvVar3 + lVar4);
    *(undefined8 *)pVVar8 = 0;
    *(undefined8 *)(pVVar8 + 8) = 0;
                    /* try { // try from 00d61258 to 00e61267 has its CatchHandler @ 00d61558 */
    *(undefined8 *)(pVVar8 + 0x10) = 0;
    cocos2d::Vec3::Vec3(pVVar8);
    cocos2d::Color4B::Color4B((Color4B *)(pVVar8 + 0xc));
                    /* try { // try from 00d61278 to 00e6128f has its CatchHandler @ 00d61588 */
    lVar4 = lVar4 + 0x18;
    *(undefined4 *)(pVVar8 + 0x10) = 0;
    *(undefined4 *)(pVVar8 + 0x14) = 0;
  } while (pVVar9 != pVVar8 + 0x18);
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
                    /* try { // try from 00d61290 to 00e61297 has its CatchHandler @ 00d61550 */
  __dest = (void *)((long)pvVar3 + (lVar6 - __n));
  if (0 < (long)__n) {
                    /* try { // try from 00d6129c to 00e612a3 has its CatchHandler @ 00d6154c */
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(Vec3 **)(this + 8) = pVVar9;
  *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar7 * 0x18);
  if (__src == (void *)0x0) {
    return;
  }
                    /* try { // try from 00d612b4 to 00e612bb has its CatchHandler @ 00d61548 */
                    /* try { // try from 00d612bc to 00e612c7 has its CatchHandler @ 00d61544 */
  operator_delete(__src);
  return;
}

