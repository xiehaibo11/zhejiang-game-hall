
/* cocos2d::Device::getTextureDataForText(char const*, cocos2d::FontDefinition const&,
   cocos2d::Device::TextAlign, int&, int&, bool&) */

void __thiscall
cocos2d::Device::getTextureDataForText
          (Data *param_1_00,Device *this,long param_1,undefined4 param_4,int *param_5,int *param_6,
          undefined1 *param_7)

{
  int iVar1;
  ulong uVar2;
  
  Data::Data(param_1_00);
  if (((DAT_01781ac0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01781ac0), iVar1 != 0)) {
    DAT_01781ab0 = 0;
    DAT_01781ab8 = (uchar *)0x0;
    __cxa_guard_release(&DAT_01781ac0);
  }
  uVar2 = BitmapDC::getBitmapFromJavaShadowStroke
                    ((BitmapDC *)&DAT_01781ab0,this,(int)*(float *)(param_1 + 0x28),
                     (int)*(float *)(param_1 + 0x2c),param_4,param_1);
  if ((uVar2 & 1) != 0) {
    *param_5 = (int)DAT_01781ab0;
    iVar1 = DAT_01781ab0._4_4_;
    *param_6 = DAT_01781ab0._4_4_;
    Data::fastSet(param_1_00,DAT_01781ab8,(long)(iVar1 * *param_5 * 4));
    *param_7 = 1;
  }
  return;
}

