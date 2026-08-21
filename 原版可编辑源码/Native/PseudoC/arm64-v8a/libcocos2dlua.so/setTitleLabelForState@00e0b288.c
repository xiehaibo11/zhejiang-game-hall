
/* cocos2d::extension::ControlButton::setTitleLabelForState(cocos2d::Node*,
   cocos2d::extension::Control::State) */

void __thiscall
cocos2d::extension::ControlButton::setTitleLabelForState
          (ControlButton *this,Ref *param_1,int param_3)

{
  Map<int,cocos2d::Node*> *this_00;
  ulong uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  int local_54;
  Node *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = *(ulong *)(this + 0x400);
  this_00 = (Map<int,cocos2d::Node*> *)(this + 0x3f8);
  if (uVar4 != 0) {
    uVar11 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar4 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar4))))
                                                ))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar5 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    uVar6 = (ulong)param_3;
    if (uVar5 < 2) {
      uVar7 = uVar4 - 1 & uVar6;
    }
    else {
                    /* try { // try from 00e0b2e8 to 00f0b423 has its CatchHandler @ 00e0b2e8
                       catch() { ... } // from try @ 00e0b2e8 with catch @ 00e0b2e8
                       catch() { ... } // from try @ 00e0b42c with catch @ 00e0b2e8 */
      uVar7 = uVar6;
      if (uVar4 <= uVar6) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar6 / uVar4;
        }
        uVar7 = uVar6 - uVar7 * uVar4;
      }
    }
    plVar8 = *(long **)(*(long *)this_00 + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == uVar6) {
          if ((int)plVar8[2] == param_3) {
            if (plVar8[3] != 0) {
              (**(code **)(*(long *)this + 0x280))(this,plVar8[3],1);
              local_50 = (Node *)CONCAT44(local_50._4_4_,param_3);
              Map<int,cocos2d::Node*>::erase(this_00,(int *)&local_50);
            }
            break;
          }
        }
        else {
          if (uVar5 < 2) {
            uVar9 = uVar9 & uVar4 - 1;
          }
          else if (uVar4 <= uVar9) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar9 / uVar4;
            }
            uVar9 = uVar9 - uVar1 * uVar4;
          }
          if (uVar9 != uVar7) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  local_54 = param_3;
  local_50 = (Node *)param_1;
  Ref::retain(param_1);
  Map<int,cocos2d::Node*>::erase(this_00,&local_54);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Node*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Node*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Node*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Node*>>>
  ::__emplace_unique_key_args<int,int_const&,cocos2d::Node*&>
            ((__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Node*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Node*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Node*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Node*>>>
              *)this_00,&local_54,&local_54,&local_50);
  (**(code **)(*(long *)param_1 + 0x170))(param_1,0);
  local_50 = (Node *)0x3f0000003f000000;
  (**(code **)(*(long *)param_1 + 0x148))(param_1,&local_50);
  (**(code **)(*(long *)this + 0x210))(this,param_1,1);
  iVar3 = (**(code **)(*(long *)this + 0x6b0))(this);
  if (iVar3 == param_3) {
                    /* try { // try from 00e0b424 to 00f0b42b has its CatchHandler @ 00e0b4f4 */
                    /* try { // try from 00e0b42c to 00f0b507 has its CatchHandler @ 00e0b2e8 */
    (**(code **)(*(long *)this + 0x680))(this);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

