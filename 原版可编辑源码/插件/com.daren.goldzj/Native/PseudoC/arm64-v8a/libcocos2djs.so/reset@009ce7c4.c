
/* cocos2d::renderer::CustomAssembler::reset() */

void __thiscall cocos2d::renderer::CustomAssembler::reset(CustomAssembler *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
                    /* catch() { ... } // from try @ 009ce450 with catch @ 009ce7c4
                       catch() { ... } // from try @ 009ce674 with catch @ 009ce7c4 */
  puVar1 = *(undefined8 **)(this + 0x38);
  *(undefined8 *)(this + 0x68) = 0;
  if (puVar1 != *(undefined8 **)(this + 0x40)) {
    do {
      puVar2 = puVar1 + 1;
      InputAssembler::clear((InputAssembler *)*puVar1);
      puVar1 = puVar2;
    } while (puVar2 != *(undefined8 **)(this + 0x40));
  }
  return;
}

