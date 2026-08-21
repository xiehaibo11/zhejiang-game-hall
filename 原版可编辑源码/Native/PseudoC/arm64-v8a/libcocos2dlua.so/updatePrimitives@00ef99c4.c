
/* cocos2d::experimental::TMXLayer::updatePrimitives() */

void __thiscall cocos2d::experimental::TMXLayer::updatePrimitives(TMXLayer *this)

{
  Map<int,cocos2d::Primitive*> *this_00;
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  Primitive *this_01;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined2 uVar13;
  undefined8 uVar14;
  Primitive *local_60;
  long local_58;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef9788 with catch @ 00ef99cc
                        */
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar12 = *(long **)(this + 0x458);
  if (plVar12 == (long *)0x0) {
LAB_00ef9b78:
    if (*(long *)(lVar4 + 0x28) == local_58) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  this_00 = (Map<int,cocos2d::Primitive*> *)(this + 0x4a8);
LAB_00ef99fc:
  plVar8 = *(long **)(this + 0x438);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar12 + 2;
    iVar2 = (int)*plVar1;
    uVar6 = (ulong)iVar2;
    do {
      if (iVar2 < *(int *)((long)plVar8 + 0x1c)) {
        plVar8 = (long *)*plVar8;
      }
      else {
        if (iVar2 <= *(int *)((long)plVar8 + 0x1c)) goto LAB_00ef9a38;
        plVar8 = (long *)plVar8[1];
      }
      if (plVar8 == (long *)0x0) break;
    } while( true );
  }
  goto LAB_00ef9ba4;
LAB_00ef9a38:
  if (plVar8 == (long *)0x0) {
LAB_00ef9ba4:
                    /* WARNING: Subroutine does not return */
    FUN_007d44e0("map::at:  key not found");
  }
  uVar7 = *(ulong *)(this + 0x4b0);
  lVar5 = plVar8[4];
  if (uVar7 != 0) {
    uVar14 = CONCAT17(POPCOUNT((char)(uVar7 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar7 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar7 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar7 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar7 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar7 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar7 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar7))))
                                                ))));
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar9 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    if (uVar9 < 2) {
      uVar10 = uVar7 - 1 & uVar6;
    }
    else {
      uVar10 = uVar6;
      if (uVar7 <= uVar6) {
        uVar10 = 0;
        if (uVar7 != 0) {
          uVar10 = uVar6 / uVar7;
        }
        uVar10 = uVar6 - uVar10 * uVar7;
      }
    }
    plVar8 = *(long **)(*(long *)this_00 + uVar10 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar11 = plVar8[1];
        if (uVar11 == uVar6) {
          if ((int)plVar8[2] == iVar2) {
            Primitive::setCount((Primitive *)plVar8[3],*(int *)((long)plVar12 + 0x14) * 6);
            Primitive::setStart((Primitive *)plVar8[3],(int)lVar5 * 6);
            goto LAB_00ef9b44;
          }
        }
        else {
          if (uVar9 < 2) {
            uVar11 = uVar11 & uVar7 - 1;
          }
          else if (uVar7 <= uVar11) {
            uVar3 = 0;
            if (uVar7 != 0) {
              uVar3 = uVar11 / uVar7;
            }
            uVar11 = uVar11 - uVar3 * uVar7;
          }
          if (uVar11 != uVar10) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  this_01 = (Primitive *)
            Primitive::create(*(VertexData **)(this + 0x498),*(IndexBuffer **)(this + 0x4a0),4);
  Primitive::setCount(this_01,*(int *)((long)plVar12 + 0x14) * 6);
  Primitive::setStart(this_01,(int)lVar5 * 6);
  local_60 = this_01;
  Ref::retain((Ref *)this_01);
  Map<int,cocos2d::Primitive*>::erase(this_00,(int *)plVar1);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Primitive*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Primitive*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Primitive*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Primitive*>>>
  ::__emplace_unique_key_args<int,int_const&,cocos2d::Primitive*&>
            ((__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Primitive*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Primitive*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Primitive*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Primitive*>>>
              *)this_00,(int *)plVar1,(int *)plVar1,&local_60);
LAB_00ef9b44:
  plVar12 = (long *)*plVar12;
  if (plVar12 == (long *)0x0) goto LAB_00ef9b78;
  goto LAB_00ef99fc;
}

