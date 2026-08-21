
/* unsigned long std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int,
   cocos2d::VideoPlayer*>, std::__ndk1::__unordered_map_hasher<int,
   std::__ndk1::__hash_value_type<int, cocos2d::VideoPlayer*>, std::__ndk1::hash<int>, true>,
   std::__ndk1::__unordered_map_equal<int, std::__ndk1::__hash_value_type<int,
   cocos2d::VideoPlayer*>, std::__ndk1::equal_to<int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<int, cocos2d::VideoPlayer*> >
   >::__erase_unique<int>(int const&) */

ulong __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::VideoPlayer*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::VideoPlayer*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::VideoPlayer*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::VideoPlayer*>>>
::__erase_unique<int>
          (__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::VideoPlayer*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::VideoPlayer*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::VideoPlayer*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::VideoPlayer*>>>
           *this,int *param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  void *local_40 [3];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar4 = *(ulong *)(this + 8);
  if (uVar4 != 0) {
    uVar5 = (ulong)*param_1;
    uVar6 = uVar4 - 1;
    if ((uVar6 & uVar4) == 0) {
      uVar7 = uVar6 & uVar5;
    }
    else {
      uVar7 = uVar5;
      if (uVar4 <= uVar5) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar5 / uVar4;
        }
        uVar7 = uVar5 - uVar7 * uVar4;
                    /* try { // try from 009d9544 to 00ad9553 has its CatchHandler @ 009d9e3c */
      }
    }
    plVar8 = *(long **)(*(long *)this + uVar7 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar9 = plVar8[1];
                    /* try { // try from 009d9568 to 00ad956f has its CatchHandler @ 009d9e38 */
        if (uVar9 == uVar5) {
                    /* try { // try from 009d9574 to 00ad957b has its CatchHandler @ 009d9e34 */
          if (*(int *)(plVar8 + 2) == *param_1) {
            remove(local_40);
            pvVar3 = local_40[0];
            local_40[0] = (void *)0x0;
            if (pvVar3 != (void *)0x0) {
              operator_delete(pvVar3);
            }
            uVar4 = 1;
            goto LAB_009d95b4;
          }
        }
        else {
          if ((uVar6 & uVar4) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uVar4 <= uVar9) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar9 / uVar4;
            }
            if (uVar9 - uVar1 * uVar4 == uVar7) goto LAB_009d9598;
            break;
          }
          if (uVar9 != uVar7) break;
        }
LAB_009d9598:
                    /* try { // try from 009d959c to 00ad965f has its CatchHandler @ 009d9e4c */
      }
    }
  }
  uVar4 = 0;
LAB_009d95b4:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

