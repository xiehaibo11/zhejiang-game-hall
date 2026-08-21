
/* cocos2d::kmVec4Normalize(cocos2d::Vec4*, cocos2d::Vec4 const*) */

Vec4 * cocos2d::kmVec4Normalize(Vec4 *param_1,Vec4 *param_2)

{
  long lVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Vec4::getNormalized();
  *(undefined8 *)(param_1 + 8) = uStack_30;
  *(undefined8 *)param_1 = local_38;
  Vec4::~Vec4((Vec4 *)&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

