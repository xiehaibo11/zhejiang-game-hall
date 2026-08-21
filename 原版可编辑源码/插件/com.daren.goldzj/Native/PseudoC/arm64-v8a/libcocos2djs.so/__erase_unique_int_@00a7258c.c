
/* unsigned long std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int,
   cocos2d::IAudioPlayer*>, std::__ndk1::__unordered_map_hasher<int,
   std::__ndk1::__hash_value_type<int, cocos2d::IAudioPlayer*>, std::__ndk1::hash<int>, true>,
   std::__ndk1::__unordered_map_equal<int, std::__ndk1::__hash_value_type<int,
   cocos2d::IAudioPlayer*>, std::__ndk1::equal_to<int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<int, cocos2d::IAudioPlayer*> >
   >::__erase_unique<int>(int const&) */

ulong __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>>>
::__erase_unique<int>
          (__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>>>
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
  
                    /* try { // try from 00a72598 to 00b725af has its CatchHandler @ 00a72768 */
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar4 = *(ulong *)(this + 8);
  if (uVar4 != 0) {
    uVar5 = (ulong)*param_1;
    uVar6 = uVar4 - 1;
                    /* try { // try from 00a725b8 to 00b725c3 has its CatchHandler @ 00a72748 */
    if ((uVar6 & uVar4) == 0) {
      uVar7 = uVar6 & uVar5;
    }
    else {
                    /* try { // try from 00a725c4 to 00b725cf has its CatchHandler @ 00a72744 */
      uVar7 = uVar5;
      if (uVar4 <= uVar5) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar5 / uVar4;
        }
                    /* try { // try from 00a725d0 to 00b7260f has its CatchHandler @ 00a72778 */
        uVar7 = uVar5 - uVar7 * uVar4;
      }
    }
    plVar8 = *(long **)(*(long *)this + uVar7 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar9 = plVar8[1];
        if (uVar9 == uVar5) {
          if (*(int *)(plVar8 + 2) == *param_1) {
            remove(local_40);
            pvVar3 = local_40[0];
            local_40[0] = (void *)0x0;
            if (pvVar3 != (void *)0x0) {
              operator_delete(pvVar3);
            }
            uVar4 = 1;
            goto LAB_00a72644;
          }
        }
        else {
          if ((uVar6 & uVar4) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else {
                    /* try { // try from 00a72610 to 00b72623 has its CatchHandler @ 00a7274c */
            if (uVar4 <= uVar9) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar9 / uVar4;
              }
              if (uVar9 - uVar1 * uVar4 == uVar7) goto LAB_00a72628;
              break;
            }
          }
          if (uVar9 != uVar7) break;
        }
LAB_00a72628:
      }
    }
  }
                    /* try { // try from 00a72640 to 00b7267b has its CatchHandler @ 00a72778 */
  uVar4 = 0;
LAB_00a72644:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

