
/* cocos2d::PULineAffector::setMaxDeviation(float) */

void __thiscall cocos2d::PULineAffector::setMaxDeviation(PULineAffector *this,float param_1)

{
                    /* catch() { ... } // from try @ 00e28f54 with catch @ 00e29394 */
                    /* catch() { ... } // from try @ 00e28f10 with catch @ 00e29398
                       catch() { ... } // from try @ 00e29040 with catch @ 00e29398 */
                    /* catch() { ... } // from try @ 00e28d4c with catch @ 00e2939c */
                    /* catch() { ... } // from try @ 00e28cc0 with catch @ 00e293a0 */
                    /* catch() { ... } // from try @ 00e28c6c with catch @ 00e293a4 */
                    /* catch() { ... } // from try @ 00e28b58 with catch @ 00e293a8 */
  *(float *)(this + 0xac) = param_1;
  *(float *)(this + 0xb0) =
       SQRT(*(float *)(this + 0x40) * *(float *)(this + 0x40) +
            *(float *)(this + 0x44) * *(float *)(this + 0x44) +
            *(float *)(this + 0x48) * *(float *)(this + 0x48)) * param_1;
                    /* catch() { ... } // from try @ 00e28e08 with catch @ 00e293ac */
  return;
}

