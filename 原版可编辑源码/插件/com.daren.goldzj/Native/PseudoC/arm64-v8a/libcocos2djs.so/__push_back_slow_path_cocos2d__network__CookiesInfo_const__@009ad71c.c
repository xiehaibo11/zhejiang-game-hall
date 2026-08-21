
/* void std::__ndk1::vector<cocos2d::network::CookiesInfo,
   std::__ndk1::allocator<cocos2d::network::CookiesInfo>
   >::__push_back_slow_path<cocos2d::network::CookiesInfo const&>(cocos2d::network::CookiesInfo
   const&) */

void __thiscall
std::__ndk1::
vector<cocos2d::network::CookiesInfo,std::__ndk1::allocator<cocos2d::network::CookiesInfo>>::
__push_back_slow_path<cocos2d::network::CookiesInfo_const&>
          (vector<cocos2d::network::CookiesInfo,std::__ndk1::allocator<cocos2d::network::CookiesInfo>>
           *this,CookiesInfo *param_1)

{
  ulong uVar1;
  CookiesInfo *pCVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  CookiesInfo *this_00;
  void *pvVar8;
  void *pvVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
                    /* catch() { ... } // from try @ 009ad5c8 with catch @ 009ad71c */
                    /* catch() { ... } // from try @ 009ad5bc with catch @ 009ad720 */
                    /* catch() { ... } // from try @ 009ad59c with catch @ 009ad724 */
                    /* catch() { ... } // from try @ 009ad5d4 with catch @ 009ad734 */
  lVar5 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar10 = 0x1e1e1e1e1e1e1e1;
  uVar1 = lVar5 * -0xf0f0f0f0f0f0f0f + 1;
  if (0x1e1e1e1e1e1e1e1 < uVar1) {
                    /* try { // try from 009ad8ec to 00aad9cf has its CatchHandler @ 009ad78c */
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar6 = *(long *)(this + 0x10) - *(long *)this >> 3;
  if ((ulong)(lVar6 * -0xf0f0f0f0f0f0f0f) < 0xf0f0f0f0f0f0f0) {
    uVar7 = lVar6 * -0x1e1e1e1e1e1e1e1e;
                    /* try { // try from 009ad78c to 00aad7df has its CatchHandler @ 009ad78c
                       catch() { ... } // from try @ 009ad78c with catch @ 009ad78c
                       catch() { ... } // from try @ 009ad8ec with catch @ 009ad78c */
    uVar10 = uVar1;
    if (uVar1 <= uVar7) {
      uVar10 = uVar7;
    }
    if (uVar10 == 0) {
      pvVar4 = (void *)0x0;
      goto LAB_009ad7a8;
    }
  }
  pvVar4 = operator_new(uVar10 * 0x88);
LAB_009ad7a8:
  this_00 = (CookiesInfo *)((long)pvVar4 + lVar5 * 8);
  cocos2d::network::CookiesInfo::CookiesInfo(this_00,param_1);
  pvVar8 = *(void **)this;
  pvVar3 = *(void **)(this + 8);
  pCVar2 = this_00 + 0x88;
  pvVar9 = pvVar8;
  if (pvVar3 != pvVar8) {
    lVar5 = 0;
    do {
                    /* try { // try from 009ad7e0 to 00aad7f7 has its CatchHandler @ 009ad968 */
      uVar12 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x80);
      uVar11 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x88);
      lVar6 = lVar5 + -0x88;
      *(undefined8 *)(this_00 + lVar5 + -0x78) = *(undefined8 *)((long)pvVar3 + lVar5 + -0x78);
      *(undefined8 *)(this_00 + lVar5 + -0x80) = uVar12;
      *(undefined8 *)(this_00 + lVar5 + -0x88) = uVar11;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x80) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x78) = 0;
                    /* try { // try from 009ad800 to 00aad80b has its CatchHandler @ 009ad964 */
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x88) = 0;
      this_00[lVar5 + -0x70] = *(CookiesInfo *)((long)pvVar3 + lVar5 + -0x70);
                    /* try { // try from 009ad80c to 00aad817 has its CatchHandler @ 009ad960 */
      uVar12 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x60);
      uVar11 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x68);
      *(undefined8 *)(this_00 + lVar5 + -0x58) = *(undefined8 *)((long)pvVar3 + lVar5 + -0x58);
                    /* try { // try from 009ad818 to 00aad8eb has its CatchHandler @ 009ad978 */
      *(undefined8 *)(this_00 + lVar5 + -0x60) = uVar12;
      *(undefined8 *)(this_00 + lVar5 + -0x68) = uVar11;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x60) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x58) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x68) = 0;
      this_00[lVar5 + -0x50] = *(CookiesInfo *)((long)pvVar3 + lVar5 + -0x50);
      uVar12 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x40);
      uVar11 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x48);
      *(undefined8 *)(this_00 + lVar5 + -0x38) = *(undefined8 *)((long)pvVar3 + lVar5 + -0x38);
      *(undefined8 *)(this_00 + lVar5 + -0x40) = uVar12;
      *(undefined8 *)(this_00 + lVar5 + -0x48) = uVar11;
      uVar12 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x28);
      uVar11 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x30);
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x40) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x38) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x48) = 0;
      *(undefined8 *)(this_00 + lVar5 + -0x20) = *(undefined8 *)((long)pvVar3 + lVar5 + -0x20);
      *(undefined8 *)(this_00 + lVar5 + -0x28) = uVar12;
      *(undefined8 *)(this_00 + lVar5 + -0x30) = uVar11;
      uVar12 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x10);
      uVar11 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x18);
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x28) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x20) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x30) = 0;
      *(undefined8 *)(this_00 + lVar5 + -8) = *(undefined8 *)((long)pvVar3 + lVar5 + -8);
      *(undefined8 *)(this_00 + lVar5 + -0x10) = uVar12;
      *(undefined8 *)(this_00 + lVar5 + -0x18) = uVar11;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x10) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -8) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x18) = 0;
      lVar5 = lVar6;
    } while ((long)pvVar8 - (long)pvVar3 != lVar6);
    pvVar8 = *(void **)(this + 8);
    this_00 = this_00 + lVar6;
    pvVar9 = *(void **)this;
  }
  *(CookiesInfo **)this = this_00;
  *(CookiesInfo **)(this + 8) = pCVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar10 * 0x88);
  if (pvVar8 != pvVar9) {
    do {
      pvVar8 = (void *)((long)pvVar8 + -0x88);
      FUN_009ad688(this + 0x10,pvVar8);
    } while (pvVar9 != pvVar8);
  }
  if (pvVar9 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar9);
  return;
}

