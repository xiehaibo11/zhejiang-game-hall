
/* cocos2d::PULineAffector::setDrift(float) */

void __thiscall cocos2d::PULineAffector::setDrift(PULineAffector *this,float param_1)

{
  *(float *)(this + 200) = param_1;
  *(float *)(this + 0xcc) = 1.0 - param_1;
                    /* catch() { ... } // from try @ 00e28d78 with catch @ 00e293f0 */
  return;
}

