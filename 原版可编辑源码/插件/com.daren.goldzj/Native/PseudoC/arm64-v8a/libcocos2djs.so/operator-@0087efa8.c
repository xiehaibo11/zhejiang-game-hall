
/* cocos2d::Size::TEMPNAMEPLACEHOLDERVALUE(cocos2d::Size const&) const */

void __thiscall cocos2d::Size::operator-(Size *this,Size *param_1)

{
  undefined8 *in_x8;
  
  *in_x8 = CONCAT44((float)((ulong)*(undefined8 *)this >> 0x20) -
                    (float)((ulong)*(undefined8 *)param_1 >> 0x20),
                    (float)*(undefined8 *)this - (float)*(undefined8 *)param_1);
  return;
}

