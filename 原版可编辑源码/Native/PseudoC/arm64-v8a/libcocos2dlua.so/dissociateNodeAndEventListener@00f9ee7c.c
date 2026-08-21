
/* cocos2d::EventDispatcher::dissociateNodeAndEventListener(cocos2d::Node*, cocos2d::EventListener*)
    */

void __thiscall
cocos2d::EventDispatcher::dissociateNodeAndEventListener
          (EventDispatcher *this,Node *param_1,EventListener *param_2)

{
  size_t __n;
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  void *local_60 [3];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = *(ulong *)(this + 0x80);
  if (uVar4 != 0) {
                    /* try { // try from 00f9eeb0 to 0109eeb7 has its CatchHandler @ 00f9f050 */
                    /* try { // try from 00f9eeb8 to 0109ef37 has its CatchHandler @ 00f9ebf0 */
    uVar7 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
    uVar15 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar4 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar4))))
                                                ))));
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar8 = (uVar7 ^ (ulong)param_1 >> 0x20 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    uVar7 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    uVar8 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
    if (uVar7 < 2) {
      uVar9 = uVar4 - 1 & uVar8;
    }
    else {
      uVar9 = uVar8;
      if (uVar4 <= uVar8) {
        uVar9 = 0;
        if (uVar4 != 0) {
          uVar9 = uVar8 / uVar4;
        }
        uVar9 = uVar8 - uVar9 * uVar4;
      }
    }
    plVar10 = *(long **)(*(long *)(this + 0x78) + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      do {
        uVar11 = plVar10[1];
        if (uVar11 == uVar8) {
                    /* try { // try from 00f9ef38 to 0109ef47 has its CatchHandler @ 00f9f070 */
          if ((Node *)plVar10[2] == param_1) {
            plVar12 = (long *)plVar10[3];
            puVar5 = (undefined8 *)*plVar12;
            puVar6 = (undefined8 *)plVar12[1];
            puVar13 = puVar5;
            if ((puVar5 != puVar6) && ((EventListener *)*puVar5 != param_2)) goto LAB_00f9efa4;
            if (puVar5 == puVar6) goto LAB_00f9eff8;
            goto LAB_00f9efd4;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar11 = uVar11 & uVar4 - 1;
          }
          else if (uVar4 <= uVar11) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar11 / uVar4;
            }
            uVar11 = uVar11 - uVar1 * uVar4;
          }
          if (uVar11 != uVar9) break;
        }
        plVar10 = (long *)*plVar10;
                    /* try { // try from 00f9ef48 to 0109ef4f has its CatchHandler @ 00f9f058 */
      } while (plVar10 != (long *)0x0);
    }
  }
  goto LAB_00f9f038;
  while ((EventListener *)*puVar13 != param_2) {
LAB_00f9efa4:
    puVar13 = puVar13 + 1;
    if (puVar6 == puVar13) goto LAB_00f9eff8;
  }
  if (puVar13 != puVar6) {
LAB_00f9efd4:
    __n = (long)puVar6 - (long)(puVar13 + 1);
                    /* try { // try from 00f9efdc to 0109f107 has its CatchHandler @ 00f9ebf0 */
    if (__n != 0) {
      memmove(puVar13,puVar13 + 1,__n);
    }
    puVar5 = (undefined8 *)*plVar12;
    puVar6 = puVar13 + ((long)__n >> 3);
    plVar12[1] = (long)puVar6;
  }
LAB_00f9eff8:
  if (puVar5 == puVar6) {
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,std::__ndk1::vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>>*>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,std::__ndk1::vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>>*>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,std::__ndk1::vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>>*>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,std::__ndk1::vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>>*>>>
    ::remove(local_60,this + 0x78,plVar10);
    pvVar3 = local_60[0];
    local_60[0] = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    pvVar3 = (void *)*plVar12;
    if (pvVar3 != (void *)0x0) {
      plVar12[1] = (long)pvVar3;
      operator_delete(pvVar3);
    }
    operator_delete(plVar12);
  }
LAB_00f9f038:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00f9eeb0 with catch @ 00f9f050 */
                    /* catch() { ... } // from try @ 00f9ef80 with catch @ 00f9f054 */
                    /* catch() { ... } // from try @ 00f9ef48 with catch @ 00f9f058 */
  return;
}

