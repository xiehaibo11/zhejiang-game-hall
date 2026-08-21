
/* cocos2d::kmVec4Scale(cocos2d::Vec4*, cocos2d::Vec4 const*, float) */

Vec4 * cocos2d::kmVec4Scale(Vec4 *param_1,Vec4 *param_2,float param_3)

{
  long lVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Vec4::Vec4((Vec4 *)&local_48,param_2);
  Vec4::scale((Vec4 *)&local_48,param_3);
  *(undefined8 *)(param_1 + 8) = uStack_40;
  *(undefined8 *)param_1 = local_48;
  Vec4::~Vec4((Vec4 *)&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

