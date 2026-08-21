
/* dragonBones::TextureData::~TextureData() */

void __thiscall dragonBones::TextureData::~TextureData(TextureData *this)

{
                    /* catch() { ... } // from try @ 00da6840 with catch @ 00da68a8 */
  *(undefined ***)this = &PTR___cxa_pure_virtual_016d85e0;
  if (((byte)this[0x10] & 1) == 0) {
    return;
  }
                    /* catch() { ... } // from try @ 00da68f0 with catch @ 00da68c4 */
  operator_delete(*(void **)(this + 0x20));
  return;
}

