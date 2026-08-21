
/* cocos2d::Texture2D::removeSpriteFrameCapInset(cocos2d::SpriteFrame*) */

void __thiscall cocos2d::Texture2D::removeSpriteFrameCapInset(Texture2D *this,SpriteFrame *param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  void *pvVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  void *local_68;
  ulong local_60;
  undefined8 *local_58;
  void *local_40 [3];
  long local_28;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fece00 with catch @ 00fecf94
                       catch(type#1 @ 00000000) { ... } // from try @ 00fece6c with catch @ 00fecf94
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fecd74 with catch @ 00fecf98
                        */
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (*(long *)(this + 0x58) != 0) {
    std::__ndk1::
    unordered_map<cocos2d::SpriteFrame*,cocos2d::Rect,std::__ndk1::hash<cocos2d::SpriteFrame*>,std::__ndk1::equal_to<cocos2d::SpriteFrame*>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::SpriteFrame*const,cocos2d::Rect>>>
    ::unordered_map((unordered_map<cocos2d::SpriteFrame*,cocos2d::Rect,std::__ndk1::hash<cocos2d::SpriteFrame*>,std::__ndk1::equal_to<cocos2d::SpriteFrame*>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::SpriteFrame*const,cocos2d::Rect>>>
                     *)&local_68,(unordered_map *)(*(long *)(this + 0x58) + 0x10));
    pvVar3 = local_68;
    if (local_60 != 0) {
      uVar5 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fecd28 with catch @ 00fecfec
                       catch(type#1 @ 00000000) { ... } // from try @ 00fecde4 with catch @ 00fecfec
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fecd44 with catch @ 00fecff0
                        */
      uVar13 = CONCAT17(POPCOUNT((char)(local_60 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(local_60 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(local_60 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(local_60 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(local_60 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(local_60 >>
                                                                                    0x10)),
                                                                     CONCAT11(POPCOUNT((char)(
                                                  local_60 >> 8)),POPCOUNT((char)local_60))))))));
      uVar5 = (uVar5 ^ (ulong)param_1 >> 0x20 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
      uVar12 = NEON_uaddlv(uVar13,1);
      uVar4 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fecd38 with catch @ 00fed008
                        */
      uVar6 = (uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
      uVar5 = 0;
      if (local_60 != 0) {
        uVar5 = uVar6 / local_60;
      }
      if (uVar4 < 2) {
        uVar9 = local_60 - 1 & uVar6;
      }
      else {
        uVar9 = uVar6;
                    /* try { // try from 00fed01c to 010ed01f has its CatchHandler @ 00fed048 */
        if (local_60 <= uVar6) {
          uVar9 = uVar6 - uVar5 * local_60;
        }
      }
      plVar7 = *(long **)((long)local_68 + uVar9 * 8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00feceac with catch @ 00fed044
                        */
      if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fed01c with catch @ 00fed048
                        */
        uVar8 = local_60 - 1;
        do {
          uVar10 = plVar7[1];
          if (uVar10 == uVar6) {
            if ((SpriteFrame *)plVar7[2] == param_1) {
              if (uVar4 < 2) {
                uVar9 = uVar8 & uVar6;
LAB_00fed0c4:
                plVar7 = *(long **)((long)local_68 + uVar9 * 8);
              }
              else {
                uVar9 = uVar6;
                if (uVar6 < local_60) goto LAB_00fed0c4;
                uVar9 = uVar6 - uVar5 * local_60;
                plVar7 = *(long **)((long)local_68 + uVar9 * 8);
              }
              if (plVar7 != (long *)0x0) {
                plVar7 = (long *)*plVar7;
                goto joined_r0x00fed0d0;
              }
              break;
            }
          }
          else {
            if (uVar4 < 2) {
              uVar10 = uVar10 & uVar8;
            }
            else if (local_60 <= uVar10) {
              uVar1 = 0;
              if (local_60 != 0) {
                uVar1 = uVar10 / local_60;
              }
              uVar10 = uVar10 - uVar1 * local_60;
            }
            if (uVar10 != uVar9) break;
          }
                    /* try { // try from 00fed05c to 010ed0e7 has its CatchHandler @ 00fed05c
                       catch() { ... } // from try @ 00fed05c with catch @ 00fed05c
                       catch() { ... } // from try @ 00fed528 with catch @ 00fed05c */
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
joined_r0x00fed144:
                    /* try { // try from 00fed144 to 010ed163 has its CatchHandler @ 00fed594 */
    while (local_58 != (void *)0x0) {
      pvVar11 = (void *)*local_58;
      local_68 = pvVar3;
      operator_delete(local_58);
      pvVar3 = local_68;
      local_58 = pvVar11;
    }
    local_68 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00fed178 to 010ed187 has its CatchHandler @ 00fed574 */
  return;
joined_r0x00fed0d0:
  if (plVar7 == (long *)0x0) goto joined_r0x00fed144;
  uVar5 = plVar7[1];
                    /* try { // try from 00fed0f0 to 010ed0ff has its CatchHandler @ 00fed568 */
  if (uVar5 == uVar6) {
    if ((SpriteFrame *)plVar7[2] == param_1) {
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::__unordered_map_hasher<cocos2d::SpriteFrame*,std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::hash<cocos2d::SpriteFrame*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::SpriteFrame*,std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::equal_to<cocos2d::SpriteFrame*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>>>
      ::remove(local_40,&local_68);
      pvVar11 = local_40[0];
                    /* try { // try from 00fed130 to 010ed13f has its CatchHandler @ 00fed570 */
      local_40[0] = (void *)0x0;
      pvVar3 = local_68;
      if (pvVar11 != (void *)0x0) {
        operator_delete(pvVar11);
        pvVar3 = local_68;
      }
      goto joined_r0x00fed144;
    }
  }
  else {
    if (uVar4 < 2) {
      uVar5 = uVar5 & uVar8;
    }
    else {
                    /* try { // try from 00fed104 to 010ed11f has its CatchHandler @ 00fed56c */
      if (local_60 <= uVar5) {
        uVar10 = 0;
        if (local_60 != 0) {
          uVar10 = uVar5 / local_60;
        }
        uVar5 = uVar5 - uVar10 * local_60;
      }
    }
    if (uVar5 != uVar9) goto joined_r0x00fed144;
  }
  plVar7 = (long *)*plVar7;
                    /* try { // try from 00fed0e8 to 010ed0eb has its CatchHandler @ 00fed564 */
  goto joined_r0x00fed0d0;
}

