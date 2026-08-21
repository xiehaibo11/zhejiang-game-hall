
/* cocos2d::Ref::Ref() */

void __thiscall cocos2d::Ref::Ref(Ref *this)

{
  *(undefined8 *)(this + 0x18) = 0;
  this[0x20] = (Ref)0x0;
  *(undefined4 *)(this + 8) = 1;
                    /* try { // try from 00fb1ee0 to 010b1ee7 has its CatchHandler @ 00fb1fa8 */
  *(undefined ***)this = &PTR__Ref_017236f0;
  DAT_0178fd18 = DAT_0178fd18 + 1;
                    /* try { // try from 00fb1ef0 to 010b1efb has its CatchHandler @ 00fb1f98 */
  *(int *)(this + 0xc) = DAT_0178fd18;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}

