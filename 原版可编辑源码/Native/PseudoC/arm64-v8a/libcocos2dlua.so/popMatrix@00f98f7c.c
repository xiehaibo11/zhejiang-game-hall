
/* cocos2d::Director::popMatrix(cocos2d::MATRIX_STACK_TYPE) */

void __thiscall cocos2d::Director::popMatrix(Director *this,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
                    /* catch() { ... } // from try @ 00f98e8c with catch @ 00f98f90 */
  if (param_2 == 2) {
    uVar4 = (*(long *)(this + 0x98) + *(long *)(this + 0x90)) - 1;
    Mat4::~Mat4((Mat4 *)(*(long *)(*(long *)(this + 0x78) + (uVar4 >> 3 & 0x1ffffffffffffff8)) +
                        (uVar4 & 0x3f) * 0x40));
    lVar2 = *(long *)(this + 0x98);
    lVar3 = *(long *)(this + 0x80) - *(long *)(this + 0x78);
    lVar1 = 0;
    if (lVar3 != 0) {
      lVar1 = lVar3 * 8 + -1;
    }
    *(long *)(this + 0x98) = lVar2 + -1;
    if (0x7f < (lVar1 - (lVar2 + *(long *)(this + 0x90))) + 1U) {
      operator_delete(*(void **)(*(long *)(this + 0x80) + -8));
      *(long *)(this + 0x80) = *(long *)(this + 0x80) + -8;
    }
  }
  else if (param_2 == 1) {
    lVar5 = *(long *)(this + 0x58);
    uVar4 = (*(long *)(lVar5 + 0x28) + *(long *)(lVar5 + 0x20)) - 1;
    Mat4::~Mat4((Mat4 *)(*(long *)(*(long *)(lVar5 + 8) + (uVar4 >> 3 & 0x1ffffffffffffff8)) +
                        (uVar4 & 0x3f) * 0x40));
    lVar2 = *(long *)(lVar5 + 0x28);
    lVar3 = *(long *)(lVar5 + 0x10) - *(long *)(lVar5 + 8);
    lVar1 = 0;
    if (lVar3 != 0) {
      lVar1 = lVar3 * 8 + -1;
    }
    *(long *)(lVar5 + 0x28) = lVar2 + -1;
    if (0x7f < (lVar1 - (lVar2 + *(long *)(lVar5 + 0x20))) + 1U) {
      operator_delete(*(void **)(*(long *)(lVar5 + 0x10) + -8));
      *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + -8;
    }
  }
  else if (param_2 == 0) {
    uVar4 = (*(long *)(this + 0x50) + *(long *)(this + 0x48)) - 1;
    Mat4::~Mat4((Mat4 *)(*(long *)(*(long *)(this + 0x30) + (uVar4 >> 3 & 0x1ffffffffffffff8)) +
                        (uVar4 & 0x3f) * 0x40));
    lVar2 = *(long *)(this + 0x50);
    lVar3 = *(long *)(this + 0x38) - *(long *)(this + 0x30);
    lVar1 = 0;
    if (lVar3 != 0) {
      lVar1 = lVar3 * 8 + -1;
    }
    *(long *)(this + 0x50) = lVar2 + -1;
    if (0x7f < (lVar1 - (lVar2 + *(long *)(this + 0x48))) + 1U) {
      operator_delete(*(void **)(*(long *)(this + 0x38) + -8));
      *(long *)(this + 0x38) = *(long *)(this + 0x38) + -8;
    }
  }
  return;
}

