
void Java_org_cocos2dx_lib_Cocos2dxVideoHelper_nativeExecuteVideoCallback
               (undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  int local_3c [3];
  int *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_3c[0] = param_3;
  if (DAT_01d38730 != 0) {
    uVar4 = DAT_01d38730 - 1;
                    /* catch() { ... } // from try @ 009d69f0 with catch @ 009d6b24 */
    uVar5 = (ulong)param_3;
                    /* catch() { ... } // from try @ 009d6a04 with catch @ 009d6b2c */
    if ((uVar4 & DAT_01d38730) == 0) {
                    /* try { // try from 009d6b48 to 00ad6bf3 has its CatchHandler @ 009d6b48
                       catch() { ... } // from try @ 009d6b48 with catch @ 009d6b48
                       catch() { ... } // from try @ 009d6cd0 with catch @ 009d6b48 */
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar5;
      if (DAT_01d38730 <= uVar5) {
        uVar6 = 0;
        if (DAT_01d38730 != 0) {
          uVar6 = uVar5 / DAT_01d38730;
        }
        uVar6 = uVar5 - uVar6 * DAT_01d38730;
      }
    }
    plVar7 = *(long **)(DAT_01d38728 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_009d6be4;
          uVar8 = plVar7[1];
          if (uVar8 != uVar5) break;
          if (*(int *)(plVar7 + 2) == param_3) {
            local_30 = local_3c;
            lVar3 = std::__ndk1::
                    __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::VideoPlayer*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::VideoPlayer*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::VideoPlayer*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::VideoPlayer*>>>
                    ::
                    __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                              ((int *)&DAT_01d38728,(piecewise_construct_t *)local_3c,
                               (tuple *)&DAT_0188cd76,(tuple *)&local_30);
            (**(code **)(**(long **)(lVar3 + 0x18) + 0x58))(*(long **)(lVar3 + 0x18),param_4);
            goto LAB_009d6be4;
          }
        }
        if ((uVar4 & DAT_01d38730) == 0) {
          uVar8 = uVar8 & uVar4;
        }
        else if (DAT_01d38730 <= uVar8) {
          uVar1 = 0;
          if (DAT_01d38730 != 0) {
            uVar1 = uVar8 / DAT_01d38730;
          }
          uVar8 = uVar8 - uVar1 * DAT_01d38730;
        }
      } while (uVar8 == uVar6);
    }
  }
LAB_009d6be4:
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 009d6bf4 to 00ad6bfb has its CatchHandler @ 009d6f10 */
                    /* try { // try from 009d6c00 to 00ad6c07 has its CatchHandler @ 009d6f0c */
  return;
}

