
void FUN_0100c090(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 float param_5,float param_6,float param_7,float param_8,DrawNode *param_9)

{
  long lVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  Color4F aCStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  cocos2d::Color4F::Color4F(aCStack_58,param_5,param_6,param_7,param_8);
  local_68 = param_3;
  uStack_64 = param_4;
  local_60 = param_1;
  uStack_5c = param_2;
  cocos2d::DrawNode::drawSegment(param_9,(Vec2 *)&local_60,(Vec2 *)&local_68,1.0,aCStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

