
/* cocos2d::PULineAffector::PULineAffector() */

void __thiscall cocos2d::PULineAffector::PULineAffector(PULineAffector *this)

{
  undefined8 uVar1;
  
  PUAffector::PUAffector((PUAffector *)this);
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0xac) = uVar1;
  *(undefined ***)this = &PTR__PULineAffector_016ef690;
  uVar1 = DEFAULT_END;
  *(undefined4 *)(this + 0xbc) = DAT_01788d6c;
  *(undefined8 *)(this + 200) = 0x3f80000000000000;
  *(undefined8 *)(this + 0xc0) = 0x3dcccccd00000000;
                    /* try { // try from 00e29340 to 00f29347 has its CatchHandler @ 00e29348 */
  *(undefined8 *)(this + 0xb4) = uVar1;
  *(undefined2 *)(this + 0xd0) = 0x101;
                    /* catch() { ... } // from try @ 00e29340 with catch @ 00e29348
                       try { // try from 00e29348 to 00f29443 has its CatchHandler @ 00e28ac8 */
                    /* catch() { ... } // from try @ 00e2927c with catch @ 00e2934c */
  return;
}

