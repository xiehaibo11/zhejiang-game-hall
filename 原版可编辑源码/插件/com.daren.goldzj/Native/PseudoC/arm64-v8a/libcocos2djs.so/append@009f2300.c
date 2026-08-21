
/* cocos2d::FontAtlasFrame::append(int, int, std::__ndk1::vector<unsigned char,
   std::__ndk1::allocator<unsigned char> >&, cocos2d::Rect&) */

void __thiscall
cocos2d::FontAtlasFrame::append
          (FontAtlasFrame *this,int param_1,int param_2,vector *param_3,Rect *param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  void *__dest;
  size_t __n;
  void *__src;
  int iVar6;
  Rect aRStack_88 [16];
  long local_78;
  
                    /* try { // try from 009f2324 to 00af237b has its CatchHandler @ 009f2324
                       catch() { ... } // from try @ 009f2324 with catch @ 009f2324
                       catch() { ... } // from try @ 009f2434 with catch @ 009f2324 */
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  iVar1 = param_1 + 2;
  if ((*(int *)(this + 0x34) - *(int *)(this + 0x40) < iVar1) ||
     (*(int *)(this + 0x38) - *(int *)(this + 0x3c) < param_2 + 2)) {
    if (iVar1 <= *(int *)(this + 0x34)) {
                    /* try { // try from 009f237c to 00af2393 has its CatchHandler @ 009f24b4 */
      if (param_2 + 2 <= (*(int *)(this + 0x38) - *(int *)(this + 0x3c)) - *(int *)(this + 0x44)) {
                    /* try { // try from 009f239c to 00af23a7 has its CatchHandler @ 009f24b0 */
                    /* try { // try from 009f23a8 to 00af23b3 has its CatchHandler @ 009f24ac */
        *(int *)(this + 0x3c) = *(int *)(this + 0x3c) + *(int *)(this + 0x44) + 2;
        *(undefined8 *)(this + 0x40) = 2;
        goto LAB_009f23b0;
      }
    }
    uVar4 = 1;
  }
  else {
LAB_009f23b0:
                    /* try { // try from 009f23b4 to 00af2433 has its CatchHandler @ 009f24c4 */
    iVar3 = PixelModeSize(*(undefined4 *)(this + 0x48));
    if (0 < param_2) {
      __src = *(void **)param_3;
      __dest = (void *)(*(long *)(this + 8) +
                       ((long)*(int *)(this + 0x40) +
                       (long)*(int *)(this + 0x34) * (long)*(int *)(this + 0x3c)) * (long)iVar3);
      __n = (long)iVar3 * (long)param_1;
      memcpy(__dest,__src,__n);
      if (param_2 != 1) {
        lVar5 = (ulong)(uint)param_2 - 1;
        iVar6 = iVar3;
        do {
          __src = (void *)((long)__src + __n);
          memcpy((void *)((long)__dest + (long)(iVar6 * *(int *)(this + 0x34))),__src,__n);
          lVar5 = lVar5 + -1;
                    /* try { // try from 009f2434 to 00af251b has its CatchHandler @ 009f2324 */
          iVar6 = iVar6 + iVar3;
        } while (lVar5 != 0);
      }
    }
    if (*(int *)(this + 0x20) == 0) {
      *(undefined4 *)(this + 0x20) = 1;
      Rect::Rect(aRStack_88,(float)*(int *)(this + 0x40),(float)*(int *)(this + 0x3c),(float)param_1
                 ,(float)param_2);
                    /* catch() { ... } // from try @ 009f23a8 with catch @ 009f24ac */
                    /* catch() { ... } // from try @ 009f239c with catch @ 009f24b0 */
      Rect::operator=((Rect *)(this + 0x24),aRStack_88);
    }
    else {
      Rect::Rect(aRStack_88,(float)*(int *)(this + 0x40),(float)*(int *)(this + 0x3c),(float)param_1
                 ,(float)param_2);
      Rect::merge((Rect *)(this + 0x24),aRStack_88);
    }
                    /* catch() { ... } // from try @ 009f237c with catch @ 009f24b4 */
    iVar3 = *(int *)(this + 0x40);
    iVar6 = *(int *)(this + 0x3c);
    uVar4 = 0;
                    /* catch() { ... } // from try @ 009f23b4 with catch @ 009f24c4 */
    *(float *)(param_4 + 8) = (float)param_1;
    *(float *)(param_4 + 0xc) = (float)param_2;
    *(float *)param_4 = (float)iVar3;
    *(float *)(param_4 + 4) = (float)iVar6;
    if (param_2 <= *(int *)(this + 0x44)) {
      param_2 = *(int *)(this + 0x44);
    }
    *(int *)(this + 0x40) = iVar3 + iVar1;
    *(int *)(this + 0x44) = param_2;
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

