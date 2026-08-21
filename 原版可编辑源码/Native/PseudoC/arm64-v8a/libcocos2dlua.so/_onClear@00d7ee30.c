
/* dragonBones::Slot::_onClear() */

void __thiscall dragonBones::Slot::_onClear(Slot *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *__dest;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  size_t __n;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  
                    /* try { // try from 00d7ee3c to 00e7ee43 has its CatchHandler @ 00d7f04c */
  TransformObject::_onClear((TransformObject *)this);
  plVar2 = *(long **)(this + 0x140);
  plVar3 = *(long **)(this + 0x148);
  if (plVar2 == plVar3) {
    plVar8 = (long *)0x0;
    __dest = (long *)0x0;
    plVar7 = __dest;
joined_r0x00d7ef98:
    for (; __dest != plVar8; __dest = __dest + 2) {
      if ((int)__dest[1] == 1) {
        BaseObject::returnToPool((BaseObject *)*__dest);
      }
      else {
        (**(code **)(*(long *)this + 0x28))(this,(BaseObject *)*__dest,1);
      }
    }
    if (*(BaseObject **)(this + 0xd8) != (BaseObject *)0x0) {
      BaseObject::returnToPool(*(BaseObject **)(this + 0xd8));
    }
    lVar4 = *(long *)(this + 0xe8);
    if ((lVar4 != 0) && (lVar4 != *(long *)(this + 0xe0))) {
                    /* catch() { ... } // from try @ 00d7eaa4 with catch @ 00d7f008 */
                    /* catch() { ... } // from try @ 00d7ec54 with catch @ 00d7f00c */
                    /* catch() { ... } // from try @ 00d7eaac with catch @ 00d7f010
                       catch() { ... } // from try @ 00d7ecb8 with catch @ 00d7f010
                       catch() { ... } // from try @ 00d7ee68 with catch @ 00d7f010 */
      (**(code **)(*(long *)this + 0x28))(this,lVar4,0);
    }
    if (*(long *)(this + 0xe0) != 0) {
                    /* catch() { ... } // from try @ 00d7eb28 with catch @ 00d7f030 */
      (**(code **)(*(long *)this + 0x28))(this,*(long *)(this + 0xe0),0);
    }
                    /* catch() { ... } // from try @ 00d7ea3c with catch @ 00d7f034 */
                    /* catch() { ... } // from try @ 00d7ec10 with catch @ 00d7f044 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x78),"",0);
                    /* catch() { ... } // from try @ 00d7ebc4 with catch @ 00d7f048 */
                    /* catch() { ... } // from try @ 00d7ea7c with catch @ 00d7f04c
                       catch() { ... } // from try @ 00d7ead8 with catch @ 00d7f04c
                       catch() { ... } // from try @ 00d7ee3c with catch @ 00d7f04c */
    *(undefined2 *)(this + 0xfc) = 0x100;
                    /* catch() { ... } // from try @ 00d7eb30 with catch @ 00d7f050 */
    *(undefined8 *)(this + 0x100) = 0xffffffffffffffff;
    *(undefined2 *)(this + 0xf8) = 0;
    this[0xfb] = (Slot)0x0;
    this[0x90] = (Slot)0x0;
    *(undefined4 *)(this + 0x94) = 0;
    *(undefined4 *)(this + 0x98) = 0;
    *(undefined8 *)(this + 0x108) = 0x3f800000ffffffff;
    *(undefined8 *)(this + 0x9c) = 0;
    *(undefined8 *)(this + 0x114) = 0x3f80000000000000;
    *(undefined8 *)(this + 0x11c) = 0;
    auVar11 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(this + 0x148) = *(undefined8 *)(this + 0x140);
    *(undefined4 *)(this + 0x110) = 0;
    *(long *)(this + 0xac) = auVar11._8_8_;
    *(long *)(this + 0xa4) = auVar11._0_8_;
    *(undefined8 *)(this + 0xbc) = 0;
    *(undefined8 *)(this + 0xb4) = 0;
    *(undefined8 *)(this + 0xd0) = 0;
    *(undefined8 *)(this + 200) = 0;
    *(undefined8 *)(this + 0xe0) = 0;
    *(undefined8 *)(this + 0xd8) = 0;
    *(undefined8 *)(this + 0xf0) = 0;
    *(undefined8 *)(this + 0xe8) = 0;
    *(undefined8 *)(this + 0x130) = *(undefined8 *)(this + 0x128);
    *(undefined8 *)(this + 0x160) = 0;
    *(undefined8 *)(this + 0x158) = 0;
    *(undefined8 *)(this + 0x170) = 0;
    *(undefined8 *)(this + 0x168) = 0;
    *(undefined8 *)(this + 0x180) = 0;
    *(undefined8 *)(this + 0x178) = 0;
    if (plVar7 == (long *)0x0) {
      return;
    }
    operator_delete(plVar7);
    return;
  }
                    /* try { // try from 00d7ee68 to 00e7ee6f has its CatchHandler @ 00d7f010 */
  plVar9 = (long *)0x0;
                    /* try { // try from 00d7ee70 to 00e7f07b has its CatchHandler @ 00d7e974 */
  lVar4 = *plVar2;
  plVar7 = (long *)0x0;
  plVar1 = (long *)0x0;
  do {
    __dest = plVar7;
    plVar8 = plVar1;
    if (((lVar4 != 0) && (lVar4 != *(long *)(this + 0xe0))) && (lVar4 != *(long *)(this + 0xe8))) {
      plVar5 = plVar7;
      if (plVar7 == plVar1) {
LAB_00d7eee8:
        if (plVar5 != plVar1) goto LAB_00d7ee84;
      }
      else {
        do {
                    /* catch() { ... } // from try @ 00d7ed40 with catch @ 00d7eee4 */
          if ((*plVar5 == lVar4) && ((int)plVar5[1] == (int)plVar2[1])) goto LAB_00d7eee8;
          plVar5 = plVar5 + 2;
        } while (plVar1 != plVar5);
      }
                    /* catch() { ... } // from try @ 00d7ece8 with catch @ 00d7eef4 */
      if (plVar1 == plVar9) {
        __n = (long)plVar1 - (long)plVar7;
        uVar10 = ((long)__n >> 4) + 1;
                    /* catch() { ... } // from try @ 00d7ed58 with catch @ 00d7ef04 */
        if (uVar10 >> 0x3c != 0) {
LAB_00d7f108:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if ((ulong)((long)plVar9 - (long)plVar7 >> 4) < 0x7ffffffffffffff) {
                    /* catch() { ... } // from try @ 00d7ecd0 with catch @ 00d7ef18 */
          uVar6 = (long)plVar9 - (long)plVar7 >> 3;
                    /* catch() { ... } // from try @ 00d7ed90 with catch @ 00d7ef1c */
          if (uVar10 <= uVar6) {
            uVar10 = uVar6;
          }
          if (uVar10 != 0) {
            if (uVar10 >> 0x3c != 0) goto LAB_00d7f108;
            goto LAB_00d7ef38;
          }
          __dest = (long *)0x0;
        }
        else {
          uVar10 = 0xfffffffffffffff;
LAB_00d7ef38:
          __dest = operator_new(uVar10 << 4);
        }
        lVar4 = *plVar2;
        plVar1 = __dest + ((long)__n >> 4) * 2;
        plVar9 = __dest + uVar10 * 2;
        plVar8 = plVar1 + 2;
        plVar1[1] = plVar2[1];
        *plVar1 = lVar4;
        if (0 < (long)__n) {
          memcpy(__dest,plVar7,__n);
        }
        if (plVar7 != (long *)0x0) {
          operator_delete(plVar7);
        }
      }
      else {
        lVar4 = *plVar2;
        plVar8 = plVar1 + 2;
        plVar1[1] = plVar2[1];
        *plVar1 = lVar4;
      }
    }
LAB_00d7ee84:
    plVar2 = plVar2 + 2;
    plVar7 = __dest;
    if (plVar2 == plVar3) goto joined_r0x00d7ef98;
    lVar4 = *plVar2;
    plVar1 = plVar8;
  } while( true );
}

