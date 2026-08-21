
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int,
   cocos2d::network::DownloaderAndroid*>, std::__ndk1::__unordered_map_hasher<int,
   std::__ndk1::__hash_value_type<int, cocos2d::network::DownloaderAndroid*>,
   std::__ndk1::hash<int>, true>, std::__ndk1::__unordered_map_equal<int,
   std::__ndk1::__hash_value_type<int, cocos2d::network::DownloaderAndroid*>,
   std::__ndk1::equal_to<int>, true>, std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,
   cocos2d::network::DownloaderAndroid*> > >::__rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloaderAndroid*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloaderAndroid*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloaderAndroid*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloaderAndroid*>>>
::__rehash(__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloaderAndroid*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloaderAndroid*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloaderAndroid*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloaderAndroid*>>>
           *this,ulong param_1)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  
                    /* try { // try from 009a8358 to 00aa83f3 has its CatchHandler @ 009a810c */
  if (param_1 == 0) {
    pvVar2 = *(void **)this;
    *(undefined8 *)this = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    *(undefined8 *)(this + 8) = 0;
                    /* try { // try from 009a83f4 to 00aa8447 has its CatchHandler @ 009a83f4
                       catch() { ... } // from try @ 009a83f4 with catch @ 009a83f4
                       catch() { ... } // from try @ 009a85b4 with catch @ 009a83f4 */
  }
  else {
                    /* catch() { ... } // from try @ 009a81cc with catch @ 009a836c
                       catch() { ... } // from try @ 009a8314 with catch @ 009a836c */
    if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar2 = operator_new(param_1 << 3);
    pvVar3 = *(void **)this;
                    /* catch() { ... } // from try @ 009a818c with catch @ 009a8384 */
    *(void **)this = pvVar2;
                    /* catch() { ... } // from try @ 009a8180 with catch @ 009a8388 */
    if (pvVar3 != (void *)0x0) {
                    /* catch() { ... } // from try @ 009a8160 with catch @ 009a838c */
      operator_delete(pvVar3);
    }
    uVar4 = 0;
    *(ulong *)(this + 8) = param_1;
    do {
                    /* catch() { ... } // from try @ 009a8198 with catch @ 009a839c
                       catch() { ... } // from try @ 009a8200 with catch @ 009a839c */
      *(undefined8 *)(*(long *)this + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_1 != uVar4);
    plVar5 = *(long **)(this + 0x10);
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar6 = param_1 - 1;
      if ((uVar6 & param_1) == 0) {
        uVar4 = uVar4 & uVar6;
      }
      else if (param_1 <= uVar4) {
        uVar8 = 0;
        if (param_1 != 0) {
          uVar8 = uVar4 / param_1;
        }
        uVar4 = uVar4 - uVar8 * param_1;
      }
      *(__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloaderAndroid*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloaderAndroid*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloaderAndroid*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloaderAndroid*>>>
        **)(*(long *)this + uVar4 * 8) = this + 0x10;
      plVar7 = (long *)*plVar5;
joined_r0x009a8408:
      if (plVar7 != (long *)0x0) {
        do {
          uVar8 = plVar7[1];
          if ((uVar6 & param_1) == 0) {
            uVar8 = uVar8 & uVar6;
                    /* try { // try from 009a8448 to 00aa845f has its CatchHandler @ 009a8630 */
            if (uVar8 != uVar4) goto LAB_009a844c;
LAB_009a8410:
            plVar10 = (long *)*plVar7;
            plVar5 = plVar7;
          }
          else {
            if (param_1 <= uVar8) {
              uVar1 = 0;
              if (param_1 != 0) {
                uVar1 = uVar8 / param_1;
              }
              uVar8 = uVar8 - uVar1 * param_1;
            }
            if (uVar8 == uVar4) goto LAB_009a8410;
LAB_009a844c:
            plVar10 = plVar7;
            if (*(long *)(*(long *)this + uVar8 * 8) == 0) goto LAB_009a84a8;
            do {
              plVar9 = plVar10;
              plVar10 = (long *)*plVar9;
              if (plVar10 == (long *)0x0) break;
                    /* try { // try from 009a8468 to 00aa8473 has its CatchHandler @ 009a862c */
                    /* try { // try from 009a8474 to 00aa847f has its CatchHandler @ 009a8628 */
            } while ((int)plVar7[2] == (int)plVar10[2]);
            *plVar5 = (long)plVar10;
                    /* try { // try from 009a8480 to 00aa85b3 has its CatchHandler @ 009a8640 */
            *plVar9 = **(long **)(*(long *)this + uVar8 * 8);
            **(undefined8 **)(*(long *)this + uVar8 * 8) = plVar7;
            plVar10 = (long *)*plVar5;
          }
          plVar7 = plVar10;
          if (plVar7 == (long *)0x0) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
LAB_009a84a8:
  *(long **)(*(long *)this + uVar8 * 8) = plVar5;
  plVar5 = plVar7;
  plVar7 = (long *)*plVar7;
  uVar4 = uVar8;
  goto joined_r0x009a8408;
}

