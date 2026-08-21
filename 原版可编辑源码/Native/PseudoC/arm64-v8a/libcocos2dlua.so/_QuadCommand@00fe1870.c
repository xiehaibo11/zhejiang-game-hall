
/* cocos2d::QuadCommand::~QuadCommand() */

void __thiscall cocos2d::QuadCommand::~QuadCommand(QuadCommand *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
                    /* catch() { ... } // from try @ 00fe18bc with catch @ 00fe1884 */
  puVar2 = *(undefined8 **)(this + 0x90);
  puVar1 = *(undefined8 **)(this + 0x98);
  *(undefined ***)this = &PTR__QuadCommand_01724208;
  if (puVar2 != puVar1) {
    do {
      if ((void *)*puVar2 != (void *)0x0) {
        operator_delete__((void *)*puVar2);
        *puVar2 = 0;
      }
      puVar2 = puVar2 + 1;
    } while (puVar1 != puVar2);
    puVar2 = *(undefined8 **)(this + 0x90);
  }
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x98) = puVar2;
    operator_delete(puVar2);
  }
                    /* try { // try from 00fe18b4 to 010e18bb has its CatchHandler @ 00fe1944 */
                    /* try { // try from 00fe18bc to 010e195f has its CatchHandler @ 00fe1884 */
  TrianglesCommand::~TrianglesCommand((TrianglesCommand *)this);
  return;
}

