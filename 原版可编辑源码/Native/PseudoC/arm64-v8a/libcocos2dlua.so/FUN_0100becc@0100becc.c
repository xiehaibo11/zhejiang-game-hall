
void FUN_0100becc(float param_1,float param_2,undefined1 param_3 [16],float param_4,float param_5,
                 float param_6,float param_7,float param_8,DrawNode *param_9)

{
  long lVar1;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  Color4F aCStack_d0 [16];
  Color4F aCStack_c0 [16];
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  cocos2d::Color4F::Color4F
            (aCStack_c0,fStack0000000000000000,fStack0000000000000004,fStack0000000000000008,
             fStack000000000000000c);
  cocos2d::Color4F::Color4F(aCStack_d0,param_5,param_6,param_7,param_8);
  _local_b0 = CONCAT44(param_2 + param_4 * 0.0,param_1 + param_4 * 1.0);
  _fStack_a8 = CONCAT44(param_2 + param_4 * 0.5,param_1 + param_4 * 0.8660254);
  _local_a0 = CONCAT44(param_2 + param_4 * 0.86602545,param_1 + param_4 * 0.49999997);
  _fStack_98 = CONCAT44(param_2 + param_4 * 1.0,param_1 + param_4 * -4.371139e-08);
  _local_90 = CONCAT44(param_2 + param_4 * 0.8660254,param_1 + param_4 * -0.50000006);
  _fStack_88 = CONCAT44(param_2 + param_4 * 0.50000006,param_1 + param_4 * -0.8660254);
  _local_80 = CONCAT44(param_2 + param_4 * -8.742278e-08,param_1 + param_4 * -1.0);
  _fStack_78 = CONCAT44(param_2 + param_4 * -0.49999997,param_1 + param_4 * -0.8660254);
  _local_70 = CONCAT44(param_2 + param_4 * -0.86602545,param_1 + param_4 * -0.4999999);
  _fStack_68 = CONCAT44(param_2 + param_4 * -1.0,param_1 + param_4 * 1.1924881e-08);
  _local_60 = CONCAT44(param_2 + param_4 * -0.86602545,param_1 + param_4 * 0.4999999);
  _fStack_58 = CONCAT44(param_2 + param_4 * -0.5000002,param_1 + param_4 * 0.8660253);
  cocos2d::DrawNode::drawPolygon(param_9,(Vec2 *)&local_b0,0xc,aCStack_c0,1.0,aCStack_d0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

