
/* cocos2d::PUTextureRotator::setRotation(cocos2d::PUDynamicAttribute*) */

void __thiscall
cocos2d::PUTextureRotator::setRotation(PUTextureRotator *this,PUDynamicAttribute *param_1)

{
  if (*(long **)(this + 0xb8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xb8) + 8))();
    *(undefined8 *)(this + 0xb8) = 0;
  }
  *(PUDynamicAttribute **)(this + 0xb8) = param_1;
                    /* try { // try from 00e2f8cc to 00f2fc03 has its CatchHandler @ 00e2f8cc
                       catch() { ... } // from try @ 00e2f8cc with catch @ 00e2f8cc
                       catch() { ... } // from try @ 00e2fc0c with catch @ 00e2f8cc
                       catch() { ... } // from try @ 00e2fcf8 with catch @ 00e2f8cc
                       catch() { ... } // from try @ 00e2fdc8 with catch @ 00e2f8cc
                       catch() { ... } // from try @ 00e2fe0c with catch @ 00e2f8cc
                       catch() { ... } // from try @ 00e2fe5c with catch @ 00e2f8cc
                       catch() { ... } // from try @ 00e2fea0 with catch @ 00e2f8cc
                       catch() { ... } // from try @ 00e2fedc with catch @ 00e2f8cc
                       catch() { ... } // from try @ 00e2ff34 with catch @ 00e2f8cc
                       catch() { ... } // from try @ 00e2ff7c with catch @ 00e2f8cc
                       catch() { ... } // from try @ 00e2ffc4 with catch @ 00e2f8cc
                       catch() { ... } // from try @ 00e30000 with catch @ 00e2f8cc
                       catch() { ... } // from try @ 00e3003c with catch @ 00e2f8cc
                       catch() { ... } // from try @ 00e30078 with catch @ 00e2f8cc
                       catch() { ... } // from try @ 00e300b8 with catch @ 00e2f8cc
                       catch() { ... } // from try @ 00e30138 with catch @ 00e2f8cc */
  return;
}

