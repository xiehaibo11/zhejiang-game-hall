
/* cocos2d::Physics3DShape::~Physics3DShape() */

void __thiscall cocos2d::Physics3DShape::~Physics3DShape(Physics3DShape *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
                    /* try { // try from 0101740c to 01117417 has its CatchHandler @ 01017460 */
                    /* try { // try from 01017418 to 0111748f has its CatchHandler @ 010171dc */
  *(undefined ***)this = &PTR__Physics3DShape_01726930;
  if (*(long **)(this + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x28) + 8))();
  }
  *(undefined8 *)(this + 0x28) = 0;
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x30));
    *(undefined8 *)(this + 0x30) = 0;
  }
  puVar1 = *(undefined8 **)(this + 0x38);
  puVar2 = *(undefined8 **)(this + 0x40);
  if (puVar1 == puVar2) {
    *(undefined8 **)(this + 0x40) = puVar1;
                    /* catch() { ... } // from try @ 0101740c with catch @ 01017460 */
  }
  else {
    do {
                    /* try { // try from 01017490 to 011174ab has its CatchHandler @ 01017490
                       catch() { ... } // from try @ 01017490 with catch @ 01017490
                       catch() { ... } // from try @ 010174b0 with catch @ 01017490 */
      if ((Ref *)*puVar1 != (Ref *)0x0) {
        Ref::release((Ref *)*puVar1);
      }
      puVar1 = puVar1 + 1;
    } while (puVar2 != puVar1);
    puVar1 = *(undefined8 **)(this + 0x38);
    *(undefined8 **)(this + 0x40) = puVar1;
  }
  if (puVar1 != (undefined8 *)0x0) {
                    /* catch() { ... } // from try @ 010173dc with catch @ 01017464 */
                    /* catch() { ... } // from try @ 010173ac with catch @ 01017468 */
    *(undefined8 **)(this + 0x40) = puVar1;
                    /* catch() { ... } // from try @ 0101737c with catch @ 0101746c */
    operator_delete(puVar1);
  }
                    /* catch() { ... } // from try @ 0101734c with catch @ 01017470 */
                    /* catch() { ... } // from try @ 01017304 with catch @ 01017474 */
  Ref::~Ref((Ref *)this);
  return;
}

