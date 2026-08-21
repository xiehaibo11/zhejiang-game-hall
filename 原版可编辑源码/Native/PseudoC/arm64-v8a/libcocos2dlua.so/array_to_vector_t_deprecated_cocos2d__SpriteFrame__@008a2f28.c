
/* bool array_to_vector_t_deprecated<cocos2d::SpriteFrame*>(cocos2d::__Array&,
   cocos2d::Vector<cocos2d::SpriteFrame*>&) */

bool array_to_vector_t_deprecated<cocos2d::SpriteFrame*>(__Array *param_1,Vector *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  Ref *pRVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  Ref *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar9 = *(long **)(param_1 + 0x30);
  lVar6 = *plVar9;
  if (lVar6 == 0) {
    bVar3 = false;
  }
  else {
    puVar8 = *(undefined8 **)param_2;
    puVar1 = *(undefined8 **)(param_2 + 8);
    if (puVar8 != puVar1) {
      do {
        puVar7 = puVar8 + 1;
        cocos2d::Ref::release((Ref *)*puVar8);
        puVar8 = puVar7;
      } while (puVar1 != puVar7);
      plVar9 = *(long **)(param_1 + 0x30);
      puVar8 = *(undefined8 **)param_2;
      lVar6 = *plVar9;
    }
    *(undefined8 **)(param_2 + 8) = puVar8;
    if (0 < lVar6) {
      lVar6 = 0;
      do {
        lVar4 = *(long *)(plVar9[2] + lVar6 * 8);
        if ((lVar4 != 0) &&
           (pRVar5 = (Ref *)__dynamic_cast(lVar4,&cocos2d::Ref::typeinfo,
                                           &cocos2d::SpriteFrame::typeinfo,0), pRVar5 != (Ref *)0x0)
           ) {
          plVar9 = *(long **)(param_2 + 8);
          local_60 = pRVar5;
          if (plVar9 == *(long **)(param_2 + 0x10)) {
            std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>
            ::__push_back_slow_path<cocos2d::SpriteFrame*const&>
                      ((vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>
                        *)param_2,(SpriteFrame **)&local_60);
          }
          else {
            *plVar9 = (long)pRVar5;
            *(long **)(param_2 + 8) = plVar9 + 1;
          }
          cocos2d::Ref::retain(local_60);
          plVar9 = *(long **)(param_1 + 0x30);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < *plVar9);
    }
    bVar3 = true;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

