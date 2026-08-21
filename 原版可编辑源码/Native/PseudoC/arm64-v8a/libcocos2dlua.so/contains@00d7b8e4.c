
/* dragonBones::WorldClock::contains(dragonBones::IAnimatable const*) const */

bool __thiscall dragonBones::WorldClock::contains(WorldClock *this,IAnimatable *param_1)

{
  WorldClock *pWVar1;
  
  if (this == (WorldClock *)param_1) {
                    /* catch() { ... } // from try @ 00d7a260 with catch @ 00d7b934
                       catch() { ... } // from try @ 00d7a9f8 with catch @ 00d7b934
                       catch() { ... } // from try @ 00d7b10c with catch @ 00d7b934 */
                    /* catch() { ... } // from try @ 00d7a848 with catch @ 00d7b938 */
    return false;
  }
                    /* catch() { ... } // from try @ 00d7a7d8 with catch @ 00d7b8f4 */
                    /* catch() { ... } // from try @ 00d7a678 with catch @ 00d7b8f8 */
                    /* catch() { ... } // from try @ 00d7a518 with catch @ 00d7b8fc */
  pWVar1 = (WorldClock *)0x0;
  if (param_1 != (IAnimatable *)0x0) {
    do {
                    /* catch() { ... } // from try @ 00d7a3b8 with catch @ 00d7b900 */
                    /* catch() { ... } // from try @ 00d7a258 with catch @ 00d7b904 */
                    /* catch() { ... } // from try @ 00d7a7e0 with catch @ 00d7b908
                       catch() { ... } // from try @ 00d7af88 with catch @ 00d7b908
                       catch() { ... } // from try @ 00d7b29c with catch @ 00d7b908 */
      pWVar1 = (WorldClock *)(**(code **)(*(long *)param_1 + 0x18))(param_1);
      if (pWVar1 == (WorldClock *)0x0) break;
      param_1 = (IAnimatable *)pWVar1;
    } while (pWVar1 != this);
  }
                    /* catch() { ... } // from try @ 00d7a680 with catch @ 00d7b928
                       catch() { ... } // from try @ 00d7ae24 with catch @ 00d7b928
                       catch() { ... } // from try @ 00d7b200 with catch @ 00d7b928 */
                    /* catch() { ... } // from try @ 00d7a520 with catch @ 00d7b92c
                       catch() { ... } // from try @ 00d7acc0 with catch @ 00d7b92c
                       catch() { ... } // from try @ 00d7b164 with catch @ 00d7b92c */
                    /* catch() { ... } // from try @ 00d7a3c0 with catch @ 00d7b930
                       catch() { ... } // from try @ 00d7ab5c with catch @ 00d7b930
                       catch() { ... } // from try @ 00d7b138 with catch @ 00d7b930 */
  return pWVar1 == this;
}

