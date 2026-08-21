
/* cocos2d::renderer::CustomAssembler::clearEffect() */

void __thiscall cocos2d::renderer::CustomAssembler::clearEffect(CustomAssembler *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
                    /* try { // try from 009ceaa0 to 00aceaaf has its CatchHandler @ 009cec3c */
  puVar2 = *(undefined8 **)(this + 0x50);
  if (puVar2 != *(undefined8 **)(this + 0x58)) {
    do {
      puVar1 = puVar2 + 1;
                    /* try { // try from 009ceabc to 00aceac3 has its CatchHandler @ 009cec5c */
      Ref::release((Ref *)*puVar2);
      puVar2 = puVar1;
    } while (puVar1 != *(undefined8 **)(this + 0x58));
                    /* try { // try from 009ceacc to 00aceadb has its CatchHandler @ 009cec38 */
    puVar2 = *(undefined8 **)(this + 0x50);
  }
  *(undefined8 **)(this + 0x58) = puVar2;
                    /* try { // try from 009ceadc to 00aceaeb has its CatchHandler @ 009cec34 */
  return;
}

