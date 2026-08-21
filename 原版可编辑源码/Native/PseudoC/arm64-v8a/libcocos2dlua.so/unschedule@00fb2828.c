
/* cocos2d::Scheduler::unschedule(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, void*) */

void __thiscall cocos2d::Scheduler::unschedule(Scheduler *this,basic_string *param_1,void *param_2)

{
  size_t __n;
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  basic_string bVar4;
  Ref RVar5;
  Ref *pRVar6;
  int iVar7;
  long lVar8;
  Ref *this_00;
  Ref *__s2;
  uint uVar9;
  long *plVar10;
  basic_string *__s1;
  long lVar11;
  ulong uVar12;
  _hashSelectorEntry *p_Var13;
  long lVar14;
  _ccArray *local_70;
  
  if (param_2 == (void *)0x0) {
    return;
  }
  bVar4 = *param_1;
  __n = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    __n = *(size_t *)(param_1 + 8);
  }
  if (__n == 0) {
    return;
  }
  if (*(long *)(this + 0x60) == 0) {
    return;
  }
  uVar9 = (uint)param_2;
  iVar7 = (int)(((ulong)param_2 & 0xffffffffff000000) >> 0x20) + -0x61c88647;
                    /* try { // try from 00fb2890 to 010b2897 has its CatchHandler @ 00fb2ad8 */
                    /* try { // try from 00fb28a0 to 010b28ab has its CatchHandler @ 00fb2ac8 */
                    /* try { // try from 00fb28ac to 010b295b has its CatchHandler @ 00fb2788 */
  uVar9 = ((int)((ulong)param_2 & 0xffffffffff000000) - iVar7) + (uVar9 & 0xff0000) +
          (uVar9 & 0xff00) + (uVar9 & 0xff) + 0x9f49bac2 ^ 0x7f76d;
  uVar2 = (iVar7 - uVar9) + 0x1124109 ^ uVar9 << 8;
  uVar3 = 0xfeedbef7 - (uVar9 + uVar2) ^ uVar2 >> 0xd;
  uVar9 = (uVar9 - uVar2) - uVar3 ^ uVar3 >> 0xc;
  plVar10 = *(long **)(*(long *)(this + 0x60) + 0x28);
  uVar2 = (uVar2 - uVar3) - uVar9 ^ uVar9 << 0x10;
  uVar3 = (uVar3 - uVar9) - uVar2 ^ uVar2 >> 5;
  uVar9 = (uVar9 - uVar2) - uVar3 ^ uVar3 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar9 ^ uVar9 << 10;
  lVar11 = *(long *)(*plVar10 +
                    (ulong)(((uVar3 - uVar9) - uVar2 ^ uVar2 >> 0xf) & (int)plVar10[1] - 1U) * 0x10)
  ;
  while( true ) {
    if (lVar11 == 0) {
      return;
    }
                    /* try { // try from 00fb295c to 010b295f has its CatchHandler @ 00fb2adc */
    p_Var13 = (_hashSelectorEntry *)(lVar11 - plVar10[4]);
                    /* try { // try from 00fb2960 to 010b2aab has its CatchHandler @ 00fb2788 */
    if ((*(int *)(p_Var13 + 0x58) == 8) && ((void *)**(undefined8 **)(p_Var13 + 0x50) == param_2))
    break;
    lVar11 = *(long *)(p_Var13 + 0x48);
  }
  local_70 = *(_ccArray **)p_Var13;
  lVar11 = *(long *)local_70;
  if (lVar11 < 1) {
    return;
  }
  __s1 = *(basic_string **)(param_1 + 0x10);
  if (((byte)bVar4 & 1) == 0) {
    __s1 = param_1 + 1;
  }
  plVar10 = *(long **)(local_70 + 0x10);
  lVar14 = 0;
  lVar8 = *plVar10;
  if (lVar8 != 0) goto LAB_00fb29f0;
  do {
    while( true ) {
      do {
        do {
          do {
            lVar14 = lVar14 + 1;
            if (lVar11 <= lVar14) {
              return;
            }
            lVar8 = plVar10[lVar14];
          } while (lVar8 == 0);
LAB_00fb29f0:
          this_00 = (Ref *)__dynamic_cast(lVar8,&Ref::typeinfo,&TimerTargetCallback::typeinfo,0);
        } while (this_00 == (Ref *)0x0);
        RVar5 = this_00[0x90];
        sVar1 = (ulong)((byte)RVar5 >> 1);
        if (((byte)RVar5 & 1) != 0) {
          sVar1 = *(size_t *)(this_00 + 0x98);
        }
      } while (__n != sVar1);
      __s2 = this_00 + 0x91;
      if (((byte)RVar5 & 1) != 0) {
        __s2 = *(Ref **)(this_00 + 0xa0);
      }
      uVar12 = (ulong)((byte)bVar4 >> 1);
      pRVar6 = (Ref *)param_1;
      if (((byte)bVar4 & 1) != 0) break;
      while (pRVar6[1] == *__s2) {
        uVar12 = uVar12 - 1;
        __s2 = __s2 + 1;
        pRVar6 = pRVar6 + 1;
        if (uVar12 == 0) goto LAB_00fb2a64;
      }
    }
    iVar7 = memcmp(__s1,__s2,__n);
  } while (iVar7 != 0);
LAB_00fb2a64:
  if ((*(Ref **)(p_Var13 + 0x18) == this_00) && (this_00[0x48] == (Ref)0x0)) {
    Ref::retain(this_00);
    this_00[0x48] = (Ref)0x1;
    local_70 = *(_ccArray **)p_Var13;
  }
  ccArrayRemoveObjectAtIndex(local_70,lVar14,true);
  if ((int)lVar14 <= *(int *)(p_Var13 + 0x10)) {
                    /* try { // try from 00fb2aac to 010b2ab7 has its CatchHandler @ 00fb2ac4 */
    *(int *)(p_Var13 + 0x10) = *(int *)(p_Var13 + 0x10) + -1;
  }
                    /* try { // try from 00fb2ab8 to 010b2b23 has its CatchHandler @ 00fb2788 */
  if (**(long **)p_Var13 == 0) {
    if (*(_hashSelectorEntry **)(this + 0x68) != p_Var13) {
      removeHashElement(this,p_Var13);
      return;
    }
    this[0x70] = (Scheduler)0x1;
  }
                    /* catch() { ... } // from try @ 00fb2aac with catch @ 00fb2ac4 */
                    /* catch() { ... } // from try @ 00fb28a0 with catch @ 00fb2ac8 */
                    /* catch() { ... } // from try @ 00fb2890 with catch @ 00fb2ad8 */
                    /* catch() { ... } // from try @ 00fb295c with catch @ 00fb2adc */
  return;
}

