
/* cocos2d::ui::EditBoxImplCommon::~EditBoxImplCommon() */

void __thiscall cocos2d::ui::EditBoxImplCommon::~EditBoxImplCommon(EditBoxImplCommon *this)

{
  EditBoxImplCommon EVar1;
  
                    /* try { // try from 00dee4d4 to 00eee627 has its CatchHandler @ 00dee100 */
  *(undefined ***)this = &PTR__EditBoxImplCommon_016e62f8;
  if (((byte)this[0x80] & 1) == 0) {
    EVar1 = this[0x68];
  }
  else {
    operator_delete(*(void **)(this + 0x90));
    EVar1 = this[0x68];
  }
  if (((byte)EVar1 & 1) == 0) {
    EVar1 = this[0x50];
  }
  else {
    operator_delete(*(void **)(this + 0x78));
    EVar1 = this[0x50];
  }
  if (((byte)EVar1 & 1) == 0) {
    EVar1 = this[0x38];
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dee4b4 with catch @ 00dee540
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dee144 with catch @ 00dee544
                        */
    operator_delete(*(void **)(this + 0x60));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dee3a0 with catch @ 00dee548
                        */
    EVar1 = this[0x38];
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dee380 with catch @ 00dee54c
                        */
  if (((byte)EVar1 & 1) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dee34c with catch @ 00dee550
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dee32c with catch @ 00dee554
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dee2f8 with catch @ 00dee558
                        */
    operator_delete(*(void **)(this + 0x48));
    return;
  }
  return;
}

