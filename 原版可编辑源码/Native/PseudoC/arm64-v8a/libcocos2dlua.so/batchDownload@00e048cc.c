
/* cocos2d::extension::AssetsManagerEx::batchDownload() */

void __thiscall cocos2d::extension::AssetsManagerEx::batchDownload(AssetsManagerEx *this)

{
  byte *pbVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  long *plVar5;
  
                    /* catch() { ... } // from try @ 00e0420c with catch @ 00e048d4 */
  pbVar1 = *(byte **)(this + 0x170);
  pbVar2 = *(byte **)(this + 0x178);
                    /* catch() { ... } // from try @ 00e041f4 with catch @ 00e048e4 */
  if (pbVar2 != pbVar1) {
    bVar3 = pbVar2[-0x18];
    pbVar4 = pbVar2 + -0x18;
    while( true ) {
                    /* catch() { ... } // from try @ 00e04334 with catch @ 00e048f4
                       catch() { ... } // from try @ 00e04378 with catch @ 00e048f4 */
      if ((bVar3 & 1) != 0) {
        operator_delete(*(void **)(pbVar2 + -8));
      }
                    /* catch() { ... } // from try @ 00e04288 with catch @ 00e048fc
                       catch() { ... } // from try @ 00e04304 with catch @ 00e048fc */
      if (pbVar1 == pbVar4) break;
      bVar3 = pbVar4[-0x18];
      pbVar2 = pbVar4;
      pbVar4 = pbVar4 + -0x18;
    }
  }
  plVar5 = *(long **)(this + 0x130);
  *(byte **)(this + 0x178) = pbVar1;
  if (plVar5 != (long *)0x0) {
    do {
      while( true ) {
        if (0.0 < *(float *)(plVar5 + 0xe)) {
          *(double *)(this + 0x1a0) = *(double *)(this + 0x1a0) + (double)*(float *)(plVar5 + 0xe);
          *(int *)(this + 0x19c) = *(int *)(this + 0x19c) + 1;
        }
        this_00 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    **)(this + 0x178);
        if (this_00 ==
            *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (this + 0x180)) break;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(this_00,(basic_string *)(plVar5 + 2));
        *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
         (this + 0x178) = this_00 + 0x18;
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_00e0498c;
      }
      std::__ndk1::
      vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::
      __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                  *)(this + 0x170),(basic_string *)(plVar5 + 2));
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
  }
LAB_00e0498c:
  if (*(int *)(this + 0x19c) == *(int *)(this + 0x1d0)) {
    *(undefined4 *)(this + 0x198) = 1;
  }
  queueDowload(this);
  return;
}

