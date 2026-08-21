
/* std::__ndk1::vector<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char const*> >,
   std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char const*> > >
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
::__append(vector<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
           *this,ulong param_1)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  undefined1 *puVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  void *__src;
  size_t __n;
  ulong uVar12;
  
  lVar6 = *(long *)(this + 8);
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - lVar6 >> 3) * -0x5555555555555555)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb2f18 with catch @ 00eb3164
                        */
    lVar4 = lVar6;
    if (param_1 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb313c with catch @ 00eb3180
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb30a8 with catch @ 00eb3184
                        */
      uVar1 = (param_1 * 0x18 - 0x18) / 0x18 + 1;
      lVar4 = lVar6 + param_1 * 0x18;
      lVar10 = lVar6;
                    /* catch() { ... } // from try @ 00eb31c4 with catch @ 00eb3198 */
      if (1 < uVar1) {
        uVar5 = uVar1 & 0x1ffffffffffffffe;
        lVar10 = lVar6 + uVar5 * 0x18;
        puVar8 = (undefined1 *)(lVar6 + 0x28);
        uVar12 = uVar5;
        do {
          puVar8[-0x18] = 0;
          *puVar8 = 0;
          uVar12 = uVar12 - 2;
          puVar8 = puVar8 + 0x30;
                    /* try { // try from 00eb31bc to 00fb31c3 has its CatchHandler @ 00eb31ec */
        } while (uVar12 != 0);
                    /* try { // try from 00eb31c4 to 00fb3207 has its CatchHandler @ 00eb3198 */
        if (uVar1 == uVar5) goto LAB_00eb31dc;
      }
      do {
        *(undefined1 *)(lVar10 + 0x10) = 0;
        lVar10 = lVar10 + 0x18;
      } while (lVar4 != lVar10);
    }
LAB_00eb31dc:
    *(long *)(this + 8) = lVar4;
    return;
  }
  __src = *(void **)this;
                    /* try { // try from 00eb3040 to 00fb3053 has its CatchHandler @ 00eb3128 */
  uVar12 = 0xaaaaaaaaaaaaaaa;
  __n = lVar6 - (long)__src;
  lVar6 = (long)__n >> 3;
  uVar1 = lVar6 * -0x5555555555555555 + param_1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar4 = *(long *)(this + 0x10) - (long)__src >> 3;
                    /* try { // try from 00eb3074 to 00fb307f has its CatchHandler @ 00eb3114 */
                    /* try { // try from 00eb3080 to 00fb3087 has its CatchHandler @ 00eb3128 */
  if ((ulong)(lVar4 * -0x5555555555555555) < 0x555555555555555) {
    uVar5 = lVar4 * 0x5555555555555556;
    uVar12 = uVar1;
    if (uVar1 <= uVar5) {
      uVar12 = uVar5;
    }
    if (uVar12 != 0) goto LAB_00eb3098;
    pvVar3 = (void *)0x0;
  }
  else {
LAB_00eb3098:
    pvVar3 = operator_new(uVar12 * 0x18);
  }
                    /* try { // try from 00eb30a8 to 00fb30ab has its CatchHandler @ 00eb3184 */
                    /* try { // try from 00eb30ac to 00fb313b has its CatchHandler @ 00eb2e88 */
  pvVar7 = (void *)((long)pvVar3 + lVar6 * 8);
  uVar1 = (param_1 * 0x18 - 0x18) / 0x18 + 1;
  pvVar2 = (void *)((long)pvVar7 + param_1 * 0x18);
  pvVar9 = pvVar7;
  if (1 < uVar1) {
    uVar11 = uVar1 & 0x1ffffffffffffffe;
    pvVar9 = (void *)((long)pvVar7 + uVar11 * 0x18);
    puVar8 = (undefined1 *)((long)pvVar3 + lVar6 * 8 + 0x28);
    uVar5 = uVar11;
    do {
      puVar8[-0x18] = 0;
      *puVar8 = 0;
      uVar5 = uVar5 - 2;
      puVar8 = puVar8 + 0x30;
    } while (uVar5 != 0);
    if (uVar1 == uVar11) goto LAB_00eb311c;
  }
  do {
    *(undefined1 *)((long)pvVar9 + 0x10) = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb2f00 with catch @ 00eb3110
                        */
    pvVar9 = (void *)((long)pvVar9 + 0x18);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb3074 with catch @ 00eb3114
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb2fdc with catch @ 00eb3118
                        */
  } while (pvVar2 != pvVar9);
LAB_00eb311c:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb2fcc with catch @ 00eb311c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb2ff0 with catch @ 00eb3120
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb2fa8 with catch @ 00eb3124
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb3040 with catch @ 00eb3128
                       catch(type#1 @ 00000000) { ... } // from try @ 00eb3080 with catch @ 00eb3128
                        */
  if (0 < (long)__n) {
    memcpy((void *)((long)pvVar7 - __n),__src,__n);
  }
                    /* try { // try from 00eb313c to 00fb313f has its CatchHandler @ 00eb3180 */
  *(void **)this = (void *)((long)pvVar7 - __n);
  *(void **)(this + 8) = pvVar2;
                    /* try { // try from 00eb3140 to 00fb3197 has its CatchHandler @ 00eb2e88 */
  *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar12 * 0x18);
  if (__src == (void *)0x0) {
                    /* catch() { ... } // from try @ 00eb31bc with catch @ 00eb31ec */
    return;
  }
  operator_delete(__src);
  return;
}

