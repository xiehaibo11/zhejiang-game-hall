
/* cocos2d::EventDispatcher::associateNodeAndEventListener(cocos2d::Node*, cocos2d::EventListener*)
    */

void __thiscall
cocos2d::EventDispatcher::associateNodeAndEventListener
          (EventDispatcher *this,Node *param_1,EventListener *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  vector *local_40;
  EventListener *local_38;
  Node *pNStack_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  local_40 = (vector *)0x0;
  uVar4 = *(ulong *)(this + 0x80);
  local_38 = param_2;
  pNStack_30 = param_1;
  if (uVar4 != 0) {
                    /* try { // try from 00f9ed2c to 0109ed3b has its CatchHandler @ 00f9f0a4 */
                    /* try { // try from 00f9ed3c to 0109edd7 has its CatchHandler @ 00f9ebf0 */
    uVar5 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
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
    uVar6 = (uVar5 ^ (ulong)param_1 >> 0x20 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    if (uVar5 < 2) {
      uVar7 = uVar6 & uVar4 - 1;
    }
    else {
      uVar7 = uVar6;
      if (uVar4 <= uVar6) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar6 / uVar4;
        }
        uVar7 = uVar6 - uVar7 * uVar4;
      }
    }
    plVar8 = *(long **)(*(long *)(this + 0x78) + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == uVar6) {
          if ((Node *)plVar8[2] == param_1) {
            local_40 = (vector *)plVar8[3];
            goto LAB_00f9ee28;
          }
        }
        else {
          if (uVar5 < 2) {
            uVar9 = uVar9 & uVar4 - 1;
          }
          else if (uVar4 <= uVar9) {
                    /* try { // try from 00f9edd8 to 0109ede7 has its CatchHandler @ 00f9f094 */
            uVar2 = 0;
            if (uVar4 != 0) {
              uVar2 = uVar9 / uVar4;
            }
            uVar9 = uVar9 - uVar2 * uVar4;
          }
          if (uVar9 != uVar7) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
                    /* try { // try from 00f9edf0 to 0109ee53 has its CatchHandler @ 00f9f0b4 */
  local_40 = operator_new(0x18,(nothrow_t *)&std::nothrow);
  if (local_40 != (vector *)0x0) {
    *(undefined8 *)local_40 = 0;
    *(undefined8 *)(local_40 + 8) = 0;
    *(undefined8 *)(local_40 + 0x10) = 0;
  }
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,std::__ndk1::vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>>*>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,std::__ndk1::vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>>*>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,std::__ndk1::vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>>*>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,std::__ndk1::vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>>*>>>
  ::
  __emplace_unique_key_args<cocos2d::Node*,cocos2d::Node*&,std::__ndk1::vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>>*&>
            ((__hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,std::__ndk1::vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>>*>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,std::__ndk1::vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>>*>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,std::__ndk1::vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>>*>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,std::__ndk1::vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>>*>>>
              *)(this + 0x78),&pNStack_30,&pNStack_30,&local_40);
LAB_00f9ee28:
  puVar1 = *(undefined8 **)(local_40 + 8);
  if (puVar1 == *(undefined8 **)(local_40 + 0x10)) {
    std::__ndk1::vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>>::
    __push_back_slow_path<cocos2d::EventListener*const&>
              ((vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>> *)
               local_40,&local_38);
  }
  else {
    *puVar1 = local_38;
    *(undefined8 **)(local_40 + 8) = puVar1 + 1;
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
                    /* try { // try from 00f9ee60 to 0109ee73 has its CatchHandler @ 00f9f090 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

