
void FUN_0100c12c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 float param_5,DrawNode *param_6)

{
  long lVar1;
  float fVar2;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  Color4F aCStack_68 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  cocos2d::Color4F::Color4F
            (aCStack_68,fStack0000000000000000,fStack0000000000000004,fStack0000000000000008,
             fStack000000000000000c);
  fVar2 = 1.0;
  if (param_5 != 0.0) {
    fVar2 = param_5;
  }
  local_78 = param_3;
  uStack_74 = param_4;
  local_70 = param_1;
  uStack_6c = param_2;
  cocos2d::DrawNode::drawSegment(param_6,(Vec2 *)&local_70,(Vec2 *)&local_78,fVar2,aCStack_68);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

