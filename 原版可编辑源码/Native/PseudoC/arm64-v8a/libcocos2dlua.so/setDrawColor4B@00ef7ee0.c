
/* cocos2d::DrawPrimitives::setDrawColor4B(unsigned char, unsigned char, unsigned char, unsigned
   char) */

void cocos2d::DrawPrimitives::setDrawColor4B
               (uchar param_1,uchar param_2,uchar param_3,uchar param_4)

{
  undefined1 auVar1 [16];
  
  auVar1._6_2_ = 0;
  auVar1._0_6_ = (uint6)CONCAT14(param_2,(uint)CONCAT12(param_2,(ushort)param_1)) & 0xffff0000ffff;
  auVar1[8] = param_3;
  auVar1._9_3_ = 0;
  auVar1[0xc] = param_4;
  auVar1._13_3_ = 0;
  auVar1 = NEON_ucvtf(auVar1,4);
  DAT_0178f768 = auVar1._8_4_ / 255.0;
  DAT_0178f76c = auVar1._12_4_ / 255.0;
  DAT_0178f760 = auVar1._0_4_ / 255.0;
  DAT_0178f764 = auVar1._4_4_ / 255.0;
  return;
}

