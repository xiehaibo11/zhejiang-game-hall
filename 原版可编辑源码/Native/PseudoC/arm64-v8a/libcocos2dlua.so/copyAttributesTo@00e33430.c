
/* cocos2d::PUEmitter::copyAttributesTo(cocos2d::PUEmitter*) */

void __thiscall cocos2d::PUEmitter::copyAttributesTo(PUEmitter *this,PUEmitter *param_1)

{
  ulong uVar1;
  PUEmitter *pPVar2;
  PUEmitter PVar3;
  PUDynamicAttribute *pPVar4;
  long *plVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  
  if (param_1 != this) {
    uVar1 = *(ulong *)(this + 0x98);
    pPVar2 = *(PUEmitter **)(this + 0xa0);
    if (((byte)this[0x90] & 1) == 0) {
      pPVar2 = this + 0x91;
      uVar1 = (ulong)((byte)this[0x90] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_1 + 0x90),(char *)pPVar2,uVar1);
                    /* try { // try from 00e3347c to 00f33487 has its CatchHandler @ 00e33648 */
                    /* try { // try from 00e33488 to 00f334db has its CatchHandler @ 00e32fe0 */
    uVar1 = (ulong)((byte)this[0x78] >> 1);
    pPVar2 = this + 0x79;
    if (((byte)this[0x78] & 1) != 0) {
      uVar1 = *(ulong *)(this + 0x80);
      pPVar2 = *(PUEmitter **)(this + 0x88);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_1 + 0x78),(char *)pPVar2,uVar1);
    uVar1 = (ulong)((byte)this[0x108] >> 1);
    pPVar2 = this + 0x109;
    if (((byte)this[0x108] & 1) != 0) {
      uVar1 = *(ulong *)(this + 0x110);
      pPVar2 = *(PUEmitter **)(this + 0x118);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_1 + 0x108),(char *)pPVar2,uVar1);
  }
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(this + 0x1e8);
  uVar6 = *(undefined8 *)(this + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(this + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar6;
                    /* try { // try from 00e334dc to 00f334df has its CatchHandler @ 00e33610 */
  param_1[0x34] = this[0x34];
                    /* try { // try from 00e334e0 to 00f3353b has its CatchHandler @ 00e32fe0 */
  param_1[0x1e5] = this[0x1e5];
  param_1[0x1e6] = this[0x1e6];
  uVar6 = *(undefined8 *)(this + 0xa8);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(this + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = uVar6;
  uVar6 = *(undefined8 *)(this + 0xb4);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(this + 0xbc);
  *(undefined8 *)(param_1 + 0xb4) = uVar6;
  uVar6 = *(undefined8 *)(this + 0xc0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(this + 200);
  *(undefined8 *)(param_1 + 0xc0) = uVar6;
  uVar6 = *(undefined8 *)(this + 0xd0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(this + 0xd8);
  *(undefined8 *)(param_1 + 0xd0) = uVar6;
  uVar6 = *(undefined8 *)(this + 0xe0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(this + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = uVar6;
  param_1[0xf0] = this[0xf0];
  param_1[0x1f8] = this[0x1f8];
                    /* try { // try from 00e3353c to 00f33547 has its CatchHandler @ 00e33644 */
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(this + 0x28);
  param_1[0x1a5] = this[0x1a5];
                    /* try { // try from 00e33548 to 00f3359b has its CatchHandler @ 00e32fe0 */
  PVar3 = this[0x1a6];
  *(undefined2 *)(param_1 + 0x1a8) = 0;
  param_1[0x1a6] = PVar3;
  param_1[0x1a7] = PVar3;
  param_1[0x19c] = this[0x19c];
  param_1[0x1a4] = this[0x1a4];
  param_1[0x150] = this[0x150];
  param_1[0x160] = this[0x160];
  param_1[0x170] = this[0x170];
  param_1[0x180] = this[0x180];
  uVar6 = *(undefined8 *)(this + 0x68);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(this + 0x70);
  *(undefined8 *)(param_1 + 0x68) = uVar6;
                    /* try { // try from 00e3359c to 00f3359f has its CatchHandler @ 00e3360c */
  uVar6 = *(undefined8 *)(this + 0x1ac);
                    /* try { // try from 00e335a0 to 00f33683 has its CatchHandler @ 00e32fe0 */
  *(undefined8 *)(param_1 + 0x1b4) = *(undefined8 *)(this + 0x1b4);
  *(undefined8 *)(param_1 + 0x1ac) = uVar6;
  uVar6 = *(undefined8 *)(this + 0x1bc);
  *(undefined8 *)(param_1 + 0x1c4) = *(undefined8 *)(this + 0x1c4);
  *(undefined8 *)(param_1 + 0x1bc) = uVar6;
  uVar6 = *(undefined8 *)(this + 0x1cc);
  *(undefined8 *)(param_1 + 0x1d4) = *(undefined8 *)(this + 0x1d4);
  *(undefined8 *)(param_1 + 0x1cc) = uVar6;
  param_1[0x1dc] = this[0x1dc];
  *(undefined2 *)(param_1 + 0x1de) = *(undefined2 *)(this + 0x1de);
  *(undefined2 *)(param_1 + 0x1e0) = *(undefined2 *)(this + 0x1e0);
  *(undefined2 *)(param_1 + 0x1e2) = *(undefined2 *)(this + 0x1e2);
  param_1[0x1e4] = this[0x1e4];
  param_1[0x1dd] = this[0x1dd];
  uVar6 = (**(code **)(**(long **)(this + 0x100) + 0x20))();
  plVar5 = *(long **)(param_1 + 0x100);
                    /* catch() { ... } // from try @ 00e3359c with catch @ 00e3360c */
                    /* catch() { ... } // from try @ 00e334dc with catch @ 00e33610 */
  if (plVar5 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00e3341c with catch @ 00e33614 */
                    /* catch() { ... } // from try @ 00e3336c with catch @ 00e33618 */
                    /* catch() { ... } // from try @ 00e332b8 with catch @ 00e3361c */
                    /* catch() { ... } // from try @ 00e33200 with catch @ 00e33620 */
    (**(code **)(*plVar5 + 8))(plVar5);
  }
                    /* catch() { ... } // from try @ 00e33148 with catch @ 00e33624 */
  *(undefined8 *)(param_1 + 0x100) = uVar6;
                    /* catch() { ... } // from try @ 00e33094 with catch @ 00e33628 */
  uVar6 = (**(code **)(**(long **)(this + 0x120) + 0x20))();
  plVar5 = *(long **)(param_1 + 0x120);
  if (plVar5 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00e3353c with catch @ 00e33644 */
                    /* catch() { ... } // from try @ 00e3347c with catch @ 00e33648 */
                    /* catch() { ... } // from try @ 00e333bc with catch @ 00e3364c */
                    /* catch() { ... } // from try @ 00e33304 with catch @ 00e33650 */
    (**(code **)(*plVar5 + 8))(plVar5);
  }
                    /* catch() { ... } // from try @ 00e33250 with catch @ 00e33654 */
  *(undefined8 *)(param_1 + 0x120) = uVar6;
                    /* catch() { ... } // from try @ 00e33198 with catch @ 00e33658 */
                    /* catch() { ... } // from try @ 00e330e0 with catch @ 00e3365c */
                    /* catch() { ... } // from try @ 00e33024 with catch @ 00e33660 */
  uVar6 = (**(code **)(**(long **)(this + 0x130) + 0x20))();
  plVar5 = *(long **)(param_1 + 0x130);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  *(undefined8 *)(param_1 + 0x130) = uVar6;
  if (this[0x19c] != (PUEmitter)0x0) {
    pPVar4 = (PUDynamicAttribute *)(**(code **)(**(long **)(this + 0x138) + 0x20))();
    plVar5 = *(long **)(param_1 + 0x138);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    *(PUDynamicAttribute **)(param_1 + 0x138) = pPVar4;
    param_1[0x19c] = (PUEmitter)0x1;
    if (param_1[0x34] == (PUEmitter)0x0) {
      if (param_1[0x1a4] != (PUEmitter)0x0) {
        uVar8 = PUDynamicAttributeHelper::calculate
                          ((PUDynamicAttributeHelper *)(param_1 + 0x194),
                           *(PUDynamicAttribute **)(param_1 + 0x140),
                           *(float *)(*(long *)(param_1 + 0x28) + 0x440),0.0);
        *(undefined4 *)(param_1 + 0x1a0) = uVar8;
      }
    }
    else {
      fVar7 = (float)PUDynamicAttributeHelper::calculate
                               ((PUDynamicAttributeHelper *)(param_1 + 0x194),pPVar4,
                                *(float *)(*(long *)(param_1 + 0x28) + 0x440),0.0);
      *(float *)(param_1 + 0x198) = fVar7;
      if (0.0 < fVar7) {
        param_1[0x34] = (PUEmitter)0x1;
        *(undefined4 *)(param_1 + 0x1a0) = 0;
        PVar3 = this[0x1a4];
        goto joined_r0x00e33734;
      }
    }
  }
  PVar3 = this[0x1a4];
joined_r0x00e33734:
  if (PVar3 != (PUEmitter)0x0) {
    pPVar4 = (PUDynamicAttribute *)(**(code **)(**(long **)(this + 0x140) + 0x20))();
    plVar5 = *(long **)(param_1 + 0x140);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    *(PUDynamicAttribute **)(param_1 + 0x140) = pPVar4;
    param_1[0x1a4] = (PUEmitter)0x1;
    if (param_1[0x34] == (PUEmitter)0x0) {
      uVar8 = PUDynamicAttributeHelper::calculate
                        ((PUDynamicAttributeHelper *)(param_1 + 0x194),pPVar4,
                         *(float *)(*(long *)(param_1 + 0x28) + 0x440),0.0);
      *(undefined4 *)(param_1 + 0x1a0) = uVar8;
    }
    else {
      if (param_1[0x19c] == (PUEmitter)0x0) {
        fVar7 = *(float *)(param_1 + 0x198);
      }
      else {
        fVar7 = (float)PUDynamicAttributeHelper::calculate
                                 ((PUDynamicAttributeHelper *)(param_1 + 0x194),
                                  *(PUDynamicAttribute **)(param_1 + 0x138),
                                  *(float *)(*(long *)(param_1 + 0x28) + 0x440),0.0);
        *(float *)(param_1 + 0x198) = fVar7;
      }
      if (0.0 < fVar7) {
        param_1[0x34] = (PUEmitter)0x1;
        *(undefined4 *)(param_1 + 0x1a0) = 0;
      }
    }
  }
  uVar6 = (**(code **)(**(long **)(this + 0x128) + 0x20))();
  plVar5 = *(long **)(param_1 + 0x128);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  *(undefined8 *)(param_1 + 0x128) = uVar6;
  uVar6 = (**(code **)(**(long **)(this + 0xf8) + 0x20))();
  plVar5 = *(long **)(param_1 + 0xf8);
  if (plVar5 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00e338a0 with catch @ 00e33838
                       catch() { ... } // from try @ 00e3397c with catch @ 00e33838 */
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  *(undefined8 *)(param_1 + 0xf8) = uVar6;
  if (this[0x150] != (PUEmitter)0x0) {
    uVar6 = (**(code **)(**(long **)(this + 0x148) + 0x20))();
    plVar5 = *(long **)(param_1 + 0x148);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    *(undefined8 *)(param_1 + 0x148) = uVar6;
    param_1[0x150] = (PUEmitter)0x1;
  }
  if (this[0x160] != (PUEmitter)0x0) {
    uVar6 = (**(code **)(**(long **)(this + 0x158) + 0x20))();
                    /* try { // try from 00e33898 to 00f3389f has its CatchHandler @ 00e339c0 */
    plVar5 = *(long **)(param_1 + 0x158);
                    /* try { // try from 00e338a0 to 00f3395b has its CatchHandler @ 00e33838 */
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    *(undefined8 *)(param_1 + 0x158) = uVar6;
    param_1[0x160] = (PUEmitter)0x1;
  }
  if (this[0x170] != (PUEmitter)0x0) {
    uVar6 = (**(code **)(**(long **)(this + 0x168) + 0x20))();
    plVar5 = *(long **)(param_1 + 0x168);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    *(undefined8 *)(param_1 + 0x168) = uVar6;
    param_1[0x170] = (PUEmitter)0x1;
  }
  if (this[0x180] != (PUEmitter)0x0) {
    uVar6 = (**(code **)(**(long **)(this + 0x178) + 0x20))();
    plVar5 = *(long **)(param_1 + 0x178);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    *(undefined8 *)(param_1 + 0x178) = uVar6;
    param_1[0x180] = (PUEmitter)0x1;
  }
  return;
}

