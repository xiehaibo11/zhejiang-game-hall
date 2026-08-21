
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int, cocos2d::WebViewImpl*>,
   std::__ndk1::__unordered_map_hasher<int, std::__ndk1::__hash_value_type<int,
   cocos2d::WebViewImpl*>, std::__ndk1::hash<int>, true>, std::__ndk1::__unordered_map_equal<int,
   std::__ndk1::__hash_value_type<int, cocos2d::WebViewImpl*>, std::__ndk1::equal_to<int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<int, cocos2d::WebViewImpl*> >
   >::__rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>>>
::__rehash(__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>>>
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
  
  if (param_1 == 0) {
    pvVar2 = *(void **)this;
    *(undefined8 *)this = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    *(undefined8 *)(this + 8) = 0;
  }
  else {
                    /* catch() { ... } // from try @ 009de44c with catch @ 009de490 */
    if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
                    /* catch() { ... } // from try @ 009de430 with catch @ 009de494 */
                    /* catch() { ... } // from try @ 009de428 with catch @ 009de498 */
    pvVar2 = operator_new(param_1 << 3);
                    /* catch() { ... } // from try @ 009de404 with catch @ 009de49c */
    pvVar3 = *(void **)this;
                    /* catch() { ... } // from try @ 009de3fc with catch @ 009de4a0 */
    *(void **)this = pvVar2;
                    /* catch() { ... } // from try @ 009de3d8 with catch @ 009de4a4 */
    if (pvVar3 != (void *)0x0) {
                    /* catch() { ... } // from try @ 009de3d0 with catch @ 009de4a8 */
                    /* catch() { ... } // from try @ 009de3ac with catch @ 009de4ac */
      operator_delete(pvVar3);
    }
    uVar4 = 0;
    *(ulong *)(this + 8) = param_1;
    do {
                    /* catch() { ... } // from try @ 009de3a4 with catch @ 009de4bc */
      *(undefined8 *)(*(long *)this + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_1 != uVar4);
                    /* try { // try from 009de4d0 to 00ade57b has its CatchHandler @ 009de4d0
                       catch() { ... } // from try @ 009de4d0 with catch @ 009de4d0
                       catch() { ... } // from try @ 009de59c with catch @ 009de4d0
                       catch() { ... } // from try @ 009de61c with catch @ 009de4d0
                       catch() { ... } // from try @ 009de680 with catch @ 009de4d0
                       catch() { ... } // from try @ 009de6b0 with catch @ 009de4d0
                       catch() { ... } // from try @ 009de6dc with catch @ 009de4d0
                       catch() { ... } // from try @ 009de704 with catch @ 009de4d0
                       catch() { ... } // from try @ 009de740 with catch @ 009de4d0 */
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
      *(__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>>>
        **)(*(long *)this + uVar4 * 8) = this + 0x10;
      plVar7 = (long *)*plVar5;
joined_r0x009de524:
      if (plVar7 != (long *)0x0) {
        do {
          uVar8 = plVar7[1];
          if ((uVar6 & param_1) == 0) {
            uVar8 = uVar8 & uVar6;
            if (uVar8 != uVar4) goto LAB_009de568;
LAB_009de52c:
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
            if (uVar8 == uVar4) goto LAB_009de52c;
LAB_009de568:
            plVar10 = plVar7;
            if (*(long *)(*(long *)this + uVar8 * 8) == 0) goto LAB_009de5c4;
            do {
              plVar9 = plVar10;
                    /* try { // try from 009de57c to 00ade59b has its CatchHandler @ 009de7dc */
              plVar10 = (long *)*plVar9;
              if (plVar10 == (long *)0x0) break;
            } while ((int)plVar7[2] == (int)plVar10[2]);
            *plVar5 = (long)plVar10;
                    /* try { // try from 009de59c to 00ade5b3 has its CatchHandler @ 009de4d0 */
            *plVar9 = **(long **)(*(long *)this + uVar8 * 8);
                    /* try { // try from 009de5b4 to 00ade5c7 has its CatchHandler @ 009de7cc */
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
                    /* try { // try from 009de5dc to 00ade5f7 has its CatchHandler @ 009de7f8 */
  return;
LAB_009de5c4:
  *(long **)(*(long *)this + uVar8 * 8) = plVar5;
                    /* try { // try from 009de5cc to 00ade5d3 has its CatchHandler @ 009de7f0 */
  plVar5 = plVar7;
  plVar7 = (long *)*plVar7;
  uVar4 = uVar8;
  goto joined_r0x009de524;
}

