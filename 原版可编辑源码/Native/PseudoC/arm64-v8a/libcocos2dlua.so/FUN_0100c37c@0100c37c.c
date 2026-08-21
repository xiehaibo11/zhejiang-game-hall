
void FUN_0100c37c(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,float param_4,
                 float param_5,float param_6,float param_7,DrawNode *param_8)

{
  long lVar1;
  undefined4 local_50;
  undefined4 uStack_4c;
  Color4F aCStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  cocos2d::Color4F::Color4F(aCStack_48,param_4,param_5,param_6,param_7);
                    /* try { // try from 0100c3c4 to 0110c3cf has its CatchHandler @ 0100c46c */
  local_50 = param_2;
  uStack_4c = param_3;
                    /* try { // try from 0100c3d0 to 0110c487 has its CatchHandler @ 0100c354 */
  cocos2d::DrawNode::drawDot(param_8,(Vec2 *)&local_50,2.0,aCStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

