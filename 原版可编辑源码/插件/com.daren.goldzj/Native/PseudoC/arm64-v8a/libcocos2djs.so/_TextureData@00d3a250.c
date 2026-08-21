
/* dragonBones::TextureData::~TextureData() */

void __thiscall dragonBones::TextureData::~TextureData(TextureData *this)

{
  *(undefined ***)this = &PTR___cxa_pure_virtual_01c91120;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  BaseObject::~BaseObject((BaseObject *)this);
  return;
}

