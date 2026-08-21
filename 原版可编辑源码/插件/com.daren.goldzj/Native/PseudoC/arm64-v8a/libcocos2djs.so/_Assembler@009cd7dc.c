
/* cocos2d::renderer::Assembler::~Assembler() */

void __thiscall cocos2d::renderer::Assembler::~Assembler(Assembler *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
                    /* try { // try from 009cd7e4 to 00acd83b has its CatchHandler @ 009cd7e4
                       catch() { ... } // from try @ 009cd7e4 with catch @ 009cd7e4
                       catch() { ... } // from try @ 009cda88 with catch @ 009cd7e4 */
  *(undefined ***)this = &PTR__Assembler_01c6b4f0;
  if (*(Ref **)(this + 0x38) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x38));
    *(undefined8 *)(this + 0x38) = 0;
  }
  if (*(Ref **)(this + 0x70) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x70));
  }
  puVar2 = *(undefined8 **)(this + 0x40);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(this + 0x48);
    puVar1 = puVar2;
    if (puVar3 != puVar2) {
      do {
        puVar3 = puVar3 + -4;
        if ((Ref *)*puVar3 != (Ref *)0x0) {
          Ref::release((Ref *)*puVar3);
        }
                    /* try { // try from 009cd83c to 00acd853 has its CatchHandler @ 009cdaa4 */
      } while (puVar2 != puVar3);
      puVar1 = *(undefined8 **)(this + 0x40);
    }
    *(undefined8 **)(this + 0x48) = puVar2;
    operator_delete(puVar1);
  }
                    /* try { // try from 009cd85c to 00acd867 has its CatchHandler @ 009cdaa0 */
                    /* try { // try from 009cd868 to 00acd873 has its CatchHandler @ 009cda9c */
  AssemblerBase::~AssemblerBase((AssemblerBase *)this);
  return;
}

