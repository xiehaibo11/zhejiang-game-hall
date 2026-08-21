
/* cocos2d::Primitive::Primitive() */

void __thiscall cocos2d::Primitive::Primitive(Primitive *this)

{
  Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x28) = 0;
                    /* try { // try from 00fe13d4 to 010e13db has its CatchHandler @ 00fe1458 */
  *(undefined4 *)(this + 0x40) = 0;
                    /* try { // try from 00fe13dc to 010e1473 has its CatchHandler @ 00fe13a4 */
  *(undefined ***)this = &PTR__Primitive_01724198;
  return;
}

