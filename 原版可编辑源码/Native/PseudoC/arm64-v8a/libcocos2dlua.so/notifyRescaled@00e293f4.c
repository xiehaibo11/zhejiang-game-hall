
/* cocos2d::PULineAffector::notifyRescaled(cocos2d::Vec3 const&) */

void __thiscall cocos2d::PULineAffector::notifyRescaled(PULineAffector *this,Vec3 *param_1)

{
                    /* catch() { ... } // from try @ 00e28e4c with catch @ 00e293f8 */
                    /* catch() { ... } // from try @ 00e28e54 with catch @ 00e29408
                       catch() { ... } // from try @ 00e28ecc with catch @ 00e29408 */
  *(float *)(this + 0xb0) =
       *(float *)(this + 0xac) *
       SQRT(*(float *)param_1 * *(float *)param_1 +
            *(float *)(param_1 + 4) * *(float *)(param_1 + 4) +
            *(float *)(param_1 + 8) * *(float *)(param_1 + 8));
  return;
}

