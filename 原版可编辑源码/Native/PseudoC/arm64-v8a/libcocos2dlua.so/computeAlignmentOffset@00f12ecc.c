
/* cocos2d::Label::computeAlignmentOffset() */

void __thiscall cocos2d::Label::computeAlignmentOffset(Label *this)

{
  vector<float,std::__ndk1::allocator<float>> *this_00;
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this_00 = (vector<float,std::__ndk1::allocator<float>> *)(this + 0x478);
  iVar1 = *(int *)(this + 0x450);
  pfVar4 = *(float **)(this + 0x478);
  *(float **)(this + 0x480) = pfVar4;
  if (iVar1 == 2) {
    pfVar6 = *(float **)(this + 0x460);
    pfVar5 = *(float **)(this + 0x468);
    if (pfVar6 != pfVar5) {
      while( true ) {
        local_4c = *(float *)(this + 0x80) - *pfVar6;
        if (pfVar4 < *(float **)(this + 0x488)) {
          *pfVar4 = local_4c;
          *(float **)(this + 0x480) = pfVar4 + 1;
        }
        else {
          std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__push_back_slow_path<float>
                    (this_00,&local_4c);
        }
        if (pfVar5 + -1 == pfVar6) break;
        pfVar4 = *(float **)(this + 0x480);
        pfVar6 = pfVar6 + 1;
      }
    }
  }
  else if (iVar1 == 1) {
    pfVar6 = *(float **)(this + 0x460);
    pfVar5 = *(float **)(this + 0x468);
    if (pfVar6 != pfVar5) {
      while( true ) {
        local_4c = (*(float *)(this + 0x80) - *pfVar6) * 0.5;
        if (pfVar4 < *(float **)(this + 0x488)) {
          *pfVar4 = local_4c;
          *(float **)(this + 0x480) = pfVar4 + 1;
        }
        else {
          std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__push_back_slow_path<float>
                    (this_00,&local_4c);
        }
        if (pfVar5 + -1 == pfVar6) break;
        pfVar4 = *(float **)(this + 0x480);
        pfVar6 = pfVar6 + 1;
      }
    }
  }
  else if (iVar1 == 0) {
    local_4c = 0.0;
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::assign
              (this_00,(long)*(int *)(this + 0x340),&local_4c);
  }
  iVar1 = *(int *)(this + 0x454);
                    /* try { // try from 00f1300c to 01013057 has its CatchHandler @ 00f13068 */
  if (iVar1 == 2) {
    uVar3 = *(undefined4 *)(this + 0x458);
  }
  else {
    if (iVar1 == 1) {
      *(float *)(this + 0x490) = (*(float *)(this + 0x84) + *(float *)(this + 0x458)) * 0.5;
      goto LAB_00f13044;
    }
    if (iVar1 != 0) goto LAB_00f13044;
    uVar3 = *(undefined4 *)(this + 0x84);
  }
  *(undefined4 *)(this + 0x490) = uVar3;
LAB_00f13044:
  if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f1300c with catch @ 00f13068
                        */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

