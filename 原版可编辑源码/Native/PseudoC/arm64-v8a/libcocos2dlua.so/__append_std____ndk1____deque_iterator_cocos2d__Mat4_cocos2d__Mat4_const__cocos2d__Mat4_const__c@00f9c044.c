
/* void std::__ndk1::deque<cocos2d::Mat4, std::__ndk1::allocator<cocos2d::Mat4>
   >::__append<std::__ndk1::__deque_iterator<cocos2d::Mat4, cocos2d::Mat4 const*, cocos2d::Mat4
   const&, cocos2d::Mat4 const* const*, long, 64l> >(std::__ndk1::__deque_iterator<cocos2d::Mat4,
   cocos2d::Mat4 const*, cocos2d::Mat4 const&, cocos2d::Mat4 const* const*, long, 64l>,
   std::__ndk1::__deque_iterator<cocos2d::Mat4, cocos2d::Mat4 const*, cocos2d::Mat4 const&,
   cocos2d::Mat4 const* const*, long, 64l>,
   std::__ndk1::enable_if<__is_forward_iterator<std::__ndk1::__deque_iterator<cocos2d::Mat4,
   cocos2d::Mat4 const*, cocos2d::Mat4 const&, cocos2d::Mat4 const* const*, long, 64l> >::value,
   void>::type*) */

void std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::
     __append<std::__ndk1::__deque_iterator<cocos2d::Mat4,cocos2d::Mat4_const*,cocos2d::Mat4_const&,cocos2d::Mat4_const*const*,long,64l>>
               (deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *param_1,long *param_2,
               Mat4 *param_3,long *param_4,Mat4 *param_5)

{
  long lVar1;
  ulong uVar2;
  Mat4 *pMVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  Mat4 *pMVar9;
  long *plVar10;
  Mat4 *pMVar11;
  long *plVar12;
  Mat4 *pMVar13;
  
  if (param_5 == param_3) {
    uVar8 = 0;
  }
  else {
    uVar8 = (((long)param_5 - *param_4 >> 6) + ((long)param_4 - (long)param_2) * 8) -
            ((long)param_3 - *param_2 >> 6);
  }
  lVar5 = *(long *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x28);
  lVar1 = 0;
  if (lVar6 - lVar5 != 0) {
    lVar1 = (lVar6 - lVar5) * 8 + -1;
  }
  uVar7 = lVar4 + *(long *)(param_1 + 0x20);
  uVar2 = uVar8 - (lVar1 - uVar7);
  if (lVar1 - uVar7 <= uVar8 && uVar2 != 0) {
    __add_back_capacity(param_1,uVar2);
    lVar4 = *(long *)(param_1 + 0x28);
    lVar5 = *(long *)(param_1 + 8);
    lVar6 = *(long *)(param_1 + 0x10);
    uVar7 = *(long *)(param_1 + 0x20) + lVar4;
  }
                    /* try { // try from 00f9c0e0 to 0109c0e7 has its CatchHandler @ 00f9c168 */
  plVar10 = (long *)(lVar5 + (uVar7 >> 3 & 0x1ffffffffffffff8));
                    /* try { // try from 00f9c0e8 to 0109c0ef has its CatchHandler @ 00f9c160 */
  if (lVar6 == lVar5) {
    pMVar11 = (Mat4 *)0x0;
  }
  else {
                    /* try { // try from 00f9c0f0 to 0109c0f7 has its CatchHandler @ 00f9c15c */
    pMVar11 = (Mat4 *)(*plVar10 + (uVar7 & 0x3f) * 0x40);
                    /* try { // try from 00f9c0f8 to 0109c12f has its CatchHandler @ 00f9c158 */
  }
  plVar12 = plVar10;
  pMVar13 = pMVar11;
  if (uVar8 != 0) {
    uVar8 = uVar8 + ((long)pMVar11 - *plVar10 >> 6);
    if ((long)uVar8 < 1) {
                    /* try { // try from 00f9c13c to 0109c14b has its CatchHandler @ 00f9c14c */
      uVar7 = 0x3f - uVar8;
                    /* catch() { ... } // from try @ 00f9c13c with catch @ 00f9c14c
                       try { // try from 00f9c14c to 0109c4d3 has its CatchHandler @ 00f9b268 */
      uVar8 = 0x7e - uVar8;
      if (-1 < (long)uVar7) {
        uVar8 = uVar7;
      }
                    /* catch() { ... } // from try @ 00f9c130 with catch @ 00f9c154 */
                    /* catch() { ... } // from try @ 00f9c0f8 with catch @ 00f9c158 */
      plVar12 = plVar10 + -((long)uVar8 >> 6);
                    /* catch() { ... } // from try @ 00f9c0f0 with catch @ 00f9c15c */
                    /* catch() { ... } // from try @ 00f9c0e8 with catch @ 00f9c160 */
                    /* catch() { ... } // from try @ 00f9c0e0 with catch @ 00f9c168 */
                    /* catch() { ... } // from try @ 00f9bd20 with catch @ 00f9c16c */
      pMVar13 = (Mat4 *)(*plVar12 + ((uVar8 & 0x3ffffffffffffc0) - uVar7) * 0x40 + 0xfc0);
    }
    else {
      plVar12 = (long *)((long)plVar10 + (uVar8 >> 3 & 0x1ffffffffffffff8));
                    /* try { // try from 00f9c130 to 0109c137 has its CatchHandler @ 00f9c154 */
      pMVar13 = (Mat4 *)(*plVar12 + (uVar8 & 0x3f) * 0x40);
                    /* try { // try from 00f9c138 to 0109c13b has its CatchHandler @ 00f9b268 */
    }
  }
  while( true ) {
    if (pMVar11 == pMVar13) {
                    /* catch() { ... } // from try @ 00f9beb8 with catch @ 00f9c214 */
      return;
    }
                    /* catch() { ... } // from try @ 00f9bf58 with catch @ 00f9c174 */
    pMVar3 = pMVar13;
                    /* catch() { ... } // from try @ 00f9bdb4 with catch @ 00f9c178 */
    if (plVar10 != plVar12) {
                    /* catch() { ... } // from try @ 00f9b444 with catch @ 00f9c180 */
      pMVar3 = (Mat4 *)(*plVar10 + 0x1000);
    }
    pMVar9 = pMVar11;
    if (pMVar3 != pMVar11) {
      do {
                    /* catch() { ... } // from try @ 00f9b4fc with catch @ 00f9c19c */
        cocos2d::Mat4::Mat4(pMVar9,param_3);
                    /* catch() { ... } // from try @ 00f9beb0 with catch @ 00f9c1a8 */
        param_3 = param_3 + 0x40;
        pMVar9 = pMVar9 + 0x40;
                    /* catch() { ... } // from try @ 00f9bb38 with catch @ 00f9c1b8 */
        if ((long)param_3 - *param_2 == 0x1000) {
          param_2 = param_2 + 1;
          param_3 = (Mat4 *)*param_2;
        }
                    /* catch() { ... } // from try @ 00f9b924 with catch @ 00f9c198 */
      } while (pMVar3 != pMVar9);
      lVar4 = *(long *)(param_1 + 0x28);
      pMVar9 = pMVar3;
                    /* catch() { ... } // from try @ 00f9b6fc with catch @ 00f9c1cc */
    }
    lVar4 = lVar4 + ((long)pMVar9 - (long)pMVar11 >> 6);
    *(long *)(param_1 + 0x28) = lVar4;
    if (plVar10 == plVar12) break;
    plVar10 = plVar10 + 1;
    pMVar11 = (Mat4 *)*plVar10;
  }
  return;
}

