
/* cocos2d::EaseSineInOut::~EaseSineInOut() */

void __thiscall cocos2d::EaseSineInOut::~EaseSineInOut(EaseSineInOut *this)

{
                    /* try { // try from 00ed26ac to 00fd26b7 has its CatchHandler @ 00ed2820 */
                    /* try { // try from 00ed26b8 to 00fd26c3 has its CatchHandler @ 00ed281c */
                    /* try { // try from 00ed26c4 to 00fd26db has its CatchHandler @ 00ed2874 */
  *(undefined ***)this = &PTR__ActionEase_016f5ab0;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f5b18;
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x58));
  }
                    /* try { // try from 00ed26dc to 00fd26e7 has its CatchHandler @ 00ed278c */
  Action::~Action((Action *)this);
                    /* try { // try from 00ed26e8 to 00fd26f3 has its CatchHandler @ 00ed27a4 */
  operator_delete(this);
  return;
}

