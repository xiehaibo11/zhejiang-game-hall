
/* cocos2d::Material::~Material() */

void __thiscall cocos2d::Material::~Material(Material *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined ***)this = &PTR__Material_01724038;
                    /* catch() { ... } // from try @ 00fdfe34 with catch @ 00fdfdfc */
  puVar1 = *(undefined8 **)(this + 0x78);
  puVar2 = *(undefined8 **)(this + 0x80);
  if (puVar1 != puVar2) {
    do {
      Ref::release((Ref *)*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar2 != puVar1);
    puVar1 = *(undefined8 **)(this + 0x78);
  }
  *(undefined8 **)(this + 0x80) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 00fdfe2c to 010dfe33 has its CatchHandler @ 00fdfea0 */
    *(undefined8 **)(this + 0x80) = puVar1;
                    /* try { // try from 00fdfe34 to 010dfebb has its CatchHandler @ 00fdfdfc */
    operator_delete(puVar1);
  }
  if (((byte)this[0x60] & 1) != 0) {
    operator_delete(*(void **)(this + 0x70));
  }
  RenderState::~RenderState((RenderState *)this);
  return;
}

