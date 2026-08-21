
/* tinyxml2::XMLAttribute::~XMLAttribute() */

void __thiscall tinyxml2::XMLAttribute::~XMLAttribute(XMLAttribute *this)

{
                    /* catch() { ... } // from try @ 01027570 with catch @ 01027618 */
  *(undefined ***)this = &PTR__XMLAttribute_017278f8;
  if ((((byte)this[0x21] >> 1 & 1) != 0) && (*(void **)(this + 0x28) != (void *)0x0)) {
                    /* catch() { ... } // from try @ 010275a8 with catch @ 01027634 */
    operator_delete__(*(void **)(this + 0x28));
  }
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  if ((((byte)this[9] >> 1 & 1) != 0) && (*(void **)(this + 0x10) != (void *)0x0)) {
    operator_delete__(*(void **)(this + 0x10));
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}

