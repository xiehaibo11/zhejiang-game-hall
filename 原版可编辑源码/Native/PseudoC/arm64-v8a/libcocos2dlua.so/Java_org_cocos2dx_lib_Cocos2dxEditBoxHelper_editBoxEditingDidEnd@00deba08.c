
void Java_org_cocos2dx_lib_Cocos2dxEditBoxHelper_editBoxEditingDidEnd
               (StringUtils *param_1,undefined8 param_2,int param_3,_JNIEnv *param_4,
               undefined4 param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  byte local_68 [16];
  void *local_58;
  int local_4c [3];
  int *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  cocos2d::StringUtils::getStringUTFCharsJNI(param_1,param_4,(_jstring *)0x0,(bool *)param_4);
  local_4c[0] = param_3;
  if (DAT_01788ae8 != 0) {
    uVar10 = CONCAT17(POPCOUNT((char)(DAT_01788ae8 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(DAT_01788ae8 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(DAT_01788ae8 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(DAT_01788ae8 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(DAT_01788ae8 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(DAT_01788ae8 >>
                                                                                  0x10)),
                                                                   CONCAT11(POPCOUNT((char)(
                                                  DAT_01788ae8 >> 8)),POPCOUNT((char)DAT_01788ae8)))
                                                  )))));
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar4 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    uVar5 = (ulong)param_3;
    if (uVar4 < 2) {
      uVar6 = DAT_01788ae8 - 1 & uVar5;
    }
    else {
      uVar6 = uVar5;
      if (DAT_01788ae8 <= uVar5) {
        uVar6 = 0;
        if (DAT_01788ae8 != 0) {
          uVar6 = uVar5 / DAT_01788ae8;
        }
        uVar6 = uVar5 - uVar6 * DAT_01788ae8;
      }
    }
    plVar7 = *(long **)(DAT_01788ae0 + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar8 = plVar7[1];
        if (uVar8 == uVar5) {
          if ((int)plVar7[2] == param_3) {
            local_40 = local_4c;
            lVar3 = std::__ndk1::
                    __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::ui::EditBoxImplAndroid*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::ui::EditBoxImplAndroid*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::ui::EditBoxImplAndroid*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::ui::EditBoxImplAndroid*>>>
                    ::
                    __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                              ((int *)&DAT_01788ae0,(piecewise_construct_t *)local_4c,
                               (tuple *)&DAT_01420696,(tuple *)&local_40);
            cocos2d::ui::EditBoxImplCommon::editBoxEditingDidEnd
                      (*(EditBoxImplCommon **)(lVar3 + 0x18),local_68,param_5);
            break;
          }
        }
        else {
          if (uVar4 < 2) {
            uVar8 = uVar8 & DAT_01788ae8 - 1;
          }
          else if (DAT_01788ae8 <= uVar8) {
            uVar1 = 0;
            if (DAT_01788ae8 != 0) {
              uVar1 = uVar8 / DAT_01788ae8;
            }
            uVar8 = uVar8 - uVar1 * DAT_01788ae8;
          }
          if (uVar8 != uVar6) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00debb58 to 00eebbb7 has its CatchHandler @ 00debb58
                       catch(type#1 @ 00000000) { ... } // from try @ 00debb58 with catch @ 00debb58
                       catch(type#1 @ 00000000) { ... } // from try @ 00debc74 with catch @ 00debb58
                        */
  return;
}

