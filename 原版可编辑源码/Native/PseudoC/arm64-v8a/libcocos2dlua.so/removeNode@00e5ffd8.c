
/* cocos2d::PURibbonTrail::removeNode(cocos2d::Node*) */

void __thiscall cocos2d::PURibbonTrail::removeNode(PURibbonTrail *this,Node *param_1)

{
  undefined8 *puVar1;
  ulong *__dest;
  undefined8 *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  size_t sVar5;
  ulong uVar6;
  long lVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *__dest_00;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined2 uVar15;
  undefined8 uVar16;
  ulong local_68;
  void *local_60 [3];
  long local_48;
  
  lVar7 = tpidr_el0;
  local_48 = *(long *)(lVar7 + 0x28);
  puVar2 = *(undefined8 **)(this + 0xe8);
  puVar4 = *(undefined8 **)(this + 0xf0);
  __dest_00 = puVar2;
  if ((puVar4 != puVar2) && ((Node *)*puVar2 != param_1)) {
    do {
      if (puVar4 + -1 == __dest_00) goto LAB_00e601e8;
      puVar1 = __dest_00 + 1;
      __dest_00 = __dest_00 + 1;
    } while ((Node *)*puVar1 != param_1);
  }
  if (__dest_00 == puVar4) goto LAB_00e601e8;
  __dest = (ulong *)((long)__dest_00 + (*(long *)(this + 0x100) - (long)puVar2));
  uVar14 = *__dest;
  local_68 = uVar14;
  PUBillboardChain::clearChain((PUBillboardChain *)this,uVar14);
  puVar3 = *(ulong **)(this + 0x120);
  if (puVar3 == *(ulong **)(this + 0x128)) {
    std::__ndk1::vector<unsigned_long,std::__ndk1::allocator<unsigned_long>>::
    __push_back_slow_path<unsigned_long_const&>
              ((vector<unsigned_long,std::__ndk1::allocator<unsigned_long>> *)(this + 0x118),
               &local_68);
  }
  else {
    *puVar3 = uVar14;
    *(ulong **)(this + 0x120) = puVar3 + 1;
  }
  sVar5 = *(long *)(this + 0xf0) - (long)(__dest_00 + 1);
  if (sVar5 != 0) {
    memmove(__dest_00,__dest_00 + 1,sVar5);
  }
  *(undefined8 **)(this + 0xf0) = __dest_00 + ((long)sVar5 >> 3);
  sVar5 = *(long *)(this + 0x108) - (long)(__dest + 1);
  if (sVar5 != 0) {
    memmove(__dest,__dest + 1,sVar5);
  }
  uVar14 = *(ulong *)(this + 0x138);
  *(ulong **)(this + 0x108) = __dest + ((long)sVar5 >> 3);
  if (uVar14 == 0) {
LAB_00e601cc:
    plVar12 = (long *)0x0;
  }
  else {
    uVar9 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
    uVar16 = CONCAT17(POPCOUNT((char)(uVar14 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar14 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar14 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar14 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar14 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar14 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar14 
                                                  >> 8)),POPCOUNT((char)uVar14))))))));
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar10 = (uVar9 ^ (ulong)param_1 >> 0x20 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
    uVar9 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    uVar10 = (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
    if (uVar9 < 2) {
      uVar11 = uVar14 - 1 & uVar10;
    }
    else {
      uVar11 = uVar10;
      if (uVar14 <= uVar10) {
        uVar11 = 0;
        if (uVar14 != 0) {
          uVar11 = uVar10 / uVar14;
        }
        uVar11 = uVar10 - uVar11 * uVar14;
      }
    }
    plVar12 = *(long **)(*(long *)(this + 0x130) + uVar11 * 8);
    if (plVar12 == (long *)0x0) goto LAB_00e601cc;
    plVar12 = (long *)*plVar12;
    if (plVar12 != (long *)0x0) {
      do {
        uVar13 = plVar12[1];
        if (uVar13 == uVar10) {
          if ((Node *)plVar12[2] == param_1) break;
        }
        else {
          if (uVar9 < 2) {
            uVar13 = uVar13 & uVar14 - 1;
          }
          else if (uVar14 <= uVar13) {
            uVar6 = 0;
            if (uVar14 != 0) {
              uVar6 = uVar13 / uVar14;
            }
            uVar13 = uVar13 - uVar6 * uVar14;
          }
          if (uVar13 != uVar11) goto LAB_00e601cc;
        }
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
    }
  }
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node_const*,unsigned_long>,std::__ndk1::__unordered_map_hasher<cocos2d::Node_const*,std::__ndk1::__hash_value_type<cocos2d::Node_const*,unsigned_long>,std::__ndk1::hash<cocos2d::Node_const*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node_const*,std::__ndk1::__hash_value_type<cocos2d::Node_const*,unsigned_long>,std::__ndk1::equal_to<cocos2d::Node_const*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node_const*,unsigned_long>>>
  ::remove(local_60,this + 0x130,plVar12);
  pvVar8 = local_60[0];
  local_60[0] = (void *)0x0;
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
  }
LAB_00e601e8:
  if (*(long *)(lVar7 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

